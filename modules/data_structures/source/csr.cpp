// Copyright [year] <Copyright Owner>
#include <vector>
#include <utility>
#include <string>
#include <fstream>
#include <iostream>
#include "../include/graph.h"
#include "../include/csr.h"
#include "../include/adjacency_list.h"
#include "../include/jds.h"

CSR::CSR(const AL& al, ...) {
    n = al.n;
    offset.push_back(0);
    for (unsigned i = 0; i < al.edges.size(); ++i) {
        for (unsigned j = 0; j < al.edges[i].size(); ++j) {
            edges.emplace_back(al.edges[i][j]);
        }
        offset.push_back(edges.size());
    }
    offset.push_back(edges.size());
}

CSR::CSR(const JDS& jds, ...) {
    n = jds.n;
    offset.push_back(0);
    std::vector <std::pair <int, int>> neighbours;
    for (int i = 0; i < n; ++i) {
        neighbours.clear();
        jds.get_neighbours(&neighbours, i, i);
        for (auto& y : neighbours)
            edges.push_back(y);
        offset.push_back(edges.size());
    }
    offset.push_back(edges.size());
}

bool CSR::get_neighbours(std::vector <std::pair <int, int>>* neighbours,
    int vertex, int anc) const {
    for (int i = offset[vertex]; i < offset[vertex+1]; ++i)
        neighbours->emplace_back(edges[i]);
    return true;
}

bool CSR::read(const std::string& path) {
    std::ifstream in(path, std::ios::binary);
    if (!in.is_open())
        return false;
    in.read(reinterpret_cast<char*>(&n), sizeof(int));
    int sz = 0;
    in.read(reinterpret_cast<char*>(&sz), sizeof(int));
    edges.resize(sz);
    for (int i = 0; i < sz; ++i) {
        in.read(reinterpret_cast<char*>(&edges[i].first), sizeof(int));
        in.read(reinterpret_cast<char*>(&edges[i].second), sizeof(int));
    }
    in.read(reinterpret_cast<char*>(&sz), sizeof(int));
    offset.resize(sz);
    for (int i = 0; i < sz; ++i)
        in.read(reinterpret_cast<char*>(&offset[i]), sizeof(int));
    return true;
}

bool CSR::write(const std::string& path) {
    std::ofstream out(path, std::ios::binary);
    if (!out.is_open())
        return false;
    out.write(reinterpret_cast<char*>(&n), sizeof(int));
    int sz = edges.size();
    out.write(reinterpret_cast<char*>(&sz), sizeof(int));
    for (auto y : edges) {
        out.write(reinterpret_cast<char*>(&y.first), sizeof(int));
        out.write(reinterpret_cast<char*>(&y.second), sizeof(int));
    }
    sz = offset.size();
    out.write(reinterpret_cast<char*>(&sz), sizeof(int));
    for (auto y : offset)
        out.write(reinterpret_cast<char*>(&y), sizeof(int));
    out.close();
    return true;
}
