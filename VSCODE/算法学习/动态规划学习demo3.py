def total_of_LIS(nums):
    n = len(nums)
    current_max = [0] * n
    global_max = [0] * n

    for i in nums[1:]:
        current_max = max(i, current_max + i)
        global_max = max(global_max, current_max) 
    return global_max

nums = [3, -4, 2, -1, 2, 6, -5, 4]
print(total_of_LIS(nums))
                     
