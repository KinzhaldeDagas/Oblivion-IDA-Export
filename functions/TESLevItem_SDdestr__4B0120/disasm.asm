0x4B0120: push    esi
0x4B0121: mov     esi, ecx
0x4B0123: call    TESLevItem_destr
0x4B0128: test    [esp+4+arg_0], 1
0x4B012D: jz      short loc_4B0138
0x4B012F: push    esi
0x4B0130: call    FormHeapFree
0x4B0135: add     esp, 4
0x4B0138: mov     eax, esi
0x4B013A: pop     esi
0x4B013B: retn    4
