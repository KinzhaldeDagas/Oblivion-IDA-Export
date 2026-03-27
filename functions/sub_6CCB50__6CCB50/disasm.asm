0x6CCB50: push    esi
0x6CCB51: mov     esi, ecx
0x6CCB53: cmp     byte ptr [esi+0Eh], 1
0x6CCB57: jnz     short loc_6CCB7C
0x6CCB59: mov     ecx, [esi+18h]
0x6CCB5C: fld     [esp+4+arg_4]
0x6CCB60: mov     eax, [ecx]
0x6CCB62: mov     edx, [eax+84h]
0x6CCB68: sub     esp, 8
0x6CCB6B: fstp    [esp+0Ch+var_8]
0x6CCB6F: fld     [esp+0Ch+arg_0]
0x6CCB73: fstp    [esp+0Ch+var_C]
0x6CCB76: call    edx
0x6CCB78: pop     esi
0x6CCB79: retn    8
0x6CCB7C: push    ebx
0x6CCB7D: xor     bl, bl
0x6CCB7F: cmp     [esi+0Dh], bl
0x6CCB82: jbe     short loc_6CCBBA
0x6CCB84: mov     ecx, [esi+14h]
0x6CCB87: movzx   eax, bl
0x6CCB8A: lea     eax, [eax+eax*2]
0x6CCB8D: lea     eax, [ecx+eax*8]
0x6CCB90: mov     ecx, [eax]
0x6CCB92: test    ecx, ecx
0x6CCB94: jz      short loc_6CCBB2
0x6CCB96: fld     [esp+8+arg_4]
0x6CCB9A: mov     edx, [ecx]
0x6CCB9C: mov     eax, [edx+84h]
0x6CCBA2: sub     esp, 8
0x6CCBA5: fstp    [esp+10h+var_C]
0x6CCBA9: fld     [esp+10h+arg_0]
0x6CCBAD: fstp    [esp+10h+var_10]
0x6CCBB0: call    eax
0x6CCBB2: add     bl, 1
0x6CCBB5: cmp     bl, [esi+0Dh]
0x6CCBB8: jb      short loc_6CCB84
0x6CCBBA: pop     ebx
0x6CCBBB: pop     esi
0x6CCBBC: retn    8
