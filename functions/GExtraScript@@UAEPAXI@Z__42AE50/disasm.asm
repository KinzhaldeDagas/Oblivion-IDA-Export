0x42AE50: push    esi
0x42AE51: mov     esi, ecx
0x42AE53: call    ??1ExtraScript@@UAE@XZ; ExtraScript::~ExtraScript(void)
0x42AE58: test    byte ptr [esp+4+arg_0], 1
0x42AE5D: jz      short loc_42AE68
0x42AE5F: push    esi
0x42AE60: call    FormHeapFree
0x42AE65: add     esp, 4
0x42AE68: mov     eax, esi
0x42AE6A: pop     esi
0x42AE6B: retn    4
