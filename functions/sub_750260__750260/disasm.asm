0x750260: sub     esp, 50h
0x750263: push    ebx
0x750264: mov     ebx, ecx
0x750266: fld     dword ptr [ebx+20h]
0x750269: fld     [esp+54h+arg_0]
0x75026D: fld     st
0x75026F: fcom    st(2)
0x750271: fnstsw  ax
0x750273: test    ah, 5
0x750276: jp      short loc_750283
0x750278: fld     dword ptr ds:0A7DEB4h
0x75027E: fchs
0x750280: fstp    dword ptr [ebx+50h]
0x750283: cmp     dword ptr [ebx+30h], 0
0x750287: jz      loc_750AD0
0x75028D: push    esi
0x75028E: mov     esi, [ebx+44h]
0x750291: test    esi, esi
0x750293: jz      loc_750AC2
0x750299: movzx   ecx, word ptr [ebx+8]
0x75029D: mov     al, cl
0x75029F: shr     al, 5
0x7502A2: test    al, 1
0x7502A4: jz      short loc_7502AF
0x7502A6: fld     dword ptr ds:0A7A164h
0x7502AC: fstp    dword ptr [ebx+28h]
0x7502AF: fld     dword ptr ds:0A7DEB4h
0x7502B5: fchs
0x7502B7: fucomp  st(3)
0x7502B9: fnstsw  ax
0x7502BB: test    ah, 44h
0x7502BE: jnp     short loc_7502DA
0x7502C0: test    cl, 6
0x7502C3: jnz     short loc_7502DA
0x7502C5: fsubrp  st(2), st
0x7502C7: fld     dword ptr [esi+48h]
0x7502CA: fcomp   st(2)
0x7502CC: fnstsw  ax
0x7502CE: fstp    st(1)
0x7502D0: test    ah, 5
0x7502D3: jp      short loc_7502DE
0x7502D5: fst     dword ptr [ebx+20h]
0x7502D8: jmp     short loc_7502DE
0x7502DA: fstp    st(2)
0x7502DC: fstp    st(1)
0x7502DE: push    ecx
0x7502DF: mov     ecx, ebx
0x7502E1: fstp    [esp+5Ch+var_5C]; float
0x7502E4: call    sub_6C36B0
0x7502E9: test    al, al
0x7502EB: jnz     loc_750AC8
0x7502F1: mov     eax, [ebx+48h]
0x7502F4: test    eax, eax
0x7502F6: jz      loc_750AC8
0x7502FC: cmp     dword ptr [ebx+3Ch], 0
0x750300: jz      loc_750AC8
0x750306: fld     dword ptr ds:0A7DEB4h
0x75030C: push    eax
0x75030D: fchs
0x75030F: push    offset dword_B3EA50
0x750314: fstp    [esp+60h+arg_0]
0x750318: call    NiRTTI__IsObjectOfRTTIType
0x75031D: add     esp, 8
0x750320: test    al, al
0x750322: jz      short loc_750351
0x750324: mov     esi, [ebx+48h]
0x750327: mov     ecx, esi
0x750329: call    sub_6CD0F0
0x75032E: mov     ecx, esi
0x750330: call    sub_6CC550
0x750335: cmp     al, ds:0A79EFCh
0x75033B: mov     byte ptr [esp+58h+var_14], al
0x75033F: jz      short loc_750351
0x750341: mov     ecx, [esp+58h+var_14]
0x750345: push    ecx
0x750346: mov     ecx, esi
0x750348: call    sub_74F7F0
0x75034D: fstp    [esp+58h+arg_0]
0x750351: mov     ecx, ebx
0x750353: call    sub_74FA90
0x750358: fld     dword ptr ds:0A7DEB4h
0x75035E: fchs
0x750360: mov     esi, eax
0x750362: fstp    [esp+58h+var_14]
0x750366: fld     [esp+58h+arg_0]
0x75036A: mov     byte ptr [esp+58h+arg_0], 1
0x75036F: fld     [esp+58h+var_14]
0x750373: fld     st
0x750375: fucomp  st(2)
0x750377: fnstsw  ax
0x750379: fstp    st(1)
0x75037B: test    ah, 44h
0x75037E: jp      short loc_750385
0x750380: mov     byte ptr [esp+58h+arg_0], 0
0x750385: mov     eax, [ebx+3Ch]
0x750388: fstp    dword ptr [esp+58h+var_20+4]
0x75038C: push    edi
0x75038D: push    eax
0x75038E: push    offset dword_B3CF5C
0x750393: call    NiRTTI__IsObjectOfRTTIType
0x750398: add     esp, 8
0x75039B: test    al, al
0x75039D: jz      short loc_7503CC
0x75039F: mov     edi, [ebx+3Ch]
0x7503A2: mov     ecx, edi
0x7503A4: call    sub_6CD0F0
0x7503A9: mov     ecx, edi
0x7503AB: call    sub_6CC550
0x7503B0: cmp     al, ds:0A79EFCh
0x7503B6: mov     byte ptr [esp+5Ch+var_14], al
0x7503BA: jz      short loc_7503CC
0x7503BC: mov     edx, [esp+5Ch+var_14]
0x7503C0: push    edx
0x7503C1: mov     ecx, edi
0x7503C3: call    sub_74F7F0
0x7503C8: fstp    dword ptr [esp+5Ch+var_20+4]
0x7503CC: mov     ecx, ebx
0x7503CE: call    sub_53D850
0x7503D3: fld     dword ptr [esp+5Ch+var_20+4]
0x7503D7: fld     st
0x7503D9: mov     edi, eax
0x7503DB: fld     dword ptr ds:0A7DEB4h
0x7503E1: mov     dword ptr [esp+5Ch+var_34], edi
0x7503E5: fchs
0x7503E7: fucompp
0x7503E9: fnstsw  ax
0x7503EB: test    ah, 44h
0x7503EE: jnp     short loc_7503F4
0x7503F0: mov     al, 1
0x7503F2: jmp     short loc_7503F6
0x7503F4: xor     al, al
0x7503F6: test    esi, esi
0x7503F8: jz      loc_750AB7
0x7503FE: test    edi, edi
0x750400: jz      loc_750AB7
0x750406: cmp     byte ptr [esp+5Ch+arg_0], 0
0x75040B: fld     dword ptr [ebx+28h]
0x75040E: fstp    [esp+5Ch+var_4C]
0x750412: jnz     short loc_750418
0x750414: test    al, al
0x750416: jz      short loc_75041E
0x750418: fstp    [esp+5Ch+var_4C]
0x75041C: jmp     short loc_750420
0x75041E: fstp    st
0x750420: mov     al, [ebx+8]
0x750423: shr     al, 5
0x750426: test    al, 1
0x750428: jz      short loc_750457
0x75042A: cmp     [ebx+4Ch], edi
0x75042D: jz      short loc_750457
0x75042F: mov     ecx, [ebx+30h]
0x750432: fld     [esp+5Ch+var_4C]
0x750436: lea     eax, [ebx+54h]
0x750439: fst     dword ptr [ebx+50h]
0x75043C: mov     edx, [esi]
0x75043E: mov     edx, [edx+60h]
0x750441: push    eax
0x750442: push    ecx
0x750443: push    ecx
0x750444: mov     ecx, esi
0x750446: fstp    [esp+68h+var_68]
0x750449: call    edx
0x75044B: mov     [ebx+4Ch], edi
0x75044E: pop     edi
0x75044F: pop     esi
0x750450: pop     ebx
0x750451: add     esp, 50h
0x750454: retn    4
0x750457: push    ebp
0x750458: lea     eax, [esp+60h+var_3C]
0x75045C: push    eax
0x75045D: lea     ecx, [esp+64h+var_14]
0x750461: push    ecx
0x750462: lea     edx, [esp+68h+arg_0]
0x750466: push    edx
0x750467: mov     ecx, esi
0x750469: mov     [ebx+4Ch], edi
0x75046C: call    sub_6D2940
0x750471: mov     ebp, [esp+60h+arg_0]
0x750475: test    ebp, ebp
0x750477: mov     [esp+60h+var_48], eax
0x75047B: jnz     short loc_750492
0x75047D: mov     eax, [esi]
0x75047F: mov     edx, [eax+0B0h]
0x750485: push    ebp
0x750486: mov     ecx, esi
0x750488: call    edx
0x75048A: test    al, al
0x75048C: jz      loc_750AAD
0x750492: mov     eax, [esi]
0x750494: mov     edx, [eax+0B0h]
0x75049A: push    0
0x75049C: mov     ecx, esi
0x75049E: call    edx
0x7504A0: test    al, al
0x7504A2: jz      loc_7506EB
0x7504A8: mov     edx, [ebx+30h]
0x7504AB: fldz
0x7504AD: mov     eax, [esi]
0x7504AF: mov     eax, [eax+60h]
0x7504B2: lea     ecx, [esp+60h+arg_0]
0x7504B6: push    ecx
0x7504B7: push    edx
0x7504B8: push    ecx
0x7504B9: mov     ecx, esi
0x7504BB: fstp    [esp+6Ch+var_6C]
0x7504BE: call    eax
0x7504C0: cmp     byte ptr [esp+60h+arg_0], 0
0x7504C5: jz      loc_750AAD
0x7504CB: fld     dword ptr [ebx+50h]
0x7504CE: mov     ecx, [ebx+30h]
0x7504D1: fstp    [esp+60h+var_48]
0x7504D5: push    0
0x7504D7: fld     dword ptr [ecx+0E8h]
0x7504DD: mov     ecx, edi
0x7504DF: fstp    dword ptr [esp+64h+var_28+4]
0x7504E3: fld     [esp+64h+var_4C]
0x7504E7: fstp    dword ptr [ebx+50h]
0x7504EA: mov     edx, [edi]
0x7504EC: mov     eax, [edx+0B0h]
0x7504F2: call    eax
0x7504F4: test    al, al
0x7504F6: jz      loc_75058E
0x7504FC: fld     dword ptr [esp+54h+var_44+4]
0x750500: fld     st
0x750502: fld     dword ptr [esp+54h+var_3C]
0x750506: fld     st(1)
0x750508: fsub    st, st(1)
0x75050A: fstp    dword ptr [esp+54h+var_10]
0x75050E: fcompp
0x750510: fnstsw  ax
0x750512: test    ah, 41h
0x750515: jnz     short loc_750523
0x750517: fldz
0x750519: fstp    dword ptr [esp+54h+var_3C]
0x75051D: fstp    dword ptr [esp+54h+var_10]
0x750521: jmp     short loc_750525
0x750523: fstp    st
0x750525: mov     ecx, [ebx+30h]
0x750528: fldz
0x75052A: mov     edx, [edi]
0x75052C: mov     edx, [edx+5Ch]
0x75052F: lea     eax, [esp+54h+var_34+4]
0x750533: push    eax
0x750534: push    ecx
0x750535: push    ecx
0x750536: mov     ecx, edi
0x750538: fstp    [esp+60h+var_60]
0x75053B: call    edx
0x75053D: test    al, al
0x75053F: jz      loc_750AAD
0x750545: fld     dword ptr [esp+60h+var_3C]
0x750549: sub     esp, 18h
0x75054C: fstp    [esp+78h+var_64]; float
0x750550: mov     ecx, ebx
0x750552: fld     [esp+78h+var_4C]
0x750556: fst     [esp+78h+var_68]; float
0x75055A: fldz
0x75055C: fstp    [esp+78h+var_6C]; float
0x750560: fld     [esp+78h+var_48]
0x750564: fstp    [esp+78h+var_70]; float
0x750568: fstp    [esp+78h+var_74]; float
0x75056C: fld     dword ptr [esp+78h+var_20+4]
0x750570: fadd    dword ptr [esp+78h+var_28+4]
0x750574: fstp    [esp+78h+var_14]
0x750578: fld     [esp+78h+var_14]
0x75057C: fstp    [esp+78h+var_78]; float
0x75057F: call    sub_750040
0x750584: pop     ebp
0x750585: pop     edi
0x750586: pop     esi
0x750587: pop     ebx
0x750588: add     esp, 50h
0x75058B: retn    4
0x75058E: lea     eax, [esp+54h+var_44+3]
0x750592: push    eax
0x750593: lea     ecx, [esp+58h+var_10]
0x750597: push    ecx
0x750598: lea     edx, [esp+5Ch+var_8]
0x75059C: push    edx
0x75059D: mov     ecx, edi
0x75059F: call    sub_6D2940
0x7505A4: movzx   ecx, byte ptr [esp+54h+var_44+3]
0x7505A9: mov     esi, eax
0x7505AB: mov     eax, dword ptr [esp+54h+var_8]
0x7505AF: add     eax, 0FFFFFFFFh
0x7505B2: fld     dword ptr [esi]
0x7505B4: imul    eax, ecx
0x7505B7: fstp    [esp+54h+var_14]
0x7505BB: fld     dword ptr [eax+esi]
0x7505BE: fstp    dword ptr [esp+54h+var_10]
0x7505C2: fldz
0x7505C4: fstp    dword ptr [esp+54h+var_20]
0x7505C8: fld     dword ptr [esp+54h+var_3C]
0x7505CC: fld     dword ptr [esp+54h+var_44+4]
0x7505D0: fst     [esp+54h+var_8+4]
0x7505D4: fcom    st(1)
0x7505D6: fnstsw  ax
0x7505D8: test    ah, 5
0x7505DB: jp      loc_750668
0x7505E1: mov     ecx, [ebx+30h]
0x7505E4: fstp    st
0x7505E6: fld     dword ptr [esp+54h+var_10]
0x7505EA: mov     edx, [edi]
0x7505EC: mov     edx, [edx+5Ch]
0x7505EF: fsub    st, st(1)
0x7505F1: lea     eax, [esp+54h+var_34+4]
0x7505F5: push    eax
0x7505F6: fst     [esp+58h+var_20]
0x7505FA: push    ecx
0x7505FB: fmul    qword ptr ds:0A2FAA0h
0x750601: push    ecx
0x750602: mov     ecx, edi
0x750604: faddp   st(1), st
0x750606: fstp    dword ptr [esp+60h+var_8]
0x75060A: fld     dword ptr [esp+60h+var_8]
0x75060E: fstp    [esp+60h+var_60]
0x750611: call    edx
0x750613: fld     [esp+54h+var_20]
0x750617: sub     esp, 18h
0x75061A: fstp    dword ptr [esp+6Ch+var_20]
0x75061E: mov     ecx, ebx
0x750620: fld     dword ptr [esp+6Ch+var_34+4]
0x750624: fstp    [esp+6Ch+var_58]; float
0x750628: fld     dword ptr [esp+6Ch+var_10]
0x75062C: fst     [esp+6Ch+var_5C]; float
0x750630: fld     [esp+6Ch+var_14]
0x750634: fstp    [esp+6Ch+var_60]; float
0x750638: fld     dword ptr [esp+6Ch+var_3C]
0x75063C: fstp    [esp+6Ch+var_64]; float
0x750640: fstp    [esp+6Ch+var_68]; float
0x750644: fld     dword ptr [esp+6Ch+var_20]
0x750648: fadd    [esp+6Ch+var_18]
0x75064C: fstp    dword ptr [esp+6Ch+var_8]
0x750650: fld     dword ptr [esp+6Ch+var_8]
0x750654: fstp    [esp+6Ch+var_6C]; float
0x750657: call    sub_750040
0x75065C: fld     dword ptr [esi]
0x75065E: fstp    dword ptr [esp+54h+var_3C]
0x750662: fld     [esp+54h+var_8+4]
0x750666: jmp     short loc_75066A
0x750668: fstp    st(1)
0x75066A: fld     dword ptr [esp+54h+var_3C]
0x75066E: mov     edx, [ebx+30h]
0x750671: mov     eax, [edi]
0x750673: fsub    st(1), st
0x750675: mov     eax, [eax+5Ch]
0x750678: fxch    st(1)
0x75067A: lea     ecx, [esp+54h+var_34+4]
0x75067E: fst     [esp+54h+var_8+4]
0x750682: push    ecx
0x750683: fmul    qword ptr ds:0A2FAA0h
0x750689: push    edx
0x75068A: push    ecx
0x75068B: mov     ecx, edi
0x75068D: faddp   st(1), st
0x75068F: fstp    dword ptr [esp+60h+var_8]
0x750693: fld     dword ptr [esp+60h+var_8]
0x750697: fstp    [esp+60h+var_60]
0x75069A: call    eax
0x75069C: fld     dword ptr [esp+60h+var_3C]
0x7506A0: sub     esp, 18h
0x7506A3: fstp    [esp+78h+var_64]; float
0x7506A7: mov     ecx, ebx
0x7506A9: fld     [esp+78h+var_4C]
0x7506AD: fst     [esp+78h+var_68]; float
0x7506B1: fld     dword ptr [esp+78h+var_20]
0x7506B5: fstp    [esp+78h+var_6C]; float
0x7506B9: fld     [esp+78h+var_48]
0x7506BD: fstp    [esp+78h+var_70]; float
0x7506C1: fstp    [esp+78h+var_74]; float
0x7506C5: fld     dword ptr [esp+78h+var_28+4]
0x7506C9: fadd    [esp+78h+var_10]
0x7506CD: fadd    [esp+78h+var_2C]
0x7506D1: fstp    [esp+78h+var_14]
0x7506D5: fld     [esp+78h+var_14]
0x7506D9: fstp    [esp+78h+var_78]; float
0x7506DC: call    sub_750040
0x7506E1: pop     ebp
0x7506E2: pop     edi
0x7506E3: pop     esi
0x7506E4: pop     ebx
0x7506E5: add     esp, 50h
0x7506E8: retn    4
0x7506EB: mov     ecx, dword ptr [esp+60h+var_3C]
0x7506EF: fld     [esp+60h+var_4C]
0x7506F3: mov     eax, [esp+60h+var_14]
0x7506F7: push    ecx; char
0x7506F8: mov     ecx, [esp+64h+var_48]
0x7506FC: lea     edx, [esp+64h+var_18]
0x750700: push    edx; int
0x750701: push    ebp; int
0x750702: push    eax; int
0x750703: push    ecx; int
0x750704: push    ecx
0x750705: xor     esi, esi
0x750707: fstp    [esp+78h+var_78]; float
0x75070A: mov     [esp+78h+var_18], esi
0x75070E: call    sub_6BDBA0
0x750713: fld     dword ptr [ebx+50h]
0x750716: fld     dword ptr ds:0A7DEB4h
0x75071C: mov     cl, al
0x75071E: fchs
0x750720: add     esp, 18h
0x750723: fucompp
0x750725: fnstsw  ax
0x750727: test    ah, 44h
0x75072A: jp      short loc_750740
0x75072C: fld     [esp+60h+var_4C]
0x750730: pop     ebp
0x750731: pop     edi
0x750732: fstp    dword ptr [ebx+50h]
0x750735: pop     esi
0x750736: mov     [ebx+54h], cl
0x750739: pop     ebx
0x75073A: add     esp, 50h
0x75073D: retn    4
0x750740: fld     dword ptr [ebx+50h]
0x750743: mov     dl, [ebx+54h]
0x750746: fstp    dword ptr [esp+60h+var_28+4]
0x75074A: mov     byte ptr [esp+60h+var_50+2], dl
0x75074E: fld     [esp+60h+var_4C]
0x750752: mov     [ebx+54h], cl
0x750755: fst     dword ptr [ebx+50h]
0x750758: mov     byte ptr [esp+60h+var_50+3], 0
0x75075D: fld     qword ptr ds:0A2FAA0h
0x750763: mov     dword ptr [esp+60h+var_20+4], esi
0x750767: fld     dword ptr [esp+60h+var_28+4]
0x75076B: jmp     short loc_750779
0x75076D: fld     qword ptr ds:0A2FAA0h
0x750773: fld     [esp+60h+var_4C]
0x750777: fxch    st(2)
0x750779: cmp     dword ptr [esp+60h+var_20+4], 14h
0x75077E: jge     loc_750AA7
0x750784: fld     st
0x750786: mov     byte ptr [esp+60h+arg_0], 0
0x75078B: fst     [esp+60h+var_8]
0x75078F: fld     st(3)
0x750791: fst     [esp+60h+var_10]
0x750795: fcom    st(1)
0x750797: fnstsw  ax
0x750799: test    ah, 5
0x75079C: jp      short loc_7507A3
0x75079E: mov     byte ptr [esp+60h+arg_0], 1
0x7507A3: cmp     byte ptr [esp+60h+var_50+2], 0
0x7507A8: jz      short loc_7507E6
0x7507AA: test    ebp, ebp
0x7507AC: mov     ecx, ebp
0x7507AE: jbe     loc_750867
0x7507B4: movzx   esi, [esp+60h+var_3C]
0x7507B9: lea     edx, [ebp-1]
0x7507BC: imul    edx, esi
0x7507BF: add     edx, [esp+60h+var_48]
0x7507C3: fld     dword ptr [edx]
0x7507C5: fcomp   st(2)
0x7507C7: fnstsw  ax
0x7507C9: test    ah, 41h
0x7507CC: jp      short loc_7507D8
0x7507CE: cmp     byte ptr [edx+4], 0
0x7507D2: jz      loc_750867
0x7507D8: sub     ecx, 1
0x7507DB: sub     edx, esi
0x7507DD: test    ecx, ecx
0x7507DF: ja      short loc_7507C3
0x7507E1: jmp     loc_750867
0x7507E6: xor     ecx, ecx
0x7507E8: test    ebp, ebp
0x7507EA: jbe     short loc_750827
0x7507EC: movzx   esi, [esp+60h+var_3C]
0x7507F1: mov     edx, [esp+60h+var_48]
0x7507F5: fld     dword ptr [edx]
0x7507F7: fcom    st(2)
0x7507F9: fnstsw  ax
0x7507FB: test    ah, 41h
0x7507FE: jnz     short loc_75081C
0x750800: cmp     byte ptr [esp+60h+arg_0], 0
0x750805: jnz     short loc_750812
0x750807: fcomp   st(1)
0x750809: fnstsw  ax
0x75080B: test    ah, 41h
0x75080E: jp      short loc_75081E
0x750810: jmp     short loc_750814
0x750812: fstp    st
0x750814: cmp     byte ptr [edx+4], 0
0x750818: jnz     short loc_750827
0x75081A: jmp     short loc_75081E
0x75081C: fstp    st
0x75081E: add     ecx, 1
0x750821: add     edx, esi
0x750823: cmp     ecx, ebp
0x750825: jb      short loc_7507F5
0x750827: cmp     ecx, ebp
0x750829: jnz     short loc_750867
0x75082B: cmp     byte ptr [esp+60h+arg_0], 0
0x750830: jz      loc_750AA3
0x750836: xor     ecx, ecx
0x750838: test    ebp, ebp
0x75083A: jbe     short loc_75085F
0x75083C: movzx   esi, [esp+60h+var_3C]
0x750841: mov     edx, [esp+60h+var_48]
0x750845: fld     dword ptr [edx]
0x750847: fcomp   st(1)
0x750849: fnstsw  ax
0x75084B: test    ah, 5
0x75084E: jp      short loc_750856
0x750850: cmp     byte ptr [edx+4], 0
0x750854: jnz     short loc_75085F
0x750856: add     ecx, 1
0x750859: add     edx, esi
0x75085B: cmp     ecx, ebp
0x75085D: jb      short loc_750845
0x75085F: cmp     ecx, ebp
0x750861: jz      loc_750AA3
0x750867: cmp     ecx, ebp
0x750869: mov     eax, ecx
0x75086B: jnb     short loc_75088D
0x75086D: movzx   esi, [esp+60h+var_3C]
0x750872: mov     edi, [esp+60h+var_48]
0x750876: mov     edx, esi
0x750878: imul    edx, ecx
0x75087B: lea     edx, [edx+edi+4]
0x75087F: cmp     byte ptr [edx], 0
0x750882: jz      short loc_75088D
0x750884: add     eax, 1
0x750887: add     edx, esi
0x750889: cmp     eax, ebp
0x75088B: jb      short loc_75087F
0x75088D: cmp     eax, ebp
0x75088F: jnz     short loc_750894
0x750891: sub     eax, 1
0x750894: movzx   edi, [esp+60h+var_3C]
0x750899: mov     edx, edi
0x75089B: mov     esi, edi
0x75089D: imul    edx, ecx
0x7508A0: add     edx, [esp+60h+var_48]
0x7508A4: imul    esi, eax
0x7508A7: add     esi, [esp+60h+var_48]
0x7508AB: cmp     byte ptr [esp+60h+arg_0], 0
0x7508B0: jz      loc_75094E
0x7508B6: fld     dword ptr [esi]
0x7508B8: fcom    st(2)
0x7508BA: fnstsw  ax
0x7508BC: fstp    st(2)
0x7508BE: test    ah, 41h
0x7508C1: jnz     short loc_750907
0x7508C3: mov     ecx, [esp+60h+var_48]
0x7508C7: fstp    st
0x7508C9: fstp    st
0x7508CB: lea     eax, [ebp-1]
0x7508CE: fstp    st(2)
0x7508D0: imul    eax, edi
0x7508D3: fld     dword ptr [eax+ecx]
0x7508D6: fstp    [esp+60h+var_38]
0x7508DA: fxch    st(1)
0x7508DC: fstp    [esp+60h+var_2C]
0x7508E0: fld     dword ptr [edx]
0x7508E2: fstp    dword ptr [esp+60h+var_44+4]
0x7508E6: fld     dword ptr [esi]
0x7508E8: fstp    dword ptr [esp+60h+var_44]
0x7508EC: fld     dword ptr [esp+60h+var_44+4]
0x7508F0: fld     dword ptr [esp+60h+var_44]
0x7508F4: fsub    st, st(1)
0x7508F6: fmulp   st(2), st
0x7508F8: faddp   st(1), st
0x7508FA: fstp    dword ptr [esp+60h+var_20]
0x7508FE: fld     dword ptr [esp+60h+var_20]
0x750902: jmp     loc_7509BF
0x750907: mov     eax, [esp+60h+var_48]
0x75090B: fstp    st(2)
0x75090D: fxch    st(3)
0x75090F: fst     [esp+60h+var_38]
0x750913: fld     dword ptr [eax]
0x750915: fstp    [esp+60h+var_2C]
0x750919: fld     dword ptr [edx]
0x75091B: fstp    dword ptr [esp+60h+var_44+4]
0x75091F: fxch    st(3)
0x750921: fcompp
0x750923: fnstsw  ax
0x750925: test    ah, 5
0x750928: jp      short loc_750930
0x75092A: fstp    st(1)
0x75092C: fld     dword ptr [esi]
0x75092E: jmp     short loc_750932
0x750930: fxch    st(1)
0x750932: fstp    dword ptr [esp+60h+var_44]
0x750936: fld     dword ptr [esp+60h+var_44+4]
0x75093A: fld     dword ptr [esp+60h+var_44]
0x75093E: fsub    st, st(1)
0x750940: fmulp   st(2), st
0x750942: faddp   st(1), st
0x750944: fstp    dword ptr [esp+60h+var_20]
0x750948: fld     dword ptr [esp+60h+var_20]
0x75094C: jmp     short loc_7509BF
0x75094E: fstp    st(1)
0x750950: fld     dword ptr [esi]
0x750952: fcompp
0x750954: fnstsw  ax
0x750956: test    ah, 5
0x750959: jp      short loc_7509A5
0x75095B: fstp    st(2)
0x75095D: mov     ecx, dword ptr [esp+60h+var_34]
0x750961: fld     dword ptr [esi]
0x750963: mov     eax, [ecx]
0x750965: fstp    [esp+60h+var_38]
0x750969: mov     eax, [eax+5Ch]
0x75096C: fxch    st(1)
0x75096E: fstp    [esp+60h+var_2C]
0x750972: fld     dword ptr [edx]
0x750974: lea     edx, [esp+60h+var_34+4]
0x750978: fstp    dword ptr [esp+60h+var_44+4]
0x75097C: push    edx
0x75097D: fld     dword ptr [esi]
0x75097F: mov     edx, [ebx+30h]
0x750982: fstp    dword ptr [esp+64h+var_44]
0x750986: push    edx
0x750987: fld     dword ptr [esp+68h+var_44+4]
0x75098B: push    ecx
0x75098C: fld     dword ptr [esp+6Ch+var_44]
0x750990: fsub    st, st(1)
0x750992: fmulp   st(2), st
0x750994: faddp   st(1), st
0x750996: fstp    dword ptr [esp+6Ch+var_20]
0x75099A: fld     dword ptr [esp+6Ch+var_20]
0x75099E: fstp    [esp+6Ch+var_6C]
0x7509A1: call    eax
0x7509A3: jmp     short loc_7509D7
0x7509A5: fstp    st(1)
0x7509A7: fxch    st(1)
0x7509A9: fst     [esp+60h+var_38]
0x7509AD: fxch    st(1)
0x7509AF: fstp    [esp+60h+var_2C]
0x7509B3: fld     dword ptr [edx]
0x7509B5: fstp    dword ptr [esp+60h+var_44+4]
0x7509B9: fld     dword ptr [esi]
0x7509BB: fstp    dword ptr [esp+60h+var_44]
0x7509BF: mov     ecx, dword ptr [esp+60h+var_34]
0x7509C3: mov     edx, [ecx]
0x7509C5: mov     edx, [edx+5Ch]
0x7509C8: lea     eax, [esp+60h+var_34+4]
0x7509CC: push    eax
0x7509CD: mov     eax, [ebx+30h]
0x7509D0: push    eax
0x7509D1: push    ecx
0x7509D2: fstp    [esp+6Ch+var_6C]
0x7509D5: call    edx
0x7509D7: cmp     byte ptr [esp+60h+arg_0], 0
0x7509DC: mov     eax, [ebx+30h]
0x7509DF: fld     dword ptr [eax+0E8h]
0x7509E5: fstp    dword ptr [esp+60h+var_20]
0x7509E9: jz      short loc_7509F9
0x7509EB: fld     dword ptr [ebx+18h]
0x7509EE: fsub    dword ptr [ebx+14h]
0x7509F1: fadd    dword ptr [esp+60h+var_20]
0x7509F5: fstp    dword ptr [esp+60h+var_20]
0x7509F9: fld     dword ptr [esp+60h+var_34+4]
0x7509FD: sub     esp, 18h
0x750A00: fstp    [esp+78h+var_64]; float
0x750A04: mov     ecx, ebx
0x750A06: fld     dword ptr [esp+78h+var_44]
0x750A0A: fstp    [esp+78h+var_68]; float
0x750A0E: fld     dword ptr [esp+78h+var_44+4]
0x750A12: fstp    [esp+78h+var_6C]; float
0x750A16: fld     [esp+78h+var_2C]
0x750A1A: fstp    [esp+78h+var_70]; float
0x750A1E: fld     [esp+78h+var_38]
0x750A22: fstp    [esp+78h+var_74]; float
0x750A26: fld     dword ptr [esp+78h+var_20]
0x750A2A: fadd    [esp+78h+var_10]
0x750A2E: fsub    [esp+78h+var_8]
0x750A32: fstp    [esp+78h+arg_0]
0x750A36: fld     [esp+78h+arg_0]
0x750A3A: fstp    [esp+78h+var_78]; float
0x750A3D: call    sub_750040
0x750A42: fld     dword ptr [esi]
0x750A44: fcomp   [esp+60h+var_10]
0x750A48: fnstsw  ax
0x750A4A: test    ah, 5
0x750A4D: jp      short loc_750A7E
0x750A4F: mov     ecx, dword ptr [esp+60h+var_3C]
0x750A53: fld     [esp+60h+var_38]
0x750A57: mov     eax, [esp+60h+var_14]
0x750A5B: fst     dword ptr [esp+60h+var_28+4]
0x750A5F: push    ecx; char
0x750A60: mov     ecx, [esp+64h+var_48]
0x750A64: lea     edx, [esp+64h+var_18]
0x750A68: push    edx; int
0x750A69: push    ebp; int
0x750A6A: push    eax; int
0x750A6B: push    ecx; int
0x750A6C: push    ecx
0x750A6D: fstp    [esp+78h+var_78]; float
0x750A70: call    sub_6BDBA0
0x750A75: add     esp, 18h
0x750A78: mov     byte ptr [esp+60h+var_50+2], al
0x750A7C: jmp     short loc_750A83
0x750A7E: mov     byte ptr [esp+60h+var_50+3], 1
0x750A83: add     dword ptr [esp+60h+var_20+4], 1
0x750A88: fld     dword ptr [esp+60h+var_28+4]
0x750A8C: cmp     byte ptr [esp+60h+var_50+3], 0
0x750A91: jz      loc_75076D
0x750A97: pop     ebp
0x750A98: fstp    st
0x750A9A: pop     edi
0x750A9B: pop     esi
0x750A9C: pop     ebx
0x750A9D: add     esp, 50h
0x750AA0: retn    4
0x750AA3: fstp    st
0x750AA5: fstp    st(1)
0x750AA7: fstp    st
0x750AA9: fstp    st
0x750AAB: fstp    st
0x750AAD: pop     ebp
0x750AAE: pop     edi
0x750AAF: pop     esi
0x750AB0: pop     ebx
0x750AB1: add     esp, 50h
0x750AB4: retn    4
0x750AB7: pop     edi
0x750AB8: fstp    st
0x750ABA: pop     esi
0x750ABB: pop     ebx
0x750ABC: add     esp, 50h
0x750ABF: retn    4
0x750AC2: fstp    st(2)
0x750AC4: fstp    st(1)
0x750AC6: fstp    st
0x750AC8: pop     esi
0x750AC9: pop     ebx
0x750ACA: add     esp, 50h
0x750ACD: retn    4
0x750AD0: fstp    st(2)
0x750AD2: pop     ebx
0x750AD3: fstp    st(1)
0x750AD5: fstp    st
0x750AD7: add     esp, 50h
0x750ADA: retn    4
