0x95FFD0: push    esi
0x95FFD1: mov     esi, ecx
0x95FFD3: call    ??1NiUnionBV@@UAE@XZ; NiUnionBV::~NiUnionBV(void)
0x95FFD8: test    byte ptr [esp+4+arg_0], 1
0x95FFDD: jz      short loc_95FFE8
0x95FFDF: push    esi
0x95FFE0: call    FormHeapFree
0x95FFE5: add     esp, 4
0x95FFE8: mov     eax, esi
0x95FFEA: pop     esi
0x95FFEB: retn    4
