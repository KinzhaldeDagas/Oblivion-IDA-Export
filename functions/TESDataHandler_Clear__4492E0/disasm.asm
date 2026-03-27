0x4492E0: sub     esp, 10h
0x4492E3: push    ebx
0x4492E4: push    ebp
0x4492E5: push    esi
0x4492E6: mov     esi, ecx
0x4492E8: push    edi; ArgList
0x4492E9: mov     byte ptr [esi+0CD4h], 1
0x4492F0: call    sub_447D00
0x4492F5: xor     ebx, ebx
0x4492F7: xor     eax, eax
0x4492F9: cmp     ds:0B06158h, ebx
0x4492FF: jbe     short loc_449315
0x449301: mov     ecx, ds:0B06150h
0x449307: mov     [ecx+eax*4], ebx
0x44930A: add     eax, 1
0x44930D: cmp     eax, ds:0B06158h
0x449313: jb      short loc_449301
0x449315: mov     ecx, ds:0B333A0h; this
0x44931B: push    ebx; a3
0x44931C: push    ebx; a2
0x44931D: mov     ds:0B06158h, ebx
0x449323: mov     ds:0B0615Ch, ebx
0x449329: call    sub_442630
0x44932E: mov     edx, ds:0B333A0h
0x449334: mov     [edx+74h], ebx
0x449337: xor     edi, edi
0x449339: lea     ebp, [esi+104h]
0x44933F: nop
0x449340: lea     ecx, [ebp-2Ch]
0x449343: call    TESSkill_ClearTESSkill
0x449348: lea     eax, [edi+0Ch]
0x44934B: mov     [ebp+0], eax
0x44934E: add     edi, 1
0x449351: add     ebp, 60h ; '`'
0x449354: cmp     edi, 15h
0x449357: jl      short loc_449340
0x449359: mov     edi, [esi+64h]
0x44935C: cmp     edi, ebx
0x44935E: jz      short loc_449396
0x449360: mov     eax, [esi+68h]
0x449363: cmp     eax, ebx
0x449365: jz      short loc_44937D
0x449367: mov     ecx, [eax+4]
0x44936A: mov     [esi+68h], ecx
0x44936D: mov     edx, [eax]
0x44936F: push    eax
0x449370: mov     [esi+64h], edx
0x449373: call    FormHeapFree
0x449378: add     esp, 4
0x44937B: jmp     short loc_449380
0x44937D: mov     [esi+64h], ebx
0x449380: cmp     edi, ebx
0x449382: jz      short loc_44938F
0x449384: mov     eax, [edi]
0x449386: mov     edx, [eax+10h]
0x449389: push    1
0x44938B: mov     ecx, edi
0x44938D: call    edx
0x44938F: mov     edi, [esi+64h]
0x449392: cmp     edi, ebx
0x449394: jnz     short loc_449360
0x449396: mov     edi, [esi+34h]
0x449399: cmp     edi, ebx
0x44939B: jz      short loc_4493D6
0x44939D: lea     ecx, [ecx+0]
0x4493A0: mov     eax, [esi+38h]
0x4493A3: cmp     eax, ebx
0x4493A5: jz      short loc_4493BD
0x4493A7: mov     ecx, [eax+4]
0x4493AA: mov     [esi+38h], ecx
0x4493AD: mov     edx, [eax]
0x4493AF: push    eax
0x4493B0: mov     [esi+34h], edx
0x4493B3: call    FormHeapFree
0x4493B8: add     esp, 4
0x4493BB: jmp     short loc_4493C0
0x4493BD: mov     [esi+34h], ebx
0x4493C0: cmp     edi, ebx
0x4493C2: jz      short loc_4493CF
0x4493C4: mov     eax, [edi]
0x4493C6: mov     edx, [eax+10h]
0x4493C9: push    1
0x4493CB: mov     ecx, edi
0x4493CD: call    edx
0x4493CF: mov     edi, [esi+34h]
0x4493D2: cmp     edi, ebx
0x4493D4: jnz     short loc_4493A0
0x4493D6: mov     edi, [esi+3Ch]
0x4493D9: cmp     edi, ebx
0x4493DB: jz      short loc_449416
0x4493DD: lea     ecx, [ecx+0]
0x4493E0: mov     eax, [esi+40h]
0x4493E3: cmp     eax, ebx
0x4493E5: jz      short loc_4493FD
0x4493E7: mov     ecx, [eax+4]
0x4493EA: mov     [esi+40h], ecx
0x4493ED: mov     edx, [eax]
0x4493EF: push    eax
0x4493F0: mov     [esi+3Ch], edx
0x4493F3: call    FormHeapFree
0x4493F8: add     esp, 4
0x4493FB: jmp     short loc_449400
0x4493FD: mov     [esi+3Ch], ebx
0x449400: cmp     edi, ebx
0x449402: jz      short loc_44940F
0x449404: mov     eax, [edi]
0x449406: mov     edx, [eax+10h]
0x449409: push    1
0x44940B: mov     ecx, edi
0x44940D: call    edx
0x44940F: mov     edi, [esi+3Ch]
0x449412: cmp     edi, ebx
0x449414: jnz     short loc_4493E0
0x449416: mov     edi, [esi+8Ch]
0x44941C: cmp     edi, ebx
0x44941E: jz      short loc_449465
0x449420: mov     eax, [esi+90h]
0x449426: cmp     eax, ebx
0x449428: jz      short loc_449446
0x44942A: mov     ecx, [eax+4]
0x44942D: mov     [esi+90h], ecx
0x449433: mov     edx, [eax]
0x449435: push    eax
0x449436: mov     [esi+8Ch], edx
0x44943C: call    FormHeapFree
0x449441: add     esp, 4
0x449444: jmp     short loc_44944C
0x449446: mov     [esi+8Ch], ebx
0x44944C: cmp     edi, ebx
0x44944E: jz      short loc_44945B
0x449450: mov     eax, [edi]
0x449452: mov     edx, [eax+10h]
0x449455: push    1
0x449457: mov     ecx, edi
0x449459: call    edx
0x44945B: mov     edi, [esi+8Ch]
0x449461: cmp     edi, ebx
0x449463: jnz     short loc_449420
0x449465: mov     edi, [esi+14h]
0x449468: cmp     edi, ebx
0x44946A: jz      short loc_4494A6
0x44946C: lea     esp, [esp+0]
0x449470: mov     eax, [esi+18h]
0x449473: cmp     eax, ebx
0x449475: jz      short loc_44948D
0x449477: mov     ecx, [eax+4]
0x44947A: mov     [esi+18h], ecx
0x44947D: mov     edx, [eax]
0x44947F: push    eax
0x449480: mov     [esi+14h], edx
0x449483: call    FormHeapFree
0x449488: add     esp, 4
0x44948B: jmp     short loc_449490
0x44948D: mov     [esi+14h], ebx
0x449490: cmp     edi, ebx
0x449492: jz      short loc_44949F
0x449494: mov     eax, [edi]
0x449496: mov     edx, [eax+10h]
0x449499: push    1
0x44949B: mov     ecx, edi
0x44949D: call    edx
0x44949F: mov     edi, [esi+14h]
0x4494A2: cmp     edi, ebx
0x4494A4: jnz     short loc_449470
0x4494A6: mov     edi, [esi+1Ch]
0x4494A9: cmp     edi, ebx
0x4494AB: jz      short loc_4494E6
0x4494AD: lea     ecx, [ecx+0]
0x4494B0: mov     eax, [esi+20h]
0x4494B3: cmp     eax, ebx
0x4494B5: jz      short loc_4494CD
0x4494B7: mov     ecx, [eax+4]
0x4494BA: mov     [esi+20h], ecx
0x4494BD: mov     edx, [eax]
0x4494BF: push    eax
0x4494C0: mov     [esi+1Ch], edx
0x4494C3: call    FormHeapFree
0x4494C8: add     esp, 4
0x4494CB: jmp     short loc_4494D0
0x4494CD: mov     [esi+1Ch], ebx
0x4494D0: cmp     edi, ebx
0x4494D2: jz      short loc_4494DF
0x4494D4: mov     eax, [edi]
0x4494D6: mov     edx, [eax+10h]
0x4494D9: push    1
0x4494DB: mov     ecx, edi
0x4494DD: call    edx
0x4494DF: mov     edi, [esi+1Ch]
0x4494E2: cmp     edi, ebx
0x4494E4: jnz     short loc_4494B0
0x4494E6: mov     edi, [esi+54h]
0x4494E9: cmp     edi, ebx
0x4494EB: jz      short loc_449526
0x4494ED: lea     ecx, [ecx+0]
0x4494F0: mov     eax, [esi+58h]
0x4494F3: cmp     eax, ebx
0x4494F5: jz      short loc_44950D
0x4494F7: mov     ecx, [eax+4]
0x4494FA: mov     [esi+58h], ecx
0x4494FD: mov     edx, [eax]
0x4494FF: push    eax
0x449500: mov     [esi+54h], edx
0x449503: call    FormHeapFree
0x449508: add     esp, 4
0x44950B: jmp     short loc_449510
0x44950D: mov     [esi+54h], ebx
0x449510: cmp     edi, ebx
0x449512: jz      short loc_44951F
0x449514: mov     eax, [edi]
0x449516: mov     edx, [eax+10h]
0x449519: push    1
0x44951B: mov     ecx, edi
0x44951D: call    edx
0x44951F: mov     edi, [esi+54h]
0x449522: cmp     edi, ebx
0x449524: jnz     short loc_4494F0
0x449526: mov     edi, [esi+5Ch]
0x449529: cmp     edi, ebx
0x44952B: jz      short loc_449566
0x44952D: lea     ecx, [ecx+0]
0x449530: mov     eax, [esi+60h]
0x449533: cmp     eax, ebx
0x449535: jz      short loc_44954D
0x449537: mov     ecx, [eax+4]
0x44953A: mov     [esi+60h], ecx
0x44953D: mov     edx, [eax]
0x44953F: push    eax
0x449540: mov     [esi+5Ch], edx
0x449543: call    FormHeapFree
0x449548: add     esp, 4
0x44954B: jmp     short loc_449550
0x44954D: mov     [esi+5Ch], ebx
0x449550: cmp     edi, ebx
0x449552: jz      short loc_44955F
0x449554: mov     eax, [edi]
0x449556: mov     edx, [eax+10h]
0x449559: push    1
0x44955B: mov     ecx, edi
0x44955D: call    edx
0x44955F: mov     edi, [esi+5Ch]
0x449562: cmp     edi, ebx
0x449564: jnz     short loc_449530
0x449566: mov     edi, [esi+74h]
0x449569: cmp     edi, ebx
0x44956B: jz      short loc_4495A6
0x44956D: lea     ecx, [ecx+0]
0x449570: mov     eax, [esi+78h]
0x449573: cmp     eax, ebx
0x449575: jz      short loc_44958D
0x449577: mov     ecx, [eax+4]
0x44957A: mov     [esi+78h], ecx
0x44957D: mov     edx, [eax]
0x44957F: push    eax
0x449580: mov     [esi+74h], edx
0x449583: call    FormHeapFree
0x449588: add     esp, 4
0x44958B: jmp     short loc_449590
0x44958D: mov     [esi+74h], ebx
0x449590: cmp     edi, ebx
0x449592: jz      short loc_44959F
0x449594: mov     eax, [edi]
0x449596: mov     edx, [eax+10h]
0x449599: push    1
0x44959B: mov     ecx, edi
0x44959D: call    edx
0x44959F: mov     edi, [esi+74h]
0x4495A2: cmp     edi, ebx
0x4495A4: jnz     short loc_449570
0x4495A6: mov     edi, [esi+84h]
0x4495AC: cmp     edi, ebx
0x4495AE: jz      short loc_4495F5
0x4495B0: mov     eax, [esi+88h]
0x4495B6: cmp     eax, ebx
0x4495B8: jz      short loc_4495D6
0x4495BA: mov     ecx, [eax+4]
0x4495BD: mov     [esi+88h], ecx
0x4495C3: mov     edx, [eax]
0x4495C5: push    eax
0x4495C6: mov     [esi+84h], edx
0x4495CC: call    FormHeapFree
0x4495D1: add     esp, 4
0x4495D4: jmp     short loc_4495DC
0x4495D6: mov     [esi+84h], ebx
0x4495DC: cmp     edi, ebx
0x4495DE: jz      short loc_4495EB
0x4495E0: mov     eax, [edi]
0x4495E2: mov     edx, [eax+10h]
0x4495E5: push    1
0x4495E7: mov     ecx, edi
0x4495E9: call    edx
0x4495EB: mov     edi, [esi+84h]
0x4495F1: cmp     edi, ebx
0x4495F3: jnz     short loc_4495B0
0x4495F5: mov     edi, [esi+7Ch]
0x4495F8: cmp     edi, ebx
0x4495FA: jz      short loc_44963C
0x4495FC: lea     esp, [esp+0]
0x449600: mov     eax, [esi+80h]
0x449606: cmp     eax, ebx
0x449608: jz      short loc_449623
0x44960A: mov     ecx, [eax+4]
0x44960D: mov     [esi+80h], ecx
0x449613: mov     edx, [eax]
0x449615: push    eax
0x449616: mov     [esi+7Ch], edx
0x449619: call    FormHeapFree
0x44961E: add     esp, 4
0x449621: jmp     short loc_449626
0x449623: mov     [esi+7Ch], ebx
0x449626: cmp     edi, ebx
0x449628: jz      short loc_449635
0x44962A: mov     eax, [edi]
0x44962C: mov     edx, [eax+10h]
0x44962F: push    1
0x449631: mov     ecx, edi
0x449633: call    edx
0x449635: mov     edi, [esi+7Ch]
0x449638: cmp     edi, ebx
0x44963A: jnz     short loc_449600
0x44963C: call    sub_52ED10
0x449641: mov     eax, ds:0B333A0h
0x449646: mov     [eax+30h], ebx
0x449649: mov     ebp, [esi+0CCh]
0x44964F: xor     edi, edi
0x449651: cmp     ebp, ebx
0x449653: jle     short loc_449672
0x449655: mov     ecx, [esi+0C4h]
0x44965B: mov     ecx, [ecx+edi*4]
0x44965E: cmp     ecx, ebx
0x449660: jz      short loc_44966B
0x449662: mov     edx, [ecx]
0x449664: mov     eax, [edx+10h]
0x449667: push    1
0x449669: call    eax
0x44966B: add     edi, 1
0x44966E: cmp     edi, ebp
0x449670: jl      short loc_449655
0x449672: or      edx, 0FFFFFFFFh
0x449675: cmp     [esi+0C8h], ebx
0x44967B: jz      short loc_4496D2
0x44967D: cmp     [esi+0CCh], ebx
0x449683: jbe     short loc_4496B7
0x449685: xor     ecx, ecx
0x449687: jmp     short loc_449690
0x449689: align 10h
0x449690: mov     eax, [esi+0C4h]
0x449696: cmp     [eax+ecx*4], ebx
0x449699: lea     eax, [eax+ecx*4]
0x44969C: jz      short loc_4496A6
0x44969E: mov     [eax], ebx
0x4496A0: add     [esi+0D0h], edx
0x4496A6: add     ecx, 1
0x4496A9: cmp     ecx, [esi+0CCh]
0x4496AF: jb      short loc_449690
0x4496B1: mov     [esi+0CCh], ebx
0x4496B7: mov     eax, [esi+0C4h]
0x4496BD: push    eax
0x4496BE: mov     [esi+0C8h], ebx
0x4496C4: mov     [esi+0C4h], ebx
0x4496CA: call    FormHeapFree
0x4496CF: add     esp, 4
0x4496D2: mov     edi, [esi+0Ch]
0x4496D5: cmp     edi, ebx
0x4496D7: jz      short loc_449716
0x4496D9: lea     esp, [esp+0]
0x4496E0: mov     eax, [esi+10h]
0x4496E3: cmp     eax, ebx
0x4496E5: jz      short loc_4496FD
0x4496E7: mov     ecx, [eax+4]
0x4496EA: mov     [esi+10h], ecx
0x4496ED: mov     edx, [eax]
0x4496EF: push    eax
0x4496F0: mov     [esi+0Ch], edx
0x4496F3: call    FormHeapFree
0x4496F8: add     esp, 4
0x4496FB: jmp     short loc_449700
0x4496FD: mov     [esi+0Ch], ebx
0x449700: cmp     edi, ebx
0x449702: jz      short loc_44970F
0x449704: mov     eax, [edi]
0x449706: mov     edx, [eax+10h]
0x449709: push    1
0x44970B: mov     ecx, edi
0x44970D: call    edx
0x44970F: mov     edi, [esi+0Ch]
0x449712: cmp     edi, ebx
0x449714: jnz     short loc_4496E0
0x449716: mov     edi, [esi+6Ch]
0x449719: cmp     edi, ebx
0x44971B: jz      short loc_449756
0x44971D: lea     ecx, [ecx+0]
0x449720: mov     eax, [esi+70h]
0x449723: cmp     eax, ebx
0x449725: jz      short loc_44973D
0x449727: mov     ecx, [eax+4]
0x44972A: mov     [esi+70h], ecx
0x44972D: mov     edx, [eax]
0x44972F: push    eax
0x449730: mov     [esi+6Ch], edx
0x449733: call    FormHeapFree
0x449738: add     esp, 4
0x44973B: jmp     short loc_449740
0x44973D: mov     [esi+6Ch], ebx
0x449740: cmp     edi, ebx
0x449742: jz      short loc_44974F
0x449744: mov     eax, [edi]
0x449746: mov     edx, [eax+10h]
0x449749: push    1
0x44974B: mov     ecx, edi
0x44974D: call    edx
0x44974F: mov     edi, [esi+6Ch]
0x449752: cmp     edi, ebx
0x449754: jnz     short loc_449720
0x449756: mov     edi, [esi+4Ch]
0x449759: cmp     edi, ebx
0x44975B: jz      short loc_449796
0x44975D: lea     ecx, [ecx+0]
0x449760: mov     eax, [esi+50h]
0x449763: cmp     eax, ebx
0x449765: jz      short loc_44977D
0x449767: mov     ecx, [eax+4]
0x44976A: mov     [esi+50h], ecx
0x44976D: mov     edx, [eax]
0x44976F: push    eax
0x449770: mov     [esi+4Ch], edx
0x449773: call    FormHeapFree
0x449778: add     esp, 4
0x44977B: jmp     short loc_449780
0x44977D: mov     [esi+4Ch], ebx
0x449780: cmp     edi, ebx
0x449782: jz      short loc_44978F
0x449784: mov     eax, [edi]
0x449786: mov     edx, [eax+10h]
0x449789: push    1
0x44978B: mov     ecx, edi
0x44978D: call    edx
0x44978F: mov     edi, [esi+4Ch]
0x449792: cmp     edi, ebx
0x449794: jnz     short loc_449760
0x449796: mov     ecx, ds:0B333C4h
0x44979C: cmp     ecx, ebx
0x44979E: jz      short loc_4497A9
0x4497A0: mov     eax, [ecx]
0x4497A2: mov     edx, [eax+10h]
0x4497A5: push    1
0x4497A7: call    edx
0x4497A9: mov     ds:0B333C4h, ebx
0x4497AF: mov     edi, [esi+44h]
0x4497B2: cmp     edi, ebx
0x4497B4: jz      short loc_4497EC
0x4497B6: mov     eax, [esi+48h]
0x4497B9: cmp     eax, ebx
0x4497BB: jz      short loc_4497D3
0x4497BD: mov     ecx, [eax+4]
0x4497C0: mov     [esi+48h], ecx
0x4497C3: mov     edx, [eax]
0x4497C5: push    eax
0x4497C6: mov     [esi+44h], edx
0x4497C9: call    FormHeapFree
0x4497CE: add     esp, 4
0x4497D1: jmp     short loc_4497D6
0x4497D3: mov     [esi+44h], ebx
0x4497D6: cmp     edi, ebx
0x4497D8: jz      short loc_4497E5
0x4497DA: mov     eax, [edi]
0x4497DC: mov     edx, [eax+10h]
0x4497DF: push    1
0x4497E1: mov     ecx, edi
0x4497E3: call    edx
0x4497E5: mov     edi, [esi+44h]
0x4497E8: cmp     edi, ebx
0x4497EA: jnz     short loc_4497B6
0x4497EC: mov     ds:0B36308h, ebx
0x4497F2: mov     ecx, [esi]
0x4497F4: call    TESObjectListHead_Clear
0x4497F9: mov     edi, [esi+2Ch]
0x4497FC: cmp     edi, ebx
0x4497FE: jz      short loc_449836
0x449800: mov     eax, [esi+30h]
0x449803: cmp     eax, ebx
0x449805: jz      short loc_44981D
0x449807: mov     ecx, [eax+4]
0x44980A: mov     [esi+30h], ecx
0x44980D: mov     edx, [eax]
0x44980F: push    eax
0x449810: mov     [esi+2Ch], edx
0x449813: call    FormHeapFree
0x449818: add     esp, 4
0x44981B: jmp     short loc_449820
0x44981D: mov     [esi+2Ch], ebx
0x449820: cmp     edi, ebx
0x449822: jz      short loc_44982F
0x449824: mov     eax, [edi]
0x449826: mov     edx, [eax+10h]
0x449829: push    1
0x44982B: mov     ecx, edi
0x44982D: call    edx
0x44982F: mov     edi, [esi+2Ch]
0x449832: cmp     edi, ebx
0x449834: jnz     short loc_449800
0x449836: mov     edi, [esi+24h]
0x449839: cmp     edi, ebx
0x44983B: jz      short loc_449876
0x44983D: lea     ecx, [ecx+0]
0x449840: mov     eax, [esi+28h]
0x449843: cmp     eax, ebx
0x449845: jz      short loc_44985D
0x449847: mov     ecx, [eax+4]
0x44984A: mov     [esi+28h], ecx
0x44984D: mov     edx, [eax]
0x44984F: push    eax
0x449850: mov     [esi+24h], edx
0x449853: call    FormHeapFree
0x449858: add     esp, 4
0x44985B: jmp     short loc_449860
0x44985D: mov     [esi+24h], ebx
0x449860: cmp     edi, ebx
0x449862: jz      short loc_44986F
0x449864: mov     eax, [edi]
0x449866: mov     edx, [eax+10h]
0x449869: push    1
0x44986B: mov     ecx, edi
0x44986D: call    edx
0x44986F: mov     edi, [esi+24h]
0x449872: cmp     edi, ebx
0x449874: jnz     short loc_449840
0x449876: mov     edi, [esi+4]
0x449879: cmp     edi, ebx
0x44987B: jz      short loc_4498B6
0x44987D: lea     ecx, [ecx+0]
0x449880: mov     eax, [esi+8]
0x449883: cmp     eax, ebx
0x449885: jz      short loc_44989D
0x449887: mov     ecx, [eax+4]
0x44988A: mov     [esi+8], ecx
0x44988D: mov     edx, [eax]
0x44988F: push    eax
0x449890: mov     [esi+4], edx
0x449893: call    FormHeapFree
0x449898: add     esp, 4
0x44989B: jmp     short loc_4498A0
0x44989D: mov     [esi+4], ebx
0x4498A0: cmp     edi, ebx
0x4498A2: jz      short loc_4498AF
0x4498A4: mov     eax, [edi]
0x4498A6: mov     edx, [eax+10h]
0x4498A9: push    1
0x4498AB: mov     ecx, edi
0x4498AD: call    edx
0x4498AF: mov     edi, [esi+4]
0x4498B2: cmp     edi, ebx
0x4498B4: jnz     short loc_449880
0x4498B6: mov     edi, [esi+94h]
0x4498BC: cmp     edi, ebx
0x4498BE: jz      short loc_449905
0x4498C0: mov     eax, [esi+98h]
0x4498C6: cmp     eax, ebx
0x4498C8: jz      short loc_4498E6
0x4498CA: mov     ecx, [eax+4]
0x4498CD: mov     [esi+98h], ecx
0x4498D3: mov     edx, [eax]
0x4498D5: push    eax
0x4498D6: mov     [esi+94h], edx
0x4498DC: call    FormHeapFree
0x4498E1: add     esp, 4
0x4498E4: jmp     short loc_4498EC
0x4498E6: mov     [esi+94h], ebx
0x4498EC: cmp     edi, ebx
0x4498EE: jz      short loc_4498FB
0x4498F0: mov     eax, [edi]
0x4498F2: mov     edx, [eax+10h]
0x4498F5: push    1
0x4498F7: mov     ecx, edi
0x4498F9: call    edx
0x4498FB: mov     edi, [esi+94h]
0x449901: cmp     edi, ebx
0x449903: jnz     short loc_4498C0
0x449905: mov     edi, [esi+9Ch]
0x44990B: cmp     edi, ebx
0x44990D: jz      short loc_449955
0x44990F: nop
0x449910: mov     eax, [esi+0A0h]
0x449916: cmp     eax, ebx
0x449918: jz      short loc_449936
0x44991A: mov     ecx, [eax+4]
0x44991D: mov     [esi+0A0h], ecx
0x449923: mov     edx, [eax]
0x449925: push    eax
0x449926: mov     [esi+9Ch], edx
0x44992C: call    FormHeapFree
0x449931: add     esp, 4
0x449934: jmp     short loc_44993C
0x449936: mov     [esi+9Ch], ebx
0x44993C: cmp     edi, ebx
0x44993E: jz      short loc_44994B
0x449940: mov     eax, [edi]
0x449942: mov     edx, [eax+10h]
0x449945: push    1
0x449947: mov     ecx, edi
0x449949: call    edx
0x44994B: mov     edi, [esi+9Ch]
0x449951: cmp     edi, ebx
0x449953: jnz     short loc_449910
0x449955: mov     edi, [esi+0A4h]
0x44995B: cmp     edi, ebx
0x44995D: jz      short loc_4499A5
0x44995F: nop
0x449960: mov     eax, [esi+0A8h]
0x449966: cmp     eax, ebx
0x449968: jz      short loc_449986
0x44996A: mov     ecx, [eax+4]
0x44996D: mov     [esi+0A8h], ecx
0x449973: mov     edx, [eax]
0x449975: push    eax
0x449976: mov     [esi+0A4h], edx
0x44997C: call    FormHeapFree
0x449981: add     esp, 4
0x449984: jmp     short loc_44998C
0x449986: mov     [esi+0A4h], ebx
0x44998C: cmp     edi, ebx
0x44998E: jz      short loc_44999B
0x449990: mov     eax, [edi]
0x449992: mov     edx, [eax+10h]
0x449995: push    1
0x449997: mov     ecx, edi
0x449999: call    edx
0x44999B: mov     edi, [esi+0A4h]
0x4499A1: cmp     edi, ebx
0x4499A3: jnz     short loc_449960
0x4499A5: mov     ds:0B360ACh, ebx
0x4499AB: mov     edi, [esi+0B4h]
0x4499B1: cmp     edi, ebx
0x4499B3: jz      short loc_4499FA
0x4499B5: mov     eax, [esi+0B8h]
0x4499BB: cmp     eax, ebx
0x4499BD: jz      short loc_4499DB
0x4499BF: mov     ecx, [eax+4]
0x4499C2: mov     [esi+0B8h], ecx
0x4499C8: mov     edx, [eax]
0x4499CA: push    eax
0x4499CB: mov     [esi+0B4h], edx
0x4499D1: call    FormHeapFree
0x4499D6: add     esp, 4
0x4499D9: jmp     short loc_4499E1
0x4499DB: mov     [esi+0B4h], ebx
0x4499E1: cmp     edi, ebx
0x4499E3: jz      short loc_4499F0
0x4499E5: mov     eax, [edi]
0x4499E7: mov     edx, [eax+10h]
0x4499EA: push    1
0x4499EC: mov     ecx, edi
0x4499EE: call    edx
0x4499F0: mov     edi, [esi+0B4h]
0x4499F6: cmp     edi, ebx
0x4499F8: jnz     short loc_4499B5
0x4499FA: mov     edi, [esi+0ACh]
0x449A00: cmp     edi, ebx
0x449A02: jz      short loc_449A49
0x449A04: mov     eax, [esi+0B0h]
0x449A0A: cmp     eax, ebx
0x449A0C: jz      short loc_449A2A
0x449A0E: mov     ecx, [eax+4]
0x449A11: mov     [esi+0B0h], ecx
0x449A17: mov     edx, [eax]
0x449A19: push    eax
0x449A1A: mov     [esi+0ACh], edx
0x449A20: call    FormHeapFree
0x449A25: add     esp, 4
0x449A28: jmp     short loc_449A30
0x449A2A: mov     [esi+0ACh], ebx
0x449A30: cmp     edi, ebx
0x449A32: jz      short loc_449A3F
0x449A34: mov     eax, [edi]
0x449A36: mov     edx, [eax+10h]
0x449A39: push    1
0x449A3B: mov     ecx, edi
0x449A3D: call    edx
0x449A3F: mov     edi, [esi+0ACh]
0x449A45: cmp     edi, ebx
0x449A47: jnz     short loc_449A04
0x449A49: mov     ecx, [esi+0BCh]
0x449A4F: call    sub_4A6380
0x449A54: mov     ecx, ds:0B34428h
0x449A5A: cmp     ecx, ebx
0x449A5C: jz      short loc_449A67
0x449A5E: mov     eax, [ecx]
0x449A60: mov     edx, [eax+10h]
0x449A63: push    1
0x449A65: call    edx
0x449A67: mov     eax, ds:0B33398h
0x449A6C: cmp     eax, ebx
0x449A6E: mov     ds:0B34428h, ebx
0x449A74: jz      short loc_449A88
0x449A76: cmp     [eax+4], bl
0x449A79: jz      short loc_449A88
0x449A7B: mov     ecx, ds:0B362C0h
0x449A81: call    sub_5210A0
0x449A86: jmp     short loc_449A93
0x449A88: mov     ecx, ds:0B362C0h
0x449A8E: call    sub_5217E0
0x449A93: mov     al, ds:0B06B18h
0x449A98: mov     ecx, ds:0B06140h
0x449A9E: mov     [esp+20h+var_D], al
0x449AA2: xor     eax, eax
0x449AA4: cmp     ecx, ebx
0x449AA6: mov     byte ptr ds:0B06B18h, 1
0x449AAD: mov     [esp+20h+var_E], bl
0x449AB1: jbe     short loc_449AD0
0x449AB3: mov     edx, ds:0B06144h
0x449AB9: lea     esp, [esp+0]
0x449AC0: cmp     [edx+eax*4], ebx
0x449AC3: jnz     loc_449B68
0x449AC9: add     eax, 1
0x449ACC: cmp     eax, ecx
0x449ACE: jb      short loc_449AC0
0x449AD0: xor     eax, eax
0x449AD2: xor     ebp, ebp
0x449AD4: cmp     eax, ebp
0x449AD6: mov     ebx, eax
0x449AD8: jz      loc_449C16
0x449ADE: mov     edi, edi
0x449AE0: mov     eax, [ebx+4]
0x449AE3: mov     edi, [ebx+8]
0x449AE6: mov     ebx, [ebx]
0x449AE8: cmp     ebx, ebp
0x449AEA: mov     [esp+20h+a2], eax
0x449AEE: jnz     short loc_449B24
0x449AF0: mov     edx, ds:0B0613Ch
0x449AF6: push    eax
0x449AF7: mov     eax, [edx+4]
0x449AFA: mov     ecx, offset TESForm_FormIDMap
0x449AFF: call    eax
0x449B01: mov     edx, ds:0B06140h
0x449B07: add     eax, 1
0x449B0A: cmp     eax, edx
0x449B0C: jnb     short loc_449B22
0x449B0E: mov     ebx, ds:0B06144h
0x449B14: mov     ecx, [ebx+eax*4]
0x449B17: cmp     ecx, ebp
0x449B19: jnz     short loc_449B70
0x449B1B: add     eax, 1
0x449B1E: cmp     eax, edx
0x449B20: jb      short loc_449B14
0x449B22: xor     ebx, ebx
0x449B24: mov     [esp+20h+var_C], ebx
0x449B28: cmp     edi, ebp
0x449B2A: jz      loc_449C0E
0x449B30: movzx   eax, byte ptr [edi+4]
0x449B34: cmp     eax, 3
0x449B37: jz      loc_449BCF
0x449B3D: cmp     eax, 0Ah
0x449B40: jle     short loc_449B4B
0x449B42: cmp     eax, 0Ch
0x449B45: jle     loc_449C0E
0x449B4B: push    0FFFFFFFFh; a2
0x449B4D: mov     ecx, edi; this
0x449B4F: call    TESForm_GetOverrideFile
0x449B54: test    eax, eax
0x449B56: jz      short loc_449B78
0x449B58: push    0FFFFFFFFh; a2
0x449B5A: mov     ecx, edi; this
0x449B5C: call    TESForm_GetOverrideFile
0x449B61: mov     ebp, eax
0x449B63: add     ebp, 1Ch
0x449B66: jmp     short loc_449B7D
0x449B68: mov     eax, [edx+eax*4]
0x449B6B: jmp     loc_449AD2
0x449B70: mov     ebx, ecx
0x449B72: mov     [esp+20h+var_C], ecx
0x449B76: jmp     short loc_449B28
0x449B78: mov     ebp, offset aUnknown; "UNKNOWN"
0x449B7D: movzx   eax, byte ptr [edi+4]
0x449B81: mov     edx, [edi+0Ch]
0x449B84: lea     ecx, [eax+eax*2]
0x449B87: mov     eax, [edi]
0x449B89: mov     ebx, ds:0B05E04h[ecx*4]
0x449B90: mov     [esp+20h+var_8], edx
0x449B94: mov     edx, [eax+0D4h]
0x449B9A: mov     ecx, edi
0x449B9C: call    edx
0x449B9E: mov     ecx, [esp+20h+var_8]
0x449BA2: push    ebp
0x449BA3: push    ebx
0x449BA4: push    ecx
0x449BA5: push    eax; ArgList
0x449BA6: push    offset aFormS08xOfType; "Form '%s' (%08X) of type %s in file '%s"...
0x449BAB: call    PrintError
0x449BB0: mov     edx, [esp+34h+a2]
0x449BB4: add     esp, 14h
0x449BB7: push    0; a3
0x449BB9: push    edx; a2
0x449BBA: mov     ecx, offset TESForm_FormIDMap; this
0x449BBF: call    NiTMap_SetAt
0x449BC4: mov     ebx, [esp+20h+var_C]
0x449BC8: mov     [esp+20h+var_E], 1
0x449BCD: jmp     short loc_449C0C
0x449BCF: lea     ebp, [edi+10h]
0x449BD2: test    ebp, ebp
0x449BD4: jz      short loc_449C01
0x449BD6: cmp     dword ptr [ebp+4], 0
0x449BDA: jz      short loc_449BF6
0x449BDC: lea     esp, [esp+0]
0x449BE0: mov     eax, [ebp+4]
0x449BE3: mov     ebx, [eax+4]
0x449BE6: push    eax
0x449BE7: call    FormHeapFree
0x449BEC: add     esp, 4
0x449BEF: test    ebx, ebx
0x449BF1: mov     [ebp+4], ebx
0x449BF4: jnz     short loc_449BE0
0x449BF6: mov     ebx, [esp+20h+var_C]
0x449BFA: mov     dword ptr [ebp+0], 0
0x449C01: push    1; a3
0x449C03: push    0; a2
0x449C05: mov     ecx, edi; this
0x449C07: call    TESForm_SetFormID
0x449C0C: xor     ebp, ebp
0x449C0E: cmp     ebx, ebp
0x449C10: jnz     loc_449AE0
0x449C16: cmp     [esp+20h+var_E], 0
0x449C1B: mov     al, [esp+20h+var_D]
0x449C1F: mov     ds:0B06B18h, al
0x449C24: jz      short loc_449C33
0x449C26: push    offset aFormsWereLeake; "Forms were leaked during ClearData. Che"...
0x449C2B: call    PrintError
0x449C30: add     esp, 4
0x449C33: xor     eax, eax
0x449C35: cmp     [esi+8D0h], ebp
0x449C3B: jbe     short loc_449C53
0x449C3D: lea     ecx, [esi+8D4h]
0x449C43: mov     [ecx], ebp
0x449C45: add     eax, 1
0x449C48: add     ecx, 4
0x449C4B: cmp     eax, [esi+8D0h]
0x449C51: jb      short loc_449C43
0x449C53: cmp     byte ptr [esi+0CD1h], 0
0x449C5A: mov     [esi+8D0h], ebp
0x449C60: jnz     short loc_449CA5
0x449C62: mov     ecx, [esi+8C4h]
0x449C68: cmp     ecx, ebp
0x449C6A: jz      short loc_449CA5
0x449C6C: cmp     byte ptr [esi+0CD0h], 0
0x449C73: jnz     short loc_449C7B
0x449C75: push    ebp
0x449C76: call    TESFile_SetIsActive
0x449C7B: mov     edi, [esi+8C4h]
0x449C81: cmp     edi, ebp
0x449C83: jz      short loc_449C95
0x449C85: mov     ecx, edi
0x449C87: call    TESFile_destr
0x449C8C: push    edi
0x449C8D: call    FormHeapFree
0x449C92: add     esp, 4
0x449C95: mov     [esi+8C4h], ebp
0x449C9B: mov     dword ptr [esi+8C0h], 800h
0x449CA5: pop     edi
0x449CA6: mov     ds:0B35EA4h, ebp
0x449CAC: mov     ds:0B35EA8h, ebp
0x449CB2: mov     ds:0B35EACh, ebp
0x449CB8: mov     ds:0B35EB0h, ebp
0x449CBE: mov     ds:0B35EB4h, ebp
0x449CC4: mov     ds:0B35EB8h, ebp
0x449CCA: mov     ds:0B35EBCh, ebp
0x449CD0: mov     ds:0B35EC0h, ebp
0x449CD6: mov     ds:0B35EC4h, ebp
0x449CDC: mov     ds:0B35EC8h, ebp
0x449CE2: mov     ds:0B35ECCh, ebp
0x449CE8: mov     ds:0B35ED0h, ebp
0x449CEE: mov     ds:0B35ED4h, ebp
0x449CF4: mov     ds:0B35ED8h, ebp
0x449CFA: mov     ds:0B35EE0h, ebp
0x449D00: mov     ds:0B35EE4h, ebp
0x449D06: mov     ds:0B35EDCh, ebp
0x449D0C: mov     byte ptr [esi+0CD4h], 0
0x449D13: pop     esi
0x449D14: pop     ebp
0x449D15: mov     eax, 1
0x449D1A: pop     ebx
0x449D1B: add     esp, 10h
0x449D1E: retn
