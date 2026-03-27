0x75EFA0: sub     esp, 8
0x75EFA3: push    esi
0x75EFA4: mov     esi, [esp+0Ch+a2]
0x75EFA8: push    edi
0x75EFA9: push    esi; a2
0x75EFAA: mov     edi, ecx
0x75EFAC: call    sub_7008A0
0x75EFB1: mov     eax, [esi+21Ch]
0x75EFB7: push    1
0x75EFB9: lea     ecx, [esp+14h+var_4]
0x75EFBD: push    ecx
0x75EFBE: push    4
0x75EFC0: lea     edx, [edi+8]
0x75EFC3: push    edx
0x75EFC4: push    eax
0x75EFC5: mov     eax, [eax+4]
0x75EFC8: mov     [esp+24h+var_4], 4
0x75EFD0: call    eax
0x75EFD2: mov     eax, [esi+21Ch]
0x75EFD8: push    1
0x75EFDA: lea     ecx, [esp+28h+var_4]
0x75EFDE: push    ecx
0x75EFDF: push    1
0x75EFE1: lea     edx, [esp+30h+a2]
0x75EFE5: push    edx
0x75EFE6: push    eax
0x75EFE7: mov     eax, [eax+4]
0x75EFEA: mov     [esp+38h+var_4], 1
0x75EFF2: call    eax
0x75EFF4: cmp     byte ptr [esp+38h+a2], 0
0x75EFF9: push    1
0x75EFFB: setnz   cl
0x75EFFE: lea     edx, [esp+3Ch+var_4]
0x75F002: push    edx
0x75F003: mov     [edi+0Ch], cl
0x75F006: mov     eax, [esi+21Ch]
0x75F00C: mov     edx, [eax+4]
0x75F00F: push    1
0x75F011: lea     ecx, [esp+44h+var_5]
0x75F015: push    ecx
0x75F016: push    eax
0x75F017: mov     [esp+4Ch+var_4], 1
0x75F01F: call    edx
0x75F021: add     esp, 3Ch
0x75F024: cmp     [esp+10h+var_5], 0
0x75F029: mov     ecx, esi
0x75F02B: setnz   al
0x75F02E: mov     [edi+0Dh], al
0x75F031: call    sub_712A20
0x75F036: mov     ecx, esi
0x75F038: call    sub_712A20
0x75F03D: mov     ecx, esi
0x75F03F: call    sub_712A20
0x75F044: pop     edi
0x75F045: pop     esi
0x75F046: add     esp, 8
0x75F049: retn    4
