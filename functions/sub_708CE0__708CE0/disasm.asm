0x708CE0: mov     eax, [ecx+0D0h]
0x708CE6: test    eax, eax
0x708CE8: jz      short loc_708CFE
0x708CEA: mov     edx, [esp+arg_0]
0x708CEE: mov     edi, edi
0x708CF0: cmp     [eax+8], edx
0x708CF3: lea     ecx, [eax+8]
0x708CF6: mov     eax, [eax]
0x708CF8: jz      short loc_708D03
0x708CFA: test    eax, eax
0x708CFC: jnz     short loc_708CF0
0x708CFE: xor     al, al
0x708D00: retn    4
0x708D03: mov     al, 1
0x708D05: retn    4
