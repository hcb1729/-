import numpy as np

print(" NumPy 库导入成功！")
print(f"NumPy版本: {np.__version__}")

# 矩阵运算测试
a = np.array([[1, 2], [3, 4]])
b = np.array([[5, 6], [7, 8]])
print("\n矩阵乘法结果:")
print(np.dot(a, b))