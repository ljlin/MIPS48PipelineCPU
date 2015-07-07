# MIPS48PipelineCPU
冯爱民老师《计算机组成原理A》课程设计

本实验通过工程化方法，使用 verilog 实现了一个支持 MIPS 指令集中48条指令，通过转发和阻塞支持冒险的 CPU。

其中48条指令如下：LB、LBU、LH、LHU、LW、SB、SH、SW、ADD、ADDU、 SUB、SUBU、MULT、MULTU、DIV、DIVU、SLL、SRL、SRA、SLLV、 SRLV、SRAV、AND、OR、XOR、NOR、ADDI、ADDIU、ANDI、ORI、 XORI、LUI、SLT、SLTI、SLTIU、SLTU、BEQ、BNE、BLEZ、BGTZ、 BLTZ、BGEZ、J、JAL、JALR、JR、MFHI、MFLO 。

src 文件夹内是一个 Sublime Text 工程，可以通过配置 iVerilog 编译，src/ljlin_Mips48 是编译好的脚本，可以通过 vvp 执行。testbench.vcd 是仿真生成的波形文件。

**当心回路**

这是我调试时遇到的一个问题，一运行 iverilog 就提示 segment fault ，感觉是内存爆了，但是没想明白，于是开 modelsim 试试，发现可以运行，但是到70ns 就提示超过了最多的模拟次数，根据这个提示上网搜索发现可能是组合逻辑的部分出现了回路。

发现在 DECODE.v 里面有一行

```
assign LUI = IR[`op] == `LUI
```

第二个 LUI 前面少了一个点，被错写成

```
assign LUI = IR[`op] == LUI
```

第一个 LUI 是wire 变量，第二个`LUI 是宏定义，少了点就出现了环路了。跟
 Op = ！OP 
效果相似，可以试试。
