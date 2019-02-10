// Copyright [year] <Copyright Owner>
#ifndef MODULES_ALGORITHMS_INCLUDE_GRAPH_COARSENING_H_
#define MODULES_ALGORITHMS_INCLUDE_GRAPH_COARSENING_H_
#include <vector>
#include <utility>
#include <map>
#include "../../pch/include/precomp.h"

template <typename WeightType>
CSR<WeightType> graph_coarsening(const CSR<WeightType>& graph,
                                    const Matching& match) {
    CSR<WeightType> g;
    std::map <int, int> Map;
    std::map <int, std::pair<int, int>> Map1;
    int sz = static_cast<int>(graph.n);
    std::vector <int> new_vertex(sz, 0);
    for (int i = 0; i < match.n; i++) {
        Map[match.edge_b[i]] = i;
        Map[match.edge_e[i]] = i;
        Map1[i] = std::make_pair(match.edge_b[i], match.edge_e[i]);
        int weight = 0;
        graph.offset[match.edge_b[i]];
        for (int j = graph.offset[match.edge_b[i]];
            j < graph.offset[match.edge_b[i] + 1]; j++) {
            if (graph.edges[j] == match.edge_e[i]) {
                weight = graph.weights[j];
                break;
            }
        }
        new_vertex[i] = weight;
    }
    int t = match.n - 1;
    for (int i = 0; i < graph.n; i++) {
        if (!Map.count(i)) {
            Map[i] = ++t;
            Map1[t] = std::make_pair(i, -1);
        }
    }
    std::vector <bool> used(t);
    g.offset.push_back(0);
    int vert_sz = 0;
    for (int i = 0; i < match.n; i++) {
        int weight = new_vertex[i];
        for (int j = graph.offset[Map1[i].first];
            j < graph.offset[Map1[i].first + 1]; j++) {
            int to = Map[graph.edges[j]];
            if (i != to) {
                g.edges.push_back(to);
                g.weights.push_back(graph.weights[j] +
                                weight + new_vertex[to]);
                vert_sz++;
            } else {
                for (int k = graph.offset[Map1[i].second];
                        k < graph.offset[Map1[i].second + 1]; k++) {
                    int to1 = Map[graph.edges[k]];
                    if (i != to1) {
                        g.edges.push_back(to1);
                        g.weights.push_back(graph.weights[k] +
                                        weight + new_vertex[to1]);
                        vert_sz++;
                    }
                }
            }
        }
        g.offset.push_back(vert_sz);
    }
    for (int i = match.n; i <= t; i++) {
        int weight = new_vertex[i];
         for (int j = graph.offset[Map1[i].first];
            j < graph.offset[Map1[i].first + 1]; j++) {
                int to = Map[graph.edges[j]];
                g.edges.push_back(to);
                g.weights.push_back(graph.weights[j] +
                                weight + new_vertex[to]);
                vert_sz++;
        }
        g.offset.push_back(vert_sz);
    }
    g.n = t + 1;
    return g;
}

#endif  // MODULES_ALGORITHMS_INCLUDE_GRAPH_COARSENING_H_
