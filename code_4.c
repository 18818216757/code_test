double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
  double count;
  int sum_arry[nums1Size + nums2Size];
  int i = 0, j = 0, k = 0;//分别代表数组a ,b , c 的索引
  while (i < nums1Size && j < nums2Size) {
    if (nums1[i] < nums2[j])
      sum_arry[k++] = nums1[i++];
    else
      sum_arry[k++] = nums2[j++];
  }
  while (i < nums1Size)
    sum_arry[k++] = nums1[i++];
  while (j < nums2Size)
    sum_arry[k++] = nums2[j++];
  if ((nums1Size + nums2Size) % 2) {
    return (double)sum_arry[(nums1Size + nums2Size)/2];
  } else {
    double num = (sum_arry[(nums1Size + nums2Size)/2 -1] + sum_arry[(nums1Size + nums2Size)/2]) / 2.0;
    return num;
  }
}
