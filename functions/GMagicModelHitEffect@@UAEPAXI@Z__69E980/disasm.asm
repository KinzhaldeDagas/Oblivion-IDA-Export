0x69E980: push    esi
0x69E981: mov     esi, ecx
0x69E983: call    ??1MagicModelHitEffect@@UAE@XZ; MagicModelHitEffect::~MagicModelHitEffect(void)
0x69E988: test    byte ptr [esp+4+arg_0], 1
0x69E98D: jz      short loc_69E998
0x69E98F: push    esi
0x69E990: call    FormHeapFree
0x69E995: add     esp, 4
0x69E998: mov     eax, esi
0x69E99A: pop     esi
0x69E99B: retn    4
