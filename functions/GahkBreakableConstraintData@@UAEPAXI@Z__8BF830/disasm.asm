0x8BF830: push    esi
0x8BF831: mov     esi, ecx
0x8BF833: call    ??1ahkBreakableConstraintData@@UAE@XZ; ahkBreakableConstraintData::~ahkBreakableConstraintData(void)
0x8BF838: test    byte ptr [esp+4+arg_0], 1
0x8BF83D: jz      short loc_8BF854
0x8BF83F: movzx   edx, word ptr [esi+4]
0x8BF843: mov     ecx, ds:0BA7D98h
0x8BF849: mov     eax, [ecx]
0x8BF84B: mov     eax, [eax+14h]
0x8BF84E: push    29h ; ')'
0x8BF850: push    edx
0x8BF851: push    esi
0x8BF852: call    eax
0x8BF854: mov     eax, esi
0x8BF856: pop     esi
0x8BF857: retn    4
