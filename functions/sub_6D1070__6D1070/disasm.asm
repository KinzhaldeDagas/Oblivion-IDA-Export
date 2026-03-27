0x6D1070: movzx   eax, word ptr [esp+arg_4]
0x6D1075: fldz
0x6D1077: movzx   edx, word ptr [ecx+4Ah]
0x6D107B: fstp    [esp+arg_4]
0x6D107F: cmp     eax, edx
0x6D1081: jnb     short loc_6D108D
0x6D1083: mov     ecx, [ecx+44h]
0x6D1086: fld     dword ptr [ecx+eax*4]
0x6D1089: fstp    [esp+arg_4]
0x6D108D: push    esi
0x6D108E: mov     esi, [esp+4+arg_0]
0x6D1092: test    esi, esi
0x6D1094: jnz     short loc_6D10AB
0x6D1096: fld     [esp+4+arg_4]
0x6D109A: xor     eax, eax
0x6D109C: push    ecx
0x6D109D: mov     ecx, eax
0x6D109F: fstp    [esp+8+var_8]; float
0x6D10A2: call    sub_6D2B70
0x6D10A7: pop     esi
0x6D10A8: retn    8
0x6D10AB: mov     edx, [esi]
0x6D10AD: mov     eax, [edx+4]
0x6D10B0: mov     ecx, esi
0x6D10B2: call    eax
0x6D10B4: test    eax, eax
0x6D10B6: jz      short loc_6D10C6
0x6D10B8: cmp     eax, offset dword_B3CFBC
0x6D10BD: jz      short loc_6D10E1
0x6D10BF: mov     eax, [eax+4]
0x6D10C2: test    eax, eax
0x6D10C4: jnz     short loc_6D10B8
0x6D10C6: xor     al, al
0x6D10C8: fld     [esp+4+arg_4]
0x6D10CC: neg     al
0x6D10CE: push    ecx
0x6D10CF: fstp    [esp+8+var_8]; float
0x6D10D2: sbb     eax, eax
0x6D10D4: and     eax, esi
0x6D10D6: mov     ecx, eax
0x6D10D8: call    sub_6D2B70
0x6D10DD: pop     esi
0x6D10DE: retn    8
0x6D10E1: mov     al, 1
0x6D10E3: jmp     short loc_6D10C8
