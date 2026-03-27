0x772870: push    ebp
0x772871: push    esi
0x772872: mov     esi, [esp+8+arg_0]
0x772876: push    edi
0x772877: xor     edi, edi
0x772879: cmp     esi, edi
0x77287B: mov     ebp, ecx
0x77287D: mov     [ebp+4], esi
0x772880: mov     [ebp+8], edi
0x772883: jbe     short loc_7728C3
0x772885: xor     ecx, ecx
0x772887: mov     eax, esi
0x772889: mov     edx, 14h
0x77288E: mul     edx
0x772890: seto    cl
0x772893: neg     ecx
0x772895: or      ecx, eax
0x772897: xor     eax, eax
0x772899: add     ecx, 4
0x77289C: setb    al
0x77289F: neg     eax
0x7728A1: or      eax, ecx
0x7728A3: push    eax; Size
0x7728A4: call    FormHeapAlloc
0x7728A9: add     esp, 4
0x7728AC: cmp     eax, edi
0x7728AE: jz      short loc_7728C3
0x7728B0: push    offset sub_7726A0
0x7728B5: push    esi
0x7728B6: lea     edi, [eax+4]
0x7728B9: push    14h
0x7728BB: push    edi
0x7728BC: mov     [eax], esi
0x7728BE: call    sub_401080
0x7728C3: mov     [ebp+0], edi
0x7728C6: pop     edi
0x7728C7: pop     esi
0x7728C8: mov     eax, ebp
0x7728CA: pop     ebp
0x7728CB: retn    4
