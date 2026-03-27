0x6D5460: sub     esp, 24h
0x6D5463: push    esi
0x6D5464: mov     esi, ecx
0x6D5466: cmp     byte ptr [esi+54h], 0
0x6D546A: jz      loc_6D568F
0x6D5470: mov     eax, [esi+30h]
0x6D5473: push    edi
0x6D5474: mov     edi, [eax+0B4h]
0x6D547A: movzx   ecx, byte ptr [edi+2Ch]
0x6D547E: and     ecx, 3Fh
0x6D5481: cmp     [esi+4Ch], cx
0x6D5485: jnb     loc_6D568E
0x6D548B: fldz
0x6D548D: lea     edx, [esp+2Ch+var_24]
0x6D5491: push    edx
0x6D5492: fstp    [esp+30h+var_C]
0x6D5496: lea     eax, [esp+30h+var_1C]
0x6D549A: push    eax
0x6D549B: lea     ecx, [esp+34h+var_20]
0x6D549F: push    ecx
0x6D54A0: mov     ecx, esi
0x6D54A2: call    sub_6D50B0
0x6D54A7: test    eax, eax
0x6D54A9: jz      short loc_6D54D2
0x6D54AB: mov     edx, dword ptr [esp+2Ch+var_24]
0x6D54AF: fld     dword ptr [esi+28h]
0x6D54B2: push    edx; char
0x6D54B3: mov     edx, [esp+30h+var_20]
0x6D54B7: lea     ecx, [esi+3Ch]
0x6D54BA: push    ecx; int
0x6D54BB: mov     ecx, [esp+34h+var_1C]
0x6D54BF: push    edx; int
0x6D54C0: push    ecx; int
0x6D54C1: push    eax; int
0x6D54C2: push    ecx
0x6D54C3: fstp    [esp+44h+var_44]; float
0x6D54C6: call    sub_6BB270
0x6D54CB: fstp    [esp+44h+var_C]
0x6D54CF: add     esp, 18h
0x6D54D2: fldz
0x6D54D4: lea     edx, [esp+2Ch+var_24]
0x6D54D8: push    edx
0x6D54D9: fstp    [esp+30h+var_18]
0x6D54DD: lea     eax, [esp+30h+var_1C]
0x6D54E1: push    eax
0x6D54E2: lea     ecx, [esp+34h+var_20]
0x6D54E6: push    ecx
0x6D54E7: mov     ecx, esi
0x6D54E9: call    sub_6D5100
0x6D54EE: test    eax, eax
0x6D54F0: jz      short loc_6D5519
0x6D54F2: mov     edx, dword ptr [esp+2Ch+var_24]
0x6D54F6: fld     dword ptr [esi+28h]
0x6D54F9: push    edx; char
0x6D54FA: mov     edx, [esp+30h+var_20]
0x6D54FE: lea     ecx, [esi+44h]
0x6D5501: push    ecx; int
0x6D5502: mov     ecx, [esp+34h+var_1C]
0x6D5506: push    edx; int
0x6D5507: push    ecx; int
0x6D5508: push    eax; int
0x6D5509: push    ecx
0x6D550A: fstp    [esp+44h+var_44]; float
0x6D550D: call    sub_6BB270
0x6D5512: fstp    [esp+44h+var_18]
0x6D5516: add     esp, 18h
0x6D5519: fld1
0x6D551B: lea     edx, [esp+2Ch+var_24]
0x6D551F: push    edx
0x6D5520: fstp    [esp+30h+var_14]
0x6D5524: lea     eax, [esp+30h+var_1C]
0x6D5528: push    eax
0x6D5529: lea     ecx, [esp+34h+var_20]
0x6D552D: push    ecx
0x6D552E: mov     ecx, esi
0x6D5530: call    sub_6D5150
0x6D5535: test    eax, eax
0x6D5537: jz      short loc_6D5560
0x6D5539: mov     edx, dword ptr [esp+2Ch+var_24]
0x6D553D: fld     dword ptr [esi+28h]
0x6D5540: push    edx; char
0x6D5541: mov     edx, [esp+30h+var_20]
0x6D5545: lea     ecx, [esi+40h]
0x6D5548: push    ecx; int
0x6D5549: mov     ecx, [esp+34h+var_1C]
0x6D554D: push    edx; int
0x6D554E: push    ecx; int
0x6D554F: push    eax; int
0x6D5550: push    ecx
0x6D5551: fstp    [esp+44h+var_44]; float
0x6D5554: call    sub_6BB270
0x6D5559: fstp    [esp+44h+var_14]
0x6D555D: add     esp, 18h
0x6D5560: fld1
0x6D5562: lea     edx, [esp+2Ch+var_24]
0x6D5566: push    edx
0x6D5567: fstp    [esp+30h+var_10]
0x6D556B: lea     eax, [esp+30h+var_1C]
0x6D556F: push    eax
0x6D5570: lea     ecx, [esp+34h+var_20]
0x6D5574: push    ecx
0x6D5575: mov     ecx, esi
0x6D5577: call    sub_6D51A0
0x6D557C: test    eax, eax
0x6D557E: jz      short loc_6D55A7
0x6D5580: mov     edx, dword ptr [esp+2Ch+var_24]
0x6D5584: fld     dword ptr [esi+28h]
0x6D5587: push    edx; char
0x6D5588: mov     edx, [esp+30h+var_20]
0x6D558C: lea     ecx, [esi+48h]
0x6D558F: push    ecx; int
0x6D5590: mov     ecx, [esp+34h+var_1C]
0x6D5594: push    edx; int
0x6D5595: push    ecx; int
0x6D5596: push    eax; int
0x6D5597: push    ecx
0x6D5598: fstp    [esp+44h+var_44]; float
0x6D559B: call    sub_6BB270
0x6D55A0: fstp    [esp+44h+var_10]
0x6D55A4: add     esp, 18h
0x6D55A7: mov     eax, [esi+50h]
0x6D55AA: fld     [esp+2Ch+var_14]
0x6D55AE: fdiv    dword ptr [eax+40h]
0x6D55B1: movzx   edx, word ptr [esi+4Ch]
0x6D55B5: push    edx; a2
0x6D55B6: mov     ecx, edi; this
0x6D55B8: fstp    [esp+30h+var_1C]
0x6D55BC: fld     dword ptr [eax+38h]
0x6D55BF: fstp    [esp+30h+var_20]
0x6D55C3: fld     [esp+30h+var_10]
0x6D55C7: fdiv    dword ptr [eax+44h]
0x6D55CA: fstp    [esp+30h+var_4]
0x6D55CE: fld     dword ptr [eax+3Ch]
0x6D55D1: fstp    dword ptr [esp+30h+var_24]
0x6D55D5: call    sub_7282F0
0x6D55DA: fld     [esp+2Ch+var_1C]
0x6D55DE: fld     st
0x6D55E0: movzx   ecx, word ptr [edi+8]
0x6D55E4: test    cx, cx
0x6D55E7: fld1
0x6D55E9: fld     st
0x6D55EB: fsubrp  st(2), st
0x6D55ED: fld     qword ptr ds:0A2FAA0h
0x6D55F3: fmul    st(2), st
0x6D55F5: fld     [esp+2Ch+var_C]
0x6D55F9: fld     st
0x6D55FB: fld     [esp+2Ch+var_20]
0x6D55FF: fmul    st, st(6)
0x6D5601: fsubp   st(1), st
0x6D5603: fstp    [esp+2Ch+var_C]
0x6D5607: fld     [esp+2Ch+var_C]
0x6D560B: fsubp   st(4), st
0x6D560D: fxch    st(3)
0x6D560F: fstp    [esp+2Ch+var_C]
0x6D5613: fld     dword ptr [esp+2Ch+var_24]
0x6D5617: fld     [esp+2Ch+var_4]
0x6D561B: fld     st
0x6D561D: fmulp   st(2), st
0x6D561F: fxch    st(1)
0x6D5621: fsubr   [esp+2Ch+var_18]
0x6D5625: fstp    [esp+2Ch+var_4]
0x6D5629: fld     st
0x6D562B: fsubp   st(3), st
0x6D562D: fxch    st(2)
0x6D562F: fmulp   st(1), st
0x6D5631: fadd    [esp+2Ch+var_4]
0x6D5635: fstp    [esp+2Ch+var_8]
0x6D5639: jbe     short loc_6D5694
0x6D563B: fld     [esp+2Ch+var_8]
0x6D563F: movzx   ecx, cx
0x6D5642: fld     [esp+2Ch+var_C]
0x6D5646: fld     st(4)
0x6D5648: add     eax, 8
0x6D564B: sub     ecx, 1
0x6D564E: fmul    dword ptr [eax-8]
0x6D5651: fadd    st, st(1)
0x6D5653: fstp    dword ptr [eax-8]
0x6D5656: fld     dword ptr [eax-4]
0x6D5659: fmul    st, st(3)
0x6D565B: fadd    st, st(2)
0x6D565D: fstp    dword ptr [eax-4]
0x6D5660: jnz     short loc_6D5646
0x6D5662: fstp    st(4)
0x6D5664: fstp    st(1)
0x6D5666: fstp    st
0x6D5668: mov     eax, [esi+50h]
0x6D566B: fstp    st(1)
0x6D566D: fstp    dword ptr [eax+38h]
0x6D5670: fld     [esp+2Ch+var_18]
0x6D5674: fstp    dword ptr [eax+3Ch]
0x6D5677: fld     [esp+2Ch+var_14]
0x6D567B: fstp    dword ptr [eax+40h]
0x6D567E: fld     [esp+2Ch+var_10]
0x6D5682: fstp    dword ptr [eax+44h]
0x6D5685: or      word ptr [edi+2Eh], 8
0x6D568A: mov     byte ptr [esi+54h], 0
0x6D568E: pop     edi
0x6D568F: pop     esi
0x6D5690: add     esp, 24h
0x6D5693: retn
0x6D5694: fstp    st(2)
0x6D5696: jmp     short loc_6D5668
