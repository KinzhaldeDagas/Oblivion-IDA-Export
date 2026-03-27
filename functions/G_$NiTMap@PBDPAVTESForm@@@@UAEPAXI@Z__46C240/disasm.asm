0x46C240: push    esi
0x46C241: mov     esi, ecx
0x46C243: call    ??1?$NiTMap@PBDPAVTESForm@@@@UAE@XZ; NiTMap<char const *,TESForm *>::~NiTMap<char const *,TESForm *>(void)
0x46C248: test    [esp+4+arg_0], 1
0x46C24D: jz      short loc_46C258
0x46C24F: push    esi
0x46C250: call    FormHeapFree
0x46C255: add     esp, 4
0x46C258: mov     eax, esi
0x46C25A: pop     esi
0x46C25B: retn    4
