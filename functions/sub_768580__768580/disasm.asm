0x768580: sub     esp, 18h
0x768583: mov     eax, [esp+18h+arg_8]
0x768587: mov     eax, [eax+0Ch]
0x76858A: push    esi
0x76858B: mov     esi, [eax+0Ch]
0x76858E: mov     eax, [eax+8]
0x768591: test    eax, eax
0x768593: mov     [esp+1Ch+var_14], ecx
0x768597: mov     cl, 1
0x768599: mov     [esp+1Ch+var_15], cl
0x76859D: jbe     loc_7686F0
0x7685A3: push    ebx
0x7685A4: add     esi, 1Ch
0x7685A7: push    ebp
0x7685A8: mov     [esp+24h+var_10], esi
0x7685AC: mov     [esp+24h+var_C], eax
0x7685B0: push    edi
0x7685B1: mov     edi, [esi+0Ch]
0x7685B4: mov     ecx, edi
0x7685B6: call    sub_777F10
0x7685BB: test    al, al
0x7685BD: jnz     loc_7686D0
0x7685C3: movzx   eax, word ptr [esi]
0x7685C6: movzx   ecx, word ptr [esi+6]
0x7685CA: test    cx, cx
0x7685CD: movzx   edx, word ptr [esi+2]
0x7685D1: mov     ebx, [esi-8]
0x7685D4: mov     ebp, [esi-4]
0x7685D7: movzx   eax, ax
0x7685DA: mov     [edi+14h], eax
0x7685DD: mov     [edi+18h], eax
0x7685E0: jnz     short loc_7685E9
0x7685E2: mov     ecx, 1
0x7685E7: jmp     short loc_7685EC
0x7685E9: movzx   ecx, cx
0x7685EC: movzx   eax, dx
0x7685EF: mov     edx, [esp+28h+arg_4]
0x7685F3: mov     [edi+44h], ecx
0x7685F6: mov     ecx, [esp+28h+arg_C]
0x7685FA: push    ecx
0x7685FB: mov     ecx, [esp+2Ch+var_14]
0x7685FF: mov     [edi+3Ch], eax
0x768602: mov     [edi+40h], eax
0x768605: lea     eax, [esi-1Ch]
0x768608: push    eax
0x768609: push    edx
0x76860A: push    edi
0x76860B: mov     [edi+4Ch], ebx
0x76860E: mov     [edi+48h], ebp
0x768611: call    sub_7633D0
0x768616: test    al, al
0x768618: jz      loc_7686CB
0x76861E: mov     eax, [edi+1Ch]
0x768621: xor     ebp, ebp
0x768623: test    eax, eax
0x768625: mov     [esp+28h+var_4], eax
0x768629: jbe     loc_7686D0
0x76862F: nop
0x768630: cmp     ebp, [edi+1Ch]
0x768633: jnb     short loc_76863D
0x768635: mov     eax, [edi+24h]
0x768638: mov     eax, [eax+ebp*4]
0x76863B: jmp     short loc_76863F
0x76863D: xor     eax, eax
0x76863F: mov     ebx, [eax+4]
0x768642: push    24h ; '$'; Size
0x768644: call    FormHeapAlloc
0x768649: mov     ecx, [esp+2Ch+arg_4]
0x76864D: mov     edx, [esp+2Ch+arg_8]
0x768651: mov     esi, eax
0x768653: mov     eax, [esp+2Ch+var_10]
0x768657: add     eax, 0FFFFFFE4h
0x76865A: mov     [esi+8], eax
0x76865D: mov     eax, [esp+2Ch+arg_C]
0x768661: mov     [esi], ecx
0x768663: mov     ecx, [esp+2Ch+arg_10]
0x768667: add     esp, 4
0x76866A: mov     [esi+0Ch], eax
0x76866D: mov     [esi+10h], ecx
0x768670: mov     ecx, [esp+28h+var_14]
0x768674: lea     eax, [esp+28h+var_8]
0x768678: mov     [esi+4], edx
0x76867B: mov     edx, [esp+28h+arg_14]
0x76867F: push    eax
0x768680: push    ebx
0x768681: add     ecx, 604h
0x768687: mov     [esi+14h], edx
0x76868A: mov     dword ptr [esi+20h], 0
0x768691: mov     [esi+18h], edi
0x768694: mov     [esi+1Ch], ebp
0x768697: call    NiTMap_GetAt
0x76869C: mov     ecx, [esp+28h+var_14]
0x7686A0: neg     al
0x7686A2: push    esi; a3
0x7686A3: push    ebx; a2
0x7686A4: sbb     eax, eax
0x7686A6: and     eax, [esp+30h+var_8]
0x7686AA: add     ecx, 604h; this
0x7686B0: mov     [esi+20h], eax
0x7686B3: call    NiTMap_SetAt
0x7686B8: add     ebp, 1
0x7686BB: cmp     ebp, [esp+28h+var_4]
0x7686BF: jb      loc_768630
0x7686C5: mov     esi, [esp+28h+var_10]
0x7686C9: jmp     short loc_7686D0
0x7686CB: mov     [esp+28h+var_15], 0
0x7686D0: add     esi, 2Ch ; ','
0x7686D3: sub     [esp+28h+var_C], 1
0x7686D8: mov     [esp+28h+var_10], esi
0x7686DC: jnz     loc_7685B1
0x7686E2: mov     al, [esp+28h+var_15]
0x7686E6: pop     edi
0x7686E7: pop     ebp
0x7686E8: pop     ebx
0x7686E9: pop     esi
0x7686EA: add     esp, 18h
0x7686ED: retn    18h
0x7686F0: mov     al, cl
0x7686F2: pop     esi
0x7686F3: add     esp, 18h
0x7686F6: retn    18h
