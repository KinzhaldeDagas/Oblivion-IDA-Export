0x6C55F0: push    esi
0x6C55F1: mov     esi, ecx
0x6C55F3: call    ??1NiControllerManager@@UAE@XZ; NiControllerManager::~NiControllerManager(void)
0x6C55F8: test    byte ptr [esp+4+arg_0], 1
0x6C55FD: jz      short loc_6C5608
0x6C55FF: push    esi
0x6C5600: call    FormHeapFree
0x6C5605: add     esp, 4
0x6C5608: mov     eax, esi
0x6C560A: pop     esi
0x6C560B: retn    4
