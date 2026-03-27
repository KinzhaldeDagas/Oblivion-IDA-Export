0x6F1470: push    ebx
0x6F1471: mov     ebx, [esp+4+arg_4]
0x6F1475: test    ebx, ebx
0x6F1477: push    esi
0x6F1478: push    edi
0x6F1479: mov     esi, ecx
0x6F147B: jz      short loc_6F1483
0x6F147D: cmp     ebx, [esp+0Ch+arg_C]
0x6F1481: jz      short loc_6F1488
0x6F1483: call    __invalid_parameter_noinfo
0x6F1488: mov     edi, [esp+0Ch+arg_8]
0x6F148C: mov     ecx, [esp+0Ch+arg_10]
0x6F1490: cmp     edi, ecx
0x6F1492: jz      short loc_6F14B9
0x6F1494: mov     eax, [esi+8]
0x6F1497: mov     byte ptr [esp+0Ch+arg_4], 0
0x6F149C: mov     edx, [esp+0Ch+arg_4]
0x6F14A0: push    edx
0x6F14A1: mov     edx, [esp+10h+arg_0]
0x6F14A5: push    edx
0x6F14A6: mov     edx, [esp+14h+arg_0]
0x6F14AA: push    edx
0x6F14AB: push    edi
0x6F14AC: push    eax
0x6F14AD: push    ecx
0x6F14AE: call    sub_6F1240
0x6F14B3: add     esp, 18h
0x6F14B6: mov     [esi+8], eax
0x6F14B9: mov     eax, [esp+0Ch+arg_0]
0x6F14BD: mov     [eax+4], edi
0x6F14C0: pop     edi
0x6F14C1: pop     esi
0x6F14C2: mov     [eax], ebx
0x6F14C4: pop     ebx
0x6F14C5: retn    14h
