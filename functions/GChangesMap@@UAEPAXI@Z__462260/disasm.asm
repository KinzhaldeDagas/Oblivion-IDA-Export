0x462260: push    esi
0x462261: mov     esi, ecx
0x462263: call    ??1ChangesMap@@UAE@XZ; ChangesMap::~ChangesMap(void)
0x462268: test    byte ptr [esp+4+arg_0], 1
0x46226D: jz      short loc_462278
0x46226F: push    esi
0x462270: call    FormHeapFree
0x462275: add     esp, 4
0x462278: mov     eax, esi
0x46227A: pop     esi
0x46227B: retn    4
