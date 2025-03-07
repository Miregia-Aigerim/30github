class Solution {
public:
    int maxArea(vector<int>& height) {
         int max_area = 0;
  int left = 0;
  int right = height.size() - 1;

  while (left < right) {
    // Вычисляем текущую площадь
    int current_area = min(height[left], height[right]) * (right - left);

    // Обновляем максимальную площадь, если текущая больше
    max_area = max(max_area, current_area);

    // Перемещаем указатель с меньшей высотой к центру
    if (height[left] < height[right]) {
      left++;
    } else {
      right--;
    }
  }

  return max_area;
    }
};