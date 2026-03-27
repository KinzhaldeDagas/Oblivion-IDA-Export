0x6A4810: push    esi
0x6A4811: mov     esi, ecx
0x6A4813: call    ??1ScriptEffect@@UAE@XZ; ScriptEffect::~ScriptEffect(void)
0x6A4818: test    byte ptr [esp+4+arg_0], 1
0x6A481D: jz      short loc_6A4828
0x6A481F: push    esi
0x6A4820: call    FormHeapFree
0x6A4825: add     esp, 4
0x6A4828: mov     eax, esi
0x6A482A: pop     esi
0x6A482B: retn    4
