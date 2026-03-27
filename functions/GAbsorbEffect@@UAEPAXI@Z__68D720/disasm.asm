0x68D720: push    esi
0x68D721: mov     esi, ecx
0x68D723: call    ??1AbsorbEffect@@UAE@XZ; AbsorbEffect::~AbsorbEffect(void)
0x68D728: test    byte ptr [esp+4+arg_0], 1
0x68D72D: jz      short loc_68D738
0x68D72F: push    esi
0x68D730: call    FormHeapFree
0x68D735: add     esp, 4
0x68D738: mov     eax, esi
0x68D73A: pop     esi
0x68D73B: retn    4
