0x675BB0: mov     eax, [esp+arg_0]
0x675BB4: cmp     eax, 6
0x675BB7: ja      short loc_675BE4
0x675BB9: mov     ecx, [ecx+eax*4+28h]
0x675BBD: xor     eax, eax
0x675BBF: test    ecx, ecx
0x675BC1: jz      short locret_675BE6
0x675BC3: push    esi
0x675BC4: mov     esi, [esp+4+arg_4]
0x675BC8: mov     edx, [ecx]
0x675BCA: test    edx, edx
0x675BCC: jz      short loc_675BE0
0x675BCE: test    eax, eax
0x675BD0: jnz     short loc_675BE0
0x675BD2: cmp     [edx+28h], esi
0x675BD5: mov     ecx, [ecx+4]
0x675BD8: jnz     short loc_675BDC
0x675BDA: mov     eax, edx
0x675BDC: test    ecx, ecx
0x675BDE: jnz     short loc_675BC8
0x675BE0: pop     esi
0x675BE1: retn    8
0x675BE4: xor     eax, eax
0x675BE6: retn    8
