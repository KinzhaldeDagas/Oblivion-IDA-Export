0x4A4800: push    esi
0x4A4801: mov     esi, [esp+4+arg_0]
0x4A4805: test    esi, esi
0x4A4807: jz      short loc_4A481D
0x4A4809: mov     eax, [esi]
0x4A480B: mov     edx, [eax+0Ch]
0x4A480E: mov     ecx, esi
0x4A4810: call    edx
0x4A4812: cmp     eax, 5
0x4A4815: jnz     short loc_4A481D
0x4A4817: mov     eax, esi
0x4A4819: pop     esi
0x4A481A: retn    4
0x4A481D: xor     eax, eax
0x4A481F: pop     esi
0x4A4820: retn    4
