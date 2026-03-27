0x8BF160: push    esi
0x8BF161: mov     esi, ecx
0x8BF163: call    ??1ahkMalleableConstraintData@@UAE@XZ; ahkMalleableConstraintData::~ahkMalleableConstraintData(void)
0x8BF168: test    byte ptr [esp+4+arg_0], 1
0x8BF16D: jz      short loc_8BF184
0x8BF16F: movzx   edx, word ptr [esi+4]
0x8BF173: mov     ecx, ds:0BA7D98h
0x8BF179: mov     eax, [ecx]
0x8BF17B: mov     eax, [eax+14h]
0x8BF17E: push    29h ; ')'
0x8BF180: push    edx
0x8BF181: push    esi
0x8BF182: call    eax
0x8BF184: mov     eax, esi
0x8BF186: pop     esi
0x8BF187: retn    4
