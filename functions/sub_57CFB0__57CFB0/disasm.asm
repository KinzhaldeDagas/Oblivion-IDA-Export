0x57CFB0: mov     edx, [esp+arg_0]
0x57CFB4: xor     eax, eax
0x57CFB6: add     ecx, 0E0h ; 'à'
0x57CFBC: lea     esp, [esp+0]
0x57CFC0: cmp     [ecx], edx
0x57CFC2: jz      short loc_57CFD4
0x57CFC4: add     eax, 1
0x57CFC7: add     ecx, 4
0x57CFCA: cmp     eax, 0Ah
0x57CFCD: jb      short loc_57CFC0
0x57CFCF: xor     al, al
0x57CFD1: retn    4
0x57CFD4: mov     al, 1
0x57CFD6: retn    4
