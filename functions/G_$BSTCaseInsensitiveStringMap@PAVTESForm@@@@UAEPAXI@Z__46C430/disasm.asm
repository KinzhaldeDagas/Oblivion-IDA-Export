0x46C430: push    esi
0x46C431: mov     esi, ecx
0x46C433: mov     dword ptr [esi], offset ??_7?$BSTCaseInsensitiveStringMap@PAVTESForm@@@@6B@; const BSTCaseInsensitiveStringMap<TESForm *>::`vftable'
0x46C439: call    ??1?$NiTStringTemplateMap@V?$NiTMap@PBDPAVTESForm@@@@PAVTESForm@@@@UAE@XZ; NiTStringTemplateMap<NiTMap<char const *,TESForm *>,TESForm *>::~NiTStringTemplateMap<NiTMap<char const *,TESForm *>,TESForm *>(void)
0x46C43E: test    [esp+4+arg_0], 1
0x46C443: jz      short loc_46C44E
0x46C445: push    esi
0x46C446: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x46C44B: add     esp, 4
0x46C44E: mov     eax, esi
0x46C450: pop     esi
0x46C451: retn    4
