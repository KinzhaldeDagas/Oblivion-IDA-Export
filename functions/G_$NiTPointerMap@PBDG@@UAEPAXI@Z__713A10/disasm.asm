0x713A10: push    esi
0x713A11: mov     esi, ecx
0x713A13: call    ??1?$NiTPointerMap@PBDG@@UAE@XZ; NiTPointerMap<char const *,ushort>::~NiTPointerMap<char const *,ushort>(void)
0x713A18: test    [esp+4+arg_0], 1
0x713A1D: jz      short loc_713A28
0x713A1F: push    esi
0x713A20: call    FormHeapFree
0x713A25: add     esp, 4
0x713A28: mov     eax, esi
0x713A2A: pop     esi
0x713A2B: retn    4
