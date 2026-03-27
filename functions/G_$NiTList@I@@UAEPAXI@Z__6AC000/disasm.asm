0x6AC000: push    esi
0x6AC001: mov     esi, ecx
0x6AC003: call    ??1?$NiTList@I@@UAE@XZ; NiTList<uint>::~NiTList<uint>(void)
0x6AC008: test    [esp+4+arg_0], 1
0x6AC00D: jz      short loc_6AC018
0x6AC00F: push    esi
0x6AC010: call    FormHeapFree
0x6AC015: add     esp, 4
0x6AC018: mov     eax, esi
0x6AC01A: pop     esi
0x6AC01B: retn    4
