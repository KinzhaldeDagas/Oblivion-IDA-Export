0x4A4830: push    esi
0x4A4831: mov     esi, [esp+4+arg_0]
0x4A4835: test    esi, esi
0x4A4837: jz      short loc_4A484D
0x4A4839: mov     eax, [esi]
0x4A483B: mov     edx, [eax+0Ch]
0x4A483E: mov     ecx, esi
0x4A4840: call    edx
0x4A4842: cmp     eax, 6
0x4A4845: jnz     short loc_4A484D
0x4A4847: mov     eax, esi
0x4A4849: pop     esi
0x4A484A: retn    4
0x4A484D: xor     eax, eax
0x4A484F: pop     esi
0x4A4850: retn    4
