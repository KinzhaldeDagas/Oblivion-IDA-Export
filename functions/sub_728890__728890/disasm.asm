0x728890: push    ebx
0x728891: push    ebp
0x728892: push    esi
0x728893: mov     esi, ecx
0x728895: mov     eax, [esi]
0x728897: mov     edx, [eax+44h]
0x72889A: push    edi
0x72889B: call    edx
0x72889D: test    eax, eax
0x72889F: jz      loc_72894B
0x7288A5: mov     eax, [esp+10h+arg_4]
0x7288A9: or      ebx, 0FFFFFFFFh
0x7288AC: cmp     eax, [esi+1Ch]
0x7288AF: jz      short loc_7288D1
0x7288B1: mov     edx, [esi]
0x7288B3: mov     eax, [edx+44h]
0x7288B6: mov     ecx, esi
0x7288B8: call    eax
0x7288BA: mov     edi, eax
0x7288BC: add     [edi+0Ch], ebx
0x7288BF: jnz     short loc_7288D1
0x7288C1: mov     ecx, edi
0x7288C3: call    sub_732A20
0x7288C8: push    edi
0x7288C9: call    FormHeapFree
0x7288CE: add     esp, 4
0x7288D1: mov     ecx, [esp+10h+arg_8]
0x7288D5: cmp     ecx, [esi+20h]
0x7288D8: jz      short loc_7288FA
0x7288DA: mov     edx, [esi]
0x7288DC: mov     eax, [edx+44h]
0x7288DF: mov     ecx, esi
0x7288E1: call    eax
0x7288E3: mov     edi, eax
0x7288E5: add     [edi+0Ch], ebx
0x7288E8: jnz     short loc_7288FA
0x7288EA: mov     ecx, edi
0x7288EC: call    sub_732A20
0x7288F1: push    edi
0x7288F2: call    FormHeapFree
0x7288F7: add     esp, 4
0x7288FA: mov     ecx, [esp+10h+arg_C]
0x7288FE: cmp     ecx, [esi+24h]
0x728901: jz      short loc_728923
0x728903: mov     edx, [esi]
0x728905: mov     eax, [edx+44h]
0x728908: mov     ecx, esi
0x72890A: call    eax
0x72890C: mov     edi, eax
0x72890E: add     [edi+0Ch], ebx
0x728911: jnz     short loc_728923
0x728913: mov     ecx, edi
0x728915: call    sub_732A20
0x72891A: push    edi
0x72891B: call    FormHeapFree
0x728920: add     esp, 4
0x728923: mov     ebp, [esp+10h+arg_10]
0x728927: cmp     ebp, [esi+28h]
0x72892A: jz      short loc_728995
0x72892C: mov     edx, [esi]
0x72892E: mov     eax, [edx+44h]
0x728931: mov     ecx, esi
0x728933: call    eax
0x728935: mov     edi, eax
0x728937: add     [edi+0Ch], ebx
0x72893A: jnz     short loc_728995
0x72893C: mov     ecx, edi
0x72893E: call    sub_732A20
0x728943: push    edi
0x728944: call    FormHeapFree
0x728949: jmp     short loc_728992
0x72894B: mov     eax, [esi+1Ch]
0x72894E: cmp     [esp+10h+arg_4], eax
0x728952: jz      short loc_72895D
0x728954: push    eax
0x728955: call    FormHeapFree
0x72895A: add     esp, 4
0x72895D: mov     eax, [esi+20h]
0x728960: cmp     [esp+10h+arg_8], eax
0x728964: jz      short loc_72896F
0x728966: push    eax
0x728967: call    FormHeapFree
0x72896C: add     esp, 4
0x72896F: mov     eax, [esi+24h]
0x728972: cmp     [esp+10h+arg_C], eax
0x728976: jz      short loc_728981
0x728978: push    eax
0x728979: call    FormHeapFree
0x72897E: add     esp, 4
0x728981: mov     eax, [esi+28h]
0x728984: mov     ebp, [esp+10h+arg_10]
0x728988: cmp     ebp, eax
0x72898A: jz      short loc_728995
0x72898C: push    eax
0x72898D: call    FormHeapFree
0x728992: add     esp, 4
0x728995: mov     edx, [esp+10h+arg_4]
0x728999: mov     cx, [esp+10h+arg_0]
0x72899E: mov     eax, [esp+10h+arg_8]
0x7289A2: mov     [esi+1Ch], edx
0x7289A5: mov     edx, [esi]
0x7289A7: mov     [esi+8], cx
0x7289AB: mov     [esi+20h], eax
0x7289AE: mov     eax, [edx+50h]
0x7289B1: mov     ecx, esi
0x7289B3: call    eax
0x7289B5: movzx   eax, ax
0x7289B8: test    ax, ax
0x7289BB: jz      short loc_7289D1
0x7289BD: mov     ecx, [esi+1Ch]
0x7289C0: test    ecx, ecx
0x7289C2: jz      short loc_7289D1
0x7289C4: push    ecx
0x7289C5: movzx   ecx, ax
0x7289C8: push    ecx
0x7289C9: lea     ecx, [esi+0Ch]
0x7289CC: call    sub_72A0F0
0x7289D1: mov     ax, [esi+2Ch]
0x7289D5: movzx   ecx, [esp+10h+arg_14]
0x7289DA: mov     edx, [esp+10h+arg_C]
0x7289DE: and     ax, 0FC0h
0x7289E2: and     ecx, 3Fh
0x7289E5: or      ax, cx
0x7289E8: or      ax, [esp+10h+arg_18]
0x7289ED: pop     edi
0x7289EE: mov     [esi+28h], ebp
0x7289F1: mov     [esi+24h], edx
0x7289F4: mov     [esi+2Ch], ax
0x7289F8: pop     esi
0x7289F9: pop     ebp
0x7289FA: pop     ebx
0x7289FB: retn    1Ch
