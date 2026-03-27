0x532CB0: push    esi
0x532CB1: mov     esi, ecx
0x532CB3: call    ??1bhkBvTreeShape@@UAE@XZ; bhkBvTreeShape::~bhkBvTreeShape(void)
0x532CB8: test    byte ptr [esp+4+arg_0], 1
0x532CBD: jz      short loc_532CC8
0x532CBF: push    esi
0x532CC0: call    FormHeapFree
0x532CC5: add     esp, 4
0x532CC8: mov     eax, esi
0x532CCA: pop     esi
0x532CCB: retn    4
