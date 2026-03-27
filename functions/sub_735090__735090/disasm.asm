0x735090: push    ecx
0x735091: push    ebx
0x735092: push    ebp
0x735093: push    esi
0x735094: mov     esi, [esp+10h+arg_0]
0x735098: mov     eax, [esi]
0x73509A: mov     edx, [eax+8]
0x73509D: push    edi
0x73509E: mov     ebp, ecx
0x7350A0: push    0
0x7350A2: mov     ecx, esi
0x7350A4: call    edx
0x7350A6: lea     ebx, [ebp+80h]
0x7350AC: push    ebx; lpCriticalSection
0x7350AD: call    dword ptr ds:0A2806Ch
0x7350B3: call    dword ptr ds:0A2808Ch
0x7350B9: mov     edi, 1
0x7350BE: add     [ebx+7Ch], edi
0x7350C1: mov     [ebx+78h], eax
0x7350C4: mov     eax, [esp+14h+arg_14]
0x7350C8: push    edi
0x7350C9: lea     ecx, [esp+18h+arg_0]
0x7350CD: push    ecx
0x7350CE: mov     [eax], edi
0x7350D0: mov     edx, [esi+4]
0x7350D3: lea     eax, [ebp+100h]
0x7350D9: push    edi
0x7350DA: push    eax
0x7350DB: push    esi
0x7350DC: mov     [esp+28h+arg_0], edi
0x7350E0: call    edx
0x7350E2: mov     edx, [esi+4]
0x7350E5: push    edi
0x7350E6: lea     eax, [esp+2Ch+arg_0]
0x7350EA: push    eax
0x7350EB: push    edi
0x7350EC: lea     ecx, [ebp+101h]
0x7350F2: push    ecx
0x7350F3: push    esi
0x7350F4: mov     [esp+3Ch+arg_0], edi
0x7350F8: call    edx
0x7350FA: mov     edx, [esi+4]
0x7350FD: push    edi
0x7350FE: lea     ecx, [esp+40h+arg_0]
0x735102: push    ecx
0x735103: lea     eax, [ebp+102h]
0x735109: push    edi
0x73510A: push    eax
0x73510B: push    esi
0x73510C: mov     [esp+50h+arg_0], edi
0x735110: call    edx
0x735112: mov     edx, [esi+4]
0x735115: push    edi
0x735116: lea     eax, [esp+54h+arg_0]
0x73511A: push    eax
0x73511B: push    2
0x73511D: lea     ecx, [ebp+104h]
0x735123: push    ecx
0x735124: push    esi
0x735125: mov     [esp+64h+arg_0], 2
0x73512D: call    edx
0x73512F: mov     edx, [esi+4]
0x735132: add     esp, 50h
0x735135: push    edi
0x735136: lea     ecx, [esp+18h+arg_0]
0x73513A: push    ecx
0x73513B: lea     eax, [ebp+106h]
0x735141: push    2
0x735143: push    eax
0x735144: push    esi
0x735145: mov     [esp+28h+arg_0], 2
0x73514D: call    edx
0x73514F: mov     edx, [esi+4]
0x735152: push    edi
0x735153: lea     ecx, [esp+2Ch+arg_0]
0x735157: push    ecx
0x735158: lea     eax, [ebp+108h]
0x73515E: push    edi
0x73515F: push    eax
0x735160: push    esi
0x735161: mov     [esp+3Ch+arg_0], edi
0x735165: call    edx
0x735167: mov     edx, [esi+4]
0x73516A: push    edi
0x73516B: lea     eax, [esp+40h+arg_0]
0x73516F: push    eax
0x735170: push    2
0x735172: lea     ecx, [ebp+10Ah]
0x735178: push    ecx
0x735179: push    esi
0x73517A: mov     [esp+50h+arg_0], 2
0x735182: call    edx
0x735184: mov     edx, [esi+4]
0x735187: push    edi
0x735188: lea     eax, [esp+54h+arg_0]
0x73518C: push    eax
0x73518D: push    2
0x73518F: lea     ecx, [ebp+10Ch]
0x735195: push    ecx
0x735196: push    esi
0x735197: mov     [esp+64h+arg_0], 2
0x73519F: call    edx
0x7351A1: mov     edx, [esi+4]
0x7351A4: add     esp, 50h
0x7351A7: push    edi
0x7351A8: lea     ecx, [esp+18h+arg_0]
0x7351AC: push    ecx
0x7351AD: lea     eax, [ebp+10Eh]
0x7351B3: push    2
0x7351B5: push    eax
0x7351B6: push    esi
0x7351B7: mov     [esp+28h+arg_0], 2
0x7351BF: mov     [esp+28h+arg_14], eax
0x7351C3: call    edx
0x7351C5: mov     edx, [esi+4]
0x7351C8: push    edi
0x7351C9: lea     ecx, [esp+2Ch+arg_0]
0x7351CD: push    ecx
0x7351CE: lea     eax, [ebp+110h]
0x7351D4: push    2
0x7351D6: push    eax
0x7351D7: push    esi
0x7351D8: mov     [esp+3Ch+arg_0], 2
0x7351E0: mov     [esp+3Ch+var_4], eax
0x7351E4: call    edx
0x7351E6: mov     edx, [esi+4]
0x7351E9: push    edi
0x7351EA: lea     ecx, [esp+40h+arg_0]
0x7351EE: push    ecx
0x7351EF: lea     eax, [ebp+112h]
0x7351F5: push    edi
0x7351F6: push    eax
0x7351F7: push    esi
0x7351F8: mov     [esp+50h+arg_0], edi
0x7351FC: call    edx
0x7351FE: mov     edx, [esi+4]
0x735201: push    edi
0x735202: lea     ecx, [esp+54h+arg_0]
0x735206: push    ecx
0x735207: lea     eax, [ebp+113h]
0x73520D: push    edi
0x73520E: push    eax
0x73520F: push    esi
0x735210: mov     [esp+64h+arg_0], edi
0x735214: call    edx
0x735216: mov     al, [ebp+100h]
0x73521C: add     esp, 50h
0x73521F: test    al, al
0x735221: jz      short loc_735237
0x735223: mov     ecx, ds:0A853D4h
0x735229: mov     edx, [esi]
0x73522B: mov     edx, [edx+0Ch]
0x73522E: movzx   eax, al
0x735231: push    ecx
0x735232: push    eax
0x735233: mov     ecx, esi
0x735235: call    edx
0x735237: mov     al, [ebp+113h]
0x73523D: shr     al, 5
0x735240: not     al
0x735242: and     al, 1
0x735244: mov     [ebp+117h], al
0x73524A: movzx   eax, byte ptr [ebp+102h]
0x735251: add     eax, 0FFFFFFFFh; switch 11 cases
0x735254: cmp     eax, 0Ah
0x735257: ja      def_73525D; jumptable 0073525D default case, cases 4-8
0x73525D: jmp     ds:jpt_73525D[eax*4]; switch jump
0x735264: mov     byte ptr [ebp+116h], 1; jumptable 0073525D case 1
0x73526B: mov     byte ptr [ebp+118h], 0
0x735272: jmp     short loc_73529B
0x735274: mov     byte ptr [ebp+118h], 0; jumptable 0073525D cases 2,3
0x73527B: jmp     short loc_735294
0x73527D: mov     byte ptr [ebp+116h], 1; jumptable 0073525D case 9
0x735284: mov     byte ptr [ebp+118h], 1
0x73528B: jmp     short loc_73529B
0x73528D: mov     byte ptr [ebp+118h], 1; jumptable 0073525D cases 10,11
0x735294: mov     byte ptr [ebp+116h], 0
0x73529B: mov     dl, [ebp+116h]
0x7352A1: test    dl, dl
0x7352A3: jz      short loc_7352AD
0x7352A5: mov     al, [ebp+108h]
0x7352AB: jmp     short loc_7352B3
0x7352AD: mov     al, [ebp+112h]
0x7352B3: cmp     al, 20h ; ' '
0x7352B5: setz    al
0x7352B8: test    dl, dl
0x7352BA: mov     byte ptr [esp+14h+arg_0], al
0x7352BE: mov     [ebp+115h], al
0x7352C4: jz      short loc_7352F0
0x7352C6: cmp     word ptr [ebp+106h], 10h
0x7352CE: jnz     short loc_7352E0
0x7352D0: test    al, al
0x7352D2: mov     esi, offset unk_B25D28
0x7352D7: jnz     short loc_7352FE
0x7352D9: mov     esi, offset unk_B25CE0
0x7352DE: jmp     short loc_7352FE
0x7352E0: test    al, al
0x7352E2: mov     esi, offset unk_B25DB8
0x7352E7: jnz     short loc_7352FE
0x7352E9: mov     esi, offset unk_B25D70
0x7352EE: jmp     short loc_7352FE
0x7352F0: test    al, al
0x7352F2: mov     esi, offset unk_B25E00
0x7352F7: jnz     short loc_7352FE
0x7352F9: mov     esi, offset unk_B25E48
0x7352FE: lea     eax, [ebp+11Ch]
0x735304: mov     ecx, 11h
0x735309: mov     edi, eax
0x73530B: rep movsd
0x73530D: movzx   ecx, byte ptr [ebp+112h]
0x735314: add     ecx, 0FFFFFFFCh; switch 29 cases
0x735317: cmp     ecx, 1Ch
0x73531A: ja      def_735327; jumptable 00735327 default case, cases 5-7,9-14,17-23,25-31
0x735320: movzx   ecx, ds:byte_73548C[ecx]
0x735327: jmp     ds:jpt_735327[ecx*4]; switch jump
0x73532E: test    dl, dl; jumptable 00735327 case 4
0x735330: mov     byte ptr [ebp+114h], 0
0x735337: jnz     short loc_73534A
0x735339: mov     ecx, ebx; lpCriticalSection
0x73533B: call    sub_43F300
0x735340: pop     edi
0x735341: pop     esi
0x735342: pop     ebp
0x735343: xor     al, al
0x735345: pop     ebx
0x735346: pop     ecx
0x735347: retn    18h
0x73534A: mov     dword ptr [ebp+170h], offset sub_7347E0
0x735354: jmp     short def_735327; jumptable 00735327 default case, cases 5-7,9-14,17-23,25-31
0x735356: test    dl, dl; jumptable 00735327 case 8
0x735358: mov     byte ptr [ebp+114h], 1
0x73535F: jz      short loc_73536D
0x735361: mov     dword ptr [ebp+170h], offset sub_734830
0x73536B: jmp     short def_735327; jumptable 00735327 default case, cases 5-7,9-14,17-23,25-31
0x73536D: mov     dword ptr [ebp+170h], offset sub_734870
0x735377: jmp     short def_735327; jumptable 00735327 default case, cases 5-7,9-14,17-23,25-31
0x735379: test    dl, dl; jumptable 00735327 cases 15,16
0x73537B: mov     byte ptr [ebp+114h], 2
0x735382: jz      short loc_7353A3
0x735384: cmp     byte ptr [esp+14h+arg_0], 0
0x735389: jz      short loc_735397
0x73538B: mov     dword ptr [ebp+170h], offset sub_734990
0x735395: jmp     short def_735327; jumptable 00735327 default case, cases 5-7,9-14,17-23,25-31
0x735397: mov     dword ptr [ebp+170h], offset sub_734920
0x7353A1: jmp     short def_735327; jumptable 00735327 default case, cases 5-7,9-14,17-23,25-31
0x7353A3: mov     dword ptr [ebp+170h], offset sub_7348B0
0x7353AD: jmp     short def_735327; jumptable 00735327 default case, cases 5-7,9-14,17-23,25-31
0x7353AF: mov     byte ptr [ebp+114h], 3; jumptable 00735327 case 24
0x7353B6: mov     dword ptr [ebp+170h], offset sub_734A10
0x7353C0: jmp     short def_735327; jumptable 00735327 default case, cases 5-7,9-14,17-23,25-31
0x7353C2: mov     byte ptr [ebp+114h], 4; jumptable 00735327 case 32
0x7353C9: mov     dword ptr [ebp+170h], offset sub_734A60
0x7353D3: mov     ecx, [esp+14h+arg_14]; jumptable 00735327 default case, cases 5-7,9-14,17-23,25-31
0x7353D7: movzx   ecx, word ptr [ecx]
0x7353DA: mov     esi, [esp+14h+arg_4]
0x7353DE: mov     edi, [esp+14h+arg_C]
0x7353E2: mov     byte ptr [ebp+178h], 0
0x7353E9: xor     edx, edx
0x7353EB: mov     [ebp+174h], edx
0x7353F1: mov     [esi], ecx
0x7353F3: mov     ecx, [esp+14h+var_4]
0x7353F7: movzx   ecx, word ptr [ecx]
0x7353FA: mov     esi, [esp+14h+arg_8]
0x7353FE: mov     [esi], ecx
0x735400: mov     esi, eax
0x735402: mov     eax, [esp+14h+arg_10]
0x735406: mov     ecx, 11h
0x73540B: rep movsd
0x73540D: mov     [eax], dl
0x73540F: add     dword ptr [ebx+7Ch], 0FFFFFFFFh
0x735413: jnz     short loc_735418
0x735415: mov     [ebx+78h], edx
0x735418: push    ebx; lpCriticalSection
0x735419: call    dword ptr ds:0A28074h
0x73541F: pop     edi
0x735420: pop     esi
0x735421: pop     ebp
0x735422: mov     al, 1
0x735424: pop     ebx
0x735425: pop     ecx
0x735426: retn    18h
0x735429: add     dword ptr [ebx+7Ch], 0FFFFFFFFh; jumptable 0073525D default case, cases 4-8
0x73542D: jnz     short loc_735436
0x73542F: mov     dword ptr [ebx+78h], 0
0x735436: push    ebx; lpCriticalSection
0x735437: call    dword ptr ds:0A28074h
0x73543D: pop     edi
0x73543E: pop     esi
0x73543F: pop     ebp
0x735440: xor     al, al
0x735442: pop     ebx
0x735443: pop     ecx
0x735444: retn    18h
