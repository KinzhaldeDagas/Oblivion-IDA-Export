0x530340: push    esi
0x530341: mov     esi, ecx
0x530343: call    ??1TESTopic@@UAE@XZ; TESTopic::~TESTopic(void)
0x530348: test    byte ptr [esp+4+arg_0], 1
0x53034D: jz      short loc_530358
0x53034F: push    esi
0x530350: call    FormHeapFree
0x530355: add     esp, 4
0x530358: mov     eax, esi
0x53035A: pop     esi
0x53035B: retn    4
