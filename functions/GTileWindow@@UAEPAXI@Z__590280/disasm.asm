0x590280: push    esi
0x590281: mov     esi, ecx
0x590283: call    ??1TileWindow@@UAE@XZ; TileWindow::~TileWindow(void)
0x590288: test    byte ptr [esp+4+arg_0], 1
0x59028D: jz      short loc_590298
0x59028F: push    esi
0x590290: call    FormHeapFree
0x590295: add     esp, 4
0x590298: mov     eax, esi
0x59029A: pop     esi
0x59029B: retn    4
