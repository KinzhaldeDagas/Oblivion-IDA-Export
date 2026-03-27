0x622180: push    0FFFFFFFFh
0x622182: push    offset SEH_6D7780
0x622187: mov     eax, large fs:0
0x62218D: push    eax
0x62218E: sub     esp, 8
0x622191: push    ebx
0x622192: push    ebp
0x622193: push    esi
0x622194: push    edi
0x622195: mov     eax, ds:0B30AACh
0x62219A: xor     eax, esp
0x62219C: push    eax
0x62219D: lea     eax, [esp+28h+var_C]
0x6221A1: mov     large fs:0, eax
0x6221A7: mov     esi, ecx
0x6221A9: mov     eax, [esi+3Ch]
0x6221AC: mov     ecx, [eax+58h]
0x6221AF: mov     eax, [ecx]
0x6221B1: mov     edx, [eax+0ECh]
0x6221B7: push    1
0x6221B9: call    edx
0x6221BB: mov     ecx, esi
0x6221BD: mov     ebx, eax
0x6221BF: call    sub_613880
0x6221C4: test    al, al
0x6221C6: jnz     loc_622795
0x6221CC: mov     eax, [esi+6Ch]
0x6221CF: cmp     eax, 7
0x6221D2: jz      loc_622795
0x6221D8: mov     ecx, esi
0x6221DA: call    sub_61FF40
0x6221DF: test    ebx, ebx
0x6221E1: jnz     loc_6224C7
0x6221E7: mov     edi, [esi+70h]
0x6221EA: cmp     edi, 1
0x6221ED: jz      short loc_622203
0x6221EF: cmp     edi, 2
0x6221F2: jz      short loc_622203
0x6221F4: mov     ebp, 0Dh
0x6221F9: cmp     edi, ebp
0x6221FB: jnz     loc_6224CC
0x622201: jmp     short loc_622208
0x622203: mov     ebp, 0Dh
0x622208: cmp     dword ptr [esi+0A8h], 0
0x62220F: jz      loc_6222F4
0x622215: cmp     dword ptr [esi+98h], 0
0x62221C: jz      loc_6222F4
0x622222: cmp     edi, 5
0x622225: jz      short loc_622257
0x622227: cmp     byte ptr ds:0B3B908h, 0
0x62222E: jz      short loc_62224B
0x622230: mov     ecx, [esi+3Ch]; this
0x622233: push    offset aAttemptToYield; "attempt to Yield"
0x622238: call    TESObjectREFR_GetName
0x62223D: push    eax
0x62223E: push    offset a_20sIsGoingToS; "%.20s is going to %s!"
0x622243: call    Interface_ConsolePrint
0x622248: add     esp, 0Ch
0x62224B: fld     dword ptr ds:0A30634h
0x622251: fstp    dword ptr [esi+188h]
0x622257: mov     ebp, [esi+3Ch]
0x62225A: mov     ecx, esi
0x62225C: mov     dword ptr [esi+70h], 5
0x622263: call    sub_6135F0
0x622268: mov     ecx, ds:0B362C0h
0x62226E: push    eax
0x62226F: push    ebp
0x622270: call    sub_521450
0x622275: push    edi
0x622276: mov     ecx, esi
0x622278: mov     [esi+0C8h], eax
0x62227E: call    sub_612DE0
0x622283: push    0Ch; Size
0x622285: call    FormHeapAlloc
0x62228A: add     esp, 4
0x62228D: mov     dword ptr [esp+28h+var_18+4], eax
0x622291: xor     edi, edi
0x622293: cmp     eax, edi
0x622295: mov     [esp+28h+var_4], edi
0x622299: jz      short loc_6222AC
0x62229B: mov     ecx, [esi+0A8h]
0x6222A1: push    edi
0x6222A2: push    ecx
0x6222A3: mov     ecx, eax
0x6222A5: call    ContainerEntryExtraData_constr
0x6222AA: mov     edi, eax
0x6222AC: cmp     dword ptr [esi+0C8h], 0
0x6222B3: movzx   eax, byte ptr [esi+4Dh]
0x6222B7: mov     ebp, [esi+3Ch]
0x6222BA: setnz   dl
0x6222BD: mov     ecx, esi
0x6222BF: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6222C7: push    edx
0x6222C8: push    eax
0x6222C9: push    0
0x6222CB: call    sub_6135F0
0x6222D0: push    eax
0x6222D1: push    edi
0x6222D2: push    ebp
0x6222D3: call    sub_621B40
0x6222D8: add     esp, 18h
0x6222DB: test    edi, edi
0x6222DD: jz      short loc_6222EF
0x6222DF: mov     ecx, edi
0x6222E1: call    ContainerEntryExtraData_DestroyDataTable
0x6222E6: push    edi
0x6222E7: call    FormHeapFree
0x6222EC: add     esp, 4
0x6222EF: mov     ebp, 0Dh
0x6222F4: cmp     dword ptr [esi+6Ch], 7
0x6222F8: jz      loc_622795
0x6222FE: cmp     byte ptr [esi+48h], 0
0x622302: jnz     loc_6224CC
0x622308: mov     ecx, [esi+3Ch]
0x62230B: call    sub_5E1CF0
0x622310: test    al, al
0x622312: jz      loc_6224CC
0x622318: mov     ecx, [esi+3Ch]
0x62231B: call    sub_5E0F50
0x622320: mov     edx, [eax]
0x622322: mov     ecx, eax
0x622324: mov     eax, [edx+168h]
0x62232A: push    1
0x62232C: call    eax
0x62232E: test    al, al
0x622330: jnz     loc_6224CC
0x622336: mov     ecx, [esi+3Ch]
0x622339: push    ebp
0x62233A: call    sub_5E0A90
0x62233F: mov     edi, eax
0x622341: test    edi, edi
0x622343: jz      loc_6224B9
0x622349: mov     eax, [edi+8]
0x62234C: push    0; int
0x62234E: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x622353: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x622358: push    0; int
0x62235A: push    eax; void *
0x62235B: call    OblivionDynamicCast
0x622360: add     esp, 14h
0x622363: test    eax, eax
0x622365: jz      short loc_6223A3
0x622367: cmp     byte ptr [eax+90h], 4
0x62236E: jnz     short loc_6223A3
0x622370: mov     eax, [eax+64h]
0x622373: test    eax, eax
0x622375: jz      loc_6224B9
0x62237B: mov     ecx, edi
0x62237D: lea     ebp, [eax+24h]
0x622380: call    sub_4849C0
0x622385: fstp    [esp+28h+var_18+4]
0x622389: mov     edx, [ebp+0]
0x62238C: mov     eax, [edx]
0x62238E: push    0
0x622390: mov     ecx, ebp
0x622392: call    eax
0x622394: fcomp   [esp+28h+var_18+4]
0x622398: fnstsw  ax
0x62239A: test    ah, 41h
0x62239D: jz      loc_6224B4
0x6223A3: mov     ebx, [esi+70h]
0x6223A6: cmp     ebx, 5
0x6223A9: jz      short loc_6223DB
0x6223AB: cmp     byte ptr ds:0B3B908h, 0
0x6223B2: jz      short loc_6223CF
0x6223B4: mov     ecx, [esi+3Ch]; this
0x6223B7: push    offset aAttemptToYield; "attempt to Yield"
0x6223BC: call    TESObjectREFR_GetName
0x6223C1: push    eax
0x6223C2: push    offset a_20sIsGoingToS; "%.20s is going to %s!"
0x6223C7: call    Interface_ConsolePrint
0x6223CC: add     esp, 0Ch
0x6223CF: fld     dword ptr ds:0A30634h
0x6223D5: fstp    dword ptr [esi+188h]
0x6223DB: mov     ebp, [esi+3Ch]
0x6223DE: mov     ecx, esi
0x6223E0: mov     dword ptr [esi+70h], 5
0x6223E7: call    sub_6135F0
0x6223EC: mov     ecx, ds:0B362C0h
0x6223F2: push    eax
0x6223F3: push    ebp
0x6223F4: call    sub_521450
0x6223F9: push    ebx
0x6223FA: mov     ecx, esi
0x6223FC: mov     [esi+0C8h], eax
0x622402: call    sub_612DE0
0x622407: cmp     dword ptr [esi+0C8h], 0
0x62240E: movzx   edx, byte ptr [esi+4Dh]
0x622412: mov     ebp, [esi+3Ch]
0x622415: setnz   cl
0x622418: push    ecx
0x622419: push    edx
0x62241A: push    0
0x62241C: mov     ecx, esi
0x62241E: call    sub_6135F0
0x622423: push    eax
0x622424: push    edi
0x622425: push    ebp
0x622426: call    sub_621B40
0x62242B: add     esp, 18h
0x62242E: mov     ecx, edi
0x622430: mov     ebp, eax
0x622432: call    ContainerEntryExtraData_DestroyDataTable
0x622437: push    edi
0x622438: call    FormHeapFree
0x62243D: add     esp, 4
0x622440: cmp     ebp, 1
0x622443: jz      short loc_62246E
0x622445: cmp     ebp, 2
0x622448: jz      short loc_62246E
0x62244A: push    ebp
0x62244B: mov     ecx, esi
0x62244D: call    sub_612DE0
0x622452: mov     ecx, [esi+3Ch]
0x622455: call    sub_5E0A70
0x62245A: mov     ecx, dword ptr [esp+28h+var_C]
0x62245E: mov     large fs:0, ecx
0x622465: pop     ecx
0x622466: pop     edi
0x622467: pop     esi
0x622468: pop     ebp
0x622469: pop     ebx
0x62246A: add     esp, 14h
0x62246D: retn
0x62246E: push    7
0x622470: mov     ecx, esi
0x622472: call    sub_619920
0x622477: mov     eax, 0Dh
0x62247C: cmp     [esi+70h], eax
0x62247F: jz      short loc_62248D
0x622481: fld     dword ptr ds:0A30634h
0x622487: fstp    dword ptr [esi+188h]
0x62248D: mov     ecx, [esi+3Ch]; int
0x622490: push    1; int
0x622492: push    0; char
0x622494: mov     [esi+70h], eax
0x622497: call    sub_5F5170
0x62249C: mov     byte ptr [esi+48h], 1
0x6224A0: mov     ecx, dword ptr [esp+28h+var_C]
0x6224A4: mov     large fs:0, ecx
0x6224AB: pop     ecx
0x6224AC: pop     edi
0x6224AD: pop     esi
0x6224AE: pop     ebp
0x6224AF: pop     ebx
0x6224B0: add     esp, 14h
0x6224B3: retn
0x6224B4: mov     ebp, 0Dh
0x6224B9: mov     ecx, [esi+3Ch]
0x6224BC: mov     byte ptr [esi+48h], 1
0x6224C0: call    sub_5E0A70
0x6224C5: jmp     short loc_6224CC
0x6224C7: mov     ebp, 0Dh
0x6224CC: mov     eax, [esi+70h]
0x6224CF: cmp     eax, 9; switch 10 cases
0x6224D2: ja      def_6224D8; jumptable 006224D8 default case, cases 5-7
0x6224D8: jmp     ds:jpt_6224D8[eax*4]; switch jump
0x6224DF: cmp     byte ptr [esi+1BCh], 0; jumptable 006224D8 case 0
0x6224E6: jz      def_6224D8; jumptable 006224D8 default case, cases 5-7
0x6224EC: mov     eax, [esi+3Ch]
0x6224EF: mov     ecx, [eax+58h]
0x6224F2: mov     edx, [ecx]
0x6224F4: mov     eax, [edx+304h]
0x6224FA: call    eax
0x6224FC: test    al, al
0x6224FE: jnz     def_6224D8; jumptable 006224D8 default case, cases 5-7
0x622504: mov     ecx, [esi+3Ch]
0x622507: push    1
0x622509: call    sub_5E6D70
0x62250E: mov     ecx, dword ptr [esp+28h+var_C]
0x622512: mov     large fs:0, ecx
0x622519: pop     ecx
0x62251A: pop     edi
0x62251B: pop     esi
0x62251C: pop     ebp
0x62251D: pop     ebx
0x62251E: add     esp, 14h
0x622521: retn
0x622522: test    ebx, ebx; jumptable 006224D8 case 1
0x622524: jz      short loc_622572
0x622526: push    0
0x622528: mov     ecx, ebx
0x62252A: call    ContainerEntryExtraData_GetHealth
0x62252F: fcomp   dword ptr ds:0A2FAA8h
0x622535: fnstsw  ax
0x622537: test    ah, 41h
0x62253A: jnp     short loc_622572
0x62253C: mov     ecx, [esi+3Ch]
0x62253F: mov     ecx, [ecx+58h]
0x622542: mov     edx, [ecx]
0x622544: mov     eax, [edx+304h]
0x62254A: call    eax
0x62254C: test    al, al
0x62254E: jnz     def_6224D8; jumptable 006224D8 default case, cases 5-7
0x622554: mov     ecx, [esi+3Ch]
0x622557: push    1
0x622559: call    sub_5E6D70
0x62255E: mov     ecx, dword ptr [esp+28h+var_C]
0x622562: mov     large fs:0, ecx
0x622569: pop     ecx
0x62256A: pop     edi
0x62256B: pop     esi
0x62256C: pop     ebp
0x62256D: pop     ebx
0x62256E: add     esp, 14h
0x622571: retn
0x622572: cmp     byte ptr [esi+131h], 0
0x622579: jnz     loc_6226D6
0x62257F: mov     ecx, [esi+3Ch]
0x622582: mov     edx, [ecx]
0x622584: mov     eax, [edx+2B8h]
0x62258A: push    5
0x62258C: call    eax
0x62258E: test    eax, eax
0x622590: jnz     short loc_6225A5
0x622592: mov     ecx, [esi+3Ch]
0x622595: mov     edx, [ecx]
0x622597: mov     eax, [edx+2B8h]
0x62259D: push    4
0x62259F: call    eax
0x6225A1: test    eax, eax
0x6225A3: jz      short loc_6225C7
0x6225A5: mov     eax, [eax+8]
0x6225A8: push    0; int
0x6225AA: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x6225AF: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6225B4: push    0; int
0x6225B6: push    eax; void *
0x6225B7: call    OblivionDynamicCast
0x6225BC: add     esp, 14h
0x6225BF: push    eax
0x6225C0: mov     ecx, esi
0x6225C2: call    sub_61C680
0x6225C7: mov     byte ptr [esi+130h], 1
0x6225CE: mov     ecx, dword ptr [esp+28h+var_C]
0x6225D2: mov     large fs:0, ecx
0x6225D9: pop     ecx
0x6225DA: pop     edi
0x6225DB: pop     esi
0x6225DC: pop     ebp
0x6225DD: pop     ebx
0x6225DE: add     esp, 14h
0x6225E1: retn
0x6225E2: test    ebx, ebx; jumptable 006224D8 case 2
0x6225E4: jz      loc_6226FE
0x6225EA: mov     eax, [ebx+8]
0x6225ED: push    0; int
0x6225EF: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x6225F4: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6225F9: push    0; int
0x6225FB: push    eax; void *
0x6225FC: call    OblivionDynamicCast
0x622601: mov     edi, eax
0x622603: add     esp, 14h
0x622606: test    edi, edi
0x622608: jz      loc_6226FE
0x62260E: push    0
0x622610: mov     ecx, ebx
0x622612: call    ContainerEntryExtraData_GetHealth
0x622617: fcomp   dword ptr ds:0A2FAA8h
0x62261D: fnstsw  ax
0x62261F: test    ah, 41h
0x622622: jnp     loc_6226FE
0x622628: cmp     byte ptr [edi+90h], 5
0x62262F: jnz     short loc_622684
0x622631: mov     ecx, [esi+3Ch]
0x622634: mov     ecx, [ecx+58h]
0x622637: mov     edx, [ecx]
0x622639: mov     eax, [edx+0F4h]
0x62263F: push    1
0x622641: call    eax
0x622643: test    eax, eax
0x622645: jnz     short loc_622684
0x622647: push    7
0x622649: mov     ecx, esi
0x62264B: call    sub_619920
0x622650: cmp     [esi+70h], ebp
0x622653: jz      short loc_622661
0x622655: fld     dword ptr ds:0A30634h
0x62265B: fstp    dword ptr [esi+188h]
0x622661: mov     ecx, [esi+3Ch]; int
0x622664: push    5; int
0x622666: push    1; char
0x622668: mov     [esi+70h], ebp
0x62266B: call    sub_5F5170
0x622670: mov     ecx, dword ptr [esp+28h+var_C]
0x622674: mov     large fs:0, ecx
0x62267B: pop     ecx
0x62267C: pop     edi
0x62267D: pop     esi
0x62267E: pop     ebp
0x62267F: pop     ebx
0x622680: add     esp, 14h
0x622683: retn
0x622684: mov     ecx, [esi+3Ch]
0x622687: mov     ecx, [ecx+58h]
0x62268A: mov     edx, [ecx]
0x62268C: mov     eax, [edx+304h]
0x622692: call    eax
0x622694: test    al, al
0x622696: jz      loc_622504
0x62269C: cmp     byte ptr [edi+90h], 4
0x6226A3: jnz     def_6224D8; jumptable 006224D8 default case, cases 5-7
0x6226A9: mov     edi, [edi+64h]
0x6226AC: test    edi, edi
0x6226AE: jz      short loc_6226D6
0x6226B0: mov     ecx, ebx
0x6226B2: call    sub_4849C0
0x6226B7: fstp    [esp+28h+var_18+4]
0x6226BB: mov     edx, [edi+24h]
0x6226BE: mov     eax, [edx]
0x6226C0: lea     ecx, [edi+24h]
0x6226C3: push    0
0x6226C5: call    eax
0x6226C7: fcomp   [esp+28h+var_18+4]
0x6226CB: fnstsw  ax
0x6226CD: test    ah, 41h
0x6226D0: jnz     def_6224D8; jumptable 006224D8 default case, cases 5-7
0x6226D6: cmp     [esi+70h], ebp
0x6226D9: jz      short loc_6226E7
0x6226DB: fld     dword ptr ds:0A30634h
0x6226E1: fstp    dword ptr [esi+188h]
0x6226E7: mov     [esi+70h], ebp
0x6226EA: mov     ecx, dword ptr [esp+28h+var_C]
0x6226EE: mov     large fs:0, ecx
0x6226F5: pop     ecx
0x6226F6: pop     edi
0x6226F7: pop     esi
0x6226F8: pop     ebp
0x6226F9: pop     ebx
0x6226FA: add     esp, 14h
0x6226FD: retn
0x6226FE: cmp     byte ptr [esi+130h], 0
0x622705: jnz     short loc_6226D6
0x622707: push    1
0x622709: mov     ecx, esi
0x62270B: call    sub_612960
0x622710: test    eax, eax
0x622712: jz      short loc_622736
0x622714: mov     eax, [eax+8]
0x622717: push    0; int
0x622719: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x62271E: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x622723: push    0; int
0x622725: push    eax; void *
0x622726: call    OblivionDynamicCast
0x62272B: add     esp, 14h
0x62272E: push    eax
0x62272F: mov     ecx, esi
0x622731: call    sub_61C680
0x622736: mov     byte ptr [esi+131h], 1
0x62273D: mov     ecx, dword ptr [esp+28h+var_C]
0x622741: mov     large fs:0, ecx
0x622748: pop     ecx
0x622749: pop     edi
0x62274A: pop     esi
0x62274B: pop     ebp
0x62274C: pop     ebx
0x62274D: add     esp, 14h
0x622750: retn
0x622751: mov     eax, [esi+7Ch]; jumptable 006224D8 case 3
0x622754: test    eax, eax
0x622756: jz      short loc_62276E
0x622758: movzx   ecx, byte ptr [esi+17Ch]
0x62275F: push    1
0x622761: push    ecx
0x622762: push    eax
0x622763: mov     ecx, esi
0x622765: call    sub_613BB0
0x62276A: test    al, al
0x62276C: jz      short loc_622774
0x62276E: cmp     dword ptr [esi+7Ch], 0
0x622772: jnz     short def_6224D8; jumptable 006224D8 default case, cases 5-7
0x622774: cmp     [esi+70h], ebp
0x622777: jz      short loc_622785
0x622779: fld     dword ptr ds:0A30634h
0x62277F: fstp    dword ptr [esi+188h]
0x622785: mov     [esi+70h], ebp
0x622788: cmp     dword ptr [esi+6Ch], 0Ch; jumptable 006224D8 default case, cases 5-7
0x62278C: jz      short loc_622795
0x62278E: mov     ecx, esi
0x622790: call    sub_6213D0
0x622795: mov     ecx, dword ptr [esp+28h+var_C]
0x622799: mov     large fs:0, ecx
0x6227A0: pop     ecx
0x6227A1: pop     edi
0x6227A2: pop     esi
0x6227A3: pop     ebp
0x6227A4: pop     ebx
0x6227A5: add     esp, 14h
0x6227A8: retn
0x6227A9: mov     eax, [esi+80h]; jumptable 006224D8 case 4
0x6227AF: test    eax, eax
0x6227B1: jz      short loc_6227C9
0x6227B3: movzx   edx, byte ptr [esi+17Ch]
0x6227BA: push    1
0x6227BC: push    edx
0x6227BD: push    eax
0x6227BE: mov     ecx, esi
0x6227C0: call    sub_613BB0
0x6227C5: test    al, al
0x6227C7: jz      short loc_622774
0x6227C9: cmp     dword ptr [esi+80h], 0
0x6227D0: jmp     short loc_622772
0x6227D2: mov     ecx, esi; jumptable 006224D8 case 9
0x6227D4: call    sub_619810
0x6227D9: jmp     short def_6224D8; jumptable 006224D8 default case, cases 5-7
0x6227DB: mov     ecx, esi; jumptable 006224D8 case 8
0x6227DD: call    sub_61D7E0
0x6227E2: mov     ecx, dword ptr [esp+28h+var_C]
0x6227E6: mov     large fs:0, ecx
0x6227ED: pop     ecx
0x6227EE: pop     edi
0x6227EF: pop     esi
0x6227F0: pop     ebp
0x6227F1: pop     ebx
0x6227F2: add     esp, 14h
0x6227F5: retn
