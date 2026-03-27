0x4A57E0: push    esi
0x4A57E1: mov     esi, ecx
0x4A57E3: call    ??1TESRegionDataWeather@@UAE@XZ; TESRegionDataWeather::~TESRegionDataWeather(void)
0x4A57E8: test    byte ptr [esp+4+arg_0], 1
0x4A57ED: jz      short loc_4A57F8
0x4A57EF: push    esi
0x4A57F0: call    FormHeapFree
0x4A57F5: add     esp, 4
0x4A57F8: mov     eax, esi
0x4A57FA: pop     esi
0x4A57FB: retn    4
