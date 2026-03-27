0x42AC20: push    esi
0x42AC21: mov     esi, ecx
0x42AC23: call    ??1ExtraAnim@@UAE@XZ; ExtraAnim::~ExtraAnim(void)
0x42AC28: test    byte ptr [esp+4+arg_0], 1
0x42AC2D: jz      short loc_42AC38
0x42AC2F: push    esi
0x42AC30: call    FormHeapFree
0x42AC35: add     esp, 4
0x42AC38: mov     eax, esi
0x42AC3A: pop     esi
0x42AC3B: retn    4
