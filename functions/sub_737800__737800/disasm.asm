0x737800: sub     esp, 1Ch
0x737803: push    ebx
0x737804: push    esi
0x737805: mov     esi, [esp+24h+arg_0]
0x737809: mov     eax, [esi]
0x73780B: mov     edx, [eax+8]
0x73780E: mov     ebx, ecx
0x737810: push    0
0x737812: mov     ecx, esi
0x737814: call    edx
0x737816: mov     eax, [esp+24h+arg_14]
0x73781A: push    1
0x73781C: lea     ecx, [esp+28h+arg_14]
0x737820: push    ecx
0x737821: push    2
0x737823: lea     edx, [esp+30h+arg_0]
0x737827: push    edx
0x737828: mov     dword ptr [eax], 1
0x73782E: mov     eax, [esi+4]
0x737831: push    esi
0x737832: mov     [esp+38h+arg_14], 2
0x73783A: call    eax
0x73783C: add     esp, 14h
0x73783F: cmp     word ptr [esp+24h+arg_0], 4D42h
0x737846: jz      short loc_737852
0x737848: pop     esi
0x737849: xor     al, al
0x73784B: pop     ebx
0x73784C: add     esp, 1Ch
0x73784F: retn    18h
0x737852: push    ebp
0x737853: push    edi
0x737854: lea     ebp, [ebx+80h]
0x73785A: push    ebp; lpCriticalSection
0x73785B: call    dword ptr ds:0A2806Ch
0x737861: call    dword ptr ds:0A2808Ch
0x737867: add     dword ptr [ebp+7Ch], 1
0x73786B: push    1
0x73786D: lea     ecx, [esp+30h+arg_14]
0x737871: push    ecx
0x737872: mov     edi, 4
0x737877: push    edi
0x737878: lea     edx, [esp+38h+var_1C]
0x73787C: push    edx
0x73787D: mov     [ebp+78h], eax
0x737880: mov     eax, [esi+4]
0x737883: push    esi
0x737884: mov     [esp+40h+arg_14], edi
0x737888: call    eax
0x73788A: mov     eax, [esi+4]
0x73788D: push    1
0x73788F: lea     ecx, [esp+44h+arg_14]
0x737893: push    ecx
0x737894: push    2
0x737896: lea     edx, [esp+4Ch+arg_0]
0x73789A: push    edx
0x73789B: push    esi
0x73789C: mov     [esp+54h+arg_14], 2
0x7378A4: call    eax
0x7378A6: mov     eax, [esi+4]
0x7378A9: push    1
0x7378AB: lea     ecx, [esp+58h+arg_14]
0x7378AF: push    ecx
0x7378B0: push    2
0x7378B2: lea     edx, [esp+60h+arg_0]
0x7378B6: push    edx
0x7378B7: push    esi
0x7378B8: mov     [esp+68h+arg_14], 2
0x7378C3: call    eax
0x7378C5: mov     eax, [esi+4]
0x7378C8: push    1
0x7378CA: lea     ecx, [esp+6Ch+arg_14]
0x7378D1: push    ecx
0x7378D2: push    edi
0x7378D3: lea     edx, [ebx+154h]
0x7378D9: push    edx
0x7378DA: push    esi
0x7378DB: mov     [esp+7Ch+arg_14], edi
0x7378E2: call    eax
0x7378E4: mov     eax, [esi+4]
0x7378E7: add     esp, 50h
0x7378EA: push    1
0x7378EC: lea     ecx, [esp+30h+arg_14]
0x7378F0: push    ecx
0x7378F1: push    edi
0x7378F2: lea     edx, [esp+38h+var_14]
0x7378F6: push    edx
0x7378F7: push    esi
0x7378F8: mov     [esp+40h+arg_14], edi
0x7378FC: call    eax
0x7378FE: mov     eax, [esi+4]
0x737901: push    1
0x737903: lea     ecx, [esp+44h+arg_14]
0x737907: push    ecx
0x737908: push    edi
0x737909: lea     edx, [esp+4Ch+var_C]
0x73790D: push    edx
0x73790E: push    esi
0x73790F: mov     [esp+54h+arg_14], edi
0x737913: call    eax
0x737915: mov     eax, [esi+4]
0x737918: push    1
0x73791A: lea     ecx, [esp+58h+arg_14]
0x73791E: push    ecx
0x73791F: push    edi
0x737920: lea     edx, [esp+60h+var_8]
0x737924: push    edx
0x737925: push    esi
0x737926: mov     [esp+68h+arg_14], edi
0x73792D: call    eax
0x73792F: mov     [esp+68h+arg_14], 2
0x73793A: mov     eax, [esi+4]
0x73793D: push    1
0x73793F: lea     ecx, [esp+6Ch+arg_14]
0x737946: push    ecx
0x737947: push    2
0x737949: lea     edx, [esp+74h+arg_0]
0x73794D: push    edx
0x73794E: push    esi
0x73794F: call    eax
0x737951: mov     edx, [esi+4]
0x737954: add     esp, 50h
0x737957: push    1
0x737959: lea     ecx, [esp+30h+arg_14]
0x73795D: push    ecx
0x73795E: lea     eax, [ebx+14Ch]
0x737964: push    2
0x737966: push    eax
0x737967: push    esi
0x737968: mov     [esp+40h+arg_14], 2
0x737970: call    edx
0x737972: mov     edx, [esi+4]
0x737975: push    1
0x737977: lea     eax, [esp+44h+arg_14]
0x73797B: push    eax
0x73797C: push    edi
0x73797D: lea     ecx, [esp+4Ch+var_10]
0x737981: push    ecx
0x737982: push    esi
0x737983: mov     [esp+54h+arg_14], edi
0x737987: call    edx
0x737989: mov     edx, [esi+4]
0x73798C: push    1
0x73798E: lea     eax, [esp+58h+arg_14]
0x737992: push    eax
0x737993: push    edi
0x737994: lea     ecx, [esp+60h+var_1C]
0x737998: push    ecx
0x737999: push    esi
0x73799A: mov     [esp+68h+arg_14], edi
0x7379A1: call    edx
0x7379A3: mov     edx, [esi+4]
0x7379A6: push    1
0x7379A8: lea     eax, [esp+6Ch+arg_14]
0x7379AF: push    eax
0x7379B0: push    edi
0x7379B1: lea     ecx, [esp+74h+var_18]
0x7379B5: push    ecx
0x7379B6: push    esi
0x7379B7: mov     [esp+7Ch+arg_14], edi
0x7379BE: call    edx
0x7379C0: mov     edx, [esi+4]
0x7379C3: add     esp, 50h
0x7379C6: push    1
0x7379C8: lea     eax, [esp+30h+arg_14]
0x7379CC: push    eax
0x7379CD: push    edi
0x7379CE: lea     ecx, [esp+38h+var_18]
0x7379D2: push    ecx
0x7379D3: push    esi
0x7379D4: mov     [esp+40h+arg_14], edi
0x7379D8: call    edx
0x7379DA: mov     edx, [esi+4]
0x7379DD: push    1
0x7379DF: lea     ecx, [esp+44h+arg_14]
0x7379E3: push    ecx
0x7379E4: lea     eax, [ebx+150h]
0x7379EA: push    edi
0x7379EB: push    eax
0x7379EC: push    esi
0x7379ED: mov     [esp+54h+arg_14], edi
0x7379F1: call    edx
0x7379F3: mov     edx, [esi+4]
0x7379F6: push    1
0x7379F8: lea     eax, [esp+58h+arg_14]
0x7379FC: push    eax
0x7379FD: push    edi
0x7379FE: lea     ecx, [esp+60h+var_1C]
0x737A02: push    ecx
0x737A03: push    esi
0x737A04: mov     [esp+68h+arg_14], edi
0x737A0B: call    edx
0x737A0D: add     esp, 3Ch
0x737A10: cmp     [esp+2Ch+var_14], edi
0x737A14: jz      def_737A3F; jumptable 00737A3F default case, cases 5-7,9-23,25-31
0x737A1A: movzx   eax, word ptr [ebx+14Ch]
0x737A21: mov     [esp+2Ch+arg_14], eax
0x737A25: movzx   eax, ax
0x737A28: mov     [esp+2Ch+var_4], eax
0x737A2C: add     eax, 0FFFFFFFCh; switch 29 cases
0x737A2F: cmp     eax, 1Ch
0x737A32: ja      def_737A3F; jumptable 00737A3F default case, cases 5-7,9-23,25-31
0x737A38: movzx   eax, ds:byte_737B38[eax]
0x737A3F: jmp     ds:jpt_737A3F[eax*4]; switch jump
0x737A46: mov     esi, offset unk_B25D70; jumptable 00737A3F cases 4,8
0x737A4B: jmp     short loc_737A59
0x737A4D: mov     esi, offset unk_B25E48; jumptable 00737A3F case 24
0x737A52: jmp     short loc_737A59
0x737A54: mov     esi, offset unk_B25E00; jumptable 00737A3F case 32
0x737A59: mov     eax, [esp+2Ch+var_10]
0x737A5D: cmp     eax, 2
0x737A60: lea     edx, [ebx+108h]
0x737A66: mov     ecx, 11h
0x737A6B: mov     edi, edx
0x737A6D: rep movsd
0x737A6F: jz      def_737A3F; jumptable 00737A3F default case, cases 5-7,9-23,25-31
0x737A75: cmp     eax, 1
0x737A78: jz      def_737A3F; jumptable 00737A3F default case, cases 5-7,9-23,25-31
0x737A7E: mov     eax, [esp+2Ch+var_8]
0x737A82: mov     esi, [esp+2Ch+var_C]
0x737A86: test    eax, eax
0x737A88: setnl   cl
0x737A8B: test    eax, eax
0x737A8D: mov     [ebx+100h], esi
0x737A93: mov     [ebx+158h], cl
0x737A99: jg      short loc_737A9D
0x737A9B: neg     eax
0x737A9D: cmp     dword ptr [ebx+150h], 0
0x737AA4: mov     [ebx+104h], eax
0x737AAA: jnz     short loc_737ACD
0x737AAC: mov     eax, [esp+2Ch+arg_14]
0x737AB0: cmp     ax, 18h
0x737AB4: jz      short loc_737ACD
0x737AB6: cmp     ax, 20h ; ' '
0x737ABA: jz      short loc_737ACD
0x737ABC: mov     ecx, [esp+2Ch+var_4]
0x737AC0: mov     eax, 1
0x737AC5: shl     eax, cl
0x737AC7: mov     [ebx+150h], eax
0x737ACD: mov     ecx, [esp+2Ch+arg_4]
0x737AD1: mov     edi, [esp+2Ch+arg_C]
0x737AD5: mov     [ecx], esi
0x737AD7: mov     eax, [ebx+104h]
0x737ADD: mov     ecx, [esp+2Ch+arg_8]
0x737AE1: mov     [ecx], eax
0x737AE3: mov     esi, edx
0x737AE5: mov     edx, [esp+2Ch+arg_10]
0x737AE9: mov     ecx, 11h
0x737AEE: rep movsd
0x737AF0: mov     ecx, ebp; lpCriticalSection
0x737AF2: mov     byte ptr [edx], 1
0x737AF5: call    sub_43F300
0x737AFA: pop     edi
0x737AFB: pop     ebp
0x737AFC: pop     esi
0x737AFD: mov     al, 1
0x737AFF: pop     ebx
0x737B00: add     esp, 1Ch
0x737B03: retn    18h
0x737B06: add     dword ptr [ebp+7Ch], 0FFFFFFFFh; jumptable 00737A3F default case, cases 5-7,9-23,25-31
0x737B0A: jnz     short loc_737B13
0x737B0C: mov     dword ptr [ebp+78h], 0
0x737B13: push    ebp; lpCriticalSection
0x737B14: call    dword ptr ds:0A28074h
0x737B1A: pop     edi
0x737B1B: pop     ebp
0x737B1C: pop     esi
0x737B1D: xor     al, al
0x737B1F: pop     ebx
0x737B20: add     esp, 1Ch
0x737B23: retn    18h
