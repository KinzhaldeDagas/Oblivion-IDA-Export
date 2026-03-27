0x46C260: push    esi
0x46C261: mov     esi, ecx
0x46C263: call    ??1?$NiTStringTemplateMap@V?$NiTMap@PBDPAVTESForm@@@@PAVTESForm@@@@UAE@XZ; NiTStringTemplateMap<NiTMap<char const *,TESForm *>,TESForm *>::~NiTStringTemplateMap<NiTMap<char const *,TESForm *>,TESForm *>(void)
0x46C268: test    [esp+4+arg_0], 1
0x46C26D: jz      short loc_46C278
0x46C26F: push    esi
0x46C270: call    FormHeapFree
0x46C275: add     esp, 4
0x46C278: mov     eax, esi
0x46C27A: pop     esi
0x46C27B: retn    4
