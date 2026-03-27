0x55C6C0: push    esi
0x55C6C1: mov     esi, ecx
0x55C6C3: call    ??1BSFaceGenMorphDataHair@@UAE@XZ; BSFaceGenMorphDataHair::~BSFaceGenMorphDataHair(void)
0x55C6C8: test    byte ptr [esp+4+arg_0], 1
0x55C6CD: jz      short loc_55C6D8
0x55C6CF: push    esi
0x55C6D0: call    FormHeapFree
0x55C6D5: add     esp, 4
0x55C6D8: mov     eax, esi
0x55C6DA: pop     esi
0x55C6DB: retn    4
