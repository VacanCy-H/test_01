meno = {} #用哈希表来储存计算过的长度，
          #用空间换时间->动态规划思想

def L(nums, i):
   '''返回列表中从i开始最长的递增序列'''

   if i in meno:
      return meno[i]

   if i == len(nums) - 1:
      return 1

   max_len = 1
   for j in range(i + 1, len(nums)):
      if nums[j] > nums[i]:
         max_len = max(max_len, L(nums, j) + 1)
    
   meno[i] = max_len
   return max_len

def length_of_LIS(nums):
   return max(L(nums, i) for i in range(len(nums))) 

nums = [1,4,5,63,13,64,34,14,15,123,62,4,75,35,1,24,15,76,24]
print(length_of_LIS(nums))