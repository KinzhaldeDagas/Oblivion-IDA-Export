0x5E21A0: lea     eax, [ecx+0A4h]
0x5E21A6: test    eax, eax
0x5E21A8: jz      short loc_5E21C2
0x5E21AA: mov     edx, [esp+arg_0]
0x5E21AE: mov     edi, edi
0x5E21B0: mov     ecx, [eax]
0x5E21B2: test    ecx, ecx
0x5E21B4: jz      short loc_5E21C2
0x5E21B6: cmp     [ecx+4], edx
0x5E21B9: jz      short loc_5E21C7
0x5E21BB: mov     eax, [eax+4]
0x5E21BE: test    eax, eax
0x5E21C0: jnz     short loc_5E21B0
0x5E21C2: fldz
0x5E21C4: retn    4
0x5E21C7: fild    dword ptr [ecx]
0x5E21C9: retn    4
