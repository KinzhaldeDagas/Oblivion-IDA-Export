0x6DBAF0: push    esi
0x6DBAF1: mov     esi, ecx
0x6DBAF3: call    ??1NiPathInterpolator@@UAE@XZ; NiPathInterpolator::~NiPathInterpolator(void)
0x6DBAF8: test    byte ptr [esp+4+arg_0], 1
0x6DBAFD: jz      short loc_6DBB08
0x6DBAFF: push    esi
0x6DBB00: call    FormHeapFree
0x6DBB05: add     esp, 4
0x6DBB08: mov     eax, esi
0x6DBB0A: pop     esi
0x6DBB0B: retn    4
