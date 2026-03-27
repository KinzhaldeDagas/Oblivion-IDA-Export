0x847400: push    0FFFFFFFFh
0x847402: push    offset SEH_851250
0x847407: mov     eax, large fs:0
0x84740D: push    eax
0x84740E: sub     esp, 1Ch
0x847411: push    ebx
0x847412: push    ebp
0x847413: push    esi
0x847414: push    edi
0x847415: mov     eax, ds:0B30AACh
0x84741A: xor     eax, esp
0x84741C: push    eax
0x84741D: lea     eax, [esp+3Ch+var_C]
0x847421: mov     large fs:0, eax
0x847427: mov     [esp+3Ch+var_28], ecx
0x84742B: mov     eax, ds:0B42EB8h
0x847430: fld1
0x847432: movzx   esi, byte ptr [eax+9]
0x847436: mov     edi, [esp+3Ch+arg_C]
0x84743A: mov     eax, [edi+0C8h]
0x847440: movzx   eax, byte ptr [eax+esi]
0x847444: mov     ecx, ds:0B25AD0h
0x84744A: mov     edx, ds:0B25AD8h
0x847450: mov     ebx, ds:0B45B6Ch
0x847456: mov     [esp+3Ch+var_1C], ecx
0x84745A: mov     ecx, ds:0B25AD4h
0x847460: mov     [esp+3Ch+arg_C], eax
0x847464: fstp    [esp+3Ch+var_1C]
0x847468: mov     ebp, [esp+3Ch+var_1C]
0x84746C: sub     esp, 10h
0x84746F: fild    [esp+4Ch+arg_C]
0x847473: mov     eax, esp
0x847475: mov     [eax], ebp
0x847477: mov     [esp+4Ch+var_14], edx
0x84747B: mov     edx, ds:0B25ADCh
0x847481: mov     [eax+4], ecx
0x847484: fstp    [esp+4Ch+var_14]
0x847488: mov     ecx, [esp+4Ch+var_14]
0x84748C: mov     [eax+8], ecx
0x84748F: push    1Fh
0x847491: mov     [eax+0Ch], edx
0x847494: call    sub_7ECAE0
0x847499: mov     edx, [ebx+24h]
0x84749C: mov     ebp, [edx]
0x84749E: mov     eax, [edi]
0x8474A0: mov     edx, [eax+88h]
0x8474A6: add     esp, 14h
0x8474A9: push    esi
0x8474AA: mov     ecx, edi
0x8474AC: mov     [esp+40h+arg_C], ebp
0x8474B0: call    edx
0x8474B2: mov     ebp, [ebp+4]
0x8474B5: cmp     ebp, eax
0x8474B7: mov     [esp+3Ch+var_24], eax
0x8474BB: jz      short loc_8474F7
0x8474BD: test    ebp, ebp
0x8474BF: jz      short loc_8474E2
0x8474C1: lea     eax, [ebp+4]
0x8474C4: push    eax; lpAddend
0x8474C5: call    dword ptr ds:0A2807Ch
0x8474CB: test    eax, eax
0x8474CD: jnz     short loc_8474DE
0x8474CF: test    ebp, ebp
0x8474D1: jz      short loc_8474DE
0x8474D3: mov     edx, [ebp+0]
0x8474D6: mov     eax, [edx]
0x8474D8: push    1
0x8474DA: mov     ecx, ebp
0x8474DC: call    eax
0x8474DE: mov     eax, [esp+3Ch+var_24]
0x8474E2: test    eax, eax
0x8474E4: mov     ecx, [esp+3Ch+arg_C]
0x8474E8: mov     [ecx+4], eax
0x8474EB: jz      short loc_8474F7
0x8474ED: add     eax, 4
0x8474F0: push    eax; lpAddend
0x8474F1: call    dword ptr ds:0A28078h
0x8474F7: mov     edx, [esp+3Ch+arg_C]
0x8474FB: mov     ecx, [esp+3Ch+var_28]
0x8474FF: push    edi
0x847500: push    edx
0x847501: call    sub_848FA0
0x847506: mov     eax, [ebx+24h]
0x847509: mov     ebp, [eax+4]
0x84750C: mov     ecx, [esp+3Ch+var_28]
0x847510: push    esi
0x847511: push    edi
0x847512: mov     [esp+44h+arg_C], ebp
0x847516: call    sub_848FD0
0x84751B: mov     ebp, [ebp+4]
0x84751E: cmp     ebp, eax
0x847520: mov     [esp+3Ch+var_24], eax
0x847524: jz      short loc_847560
0x847526: test    ebp, ebp
0x847528: jz      short loc_84754B
0x84752A: lea     ecx, [ebp+4]
0x84752D: push    ecx; lpAddend
0x84752E: call    dword ptr ds:0A2807Ch
0x847534: test    eax, eax
0x847536: jnz     short loc_847547
0x847538: test    ebp, ebp
0x84753A: jz      short loc_847547
0x84753C: mov     edx, [ebp+0]
0x84753F: mov     eax, [edx]
0x847541: push    1
0x847543: mov     ecx, ebp
0x847545: call    eax
0x847547: mov     eax, [esp+3Ch+var_24]
0x84754B: test    eax, eax
0x84754D: mov     ecx, [esp+3Ch+arg_C]
0x847551: mov     [ecx+4], eax
0x847554: jz      short loc_847560
0x847556: add     eax, 4
0x847559: push    eax; lpAddend
0x84755A: call    dword ptr ds:0A28078h
0x847560: mov     edx, [esp+3Ch+arg_C]
0x847564: push    edi
0x847565: mov     edi, [esp+40h+var_28]
0x847569: push    edx
0x84756A: mov     ecx, edi
0x84756C: call    sub_848FA0
0x847571: fldz
0x847573: cmp     esi, 4
0x847576: jnz     short loc_847591
0x847578: fld1
0x84757A: fst     [esp+3Ch+var_20]
0x84757E: cmp     esi, 2
0x847581: fxch    st(1)
0x847583: fst     [esp+3Ch+var_28]
0x847587: jnz     short loc_8475A2
0x847589: fxch    st(1)
0x84758B: fstp    [esp+3Ch+var_24]
0x84758F: jmp     short loc_8475B1
0x847591: cmp     esi, 3
0x847594: fst     [esp+3Ch+var_20]
0x847598: fld1
0x84759A: jnz     short loc_84757E
0x84759C: fst     [esp+3Ch+var_28]
0x8475A0: fxch    st(1)
0x8475A2: cmp     esi, 1
0x8475A5: fst     [esp+3Ch+var_24]
0x8475A9: jnz     short loc_8475AF
0x8475AB: fstp    st
0x8475AD: jmp     short loc_8475B1
0x8475AF: fstp    st(1)
0x8475B1: fstp    [esp+3Ch+arg_C]
0x8475B5: sub     esp, 10h
0x8475B8: fld     [esp+4Ch+arg_C]
0x8475BC: mov     eax, esp
0x8475BE: fstp    [esp+4Ch+var_1C]
0x8475C2: mov     ecx, [esp+4Ch+var_1C]
0x8475C6: fld     [esp+4Ch+var_24]
0x8475CA: mov     [eax], ecx
0x8475CC: fstp    [esp+4Ch+var_18]
0x8475D0: mov     edx, [esp+4Ch+var_18]
0x8475D4: fld     [esp+4Ch+var_28]
0x8475D8: mov     [eax+4], edx
0x8475DB: fstp    [esp+4Ch+var_14]
0x8475DF: mov     ecx, [esp+4Ch+var_14]
0x8475E3: fld     [esp+4Ch+var_20]
0x8475E7: mov     [eax+8], ecx
0x8475EA: fstp    [esp+4Ch+var_10]
0x8475EE: mov     edx, [esp+4Ch+var_10]
0x8475F2: push    2
0x8475F4: mov     [eax+0Ch], edx
0x8475F7: call    sub_7ECAE0
0x8475FC: add     esp, 14h
0x8475FF: cmp     esi, 8
0x847602: jnz     short loc_84760E
0x847604: fld1
0x847606: fst     [esp+3Ch+var_28]
0x84760A: fldz
0x84760C: jmp     short loc_847630
0x84760E: cmp     esi, 7
0x847611: fldz
0x847613: fst     [esp+3Ch+var_28]
0x847617: fld1
0x847619: jnz     short loc_84762E
0x84761B: fst     [esp+3Ch+var_24]
0x84761F: fxch    st(1)
0x847621: cmp     esi, 5
0x847624: fst     [esp+3Ch+var_20]
0x847628: jnz     short loc_847641
0x84762A: fstp    st
0x84762C: jmp     short loc_847643
0x84762E: fxch    st(1)
0x847630: cmp     esi, 6
0x847633: fst     [esp+3Ch+var_24]
0x847637: jnz     short loc_847621
0x847639: fxch    st(1)
0x84763B: fstp    [esp+3Ch+var_20]
0x84763F: jmp     short loc_847643
0x847641: fstp    st(1)
0x847643: fstp    [esp+3Ch+arg_C]
0x847647: sub     esp, 10h
0x84764A: fld     [esp+4Ch+arg_C]
0x84764E: mov     eax, esp
0x847650: fstp    [esp+4Ch+var_1C]
0x847654: mov     ecx, [esp+4Ch+var_1C]
0x847658: fld     [esp+4Ch+var_20]
0x84765C: mov     [eax], ecx
0x84765E: fstp    [esp+4Ch+var_18]
0x847662: mov     edx, [esp+4Ch+var_18]
0x847666: fld     [esp+4Ch+var_24]
0x84766A: mov     [eax+4], edx
0x84766D: fstp    [esp+4Ch+var_14]
0x847671: mov     ecx, [esp+4Ch+var_14]
0x847675: fld     [esp+4Ch+var_28]
0x847679: mov     [eax+8], ecx
0x84767C: fstp    [esp+4Ch+var_10]
0x847680: mov     edx, [esp+4Ch+var_10]
0x847684: push    3
0x847686: mov     [eax+0Ch], edx
0x847689: call    sub_7ECAE0
0x84768E: add     esp, 14h
0x847691: cmp     byte ptr [esp+3Ch+arg_10], 0
0x847696: jz      short loc_8476D3
0x847698: mov     esi, 1
0x84769D: add     [ebx+60h], esi
0x8476A0: mov     [esp+3Ch+arg_10], ebx
0x8476A4: mov     ecx, [edi+38h]
0x8476A7: lea     eax, [esp+3Ch+arg_10]
0x8476AB: push    eax
0x8476AC: push    ecx
0x8476AD: lea     ecx, [edi+40h]
0x8476B0: mov     [esp+44h+var_4], 0
0x8476B8: call    sub_76CE40
0x8476BD: or      eax, 0FFFFFFFFh
0x8476C0: add     [ebx+60h], eax
0x8476C3: mov     [esp+3Ch+var_4], eax
0x8476C7: jnz     short loc_8476D0
0x8476C9: mov     ecx, ebx
0x8476CB: call    sub_7604D0
0x8476D0: add     [edi+38h], esi
0x8476D3: mov     ecx, dword ptr [esp+3Ch+var_C]
0x8476D7: mov     large fs:0, ecx
0x8476DE: pop     ecx
0x8476DF: pop     edi
0x8476E0: pop     esi
0x8476E1: pop     ebp
0x8476E2: pop     ebx
0x8476E3: add     esp, 28h
0x8476E6: retn    14h
