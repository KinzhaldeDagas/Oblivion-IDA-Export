0x6DFCD0: push    esi
0x6DFCD1: mov     esi, ecx
0x6DFCD3: call    ??1NiLookAtInterpolator@@UAE@XZ; NiLookAtInterpolator::~NiLookAtInterpolator(void)
0x6DFCD8: test    byte ptr [esp+4+arg_0], 1
0x6DFCDD: jz      short loc_6DFCE8
0x6DFCDF: push    esi
0x6DFCE0: call    FormHeapFree
0x6DFCE5: add     esp, 4
0x6DFCE8: mov     eax, esi
0x6DFCEA: pop     esi
0x6DFCEB: retn    4
