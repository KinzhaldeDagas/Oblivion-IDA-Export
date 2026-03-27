0x416560: push    esi
0x416561: mov     esi, ecx
0x416563: call    ??1EffectSetting@@UAE@XZ; EffectSetting::~EffectSetting(void)
0x416568: test    byte ptr [esp+4+arg_0], 1
0x41656D: jz      short loc_416578
0x41656F: push    esi
0x416570: call    FormHeapFree
0x416575: add     esp, 4
0x416578: mov     eax, esi
0x41657A: pop     esi
0x41657B: retn    4
