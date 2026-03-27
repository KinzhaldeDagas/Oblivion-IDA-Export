0x5512F0: push    esi
0x5512F1: mov     esi, ecx
0x5512F3: call    ??1Entry@BSFaceGenModelMap@@UAE@XZ; BSFaceGenModelMap::Entry::~Entry(void)
0x5512F8: test    byte ptr [esp+4+arg_0], 1
0x5512FD: jz      short loc_551308
0x5512FF: push    esi
0x551300: call    FormHeapFree
0x551305: add     esp, 4
0x551308: mov     eax, esi
0x55130A: pop     esi
0x55130B: retn    4
