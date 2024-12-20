std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i < vec.size(); ++i) {
  std::cout << vec[i] << " ";
}
//This corrected code uses the condition i < vec.size() to avoid out-of-bounds access.