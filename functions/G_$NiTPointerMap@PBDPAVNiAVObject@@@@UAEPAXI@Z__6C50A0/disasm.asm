0x6C50A0: push    esi
0x6C50A1: mov     esi, ecx
0x6C50A3: call    ??1?$NiTPointerMap@PBDPAVNiAVObject@@@@UAE@XZ; NiTPointerMap<char const *,NiAVObject *>::~NiTPointerMap<char const *,NiAVObject *>(void)
0x6C50A8: test    [esp+4+arg_0], 1
0x6C50AD: jz      short loc_6C50B8
0x6C50AF: push    esi
0x6C50B0: call    FormHeapFree
0x6C50B5: add     esp, 4
0x6C50B8: mov     eax, esi
0x6C50BA: pop     esi
0x6C50BB: retn    4
