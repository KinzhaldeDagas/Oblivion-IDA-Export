0x7633D0: sub     esp, 20h
0x7633D3: push    ebx
0x7633D4: mov     ebx, [esp+24h+arg_4]
0x7633D8: push    ebp
0x7633D9: mov     ebp, [esp+28h+arg_C]
0x7633DD: push    esi
0x7633DE: push    edi
0x7633DF: xor     edi, edi
0x7633E1: cmp     ebp, edi
0x7633E3: mov     esi, ecx
0x7633E5: mov     [esp+30h+var_10], esi
0x7633E9: mov     [esp+30h+var_1C], edi
0x7633ED: mov     [esp+30h+var_14], edi
0x7633F1: mov     [esp+30h+a3], edi
0x7633F5: mov     [esp+30h+var_18], edi
0x7633F9: jz      short loc_763413
0x7633FB: mov     eax, [ebp+0]
0x7633FE: mov     eax, [eax+70h]
0x763401: lea     ecx, [esp+30h+a3]
0x763405: push    ecx
0x763406: lea     edx, [esp+34h+var_14]
0x76340A: push    edx
0x76340B: mov     ecx, ebp
0x76340D: call    eax
0x76340F: test    al, al
0x763411: jnz     short loc_76345E
0x763413: mov     eax, [esp+30h+arg_8]
0x763417: cmp     eax, edi
0x763419: jz      short loc_763426
0x76341B: cmp     word ptr [eax+20h], 4
0x763420: ja      loc_763551
0x763426: lea     ecx, [esp+30h+arg_C]
0x76342A: push    ecx
0x76342B: lea     edx, [esp+34h+arg_4]
0x76342F: push    edx
0x763430: lea     ecx, [esp+38h+var_C]
0x763434: push    ecx
0x763435: lea     edx, [esp+3Ch+var_8]
0x763439: push    edx
0x76343A: lea     ecx, [esp+40h+var_4]
0x76343E: push    ecx
0x76343F: lea     edx, [esp+44h+var_18]
0x763443: push    edx
0x763444: lea     ecx, [esp+48h+var_1C]
0x763448: push    ecx
0x763449: mov     ecx, [esi+8B0h]
0x76344F: push    eax
0x763450: push    ebx
0x763451: mov     [esp+54h+a3], 1
0x763459: call    sub_776DD0
0x76345E: mov     edx, [esp+30h+a3]
0x763462: mov     esi, [esp+30h+arg_0]
0x763466: push    edx; streamCount
0x763467: mov     ecx, esi; this
0x763469: call    sub_777F70
0x76346E: mov     eax, [esp+30h+var_1C]
0x763472: cmp     eax, edi
0x763474: mov     ecx, esi
0x763476: jz      short loc_76348E
0x763478: push    eax
0x763479: call    sub_7780A0
0x76347E: cmp     [esi+1Ch], edi
0x763481: jbe     short loc_7634C1
0x763483: mov     eax, [esi+20h]
0x763486: mov     ecx, [esp+30h+var_18]
0x76348A: mov     [eax], ecx
0x76348C: jmp     short loc_7634C1
0x76348E: mov     edx, [esp+30h+var_14]
0x763492: push    edx
0x763493: call    sub_7780D0
0x763498: cmp     [esp+30h+a3], edi
0x76349C: jbe     short loc_7634BF
0x76349E: mov     edi, edi
0x7634A0: mov     eax, [ebp+0]
0x7634A3: mov     edx, [eax+60h]
0x7634A6: push    edi
0x7634A7: mov     ecx, ebp
0x7634A9: call    edx
0x7634AB: cmp     edi, [esi+1Ch]
0x7634AE: jnb     short loc_7634B6
0x7634B0: mov     ecx, [esi+20h]
0x7634B3: mov     [ecx+edi*4], eax
0x7634B6: add     edi, 1
0x7634B9: cmp     edi, [esp+30h+a3]
0x7634BD: jb      short loc_7634A0
0x7634BF: xor     edi, edi
0x7634C1: cmp     [ebx+20h], edi
0x7634C4: movzx   eax, byte ptr [ebx+2Ch]
0x7634C8: setnz   dl
0x7634CB: and     eax, 3Fh
0x7634CE: xor     ecx, ecx
0x7634D0: cmp     [ebx+24h], edi
0x7634D3: jz      short loc_7634DA
0x7634D5: mov     ecx, 400000h
0x7634DA: test    dl, dl
0x7634DC: jz      short loc_7634E4
0x7634DE: or      ecx, offset loc_800000
0x7634E4: shl     eax, 18h
0x7634E7: or      eax, ecx
0x7634E9: cmp     ebp, edi
0x7634EB: mov     [esi], eax
0x7634ED: jz      short loc_763509
0x7634EF: mov     edx, [esp+30h+var_10]
0x7634F3: cmp     byte ptr [edx+5C8h], 0
0x7634FA: jz      short loc_763509
0x7634FC: mov     eax, [ebp+0]
0x7634FF: mov     edx, [eax+68h]
0x763502: mov     ecx, ebp
0x763504: call    edx
0x763506: mov     [esi+10h], al
0x763509: cmp     [esp+30h+a3], 0
0x76350E: jbe     short loc_76352E
0x763510: mov     eax, [esp+30h+var_10]
0x763514: mov     ecx, [eax+8B0h]
0x76351A: push    edi
0x76351B: push    esi
0x76351C: call    NiGeometryBufferData__RefreshVBChips
0x763521: test    al, al
0x763523: jz      short loc_76353A
0x763525: add     edi, 1
0x763528: cmp     edi, [esp+30h+a3]
0x76352C: jb      short loc_763510
0x76352E: pop     edi
0x76352F: pop     esi
0x763530: pop     ebp
0x763531: mov     al, 1
0x763533: pop     ebx
0x763534: add     esp, 20h
0x763537: retn    10h
0x76353A: test    edi, edi
0x76353C: jbe     short loc_763551
0x76353E: mov     edi, edi
0x763540: mov     ecx, [esi+4]
0x763543: mov     edx, [ecx]
0x763545: mov     eax, [edx+1Ch]
0x763548: push    edi
0x763549: push    esi
0x76354A: call    eax
0x76354C: sub     edi, 1
0x76354F: jnz     short loc_763540
0x763551: pop     edi
0x763552: pop     esi
0x763553: pop     ebp
0x763554: xor     al, al
0x763556: pop     ebx
0x763557: add     esp, 20h
0x76355A: retn    10h
