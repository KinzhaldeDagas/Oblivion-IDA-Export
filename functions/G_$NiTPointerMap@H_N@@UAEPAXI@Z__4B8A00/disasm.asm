0x4B8A00: push    esi
0x4B8A01: mov     esi, ecx
0x4B8A03: call    ??1?$NiTPointerMap@H_N@@UAE@XZ; NiTPointerMap<int,bool>::~NiTPointerMap<int,bool>(void)
0x4B8A08: test    [esp+4+arg_0], 1
0x4B8A0D: jz      short loc_4B8A18
0x4B8A0F: push    esi
0x4B8A10: call    FormHeapFree
0x4B8A15: add     esp, 4
0x4B8A18: mov     eax, esi
0x4B8A1A: pop     esi
0x4B8A1B: retn    4
