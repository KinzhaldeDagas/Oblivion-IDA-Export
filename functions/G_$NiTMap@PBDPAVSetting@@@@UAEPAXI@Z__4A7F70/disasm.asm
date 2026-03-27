0x4A7F70: push    esi
0x4A7F71: mov     esi, ecx
0x4A7F73: call    ??1?$NiTMap@PBDPAVSetting@@@@UAE@XZ; NiTMap<char const *,Setting *>::~NiTMap<char const *,Setting *>(void)
0x4A7F78: test    [esp+4+arg_0], 1
0x4A7F7D: jz      short loc_4A7F88
0x4A7F7F: push    esi
0x4A7F80: call    FormHeapFree
0x4A7F85: add     esp, 4
0x4A7F88: mov     eax, esi
0x4A7F8A: pop     esi
0x4A7F8B: retn    4
