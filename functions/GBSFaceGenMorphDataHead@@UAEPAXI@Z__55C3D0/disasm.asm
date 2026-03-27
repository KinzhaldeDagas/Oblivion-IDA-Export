0x55C3D0: push    esi
0x55C3D1: mov     esi, ecx
0x55C3D3: call    ??1BSFaceGenMorphDataHead@@UAE@XZ; BSFaceGenMorphDataHead::~BSFaceGenMorphDataHead(void)
0x55C3D8: test    byte ptr [esp+4+arg_0], 1
0x55C3DD: jz      short loc_55C3E8
0x55C3DF: push    esi
0x55C3E0: call    FormHeapFree
0x55C3E5: add     esp, 4
0x55C3E8: mov     eax, esi
0x55C3EA: pop     esi
0x55C3EB: retn    4
