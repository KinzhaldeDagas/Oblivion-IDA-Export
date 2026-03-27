0x4A8150: push    esi
0x4A8151: mov     esi, ecx
0x4A8153: mov     dword ptr [esi], offset ??_7?$BSTCaseInsensitiveStringMap@PAVSetting@@@@6B@; const BSTCaseInsensitiveStringMap<Setting *>::`vftable'
0x4A8159: call    ??1?$NiTStringTemplateMap@V?$NiTMap@PBDPAVSetting@@@@PAVSetting@@@@UAE@XZ; NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>::~NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>(void)
0x4A815E: test    [esp+4+arg_0], 1
0x4A8163: jz      short loc_4A816E
0x4A8165: push    esi
0x4A8166: call    FormHeapFree
0x4A816B: add     esp, 4
0x4A816E: mov     eax, esi
0x4A8170: pop     esi
0x4A8171: retn    4
