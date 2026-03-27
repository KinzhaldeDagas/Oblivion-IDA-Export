0x7052F0: sub     esp, 8
0x7052F3: push    ebp
0x7052F4: push    esi
0x7052F5: mov     esi, [esp+10h+arg_0]
0x7052F9: push    edi
0x7052FA: mov     edi, ecx
0x7052FC: mov     ecx, esi
0x7052FE: call    sub_712A20
0x705303: cmp     dword ptr [esi+0D8h], 14010002h
0x70530D: mov     eax, [esi+21Ch]
0x705313: mov     ebp, 2
0x705318: push    1
0x70531A: jnb     loc_7053C2
0x705320: lea     ecx, [esp+18h+arg_0]
0x705324: push    ecx
0x705325: push    4
0x705327: lea     edx, [esp+20h+var_8]
0x70532B: push    edx
0x70532C: push    eax
0x70532D: mov     eax, [eax+4]
0x705330: mov     [esp+28h+arg_0], 4
0x705338: call    eax
0x70533A: movzx   ecx, word ptr [edi+4]
0x70533E: mov     edx, [esp+28h+var_8]
0x705342: and     cx, 0CFFFh
0x705347: shl     edx, 0Ch
0x70534A: or      cx, dx
0x70534D: mov     [edi+4], cx
0x705351: mov     eax, [esi+21Ch]
0x705357: push    1
0x705359: lea     ecx, [esp+2Ch+arg_0]
0x70535D: push    ecx
0x70535E: push    4
0x705360: lea     edx, [esp+34h+var_8]
0x705364: push    edx
0x705365: push    eax
0x705366: mov     eax, [eax+4]
0x705369: mov     [esp+3Ch+arg_0], 4
0x705371: call    eax
0x705373: movzx   ecx, word ptr [edi+4]
0x705377: xor     edx, edx
0x705379: mov     dh, byte ptr [esp+3Ch+var_8]
0x70537D: and     cx, 0F0FFh
0x705382: push    1
0x705384: mov     [esp+40h+arg_0], 4
0x70538C: or      cx, dx
0x70538F: mov     [edi+4], cx
0x705393: mov     eax, [esi+21Ch]
0x705399: lea     ecx, [esp+40h+arg_0]
0x70539D: push    ecx
0x70539E: push    4
0x7053A0: lea     edx, [esp+48h+var_4]
0x7053A4: push    edx
0x7053A5: push    eax
0x7053A6: mov     eax, [eax+4]
0x7053A9: call    eax
0x7053AB: movzx   ecx, word ptr [edi+4]
0x7053AF: and     cx, 0FF00h
0x7053B4: add     esp, 3Ch
0x7053B7: or      cx, word ptr [esp+14h+var_4]
0x7053BC: mov     [edi+4], cx
0x7053C0: jmp     short loc_7053D9
0x7053C2: lea     edx, [esp+18h+arg_0]
0x7053C6: push    edx
0x7053C7: mov     edx, [eax+4]
0x7053CA: push    ebp
0x7053CB: lea     ecx, [edi+4]
0x7053CE: push    ecx
0x7053CF: push    eax
0x7053D0: mov     [esp+28h+arg_0], ebp
0x7053D4: call    edx
0x7053D6: add     esp, 14h
0x7053D9: cmp     dword ptr [esi+0D8h], 0A030004h
0x7053E3: jnb     short loc_705422
0x7053E5: mov     eax, [esi+21Ch]
0x7053EB: push    1
0x7053ED: lea     ecx, [esp+18h+var_4]
0x7053F1: push    ecx
0x7053F2: push    ebp
0x7053F3: lea     edx, [esp+20h+arg_0]
0x7053F7: push    edx
0x7053F8: push    eax
0x7053F9: mov     eax, [eax+4]
0x7053FC: mov     [esp+28h+var_4], ebp
0x705400: call    eax
0x705402: mov     eax, [esi+21Ch]
0x705408: push    1
0x70540A: lea     ecx, [esp+2Ch+var_4]
0x70540E: push    ecx
0x70540F: push    ebp
0x705410: lea     edx, [esp+34h+arg_0]
0x705414: push    edx
0x705415: push    eax
0x705416: mov     eax, [eax+4]
0x705419: mov     [esp+3Ch+var_4], ebp
0x70541D: call    eax
0x70541F: add     esp, 28h
0x705422: cmp     dword ptr [esi+0D8h], 4010010h
0x70542C: jnb     short loc_70544E
0x70542E: mov     eax, [esi+21Ch]
0x705434: push    1
0x705436: lea     ecx, [esp+18h+var_4]
0x70543A: push    ecx
0x70543B: push    ebp
0x70543C: lea     edx, [esp+20h+arg_0]
0x705440: push    edx
0x705441: push    eax
0x705442: mov     eax, [eax+4]
0x705445: mov     [esp+28h+var_4], ebp
0x705449: call    eax
0x70544B: add     esp, 14h
0x70544E: cmp     dword ptr [esi+0D8h], 0A00010Ah
0x705458: jb      short loc_7054C3
0x70545A: push    1
0x70545C: lea     ecx, [esp+18h+var_4]
0x705460: push    ecx
0x705461: mov     dword ptr [edi+0Ch], 0
0x705468: mov     eax, [esi+21Ch]
0x70546E: push    1
0x705470: lea     edx, [esp+20h+arg_0]
0x705474: push    edx
0x705475: push    eax
0x705476: mov     eax, [eax+4]
0x705479: mov     [esp+28h+var_4], 1
0x705481: call    eax
0x705483: add     esp, 14h
0x705486: cmp     byte ptr [esp+14h+arg_0], 1
0x70548B: jnz     short loc_7054C3
0x70548D: push    48h ; 'H'; Size
0x70548F: call    FormHeapAlloc
0x705494: add     esp, 4
0x705497: test    eax, eax
0x705499: jz      short loc_7054B6
0x70549B: mov     ecx, eax
0x70549D: call    sub_703A30
0x7054A2: push    esi
0x7054A3: mov     ecx, eax
0x7054A5: mov     [edi+0Ch], eax
0x7054A8: call    sub_72FF90
0x7054AD: pop     edi
0x7054AE: pop     esi
0x7054AF: pop     ebp
0x7054B0: add     esp, 8
0x7054B3: retn    4
0x7054B6: xor     eax, eax
0x7054B8: push    esi
0x7054B9: mov     ecx, eax
0x7054BB: mov     [edi+0Ch], eax
0x7054BE: call    sub_72FF90
0x7054C3: pop     edi
0x7054C4: pop     esi
0x7054C5: pop     ebp
0x7054C6: add     esp, 8
0x7054C9: retn    4
