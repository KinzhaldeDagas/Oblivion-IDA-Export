0x42B1E0: push    esi
0x42B1E1: mov     esi, ecx
0x42B1E3: call    ??1ExtraLight@@UAE@XZ; ExtraLight::~ExtraLight(void)
0x42B1E8: test    byte ptr [esp+4+arg_0], 1
0x42B1ED: jz      short loc_42B1F8
0x42B1EF: push    esi
0x42B1F0: call    FormHeapFree
0x42B1F5: add     esp, 4
0x42B1F8: mov     eax, esi
0x42B1FA: pop     esi
0x42B1FB: retn    4
