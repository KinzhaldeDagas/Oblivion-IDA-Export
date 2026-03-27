0x6A7A80: push    esi
0x6A7A81: mov     esi, ecx
0x6A7A83: call    ??1TelekinesisEffect@@UAE@XZ; TelekinesisEffect::~TelekinesisEffect(void)
0x6A7A88: test    byte ptr [esp+4+arg_0], 1
0x6A7A8D: jz      short loc_6A7A98
0x6A7A8F: push    esi
0x6A7A90: call    FormHeapFree
0x6A7A95: add     esp, 4
0x6A7A98: mov     eax, esi
0x6A7A9A: pop     esi
0x6A7A9B: retn    4
