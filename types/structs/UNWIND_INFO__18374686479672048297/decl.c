struct UNWIND_INFO
{
unsigned __int8 version : 3;
unsigned __int8 flags : 5;
BYTE prolog;
BYTE count;
unsigned __int8 frame_reg : 4;
unsigned __int8 frame_offset : 4;
opcode opcodes[1];
};
