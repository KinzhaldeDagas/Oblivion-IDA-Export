0x4842B0: push    esi
0x4842B1: mov     esi, ecx
0x4842B3: call    ??1GridDistantArray@@UAE@XZ; GridDistantArray::~GridDistantArray(void)
0x4842B8: test    byte ptr [esp+4+arg_0], 1
0x4842BD: jz      short loc_4842C8
0x4842BF: push    esi
0x4842C0: call    FormHeapFree
0x4842C5: add     esp, 4
0x4842C8: mov     eax, esi
0x4842CA: pop     esi
0x4842CB: retn    4
