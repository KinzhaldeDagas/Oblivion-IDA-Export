0x5723E0: push    0FFFFFFFFh
0x5723E2: push    offset SEH_5BC8B0
0x5723E7: mov     eax, large fs:0
0x5723ED: push    eax
0x5723EE: sub     esp, 18h
0x5723F1: push    ebx
0x5723F2: push    ebp
0x5723F3: push    esi
0x5723F4: push    edi
0x5723F5: mov     eax, ds:0B30AACh
0x5723FA: xor     eax, esp
0x5723FC: push    eax; ArgList
0x5723FD: lea     eax, [esp+38h+var_C]
0x572401: mov     large fs:0, eax
0x572407: mov     [esp+38h+var_20], ecx
0x57240B: push    1; arg1
0x57240D: xor     ebx, ebx
0x57240F: push    ebx; canCreate
0x572410: call    InterfaceManager_GetSingleton
0x572415: add     esp, 8
0x572418: cmp     [eax+70h], ebx
0x57241B: jz      loc_572519
0x572421: push    3
0x572423: call    nullsub_returnTrue_0arg
0x572428: mov     eax, [esp+3Ch+arg_18]
0x57242C: add     esp, 4
0x57242F: cmp     eax, ebx
0x572431: mov     [esp+38h+var_1C], ebx
0x572435: mov     [esp+38h+var_21], bl
0x572439: mov     [esp+38h+arg_18], eax
0x57243D: jnz     short loc_572448
0x57243F: mov     eax, ds:0B12DB4h
0x572444: mov     [esp+38h+arg_18], eax
0x572448: mov     [esp+38h+Src], ebx
0x57244C: mov     word ptr [esp+38h+var_10], bx
0x572451: mov     word ptr [esp+38h+var_10+2], bx
0x572456: mov     eax, [esp+38h+a2]
0x57245A: cmp     eax, ebx
0x57245C: mov     [esp+38h+var_4], ebx
0x572460: jz      short loc_5724D4
0x572462: cmp     byte ptr [eax], 0
0x572465: jz      short loc_5724D4
0x572467: push    ebx; a3
0x572468: push    eax; a2
0x572469: lea     ecx, [esp+40h+Src]; this
0x57246D: call    BSStringT_Set
0x572472: mov     [esp+38h+var_18], 4B0h
0x57247A: mov     [esp+38h+a2], ebx
0x57247E: call    FontManager_GetSingleton
0x572483: mov     ecx, [esp+38h+arg_18]
0x572487: mov     eax, [eax+ecx*4-4]
0x57248B: push    0Ah
0x57248D: push    ebx
0x57248E: lea     edx, [esp+40h+a2]
0x572492: push    edx
0x572493: lea     ecx, [esp+44h+var_18]
0x572497: push    ecx
0x572498: lea     edx, [esp+48h+Src]
0x57249C: push    edx
0x57249D: mov     ecx, eax
0x57249F: call    sub_574A80
0x5724A4: mov     ebp, [esp+38h+arg_10]
0x5724A8: cmp     ebp, ebx
0x5724AA: jle     loc_5725A5
0x5724B0: mov     cx, word ptr [esp+38h+var_10]
0x5724B5: mov     eax, [esp+38h+Src]
0x5724B9: xor     edi, edi
0x5724BB: cmp     cx, 0FFFFh
0x5724C0: jnz     short loc_5724DE
0x5724C2: mov     ecx, eax
0x5724C4: lea     esi, [ecx+1]
0x5724C7: mov     dl, [ecx]
0x5724C9: add     ecx, 1
0x5724CC: test    dl, dl
0x5724CE: jnz     short loc_5724C7
0x5724D0: sub     ecx, esi
0x5724D2: jmp     short loc_5724E1
0x5724D4: mov     [esp+38h+var_21], 1
0x5724D9: jmp     loc_5725A5
0x5724DE: movzx   ecx, cx
0x5724E1: xor     edx, edx
0x5724E3: cmp     ecx, ebx
0x5724E5: jbe     short loc_57250C
0x5724E7: lea     esi, [ebp-1]
0x5724EA: lea     ebx, [ebx+0]
0x5724F0: cmp     edi, esi
0x5724F2: jge     short loc_57250C
0x5724F4: mov     ebp, eax
0x5724F6: neg     ebp
0x5724F8: sbb     ebp, ebp
0x5724FA: and     ebp, edx
0x5724FC: cmp     byte ptr [eax+ebp], 0Ah
0x572500: jnz     short loc_572505
0x572502: add     edi, 1
0x572505: add     edx, 1
0x572508: cmp     edx, ecx
0x57250A: jb      short loc_5724F0
0x57250C: cmp     edx, ecx
0x57250E: jnz     short loc_572520
0x572510: push    eax
0x572511: call    FormHeapFree
0x572516: add     esp, 4
0x572519: xor     eax, eax
0x57251B: jmp     loc_57282B
0x572520: xor     esi, esi
0x572522: mov     ecx, eax
0x572524: neg     ecx
0x572526: sbb     ecx, ecx
0x572528: and     ecx, edx
0x57252A: mov     cl, [ecx+eax]
0x57252D: cmp     cl, 0Ah
0x572530: jz      short loc_57255B
0x572532: test    cl, cl
0x572534: jz      short loc_57255B
0x572536: mov     edi, eax
0x572538: neg     edi
0x57253A: sbb     edi, edi
0x57253C: and     edi, esi
0x57253E: mov     [edi+eax], cl
0x572541: mov     eax, [esp+38h+Src]
0x572545: add     edx, 1
0x572548: add     esi, 1
0x57254B: mov     ecx, eax
0x57254D: neg     ecx
0x57254F: sbb     ecx, ecx
0x572551: and     ecx, edx
0x572553: mov     cl, [ecx+eax]
0x572556: cmp     cl, 0Ah
0x572559: jnz     short loc_572532
0x57255B: mov     ecx, eax
0x57255D: neg     ecx
0x57255F: sbb     ecx, ecx
0x572561: and     ecx, edx
0x572563: cmp     byte ptr [ecx+eax], 0
0x572567: jz      short loc_572599
0x572569: mov     edx, eax
0x57256B: neg     edx
0x57256D: sbb     edx, edx
0x57256F: and     edx, esi
0x572571: cmp     byte ptr [edx+eax], 0
0x572575: mov     [esp+38h+var_1C], esi
0x572579: jz      short loc_572599
0x57257B: jmp     short loc_572580
0x57257D: align 10h
0x572580: mov     ecx, [esp+38h+var_1C]
0x572584: add     ecx, 1
0x572587: mov     edx, eax
0x572589: neg     edx
0x57258B: sbb     edx, edx
0x57258D: and     edx, ecx
0x57258F: cmp     byte ptr [edx+eax], 0
0x572593: mov     [esp+38h+var_1C], ecx
0x572597: jnz     short loc_572580
0x572599: mov     ecx, eax
0x57259B: neg     ecx
0x57259D: sbb     ecx, ecx
0x57259F: and     ecx, esi
0x5725A1: mov     byte ptr [ecx+eax], 0
0x5725A5: mov     edx, [esp+38h+var_20]
0x5725A9: fld     [esp+38h+arg_8]
0x5725AD: fld     [esp+38h+arg_4]
0x5725B1: xor     esi, esi
0x5725B3: add     edx, 8
0x5725B6: mov     ecx, edx
0x5725B8: fld     dword ptr [ecx-8]
0x5725BB: fld     st(1)
0x5725BD: fucompp
0x5725BF: fnstsw  ax
0x5725C1: test    ah, 44h
0x5725C4: jp      short loc_5725DC
0x5725C6: fld     dword ptr [ecx-4]
0x5725C9: fld     st(2)
0x5725CB: fucompp
0x5725CD: fnstsw  ax
0x5725CF: test    ah, 44h
0x5725D2: jp      short loc_5725DC
0x5725D4: mov     eax, [ecx]
0x5725D6: cmp     eax, [esp+38h+arg_C]
0x5725DA: jz      short loc_5725EA
0x5725DC: add     esi, 1
0x5725DF: add     ecx, 1Ch
0x5725E2: cmp     esi, 0C8h ; 'È'
0x5725E8: jl      short loc_5725B8
0x5725EA: cmp     esi, 0C8h ; 'È'
0x5725F0: fstp    st(1)
0x5725F2: mov     ebx, ds:0A2807Ch
0x5725F8: fstp    st
0x5725FA: jnz     short loc_572645
0x5725FC: xor     esi, esi
0x5725FE: mov     eax, edx
0x572600: cmp     dword ptr [eax], 0
0x572603: jz      short loc_572613
0x572605: add     esi, 1
0x572608: add     eax, 1Ch
0x57260B: cmp     esi, 0C8h ; 'È'
0x572611: jl      short loc_572600
0x572613: cmp     esi, 0C8h ; 'È'
0x572619: jnz     loc_572712
0x57261F: push    offset aTooManyUniqueD; "Too many unique debug text items. \n"
0x572624: call    PrintError
0x572629: push    2
0x57262B: call    nullsub_returnTrue_0arg
0x572630: mov     ecx, [esp+40h+Src]
0x572634: push    ecx
0x572635: call    FormHeapFree
0x57263A: add     esp, 0Ch
0x57263D: or      eax, 0FFFFFFFFh
0x572640: jmp     loc_57282B
0x572645: cmp     [esp+38h+var_21], 0
0x57264A: jnz     short loc_572691
0x57264C: mov     eax, [esp+38h+var_20]
0x572650: lea     edx, ds:0[esi*8]
0x572657: sub     edx, esi
0x572659: cmp     dword ptr [eax+edx*4+0Ch], 0
0x57265E: lea     eax, [eax+edx*4]
0x572661: jz      short loc_572691
0x572663: mov     ecx, [esp+38h+Src]
0x572667: test    ecx, ecx
0x572669: jz      short loc_57267E
0x57266B: mov     eax, [eax+10h]
0x57266E: test    eax, eax
0x572670: jz      short loc_57267E
0x572672: push    ecx; Str2
0x572673: push    eax; Str1
0x572674: call    __strcmp
0x572679: add     esp, 8
0x57267C: jmp     short loc_572689
0x57267E: xor     eax, eax
0x572680: test    ecx, ecx
0x572682: setz    al
0x572685: lea     eax, [eax+eax-1]
0x572689: test    eax, eax
0x57268B: jz      loc_572813
0x572691: mov     edx, [esp+38h+var_20]
0x572695: lea     ecx, ds:0[esi*8]
0x57269C: sub     ecx, esi
0x57269E: cmp     dword ptr [edx+ecx*4+0Ch], 0
0x5726A3: lea     edi, [edx+ecx*4+0Ch]
0x5726A7: jz      short loc_572712
0x5726A9: push    1; arg1
0x5726AB: push    0; canCreate
0x5726AD: call    InterfaceManager_GetSingleton
0x5726B2: mov     ecx, [eax+70h]
0x5726B5: mov     eax, [edi]
0x5726B7: mov     edx, [ecx]
0x5726B9: mov     edx, [edx+88h]
0x5726BF: add     esp, 8
0x5726C2: push    eax
0x5726C3: lea     eax, [esp+3Ch+a2]
0x5726C7: push    eax
0x5726C8: call    edx
0x5726CA: mov     eax, [esp+38h+a2]
0x5726CE: test    eax, eax
0x5726D0: jz      short loc_5726ED
0x5726D2: mov     ebp, eax
0x5726D4: add     eax, 4
0x5726D7: push    eax; lpAddend
0x5726D8: call    ebx ; InterlockedDecrement
0x5726DA: test    eax, eax
0x5726DC: jnz     short loc_5726ED
0x5726DE: test    ebp, ebp
0x5726E0: jz      short loc_5726ED
0x5726E2: mov     eax, [ebp+0]
0x5726E5: mov     edx, [eax]
0x5726E7: push    1
0x5726E9: mov     ecx, ebp
0x5726EB: call    edx
0x5726ED: mov     ebp, [edi]
0x5726EF: test    ebp, ebp
0x5726F1: jz      short loc_572712
0x5726F3: lea     eax, [ebp+4]
0x5726F6: push    eax; lpAddend
0x5726F7: call    ebx ; InterlockedDecrement
0x5726F9: test    eax, eax
0x5726FB: jnz     short loc_57270C
0x5726FD: test    ebp, ebp
0x5726FF: jz      short loc_57270C
0x572701: mov     edx, [ebp+0]
0x572704: mov     eax, [edx]
0x572706: push    1
0x572708: mov     ecx, ebp
0x57270A: call    eax
0x57270C: mov     dword ptr [edi], 0
0x572712: cmp     [esp+38h+var_21], 0
0x572717: jnz     short loc_57278C
0x572719: mov     ecx, [esp+38h+arg_18]
0x57271D: fld     [esp+38h+arg_8]
0x572721: mov     edx, [esp+38h+arg_C]
0x572725: mov     eax, [esp+38h+Src]
0x572729: push    ecx; int
0x57272A: mov     ecx, [esp+3Ch+var_20]
0x57272E: push    edx; int
0x57272F: sub     esp, 8
0x572732: fstp    [esp+48h+var_44]; float
0x572736: fld     [esp+48h+arg_4]
0x57273A: fstp    [esp+48h+var_48]; float
0x57273D: push    eax; int
0x57273E: call    sub_571900
0x572743: mov     edx, [esp+38h+var_20]
0x572747: lea     ecx, ds:0[esi*8]
0x57274E: sub     ecx, esi
0x572750: mov     edi, [edx+ecx*4+0Ch]
0x572754: lea     esi, [edx+ecx*4]
0x572757: mov     ebp, eax
0x572759: cmp     edi, ebp
0x57275B: jz      short loc_5727C3
0x57275D: test    edi, edi
0x57275F: jz      short loc_572779
0x572761: lea     eax, [edi+4]
0x572764: push    eax; lpAddend
0x572765: call    ebx ; InterlockedDecrement
0x572767: test    eax, eax
0x572769: jnz     short loc_572779
0x57276B: test    edi, edi
0x57276D: jz      short loc_572779
0x57276F: mov     edx, [edi]
0x572771: mov     eax, [edx]
0x572773: push    1
0x572775: mov     ecx, edi
0x572777: call    eax
0x572779: test    ebp, ebp
0x57277B: mov     [esi+0Ch], ebp
0x57277E: jz      short loc_5727C3
0x572780: add     ebp, 4
0x572783: push    ebp; lpAddend
0x572784: call    dword ptr ds:0A28078h
0x57278A: jmp     short loc_5727C3
0x57278C: mov     edx, [esp+38h+var_20]
0x572790: lea     ecx, ds:0[esi*8]
0x572797: sub     ecx, esi
0x572799: mov     edi, [edx+ecx*4+0Ch]
0x57279D: test    edi, edi
0x57279F: lea     esi, [edx+ecx*4]
0x5727A2: jz      short loc_5727C3
0x5727A4: lea     eax, [edi+4]
0x5727A7: push    eax; lpAddend
0x5727A8: call    ebx ; InterlockedDecrement
0x5727AA: test    eax, eax
0x5727AC: jnz     short loc_5727BC
0x5727AE: test    edi, edi
0x5727B0: jz      short loc_5727BC
0x5727B2: mov     edx, [edi]
0x5727B4: mov     eax, [edx]
0x5727B6: push    1
0x5727B8: mov     ecx, edi
0x5727BA: call    eax
0x5727BC: mov     dword ptr [esi+0Ch], 0
0x5727C3: cmp     dword ptr [esi+0Ch], 0
0x5727C7: jz      short loc_5727FF
0x5727C9: mov     edx, [esp+38h+Src]
0x5727CD: push    0; a3
0x5727CF: lea     ecx, [esi+10h]; this
0x5727D2: push    edx; a2
0x5727D3: call    BSStringT_Set
0x5727D8: mov     eax, [esp+38h+Src]
0x5727DC: mov     ecx, [esi+0Ch]
0x5727DF: push    eax; Src
0x5727E0: call    NiObjectNET_SetName
0x5727E5: fld     [esp+38h+arg_4]
0x5727E9: mov     ecx, [esp+38h+arg_C]
0x5727ED: fstp    dword ptr [esi]
0x5727EF: fld     [esp+38h+arg_8]
0x5727F3: mov     [esi+8], ecx
0x5727F6: fstp    dword ptr [esi+4]
0x5727F9: fld     [esp+38h+arg_14]
0x5727FD: jmp     short loc_572810
0x5727FF: fldz
0x572801: mov     dword ptr [esi+8], 0
0x572808: fstp    dword ptr [esi]
0x57280A: fld     dword ptr ds:0A30634h
0x572810: fstp    dword ptr [esi+18h]
0x572813: push    2
0x572815: call    nullsub_returnTrue_0arg
0x57281A: mov     edx, [esp+3Ch+Src]
0x57281E: push    edx
0x57281F: call    FormHeapFree
0x572824: mov     eax, [esp+40h+var_1C]
0x572828: add     esp, 8
0x57282B: mov     ecx, [esp+38h+var_C]
0x57282F: mov     large fs:0, ecx
0x572836: pop     ecx
0x572837: pop     edi
0x572838: pop     esi
0x572839: pop     ebp
0x57283A: pop     ebx
0x57283B: add     esp, 24h
0x57283E: retn    1Ch
