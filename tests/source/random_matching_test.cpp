// Copyright [year] <Copyright Owner>
#include <gtest/gtest.h>
#include "../../modules/pch/include/precomp.h"

#ifdef __linux__

TEST(random_matching_fixed_test, basic_washington_test_csr) {
    CSR<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10);
    Matching expected;
    expected.edge_b = {0, 2, 5, 7};
    expected.edge_e = {1, 4, 6, 8};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_washington_test_al) {
    AL<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10);
    Matching expected;
    expected.edge_b = {0, 2, 5, 7};
    expected.edge_e = {1, 4, 6, 8};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_csr) {
    CSR<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10);
    Matching expected;
    expected.edge_b = {1, 2, 4, 5, 8, 3};
    expected.edge_e = {6, 7, 10, 9, 12, 11};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_al) {
    AL<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10);
    Matching expected;
    expected.edge_b = {1, 2, 4, 5, 8, 3};
    expected.edge_e = {6, 7, 10, 9, 12, 11};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_csr) {
    CSR<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 20);
    Matching expected;
    expected.edge_b = {0, 4, 5, 7};
    expected.edge_e = {2, 6, 1, 3};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_al) {
    AL<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 20);
    Matching expected;
    expected.edge_b = {0, 4, 5, 7};
    expected.edge_e = {2, 6, 1, 3};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_washington_test_csr_2) {
    AL<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 59);
    Matching expected;
    expected.edge_b = {0, 2, 3, 6};
    expected.edge_e = {1, 4, 5, 7};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_washington_test_al_2) {
    AL<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 59);
    Matching expected;
    expected.edge_b = {0, 2, 3, 6};
    expected.edge_e = {1, 4, 5, 7};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_csr_2) {
    CSR<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 7893);
    Matching expected;
    expected.edge_b = {2, 4, 6, 8, 3};
    expected.edge_e = {9, 10, 7, 5, 11};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_al_2) {
    AL<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 7893);
    Matching expected;
    expected.edge_b = {2, 4, 6, 8, 3};
    expected.edge_e = {9, 10, 7, 5, 11};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_csr_2) {
    CSR<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 7893);
    Matching expected;
    expected.edge_b = {0, 4, 7, 1};
    expected.edge_e = {2, 6, 5, 3};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_al_2) {
    AL<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 7893);
    Matching expected;
    expected.edge_b = {0, 4, 7, 1};
    expected.edge_e = {2, 6, 5, 3};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_washington_test_csr_3) {
    AL<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 2354);
    Matching expected;
    expected.edge_b = {1, 4, 7, 3};
    expected.edge_e = {2, 6, 8, 5};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_washington_test_al_3) {
    AL<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 2354);
    Matching expected;
    expected.edge_b = {1, 4, 7, 3};
    expected.edge_e = {2, 6, 8, 5};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_csr_3) {
    CSR<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 1364);
    Matching expected;
    expected.edge_b = {1, 2, 4, 5, 6, 10};
    expected.edge_e = {3, 7, 11, 9, 8, 12};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_al_3) {
    AL<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 1364);
    Matching expected;
    expected.edge_b = {1, 2, 4, 5, 6, 10};
    expected.edge_e = {3, 7, 11, 9, 8, 12};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_csr_3) {
    CSR<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 8767);
    Matching expected;
    expected.edge_b = {1, 5, 7, 0};
    expected.edge_e = {3, 4, 6, 2};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_al_3) {
    AL<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 8767);
    Matching expected;
    expected.edge_b = {1, 5, 7, 0};
    expected.edge_e = {3, 4, 6, 2};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_washington_test_csr_4) {
    AL<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10001);
    Matching expected;
    expected.edge_b = {0, 2, 3, 6};
    expected.edge_e = {1, 4, 5, 7};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_washington_test_al_4) {
    AL<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10001);
    Matching expected;
    expected.edge_b = {0, 2, 3, 6};
    expected.edge_e = {1, 4, 5, 7};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_csr_4) {
    CSR<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10002);
    Matching expected;
    expected.edge_b = {1, 3, 7, 10, 2, 8};
    expected.edge_e = {5, 11, 4, 6, 9, 12};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_al_4) {
    AL<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10002);
    Matching expected;
    expected.edge_b = {1, 3, 7, 10, 2, 8};
    expected.edge_e = {5, 11, 4, 6, 9, 12};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_csr_4) {
    CSR<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10003);
    Matching expected;
    expected.edge_b = {0, 2, 3, 4};
    expected.edge_e = {1, 6, 7, 5};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_al_4) {
    AL<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10003);
    Matching expected;
    expected.edge_b = {0, 2, 3, 4};
    expected.edge_e = {1, 6, 7, 5};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_washington_test_csr_5) {
    AL<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 1010);
    Matching expected;
    expected.edge_b = {1, 4, 3, 7};
    expected.edge_e = {2, 6, 5, 8};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_washington_test_al_5) {
    AL<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 1010);
    Matching expected;
    expected.edge_b = {1, 4, 3, 7};
    expected.edge_e = {2, 6, 5, 8};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_csr_5) {
    CSR<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 1011);
    Matching expected;
    expected.edge_b = {2, 3, 5, 6, 11, 1};
    expected.edge_e = {10, 7, 9, 8, 12, 4};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_al_5) {
    AL<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 1011);
    Matching expected;
    expected.edge_b = {2, 3, 5, 6, 11, 1};
    expected.edge_e = {10, 7, 9, 8, 12, 4};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_csr_5) {
    CSR<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 1012);
    Matching expected;
    expected.edge_b = {7, 0, 1, 4};
    expected.edge_e = {3, 2, 5, 6};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_al_5) {
    AL<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 1012);
    Matching expected;
    expected.edge_b = {7, 0, 1, 4};
    expected.edge_e = {3, 2, 5, 6};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

#endif  // __linux__

#ifdef _WIN32

TEST(random_matching_fixed_test, basic_washington_test_csr) {
    CSR<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10);
    Matching expected;
    expected.edge_b = {0, 7, 2, 3};
    expected.edge_e = {1, 8, 4, 5};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_washington_test_al) {
    AL<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10);
    Matching expected;
    expected.edge_b = {0, 7, 2, 3};
    expected.edge_e = {1, 8, 4, 5};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_csr) {
    CSR<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10);
    Matching expected;
    expected.edge_b = {7, 6, 1, 2, 11, 4};
    expected.edge_e = {5, 8, 3, 9, 12, 10};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_al) {
    AL<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10);
    Matching expected;
    expected.edge_b = {7, 6, 1, 2, 11, 4};
    expected.edge_e = {5, 8, 3, 9, 12, 10};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_csr) {
    CSR<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 20);
    Matching expected;
    expected.edge_b = {0, 4, 2, 7};
    expected.edge_e = {1, 5, 6, 3};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_al) {
    AL<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 20);
    Matching expected;
    expected.edge_b = {0, 4, 2, 7};
    expected.edge_e = {1, 5, 6, 3};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_washington_test_csr_2) {
    AL<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 59);
    Matching expected;
    expected.edge_b = {0, 7, 2, 3};
    expected.edge_e = {1, 8, 4, 5};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_washington_test_al_2) {
    AL<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 59);
    Matching expected;
    expected.edge_b = {0, 7, 2, 3};
    expected.edge_e = {1, 8, 4, 5};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_csr_2) {
    CSR<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 7893);
    Matching expected;
    expected.edge_b = {1, 4, 10, 6, 2, 11};
    expected.edge_e = {5, 8, 3, 7, 9, 12};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_al_2) {
    AL<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 7893);
    Matching expected;
    expected.edge_b = {1, 4, 10, 6, 2, 11};
    expected.edge_e = {5, 8, 3, 7, 9, 12};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_csr_2) {
    CSR<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 7893);
    Matching expected;
    expected.edge_b = {0, 4, 3};
    expected.edge_e = {1, 6, 7};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_al_2) {
    AL<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 7893);
    Matching expected;
    expected.edge_b = {0, 4, 3};
    expected.edge_e = {1, 6, 7};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_washington_test_csr_3) {
    AL<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 2354);
    Matching expected;
    expected.edge_b = {5, 0, 2, 7};
    expected.edge_e = {6, 1, 4, 8};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_washington_test_al_3) {
    AL<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 2354);
    Matching expected;
    expected.edge_b = {5, 0, 2, 7};
    expected.edge_e = {6, 1, 4, 8};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_csr_3) {
    CSR<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 1364);
    Matching expected;
    expected.edge_b = {3, 9, 1, 5, 4};
    expected.edge_e = {10, 12, 6, 8, 7};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_al_3) {
    AL<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 1364);
    Matching expected;
    expected.edge_b = {3, 9, 1, 5, 4};
    expected.edge_e = {10, 12, 6, 8, 7};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_csr_3) {
    CSR<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 8767);
    Matching expected;
    expected.edge_b = {2, 1, 0, 3};
    expected.edge_e = {6, 5, 4, 7};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_al_3) {
    AL<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 8767);
    Matching expected;
    expected.edge_b = {2, 1, 0, 3};
    expected.edge_e = {6, 5, 4, 7};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_washington_test_csr_4) {
    AL<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10001);
    Matching expected;
    expected.edge_b = {4, 7, 0, 3};
    expected.edge_e = {6, 8, 1, 5};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_washington_test_al_4) {
    AL<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10001);
    Matching expected;
    expected.edge_b = {4, 7, 0, 3};
    expected.edge_e = {6, 8, 1, 5};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_csr_4) {
    CSR<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10002);
    Matching expected;
    expected.edge_b = {11, 1, 2, 8, 4, 7};
    expected.edge_e = {12, 3, 9, 5, 10, 6};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_al_4) {
    AL<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10002);
    Matching expected;
    expected.edge_b = {11, 1, 2, 8, 4, 7};
    expected.edge_e = {12, 3, 9, 5, 10, 6};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_csr_4) {
    CSR<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10003);
    Matching expected;
    expected.edge_b = {4, 1, 2, 7};
    expected.edge_e = {6, 3, 0, 5};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_al_4) {
    AL<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 10003);
    Matching expected;
    expected.edge_b = {4, 1, 2, 7};
    expected.edge_e = {6, 3, 0, 5};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_washington_test_csr_5) {
    AL<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 1010);
    Matching expected;
    expected.edge_b = {5, 0, 7, 2};
    expected.edge_e = {6, 1, 8, 4};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_washington_test_al_5) {
    AL<int> graph = washington_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 1010);
    Matching expected;
    expected.edge_b = {5, 0, 7, 2};
    expected.edge_e = {6, 1, 8, 4};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_csr_5) {
    CSR<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 1011);
    Matching expected;
    expected.edge_b = {8, 9, 3, 2, 1, 11};
    expected.edge_e = {6, 5, 7, 10, 4, 12};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_zadeh_test_al_5) {
    AL<int> graph = zadeh_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 1011);
    Matching expected;
    expected.edge_b = {8, 9, 3, 2, 1, 11};
    expected.edge_e = {6, 5, 7, 10, 4, 12};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_csr_5) {
    CSR<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 1012);
    Matching expected;
    expected.edge_b = {6, 0, 2, 1};
    expected.edge_e = {7, 4, 3, 5};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

TEST(random_matching_fixed_test, basic_cube_test_al_5) {
    AL<int> graph = cube_test<int>(2);
    Matching matching = random_matching(graph, 0, graph.n, 1012);
    Matching expected;
    expected.edge_b = {6, 0, 2, 1};
    expected.edge_e = {7, 4, 3, 5};
    ASSERT_EQ(expected.edge_b, matching.edge_b);
    ASSERT_EQ(expected.edge_e, matching.edge_e);
}

#endif  // _WIN32
