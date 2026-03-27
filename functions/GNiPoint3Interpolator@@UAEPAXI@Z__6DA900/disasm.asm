0x6DA900: push    esi
0x6DA901: mov     esi, ecx
0x6DA903: call    ??1NiPoint3Interpolator@@UAE@XZ; NiPoint3Interpolator::~NiPoint3Interpolator(void)
0x6DA908: test    byte ptr [esp+4+arg_0], 1
0x6DA90D: jz      short loc_6DA918
0x6DA90F: push    esi
0x6DA910: call    FormHeapFree
0x6DA915: add     esp, 4
0x6DA918: mov     eax, esi
0x6DA91A: pop     esi
0x6DA91B: retn    4
