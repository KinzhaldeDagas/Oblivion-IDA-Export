0x4CFAD0: push    esi
0x4CFAD1: mov     esi, ecx
0x4CFAD3: call    ??1?$NiTList@PAVTESObjectREFR@@@@UAE@XZ; NiTList<TESObjectREFR *>::~NiTList<TESObjectREFR *>(void)
0x4CFAD8: test    [esp+4+arg_0], 1
0x4CFADD: jz      short loc_4CFAE8
0x4CFADF: push    esi
0x4CFAE0: call    FormHeapFree
0x4CFAE5: add     esp, 4
0x4CFAE8: mov     eax, esi
0x4CFAEA: pop     esi
0x4CFAEB: retn    4
