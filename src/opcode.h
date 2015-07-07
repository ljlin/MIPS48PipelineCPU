//ld 
`define LB     'h20 // opcode
`define LBU    'h24 // opcode
`define LH     'h21 // opcode
`define LHU    'h25 // opcode
`define LW     'h23 // opcode

//st
`define SB     'h28 // opcode
`define SH     'h29 // opcode
`define SW     'h2b // opcode

//cal_r_normal
`define R_type 6'b000000 // opcode
`define ADD    'h20 // funct
`define ADDU   'h21 // funct
`define SUB    'h22 // funct
`define SUBU   'h23 // funct

//cal_r_MUL
`define MULT   'h18 // funct
`define MULTU  'h19 // funct
`define DIV    'h1a // funct
`define DIVU   'h1b // funct

//cal_r_SA
`define SLL    'h00 // funct
`define SRL    'h02 // funct
`define SRA    'h03 // funct

//cal_r_normal
`define SLLV   'h04 // funct
`define SRLV   'h06 // funct
`define SRAV   'h07 // funct
`define AND    'h24 // funct
`define OR     'h25 // funct
`define XOR    'h26 // funct
`define NOR    'h27 // funct
`define SLT    'h2a // funct
`define SLTU   'h2b // funct

//cal_i
`define ADDI   'h08 // opcode
`define ADDIU  'h09 // opcode
`define ANDI   'h0c // opcode
`define ORI    'h0d // opcode
`define XORI   'h0e // opcode
`define LUI    'h0f // opcode
`define SLTI   'h0a // opcode
`define SLTIU  'h0b // opcode

//b_type
`define BEQ    'h04 // opcode
`define BNQ    'h05 // opcode

//b_zero 
`define BLEZ   'h06 // opcode
`define BGTZ   'h07 // opcode
`define BLTZ   'h01 // BLTZ | BGEZ opcode rt = 0
`define BGEZ   'h01 // BLTZ | BGEZ opcode rt = 1

// j
`define J      'h02 // opcode
`define JAL    'h03 // opcode
`define JALR   'h09 // R_type funct
`define JR     'h08 // R_type funct

//move
`define MFHI  6'b010_000 // R_type funct
`define MFLO  6'b010_010 // R_type funct


//NPCOp
`define NPCOPB 0
`define NPCOPJ 1

