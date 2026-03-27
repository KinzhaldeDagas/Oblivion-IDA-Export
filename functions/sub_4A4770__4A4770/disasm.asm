0x4A4770: push    esi
0x4A4771: mov     esi, [esp+4+arg_0]
0x4A4775: test    esi, esi
0x4A4777: jz      short loc_4A478D
0x4A4779: mov     eax, [esi]
0x4A477B: mov     edx, [eax+0Ch]
0x4A477E: mov     ecx, esi
0x4A4780: call    edx
0x4A4782: cmp     eax, 2
0x4A4785: jnz     short loc_4A478D
0x4A4787: mov     eax, esi
0x4A4789: pop     esi
0x4A478A: retn    4
0x4A478D: xor     eax, eax
0x4A478F: pop     esi
0x4A4790: retn    4
