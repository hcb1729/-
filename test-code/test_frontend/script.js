console.log("JavaScript 运行正常！");

// DOM操作测试
const btn = document.getElementById('btn');
const output = document.getElementById('output');
let count = 0;

btn.addEventListener('click', () => {
    count++;
    output.textContent = `你点击了 ${count} 次按钮`;
});

// 数组和函数测试
const fruits = ['苹果', '香蕉', '橙子', '葡萄'];
console.log("水果列表:");
fruits.forEach((fruit, index) => {
    console.log(`${index + 1}. ${fruit}`);
});