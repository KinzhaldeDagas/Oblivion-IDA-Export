0x73C0B0: sub     esp, 8
0x73C0B3: push    ebx
0x73C0B4: push    esi
0x73C0B5: mov     esi, [esp+10h+arg_0]
0x73C0B9: push    edi
0x73C0BA: push    esi
0x73C0BB: mov     edi, ecx
0x73C0BD: call    sub_708EB0
0x73C0C2: push    esi
0x73C0C3: lea     ecx, [edi+0DCh]
0x73C0C9: call    sub_711B90
0x73C0CE: push    esi
0x73C0CF: lea     ecx, [edi+100h]
0x73C0D5: call    sub_709430
0x73C0DA: mov     eax, [esi+21Ch]
0x73C0E0: push    1
0x73C0E2: lea     ecx, [esp+18h+var_8]
0x73C0E6: push    ecx
0x73C0E7: mov     ebx, 4
0x73C0EC: push    ebx
0x73C0ED: lea     edx, [esp+20h+var_4]
0x73C0F1: push    edx
0x73C0F2: push    eax
0x73C0F3: mov     eax, [eax+4]
0x73C0F6: mov     [esp+28h+var_8], ebx
0x73C0FA: call    eax
0x73C0FC: mov     ecx, [esp+28h+var_4]
0x73C100: push    1
0x73C102: lea     edx, [esp+2Ch+var_4]
0x73C106: push    edx
0x73C107: mov     [edi+140h], ecx
0x73C10D: mov     eax, [esi+21Ch]
0x73C113: mov     edx, [eax+4]
0x73C116: push    ebx
0x73C117: lea     ecx, [esp+34h+var_8]
0x73C11B: push    ecx
0x73C11C: push    eax
0x73C11D: mov     [esp+3Ch+var_4], ebx
0x73C121: call    edx
0x73C123: mov     eax, [esp+3Ch+var_8]
0x73C127: push    1
0x73C129: lea     ecx, [esp+40h+var_4]
0x73C12D: push    ecx
0x73C12E: mov     [edi+144h], eax
0x73C134: mov     eax, [esi+21Ch]
0x73C13A: push    ebx
0x73C13B: lea     edx, [esp+48h+var_8]
0x73C13F: push    edx
0x73C140: push    eax
0x73C141: mov     eax, [eax+4]
0x73C144: mov     [esp+50h+var_4], ebx
0x73C148: call    eax
0x73C14A: mov     ecx, [esp+50h+var_8]
0x73C14E: push    1
0x73C150: lea     edx, [esp+54h+var_4]
0x73C154: push    edx
0x73C155: mov     [edi+148h], ecx
0x73C15B: mov     eax, [esi+21Ch]
0x73C161: mov     edx, [eax+4]
0x73C164: push    ebx
0x73C165: lea     ecx, [esp+5Ch+var_8]
0x73C169: push    ecx
0x73C16A: push    eax
0x73C16B: mov     [esp+64h+var_4], ebx
0x73C16F: call    edx
0x73C171: mov     eax, [esp+64h+var_8]
0x73C175: add     esp, 50h
0x73C178: mov     ecx, esi
0x73C17A: mov     [edi+14Ch], eax
0x73C180: call    sub_712A20
0x73C185: mov     eax, [esi+21Ch]
0x73C18B: push    1
0x73C18D: lea     ecx, [esp+18h+var_4]
0x73C191: push    ecx
0x73C192: push    1
0x73C194: lea     edx, [esp+20h+arg_0]
0x73C198: push    edx
0x73C199: push    eax
0x73C19A: mov     eax, [eax+4]
0x73C19D: mov     [esp+28h+var_4], 1
0x73C1A5: call    eax
0x73C1A7: add     esp, 14h
0x73C1AA: cmp     byte ptr [esp+14h+arg_0], 0
0x73C1AF: push    esi
0x73C1B0: setnz   cl
0x73C1B3: mov     [edi+150h], cl
0x73C1B9: lea     ecx, [edi+154h]
0x73C1BF: call    sub_716EA0
0x73C1C4: cmp     dword ptr [esi+0D8h], 0A030004h
0x73C1CE: mov     edi, 2
0x73C1D3: jnb     short loc_73C212
0x73C1D5: mov     eax, [esi+21Ch]
0x73C1DB: push    1
0x73C1DD: lea     edx, [esp+18h+var_4]
0x73C1E1: push    edx
0x73C1E2: mov     edx, [eax+4]
0x73C1E5: push    edi
0x73C1E6: lea     ecx, [esp+20h+var_8]
0x73C1EA: push    ecx
0x73C1EB: push    eax
0x73C1EC: mov     [esp+28h+var_4], edi
0x73C1F0: call    edx
0x73C1F2: mov     eax, [esi+21Ch]
0x73C1F8: push    1
0x73C1FA: lea     ecx, [esp+2Ch+var_4]
0x73C1FE: push    ecx
0x73C1FF: push    edi
0x73C200: lea     edx, [esp+34h+var_8]
0x73C204: push    edx
0x73C205: push    eax
0x73C206: mov     eax, [eax+4]
0x73C209: mov     [esp+3Ch+var_4], edi
0x73C20D: call    eax
0x73C20F: add     esp, 28h
0x73C212: cmp     dword ptr [esi+0D8h], 4010010h
0x73C21C: jnb     short loc_73C23E
0x73C21E: mov     esi, [esi+21Ch]
0x73C224: mov     eax, [esi+4]
0x73C227: push    1
0x73C229: lea     ecx, [esp+18h+var_4]
0x73C22D: push    ecx
0x73C22E: push    edi
0x73C22F: lea     edx, [esp+20h+var_8]
0x73C233: push    edx
0x73C234: push    esi
0x73C235: mov     [esp+28h+var_4], edi
0x73C239: call    eax
0x73C23B: add     esp, 14h
0x73C23E: pop     edi
0x73C23F: pop     esi
0x73C240: pop     ebx
0x73C241: add     esp, 8
0x73C244: retn    4
