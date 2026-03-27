0x6A3680: push    esi
0x6A3681: mov     esi, ecx
0x6A3683: call    ??1ActiveEffect@@UAE@XZ; ActiveEffect::~ActiveEffect(void)
0x6A3688: test    byte ptr [esp+4+arg_0], 1
0x6A368D: jz      short loc_6A3698
0x6A368F: push    esi
0x6A3690: call    FormHeapFree
0x6A3695: add     esp, 4
0x6A3698: mov     eax, esi
0x6A369A: pop     esi
0x6A369B: retn    4
