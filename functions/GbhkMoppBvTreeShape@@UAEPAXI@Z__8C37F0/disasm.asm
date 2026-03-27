0x8C37F0: push    esi
0x8C37F1: mov     esi, ecx
0x8C37F3: call    ??1bhkMoppBvTreeShape@@UAE@XZ; bhkMoppBvTreeShape::~bhkMoppBvTreeShape(void)
0x8C37F8: test    byte ptr [esp+4+arg_0], 1
0x8C37FD: jz      short loc_8C3808
0x8C37FF: push    esi
0x8C3800: call    FormHeapFree
0x8C3805: add     esp, 4
0x8C3808: mov     eax, esi
0x8C380A: pop     esi
0x8C380B: retn    4
