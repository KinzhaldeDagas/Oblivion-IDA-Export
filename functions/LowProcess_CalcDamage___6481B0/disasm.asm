0x6481B0: sub     esp, 20h
0x6481B3: push    ebp
0x6481B4: push    esi
0x6481B5: mov     esi, [esp+28h+arg_4]
0x6481B9: mov     eax, [esi]
0x6481BB: mov     edx, [eax+284h]
0x6481C1: push    edi
0x6481C2: push    41h ; 'A'
0x6481C4: mov     ecx, esi
0x6481C6: call    edx
0x6481C8: mov     [esp+30h+var_18], eax
0x6481CC: fild    [esp+30h+var_18]
0x6481D0: mov     eax, [esi]
0x6481D2: mov     edx, [eax+348h]
0x6481D8: mov     ecx, esi
0x6481DA: fstp    qword ptr [esp+30h+var_C]
0x6481DE: call    edx
0x6481E0: fdiv    qword ptr ds:0A309F0h
0x6481E6: mov     eax, [esi]
0x6481E8: mov     edx, [eax+284h]
0x6481EE: push    2
0x6481F0: mov     ecx, esi
0x6481F2: fmul    qword ptr [esp+34h+var_C]
0x6481F6: fstp    dword ptr [esp+34h+var_14]
0x6481FA: call    edx
0x6481FC: mov     [esp+34h+var_1C], eax
0x648200: fild    [esp+34h+var_1C]
0x648204: mov     eax, [esi]
0x648206: mov     edx, [eax+284h]
0x64820C: push    40h ; '@'
0x64820E: fmul    qword ptr ds:0A70398h
0x648214: mov     ecx, esi
0x648216: fstp    [esp+38h+var_14+4]
0x64821A: call    edx
0x64821C: mov     edi, [esp+38h+var_C+4]
0x648220: mov     ecx, [edi+58h]
0x648223: mov     [esp+38h+var_20], eax
0x648227: fild    [esp+38h+var_20]
0x64822B: push    1
0x64822D: fadd    [esp+3Ch+var_14]
0x648231: fstp    [esp+3Ch+var_18]
0x648235: fldz
0x648237: fstp    [esp+3Ch+var_2C]
0x64823B: mov     eax, [ecx]
0x64823D: mov     edx, [eax+0ECh]
0x648243: call    edx
0x648245: test    eax, eax
0x648247: jnz     short loc_6482A1
0x648249: fldz
0x64824B: lea     eax, [esp+3Ch+var_C]
0x64824F: push    eax
0x648250: fstp    [esp+40h+var_C]
0x648254: lea     ecx, [esp+40h+var_30]
0x648258: push    ecx
0x648259: push    1
0x64825B: mov     ecx, edi; this
0x64825D: call    Actor_GetFatigueFraction
0x648262: mov     edx, [edi]
0x648264: mov     eax, [edx+284h]
0x64826A: push    ecx
0x64826B: fstp    [esp+4Ch+var_4C]; int
0x64826E: xor     ebp, ebp
0x648270: push    ebp; int
0x648271: mov     ecx, edi
0x648273: call    eax
0x648275: mov     edx, [edi]
0x648277: push    eax; char
0x648278: mov     eax, [edx+284h]
0x64827E: push    7; float
0x648280: mov     ecx, edi
0x648282: call    eax
0x648284: mov     edx, [edi]
0x648286: push    eax; int
0x648287: mov     eax, [edx+284h]
0x64828D: push    11h; int
0x64828F: mov     ecx, edi
0x648291: call    eax
0x648293: push    eax; int
0x648294: call    Calc_HandToHandDamage
0x648299: add     esp, 1Ch
0x64829C: jmp     loc_648322
0x6482A1: mov     ecx, [edi+58h]
0x6482A4: mov     edx, [ecx]
0x6482A6: mov     eax, [edx+0ECh]
0x6482AC: push    1
0x6482AE: call    eax
0x6482B0: xor     ebp, ebp
0x6482B2: cmp     eax, ebp
0x6482B4: jz      short loc_648322
0x6482B6: mov     eax, [eax+8]
0x6482B9: push    ebp; int
0x6482BA: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x6482BF: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6482C4: push    ebp; int
0x6482C5: push    eax; void *
0x6482C6: call    OblivionDynamicCast
0x6482CB: add     esp, 14h
0x6482CE: cmp     eax, ebp
0x6482D0: jz      short loc_648322
0x6482D2: mov     ecx, [edi+58h]
0x6482D5: mov     edx, [ecx]
0x6482D7: mov     eax, [edx+324h]
0x6482DD: call    eax
0x6482DF: fstp    [esp+40h+var_34]
0x6482E3: fldz
0x6482E5: fcomp   [esp+40h+var_34]
0x6482E9: fnstsw  ax
0x6482EB: test    ah, 1
0x6482EE: jnz     short loc_648322
0x6482F0: mov     ecx, [edi+58h]
0x6482F3: mov     edx, [ecx]
0x6482F5: mov     eax, [edx+0ECh]
0x6482FB: push    1
0x6482FD: call    eax
0x6482FF: push    eax
0x648300: push    edi
0x648301: call    sub_612A90
0x648306: fstp    [esp+4Ch+var_38]
0x64830A: mov     ecx, [edi+58h]
0x64830D: fld     [esp+4Ch+var_38]
0x648311: mov     edx, [ecx]
0x648313: fstp    [esp+4Ch+var_48]
0x648317: mov     eax, [edx+328h]
0x64831D: add     esp, 4
0x648320: call    eax
0x648322: fld     [esp+48h+var_3C]
0x648326: push    ebx
0x648327: fdiv    qword ptr ds:0A309F0h
0x64832D: push    1
0x64832F: mov     ecx, edi
0x648331: fstp    [esp+50h+var_34]
0x648335: call    sub_5E8ED0
0x64833A: fldz
0x64833C: mov     ebx, eax
0x64833E: fstp    [esp+4Ch+var_30]
0x648342: cmp     ebx, ebp
0x648344: mov     [esp+4Ch+var_24], ebx
0x648348: mov     [esp+4Ch+var_38], ebp
0x64834C: mov     [esp+4Ch+var_18], ebp
0x648350: jz      loc_6484B3
0x648356: mov     esi, [ebx]
0x648358: cmp     esi, ebp
0x64835A: jz      loc_648470
0x648360: mov     ebx, [ebx+4]
0x648363: push    ebp
0x648364: push    3
0x648366: lea     ecx, [esi+24h]
0x648369: call    EffectItemList_GetStrongestItem
0x64836E: mov     eax, [eax+10h]
0x648371: cmp     eax, 2
0x648374: jnz     short loc_6483ED
0x648376: cmp     esi, ebp
0x648378: jz      short loc_64837F
0x64837A: lea     eax, [esi+18h]
0x64837D: jmp     short loc_648381
0x64837F: xor     eax, eax
0x648381: push    eax
0x648382: mov     ecx, edi
0x648384: call    sub_5E0970
0x648389: push    ecx
0x64838A: fstp    [esp+54h+var_54]; float
0x64838D: call    sub_546CA0
0x648392: fcomp   dword ptr ds:0A2FAA8h
0x648398: add     esp, 4
0x64839B: fnstsw  ax
0x64839D: test    ah, 41h
0x6483A0: jnz     loc_648468
0x6483A6: mov     ecx, [esp+50h+var_1C]
0x6483AA: cmp     ecx, ebp
0x6483AC: jnz     loc_64845B
0x6483B2: push    8; Size
0x6483B4: call    FormHeapAlloc
0x6483B9: add     esp, 4
0x6483BC: cmp     eax, ebp
0x6483BE: jz      short loc_6483E5
0x6483C0: cmp     esi, ebp
0x6483C2: jz      short loc_6483D5
0x6483C4: lea     ecx, [esi+18h]
0x6483C7: mov     [eax], ecx
0x6483C9: mov     [eax+4], ebp
0x6483CC: mov     [esp+50h+var_1C], eax
0x6483D0: jmp     loc_648468
0x6483D5: xor     ecx, ecx
0x6483D7: mov     [eax], ecx
0x6483D9: mov     [eax+4], ebp
0x6483DC: mov     [esp+50h+var_1C], eax
0x6483E0: jmp     loc_648468
0x6483E5: xor     eax, eax
0x6483E7: mov     [esp+50h+var_1C], eax
0x6483EB: jmp     short loc_648468
0x6483ED: cmp     eax, 1
0x6483F0: jnz     short loc_648468
0x6483F2: cmp     esi, ebp
0x6483F4: jz      short loc_6483FB
0x6483F6: lea     eax, [esi+18h]
0x6483F9: jmp     short loc_6483FD
0x6483FB: xor     eax, eax
0x6483FD: push    eax
0x6483FE: mov     ecx, edi
0x648400: call    sub_5E0970
0x648405: push    ecx
0x648406: fstp    [esp+54h+var_54]; float
0x648409: call    sub_546CA0
0x64840E: fcomp   dword ptr ds:0A2FAA8h
0x648414: add     esp, 4
0x648417: fnstsw  ax
0x648419: test    ah, 41h
0x64841C: jnz     short loc_648468
0x64841E: mov     ecx, [esp+50h+var_3C]
0x648422: cmp     ecx, ebp
0x648424: jnz     short loc_64845B
0x648426: push    8; Size
0x648428: call    FormHeapAlloc
0x64842D: add     esp, 4
0x648430: cmp     eax, ebp
0x648432: jz      short loc_648453
0x648434: cmp     esi, ebp
0x648436: jz      short loc_648446
0x648438: lea     ecx, [esi+18h]
0x64843B: mov     [eax], ecx
0x64843D: mov     [eax+4], ebp
0x648440: mov     [esp+50h+var_3C], eax
0x648444: jmp     short loc_648468
0x648446: xor     ecx, ecx
0x648448: mov     [eax], ecx
0x64844A: mov     [eax+4], ebp
0x64844D: mov     [esp+50h+var_3C], eax
0x648451: jmp     short loc_648468
0x648453: xor     eax, eax
0x648455: mov     [esp+50h+var_3C], eax
0x648459: jmp     short loc_648468
0x64845B: cmp     esi, ebp
0x64845D: jz      short loc_648464
0x64845F: lea     eax, [esi+18h]
0x648462: jmp     short loc_648466
0x648464: xor     eax, eax
0x648466: mov     [ecx], eax
0x648468: cmp     ebx, ebp
0x64846A: jnz     loc_648356
0x648470: mov     eax, [esp+50h+var_3C]
0x648474: cmp     eax, ebp
0x648476: jnz     short loc_648480
0x648478: mov     eax, [esp+50h+var_1C]
0x64847C: cmp     eax, ebp
0x64847E: jz      short loc_6484AF
0x648480: mov     ecx, [eax]
0x648482: add     ecx, 0Ch
0x648485: call    EffectItemList_GetSchoolAV
0x64848A: mov     edx, [edi]
0x64848C: push    eax
0x64848D: mov     eax, [edx+284h]
0x648493: mov     ecx, edi
0x648495: call    eax
0x648497: mov     [esp+54h+var_38], eax
0x64849B: fild    [esp+54h+var_38]
0x64849F: fmul    qword ptr ds:0A2FC68h
0x6484A5: fdiv    qword ptr ds:0A309F0h
0x6484AB: fstp    [esp+54h+var_38]
0x6484AF: mov     esi, [esp+54h+var_1C]
0x6484B3: fld     [esp+54h+var_3C]
0x6484B7: pop     ebx
0x6484B8: fsub    [esp+50h+var_34]
0x6484BC: fstp    [esp+50h+var_1C]
0x6484C0: fld     [esp+50h+var_1C]
0x6484C4: fld     [esp+50h+var_38]
0x6484C8: fsub    [esp+50h+var_30]
0x6484CC: fstp    [esp+50h+var_1C]
0x6484D0: fld     [esp+50h+var_1C]
0x6484D4: fcompp
0x6484D6: fnstsw  ax
0x6484D8: test    ah, 5
0x6484DB: jp      short loc_6484E3
0x6484DD: fld     [esp+50h+var_44]
0x6484E1: jmp     short loc_6484E5
0x6484E3: fldz
0x6484E5: push    ebp
0x6484E6: fstp    [esp+54h+var_1C]
0x6484EA: push    esi
0x6484EB: mov     ecx, edi
0x6484ED: call    TesObjectREF_GetDistance
0x6484F2: fstp    [esp+50h+var_30]
0x6484F6: fld     [esp+50h+var_30]
0x6484FA: sub     esp, 8
0x6484FD: fstp    [esp+58h+var_54]
0x648501: mov     ecx, esi; this
0x648503: fld     [esp+58h+var_1C]
0x648507: fstp    [esp+58h+var_58]; float
0x64850A: push    ebp; a2
0x64850B: call    Actor_GetActorBaseForm
0x648510: mov     ecx, eax
0x648512: call    TESActorBase_GetHealth
0x648517: mov     edx, [edi]
0x648519: mov     [esp+58h+var_1C], eax
0x64851D: fild    [esp+58h+var_1C]
0x648521: mov     eax, [edx+284h]
0x648527: push    ecx
0x648528: mov     ecx, edi
0x64852A: fstp    [esp+5Ch+var_5C]; float
0x64852D: push    8; float
0x64852F: call    eax
0x648531: mov     [esp+60h+var_20], eax
0x648535: fild    [esp+60h+var_20]
0x648539: push    ecx
0x64853A: mov     ecx, edi
0x64853C: fstp    [esp+64h+var_64]; float
0x64853F: push    8
0x648541: call    Actor_GetBaseCalcAVf
0x648546: push    ecx
0x648547: fstp    [esp+68h+var_68]; float
0x64854A: call    sub_547910
0x64854F: mov     esi, [esp+68h+var_30]
0x648553: fstp    [esp+68h+var_20]
0x648557: add     esp, 14h
0x64855A: cmp     esi, ebp
0x64855C: jz      short loc_64856E
0x64855E: mov     ecx, esi
0x648560: call    BSSimpleList_Clear
0x648565: push    esi
0x648566: call    FormHeapFree
0x64856B: add     esp, 4
0x64856E: mov     ecx, [esp+54h+var_44]
0x648572: push    ecx
0x648573: call    FormHeapFree
0x648578: mov     edx, [esp+58h+var_24]
0x64857C: push    edx
0x64857D: call    FormHeapFree
0x648582: fldz
0x648584: fld     [esp+5Ch+var_20]
0x648588: add     esp, 8
0x64858B: fcom    st(1)
0x64858D: pop     edi
0x64858E: pop     esi
0x64858F: pop     ebp
0x648590: fnstsw  ax
0x648592: fstp    st(1)
0x648594: test    ah, 41h
0x648597: jp      short loc_6485A5
0x648599: fstp    st
0x64859B: fld1
0x64859D: fstp    [esp+48h+var_20]
0x6485A1: fld     [esp+48h+var_20]
0x6485A5: add     esp, 20h
0x6485A8: retn    8
