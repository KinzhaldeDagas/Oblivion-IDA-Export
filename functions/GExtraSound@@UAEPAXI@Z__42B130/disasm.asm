0x42B130: push    esi
0x42B131: mov     esi, ecx
0x42B133: call    ??1ExtraSound@@UAE@XZ; ExtraSound::~ExtraSound(void)
0x42B138: test    byte ptr [esp+4+arg_0], 1
0x42B13D: jz      short loc_42B148
0x42B13F: push    esi
0x42B140: call    FormHeapFree
0x42B145: add     esp, 4
0x42B148: mov     eax, esi
0x42B14A: pop     esi
0x42B14B: retn    4
