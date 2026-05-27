# 基础语法测试
print(" Python 环境正常运行！")
print(f"当前Python版本: {__import__('sys').version}")

# 函数和循环测试
def fibonacci(n):
    a, b = 0, 1
    for _ in range(n):
        yield a
        a, b = b, a + b

print("\n斐波那契数列前10项:")
for num in fibonacci(10):
    print(num, end=" ")

# 列表推导式和字典测试
squares = [x**2 for x in range(1, 6)]
print(f"\n\n1-5的平方: {squares}")

person = {"name": "Arch Linux", "version": "滚动更新", "package_manager": "pacman"}
print(f"系统信息: {person['name']} - {person['version']}")