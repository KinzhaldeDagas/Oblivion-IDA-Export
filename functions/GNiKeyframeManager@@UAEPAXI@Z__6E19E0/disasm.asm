0x6E19E0: push    esi
0x6E19E1: mov     esi, ecx
0x6E19E3: call    ??1NiKeyframeManager@@UAE@XZ; NiKeyframeManager::~NiKeyframeManager(void)
0x6E19E8: test    byte ptr [esp+4+arg_0], 1
0x6E19ED: jz      short loc_6E19F8
0x6E19EF: push    esi
0x6E19F0: call    FormHeapFree
0x6E19F5: add     esp, 4
0x6E19F8: mov     eax, esi
0x6E19FA: pop     esi
0x6E19FB: retn    4
