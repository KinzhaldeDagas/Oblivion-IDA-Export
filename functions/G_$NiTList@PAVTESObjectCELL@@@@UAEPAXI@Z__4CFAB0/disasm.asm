0x4CFAB0: push    esi
0x4CFAB1: mov     esi, ecx
0x4CFAB3: call    ??1?$NiTList@PAVTESObjectCELL@@@@UAE@XZ; NiTList<TESObjectCELL *>::~NiTList<TESObjectCELL *>(void)
0x4CFAB8: test    [esp+4+arg_0], 1
0x4CFABD: jz      short loc_4CFAC8
0x4CFABF: push    esi
0x4CFAC0: call    FormHeapFree
0x4CFAC5: add     esp, 4
0x4CFAC8: mov     eax, esi
0x4CFACA: pop     esi
0x4CFACB: retn    4
