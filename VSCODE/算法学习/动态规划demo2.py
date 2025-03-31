def length_of_LIS(nums):
    n = len(nums)  # 5
    L = [1] * n  # initial value: [1,1,1,1,1]

    for i in reversed(range(n)):  # i -> 4,3,2,1,0
        for j in range(i + 1, n):
            if nums[j] > nums[i]:
                L[i] = max(L[i], L[j] + 1)

    return max(L)

nums = [1,4,5,63,13,64,34,14,15,123,62,4,75,35,1,24,15,76,24]
print(length_of_LIS(nums))