0x6C50E0: push    esi
0x6C50E1: mov     esi, ecx
0x6C50E3: call    ??1?$NiTPointerMap@PBDPAVNiControllerSequence@@@@UAE@XZ; NiTPointerMap<char const *,NiControllerSequence *>::~NiTPointerMap<char const *,NiControllerSequence *>(void)
0x6C50E8: test    [esp+4+arg_0], 1
0x6C50ED: jz      short loc_6C50F8
0x6C50EF: push    esi
0x6C50F0: call    FormHeapFree
0x6C50F5: add     esp, 4
0x6C50F8: mov     eax, esi
0x6C50FA: pop     esi
0x6C50FB: retn    4
