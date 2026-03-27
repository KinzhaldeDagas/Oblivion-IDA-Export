0x53B3D0: push    esi
0x53B3D1: mov     esi, ecx
0x53B3D3: call    ??1Atmosphere@@UAE@XZ; Atmosphere::~Atmosphere(void)
0x53B3D8: test    byte ptr [esp+4+arg_0], 1
0x53B3DD: jz      short loc_53B3E8
0x53B3DF: push    esi
0x53B3E0: call    FormHeapFree
0x53B3E5: add     esp, 4
0x53B3E8: mov     eax, esi
0x53B3EA: pop     esi
0x53B3EB: retn    4
