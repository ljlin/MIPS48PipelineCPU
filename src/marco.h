`define op    31:26
`define funct 5:0

`define rs 25:21
`define rt 20:16
`define rd 15:11
`define sa 10:6

`define i32  31:0
`define i26  25:0
`define i16  15:0
`define i5   4:0

`define HIHALF 31:16
`define LOHALF 15:0
`define HIBYTE 31:8
`define LOBYTE  7:0


`define BYTE3  31:24
`define BYTE2  23:16
`define BYTE1  15:8
`define BYTE0   7:0


// 32bit data 0x11223344

// addr data   low addr
// xx0  44         | 
// xx1  33         |
// xx2  22         |
// xx3  11     high addr

