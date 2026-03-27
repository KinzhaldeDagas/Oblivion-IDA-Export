0x4A7F90: push    esi
0x4A7F91: mov     esi, ecx
0x4A7F93: call    ??1?$NiTStringTemplateMap@V?$NiTMap@PBDPAVSetting@@@@PAVSetting@@@@UAE@XZ; NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>::~NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>(void)
0x4A7F98: test    [esp+4+arg_0], 1
0x4A7F9D: jz      short loc_4A7FA8
0x4A7F9F: push    esi
0x4A7FA0: call    FormHeapFree
0x4A7FA5: add     esp, 4
0x4A7FA8: mov     eax, esi
0x4A7FAA: pop     esi
0x4A7FAB: retn    4
