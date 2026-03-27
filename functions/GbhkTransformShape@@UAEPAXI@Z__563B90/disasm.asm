0x563B90: push    esi
0x563B91: mov     esi, ecx
0x563B93: call    ??1bhkTransformShape@@UAE@XZ; bhkTransformShape::~bhkTransformShape(void)
0x563B98: test    byte ptr [esp+4+arg_0], 1
0x563B9D: jz      short loc_563BA8
0x563B9F: push    esi
0x563BA0: call    FormHeapFree
0x563BA5: add     esp, 4
0x563BA8: mov     eax, esi
0x563BAA: pop     esi
0x563BAB: retn    4
