0x8E1D90: push    ebp
0x8E1D91: push    esi
0x8E1D92: push    edi
0x8E1D93: mov     edi, [esp+0Ch+arg_0]
0x8E1D97: mov     esi, ecx
0x8E1D99: mov     ecx, [edi+8]
0x8E1D9C: mov     eax, [esi+44h]
0x8E1D9F: and     ecx, 3FFFFFFFh
0x8E1DA5: cmp     ecx, eax
0x8E1DA7: jge     short loc_8E1DB5
0x8E1DA9: push    20h ; ' '
0x8E1DAB: push    eax
0x8E1DAC: push    edi
0x8E1DAD: call    sub_8A6E40
0x8E1DB2: add     esp, 0Ch
0x8E1DB5: mov     edx, [esi+44h]
0x8E1DB8: mov     [edi+4], edx
0x8E1DBB: mov     eax, [esi+44h]
0x8E1DBE: xor     ebp, ebp
0x8E1DC0: test    eax, eax
0x8E1DC2: jle     short loc_8E1DF5
0x8E1DC4: push    ebx
0x8E1DC5: xor     ebx, ebx
0x8E1DC7: xor     edi, edi
0x8E1DC9: lea     esp, [esp+0]
0x8E1DD0: mov     eax, [esp+10h+arg_0]
0x8E1DD4: mov     ecx, [eax]
0x8E1DD6: mov     edx, [esi+40h]
0x8E1DD9: add     ecx, edi
0x8E1DDB: push    ecx
0x8E1DDC: add     edx, ebx
0x8E1DDE: push    edx
0x8E1DDF: mov     ecx, esi
0x8E1DE1: call    sub_8E1060
0x8E1DE6: mov     eax, [esi+44h]
0x8E1DE9: inc     ebp
0x8E1DEA: add     edi, 20h ; ' '
0x8E1DED: add     ebx, 10h
0x8E1DF0: cmp     ebp, eax
0x8E1DF2: jl      short loc_8E1DD0
0x8E1DF4: pop     ebx
0x8E1DF5: pop     edi
0x8E1DF6: pop     esi
0x8E1DF7: pop     ebp
0x8E1DF8: retn    4
