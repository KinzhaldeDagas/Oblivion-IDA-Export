0x533DA0: push    ecx
0x533DA1: push    ebx
0x533DA2: push    ebp
0x533DA3: mov     ebp, [esp+0Ch+arg_0]
0x533DA7: push    edi
0x533DA8: mov     edi, ds:0B34D90h
0x533DAE: mov     eax, ebp
0x533DB0: mov     [esp+10h+var_4], ecx
0x533DB4: lea     ebx, [edi+8]
0x533DB7: mov     ecx, eax
0x533DB9: lea     esp, [esp+0]
0x533DC0: mov     dl, [eax]
0x533DC2: add     eax, 1
0x533DC5: test    dl, dl
0x533DC7: jnz     short loc_533DC0
0x533DC9: push    esi
0x533DCA: sub     eax, ecx
0x533DCC: mov     esi, ecx
0x533DCE: mov     ecx, [ebx]
0x533DD0: lea     edi, [ecx+edi+10h]
0x533DD4: add     edi, 0FFFFFFFFh
0x533DD7: mov     cl, [edi+1]
0x533DDA: add     edi, 1
0x533DDD: test    cl, cl
0x533DDF: jnz     short loc_533DD7
0x533DE1: mov     ecx, eax
0x533DE3: shr     ecx, 2
0x533DE6: rep movsd
0x533DE8: mov     ecx, eax
0x533DEA: and     ecx, 3
0x533DED: mov     eax, ebp
0x533DEF: rep movsb
0x533DF1: lea     edx, [eax+1]
0x533DF4: pop     esi
0x533DF5: mov     cl, [eax]
0x533DF7: add     eax, 1
0x533DFA: test    cl, cl
0x533DFC: jnz     short loc_533DF5
0x533DFE: sub     eax, edx
0x533E00: add     [ebx], eax
0x533E02: mov     edx, [esp+10h+var_4]
0x533E06: mov     eax, [esp+10h+arg_4]
0x533E0A: pop     edi
0x533E0B: pop     ebp
0x533E0C: mov     byte ptr [edx+0Ch], 1
0x533E10: pop     ebx
0x533E11: pop     ecx
0x533E12: retn    8
