## 动态规划

> 英文名：Dynamic Programing  
> 是一种分阶段求解决策问题的数学思想  
> 动态规划算法通常基于一个递推公式及一个或多个初始状态。  
> 当前子问题的解将由上一次子问题的解推出。  
> 使用动态规划来解决问题只需要多项式时间复杂度，因此它比回溯法、暴力法要快很多。

### 动态规划解题步骤

- 问题抽象化
- 建立模型
- 寻找约束条件
- 判断是否满足最优性原理
- 寻找大问题与小问题的递推关系式
- 填表
- 寻找解组成

### 原理
> 动态规划与分治法类似，都是把大问题拆分成小问题，通过寻找大问题与小问题的递推关系，解决一个个小问题，最终达到解决原问题的效果。但不同的是，分治法在子问题和子子问题等上被重复计算了很多次，而动态规划具有记忆性，通过填写表把所有已经解决的子问题答案记录下来，在新问题里需要用到的子问题可以直接提取，避免了重复计算，从而节约了时间，所以在问题满足最优性原理之后，用动态规划解决问题和核心就在于填表，表填写完毕，最优解也找到了。

