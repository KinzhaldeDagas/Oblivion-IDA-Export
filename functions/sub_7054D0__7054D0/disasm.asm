0x7054D0: sub     esp, 10h
0x7054D3: push    esi
0x7054D4: push    edi
0x7054D5: mov     edi, [esp+18h+arg_0]
0x7054D9: mov     eax, [edi]
0x7054DB: mov     edx, [eax+2Ch]
0x7054DE: mov     esi, ecx
0x7054E0: mov     ecx, [esi+8]
0x7054E3: push    ecx
0x7054E4: mov     ecx, edi
0x7054E6: call    edx
0x7054E8: cmp     dword ptr [edi+0D8h], 14010002h
0x7054F2: push    1
0x7054F4: jnb     loc_705584
0x7054FA: movzx   eax, word ptr [esi+4]
0x7054FE: shr     eax, 0Ch
0x705501: lea     ecx, [esp+1Ch+var_10]
0x705505: push    ecx
0x705506: and     eax, 3
0x705509: mov     [esp+20h+var_C], eax
0x70550D: mov     eax, [edi+220h]
0x705513: push    4
0x705515: lea     edx, [esp+24h+var_C]
0x705519: push    edx
0x70551A: push    eax
0x70551B: mov     eax, [eax+8]
0x70551E: mov     [esp+2Ch+var_10], 4
0x705526: call    eax
0x705528: movzx   ecx, byte ptr [esi+5]
0x70552C: mov     eax, [edi+220h]
0x705532: push    1
0x705534: and     ecx, 0Fh
0x705537: lea     edx, [esp+30h+var_10]
0x70553B: push    edx
0x70553C: mov     [esp+34h+var_8], ecx
0x705540: mov     edx, [eax+8]
0x705543: push    4
0x705545: lea     ecx, [esp+38h+var_8]
0x705549: push    ecx
0x70554A: push    eax
0x70554B: mov     [esp+40h+var_10], 4
0x705553: call    edx
0x705555: movzx   eax, byte ptr [esi+4]
0x705559: push    1
0x70555B: lea     ecx, [esp+44h+var_10]
0x70555F: push    ecx
0x705560: mov     [esp+48h+var_4], eax
0x705564: mov     eax, [edi+220h]
0x70556A: push    4
0x70556C: lea     edx, [esp+4Ch+var_4]
0x705570: push    edx
0x705571: push    eax
0x705572: mov     eax, [eax+8]
0x705575: mov     [esp+54h+var_10], 4
0x70557D: call    eax
0x70557F: add     esp, 3Ch
0x705582: jmp     short loc_7055A6
0x705584: mov     eax, [edi+220h]
0x70558A: lea     ecx, [esp+1Ch+var_4]
0x70558E: push    ecx
0x70558F: push    2
0x705591: lea     edx, [esi+4]
0x705594: push    edx
0x705595: push    eax
0x705596: mov     eax, [eax+8]
0x705599: mov     [esp+2Ch+var_4], 2
0x7055A1: call    eax
0x7055A3: add     esp, 14h
0x7055A6: cmp     dword ptr [esi+0Ch], 0
0x7055AA: mov     eax, [edi+220h]
0x7055B0: push    1
0x7055B2: setnz   cl
0x7055B5: lea     edx, [esp+1Ch+var_4]
0x7055B9: push    edx
0x7055BA: mov     byte ptr [esp+20h+arg_0], cl
0x7055BE: mov     edx, [eax+8]
0x7055C1: push    1
0x7055C3: lea     ecx, [esp+24h+arg_0]
0x7055C7: push    ecx
0x7055C8: push    eax
0x7055C9: mov     [esp+2Ch+var_4], 1
0x7055D1: call    edx
0x7055D3: mov     ecx, [esi+0Ch]
0x7055D6: add     esp, 14h
0x7055D9: test    ecx, ecx
0x7055DB: jz      short loc_7055E3
0x7055DD: push    edi
0x7055DE: call    sub_730010
0x7055E3: pop     edi
0x7055E4: pop     esi
0x7055E5: add     esp, 10h
0x7055E8: retn    4
