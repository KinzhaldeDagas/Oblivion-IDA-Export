0x4A4860: push    esi
0x4A4861: mov     esi, [esp+4+arg_0]
0x4A4865: test    esi, esi
0x4A4867: jz      short loc_4A487D
0x4A4869: mov     eax, [esi]
0x4A486B: mov     edx, [eax+0Ch]
0x4A486E: mov     ecx, esi
0x4A4870: call    edx
0x4A4872: cmp     eax, 7
0x4A4875: jnz     short loc_4A487D
0x4A4877: mov     eax, esi
0x4A4879: pop     esi
0x4A487A: retn    4
0x4A487D: xor     eax, eax
0x4A487F: pop     esi
0x4A4880: retn    4
