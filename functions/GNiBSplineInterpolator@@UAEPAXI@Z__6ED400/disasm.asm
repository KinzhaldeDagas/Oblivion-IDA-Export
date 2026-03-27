0x6ED400: push    esi
0x6ED401: mov     esi, ecx
0x6ED403: call    ??1NiBSplineInterpolator@@UAE@XZ; NiBSplineInterpolator::~NiBSplineInterpolator(void)
0x6ED408: test    byte ptr [esp+4+arg_0], 1
0x6ED40D: jz      short loc_6ED418
0x6ED40F: push    esi
0x6ED410: call    FormHeapFree
0x6ED415: add     esp, 4
0x6ED418: mov     eax, esi
0x6ED41A: pop     esi
0x6ED41B: retn    4
