std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i <= vec.size(); ++i) {
  std::cout << vec[i] << " ";
}
//This code will cause a segmentation fault or unexpected behavior because of out-of-bounds access.
//It should be i < vec.size()