0x846250: push    0FFFFFFFFh
0x846252: push    offset SEH_8479E0
0x846257: mov     eax, large fs:0
0x84625D: push    eax
0x84625E: sub     esp, 20h
0x846261: push    ebx
0x846262: push    ebp
0x846263: push    esi
0x846264: push    edi
0x846265: mov     eax, ds:0B30AACh
0x84626A: xor     eax, esp
0x84626C: push    eax
0x84626D: lea     eax, [esp+40h+var_C]
0x846271: mov     large fs:0, eax
0x846277: mov     [esp+40h+var_2C], ecx
0x84627B: mov     eax, ds:0B42EB8h
0x846280: movzx   eax, byte ptr [eax+9]
0x846284: mov     edi, ds:0B456C4h
0x84628A: mov     ecx, [edi+24h]
0x84628D: mov     esi, [esp+40h+arg_C]
0x846291: mov     edx, [esi]
0x846293: mov     ebp, [ecx]
0x846295: mov     [esp+40h+var_28], eax
0x846299: push    eax
0x84629A: mov     eax, [edx+88h]
0x8462A0: mov     ecx, esi
0x8462A2: call    eax
0x8462A4: mov     ebx, [ebp+4]
0x8462A7: cmp     ebx, eax
0x8462A9: mov     [esp+40h+arg_C], eax
0x8462AD: jz      short loc_8462E4
0x8462AF: test    ebx, ebx
0x8462B1: jz      short loc_8462D3
0x8462B3: lea     ecx, [ebx+4]
0x8462B6: push    ecx; lpAddend
0x8462B7: call    dword ptr ds:0A2807Ch
0x8462BD: test    eax, eax
0x8462BF: jnz     short loc_8462CF
0x8462C1: test    ebx, ebx
0x8462C3: jz      short loc_8462CF
0x8462C5: mov     edx, [ebx]
0x8462C7: mov     eax, [edx]
0x8462C9: push    1
0x8462CB: mov     ecx, ebx
0x8462CD: call    eax
0x8462CF: mov     eax, [esp+40h+arg_C]
0x8462D3: test    eax, eax
0x8462D5: mov     [ebp+4], eax
0x8462D8: jz      short loc_8462E4
0x8462DA: add     eax, 4
0x8462DD: push    eax; lpAddend
0x8462DE: call    dword ptr ds:0A28078h
0x8462E4: mov     ebx, [esp+40h+var_2C]
0x8462E8: push    esi
0x8462E9: push    ebp
0x8462EA: mov     ecx, ebx
0x8462EC: call    sub_848FA0
0x8462F1: mov     ecx, [edi+24h]
0x8462F4: mov     edx, [esp+40h+var_28]
0x8462F8: mov     ebp, [ecx+4]
0x8462FB: push    edx
0x8462FC: push    esi
0x8462FD: mov     ecx, ebx
0x8462FF: call    sub_848FD0
0x846304: mov     ebx, [ebp+4]
0x846307: cmp     ebx, eax
0x846309: mov     [esp+40h+arg_C], eax
0x84630D: jz      short loc_846344
0x84630F: test    ebx, ebx
0x846311: jz      short loc_846333
0x846313: lea     eax, [ebx+4]
0x846316: push    eax; lpAddend
0x846317: call    dword ptr ds:0A2807Ch
0x84631D: test    eax, eax
0x84631F: jnz     short loc_84632F
0x846321: test    ebx, ebx
0x846323: jz      short loc_84632F
0x846325: mov     edx, [ebx]
0x846327: mov     eax, [edx]
0x846329: push    1
0x84632B: mov     ecx, ebx
0x84632D: call    eax
0x84632F: mov     eax, [esp+40h+arg_C]
0x846333: test    eax, eax
0x846335: mov     [ebp+4], eax
0x846338: jz      short loc_846344
0x84633A: add     eax, 4
0x84633D: push    eax; lpAddend
0x84633E: call    dword ptr ds:0A28078h
0x846344: mov     ecx, [esp+40h+var_2C]
0x846348: push    esi
0x846349: push    ebp
0x84634A: call    sub_848FA0
0x84634F: mov     ecx, [edi+24h]
0x846352: mov     esi, [ecx+8]
0x846355: mov     eax, ds:0B43108h
0x84635A: mov     ebx, [esi+4]
0x84635D: add     esi, 4
0x846360: cmp     ebx, eax
0x846362: mov     ebp, eax
0x846364: jz      short loc_846396
0x846366: test    ebx, ebx
0x846368: jz      short loc_846386
0x84636A: lea     edx, [ebx+4]
0x84636D: push    edx; lpAddend
0x84636E: call    dword ptr ds:0A2807Ch
0x846374: test    eax, eax
0x846376: jnz     short loc_846386
0x846378: test    ebx, ebx
0x84637A: jz      short loc_846386
0x84637C: mov     eax, [ebx]
0x84637E: mov     edx, [eax]
0x846380: push    1
0x846382: mov     ecx, ebx
0x846384: call    edx
0x846386: test    ebp, ebp
0x846388: mov     [esi], ebp
0x84638A: jz      short loc_846396
0x84638C: add     ebp, 4
0x84638F: push    ebp; lpAddend
0x846390: call    dword ptr ds:0A28078h
0x846396: mov     eax, [edi+24h]
0x846399: mov     ebx, [eax+0Ch]
0x84639C: mov     eax, ds:0B4310Ch
0x8463A1: mov     esi, [ebx+4]
0x8463A4: cmp     esi, eax
0x8463A6: mov     ebp, eax
0x8463A8: jz      short loc_8463DB
0x8463AA: test    esi, esi
0x8463AC: jz      short loc_8463CA
0x8463AE: lea     ecx, [esi+4]
0x8463B1: push    ecx; lpAddend
0x8463B2: call    dword ptr ds:0A2807Ch
0x8463B8: test    eax, eax
0x8463BA: jnz     short loc_8463CA
0x8463BC: test    esi, esi
0x8463BE: jz      short loc_8463CA
0x8463C0: mov     edx, [esi]
0x8463C2: mov     eax, [edx]
0x8463C4: push    1
0x8463C6: mov     ecx, esi
0x8463C8: call    eax
0x8463CA: test    ebp, ebp
0x8463CC: mov     [ebx+4], ebp
0x8463CF: jz      short loc_8463DB
0x8463D1: add     ebp, 4
0x8463D4: push    ebp; lpAddend
0x8463D5: call    dword ptr ds:0A28078h
0x8463DB: mov     esi, [esp+40h+var_28]
0x8463DF: fld1
0x8463E1: cmp     esi, 4
0x8463E4: fldz
0x8463E6: jnz     short loc_8463F0
0x8463E8: fxch    st(1)
0x8463EA: fst     [esp+40h+var_20]
0x8463EE: jmp     short loc_846412
0x8463F0: cmp     esi, 3
0x8463F3: fst     [esp+40h+var_20]
0x8463F7: jnz     short loc_846410
0x8463F9: fstp    st(1)
0x8463FB: fld1
0x8463FD: fst     [esp+40h+var_24]
0x846401: fxch    st(1)
0x846403: cmp     esi, 1
0x846406: fst     [esp+40h+var_28]
0x84640A: jnz     short loc_846425
0x84640C: fstp    st
0x84640E: jmp     short loc_846427
0x846410: fxch    st(1)
0x846412: cmp     esi, 2
0x846415: fxch    st(1)
0x846417: fst     [esp+40h+var_24]
0x84641B: jnz     short loc_846403
0x84641D: fxch    st(1)
0x84641F: fstp    [esp+40h+var_28]
0x846423: jmp     short loc_846427
0x846425: fstp    st(1)
0x846427: fstp    [esp+40h+arg_C]
0x84642B: sub     esp, 10h
0x84642E: fld     [esp+50h+arg_C]
0x846432: mov     eax, esp
0x846434: fstp    [esp+50h+var_1C]
0x846438: mov     ecx, [esp+50h+var_1C]
0x84643C: fld     [esp+50h+var_28]
0x846440: mov     [eax], ecx
0x846442: fstp    [esp+50h+var_18]
0x846446: mov     edx, [esp+50h+var_18]
0x84644A: fld     [esp+50h+var_24]
0x84644E: mov     [eax+4], edx
0x846451: fstp    [esp+50h+var_14]
0x846455: mov     ecx, [esp+50h+var_14]
0x846459: fld     [esp+50h+var_20]
0x84645D: mov     [eax+8], ecx
0x846460: fstp    [esp+50h+var_10]
0x846464: mov     edx, [esp+50h+var_10]
0x846468: push    2
0x84646A: mov     [eax+0Ch], edx
0x84646D: call    sub_7ECAE0
0x846472: add     esp, 14h
0x846475: cmp     esi, 8
0x846478: jnz     short loc_846484
0x84647A: fld1
0x84647C: fst     [esp+40h+var_28]
0x846480: fldz
0x846482: jmp     short loc_8464A6
0x846484: cmp     esi, 7
0x846487: fldz
0x846489: fst     [esp+40h+var_28]
0x84648D: fld1
0x84648F: jnz     short loc_8464A4
0x846491: fst     [esp+40h+var_24]
0x846495: fxch    st(1)
0x846497: cmp     esi, 5
0x84649A: fst     [esp+40h+var_20]
0x84649E: jnz     short loc_8464B7
0x8464A0: fstp    st
0x8464A2: jmp     short loc_8464B9
0x8464A4: fxch    st(1)
0x8464A6: cmp     esi, 6
0x8464A9: fst     [esp+40h+var_24]
0x8464AD: jnz     short loc_846497
0x8464AF: fxch    st(1)
0x8464B1: fstp    [esp+40h+var_20]
0x8464B5: jmp     short loc_8464B9
0x8464B7: fstp    st(1)
0x8464B9: fstp    [esp+40h+arg_C]
0x8464BD: sub     esp, 10h
0x8464C0: fld     [esp+50h+arg_C]
0x8464C4: mov     eax, esp
0x8464C6: fstp    [esp+50h+var_1C]
0x8464CA: mov     ecx, [esp+50h+var_1C]
0x8464CE: fld     [esp+50h+var_20]
0x8464D2: mov     [eax], ecx
0x8464D4: fstp    [esp+50h+var_18]
0x8464D8: mov     edx, [esp+50h+var_18]
0x8464DC: fld     [esp+50h+var_24]
0x8464E0: mov     [eax+4], edx
0x8464E3: fstp    [esp+50h+var_14]
0x8464E7: mov     ecx, [esp+50h+var_14]
0x8464EB: fld     [esp+50h+var_28]
0x8464EF: mov     [eax+8], ecx
0x8464F2: fstp    [esp+50h+var_10]
0x8464F6: mov     edx, [esp+50h+var_10]
0x8464FA: push    3
0x8464FC: mov     [eax+0Ch], edx
0x8464FF: call    sub_7ECAE0
0x846504: add     esp, 14h
0x846507: cmp     byte ptr [esp+40h+arg_10], 0
0x84650C: jz      short loc_84654D
0x84650E: mov     ebx, 1
0x846513: add     [edi+60h], ebx
0x846516: mov     [esp+40h+arg_10], edi
0x84651A: mov     esi, [esp+40h+var_2C]
0x84651E: mov     ecx, [esi+38h]
0x846521: lea     eax, [esp+40h+arg_10]
0x846525: push    eax
0x846526: push    ecx
0x846527: lea     ecx, [esi+40h]
0x84652A: mov     [esp+48h+var_4], 0
0x846532: call    sub_76CE40
0x846537: or      eax, 0FFFFFFFFh
0x84653A: add     [edi+60h], eax
0x84653D: mov     [esp+40h+var_4], eax
0x846541: jnz     short loc_84654A
0x846543: mov     ecx, edi
0x846545: call    sub_7604D0
0x84654A: add     [esi+38h], ebx
0x84654D: mov     ecx, dword ptr [esp+40h+var_C]
0x846551: mov     large fs:0, ecx
0x846558: pop     ecx
0x846559: pop     edi
0x84655A: pop     esi
0x84655B: pop     ebp
0x84655C: pop     ebx
0x84655D: add     esp, 2Ch
0x846560: retn    14h
