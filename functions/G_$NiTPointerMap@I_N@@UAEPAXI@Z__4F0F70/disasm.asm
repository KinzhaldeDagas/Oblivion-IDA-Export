0x4F0F70: push    esi
0x4F0F71: mov     esi, ecx
0x4F0F73: call    ??1?$NiTPointerMap@I_N@@UAE@XZ; NiTPointerMap<uint,bool>::~NiTPointerMap<uint,bool>(void)
0x4F0F78: test    [esp+4+arg_0], 1
0x4F0F7D: jz      short loc_4F0F88
0x4F0F7F: push    esi
0x4F0F80: call    FormHeapFree
0x4F0F85: add     esp, 4
0x4F0F88: mov     eax, esi
0x4F0F8A: pop     esi
0x4F0F8B: retn    4
