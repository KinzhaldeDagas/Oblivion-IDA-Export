0x924F40: push    ebp
0x924F41: mov     ebp, esp
0x924F43: and     esp, 0FFFFFFF0h
0x924F46: sub     esp, 114h
0x924F4C: mov     al, ds:0BA8508h
0x924F51: test    al, al
0x924F53: push    ebx
0x924F54: push    esi
0x924F55: push    edi
0x924F56: mov     edi, ecx
0x924F58: jnz     short loc_924F71
0x924F5A: push    1
0x924F5C: call    sub_9246E0
0x924F61: add     esp, 4
0x924F64: test    al, al
0x924F66: mov     ds:0BA8508h, al
0x924F6B: jz      loc_925503
0x924F71: mov     esi, [ebp+arg_0]
0x924F74: mov     eax, [esi+28h]
0x924F77: mov     ecx, [ebp+arg_4]
0x924F7A: push    8
0x924F7C: push    eax
0x924F7D: push    ecx
0x924F7E: push    esi
0x924F7F: call    sub_8F0F70
0x924F84: mov     ecx, [esi+1Ch]
0x924F87: movaps  xmm1, xmmword ptr [ecx]
0x924F8A: movaps  xmm2, xmmword ptr [ecx+10h]
0x924F8E: movaps  xmm3, xmmword ptr [ecx+20h]
0x924F92: lea     eax, [edi+10h]
0x924F95: lea     edx, [esp+130h+var_B0]
0x924F9C: add     esp, 10h
0x924F9F: sub     edx, eax
0x924FA1: mov     ebx, 3
0x924FA6: movaps  xmm0, xmmword ptr [eax]
0x924FA9: movaps  xmm4, xmm0
0x924FAC: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x924FB0: movaps  xmm5, xmm3
0x924FB3: mulps   xmm5, xmm4
0x924FB6: movaps  xmm4, xmm0
0x924FB9: shufps  xmm4, xmm0, 55h ; 'U'
0x924FBD: movaps  xmm6, xmm2
0x924FC0: mulps   xmm6, xmm4
0x924FC3: movaps  xmm4, xmm0
0x924FC6: shufps  xmm4, xmm0, 0
0x924FCA: movaps  xmm0, xmm1
0x924FCD: mulps   xmm0, xmm4
0x924FD0: addps   xmm0, xmm6
0x924FD3: addps   xmm0, xmm5
0x924FD6: movaps  xmmword ptr [edx+eax], xmm0
0x924FDA: add     eax, 10h
0x924FDD: dec     ebx
0x924FDE: jnz     short loc_924FA6
0x924FE0: movaps  xmm0, xmmword ptr [ecx+30h]
0x924FE4: movaps  xmm1, [esp+120h+var_B0]
0x924FE9: mov     ecx, [esi+20h]
0x924FEC: addps   xmm1, xmm0
0x924FEF: movaps  [esp+120h+var_B0], xmm1
0x924FF4: movaps  xmm1, xmmword ptr [ecx]
0x924FF7: movaps  xmm2, xmmword ptr [ecx+10h]
0x924FFB: movaps  xmm3, xmmword ptr [ecx+20h]
0x924FFF: lea     eax, [edi+40h]
0x925002: lea     edx, [esp+120h+var_E0]
0x925006: sub     edx, eax
0x925008: mov     ebx, 3
0x92500D: lea     ecx, [ecx+0]
0x925010: movaps  xmm0, xmmword ptr [eax]
0x925013: movaps  xmm4, xmm0
0x925016: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x92501A: movaps  xmm5, xmm3
0x92501D: mulps   xmm5, xmm4
0x925020: movaps  xmm4, xmm0
0x925023: shufps  xmm4, xmm0, 55h ; 'U'
0x925027: movaps  xmm6, xmm2
0x92502A: mulps   xmm6, xmm4
0x92502D: movaps  xmm4, xmm0
0x925030: shufps  xmm4, xmm0, 0
0x925034: movaps  xmm0, xmm1
0x925037: mulps   xmm0, xmm4
0x92503A: addps   xmm0, xmm6
0x92503D: addps   xmm0, xmm5
0x925040: movaps  xmmword ptr [edx+eax], xmm0
0x925044: add     eax, 10h
0x925047: dec     ebx
0x925048: jnz     short loc_925010
0x92504A: mov     ebx, [ebp+arg_4]
0x92504D: movaps  xmm0, xmmword ptr [ecx+30h]
0x925051: movaps  xmm1, [esp+120h+var_E0]
0x925056: push    ebx
0x925057: push    esi
0x925058: lea     edx, [esp+128h+var_D0]
0x92505C: push    edx
0x92505D: lea     eax, [esp+12Ch+var_C0]
0x925061: push    eax
0x925062: lea     ecx, [esp+130h+var_90]
0x925069: push    ecx
0x92506A: addps   xmm1, xmm0
0x92506D: mov     ecx, edi
0x92506F: movaps  [esp+134h+var_E0], xmm1
0x925074: call    sub_911060
0x925079: mov     edx, [edi+7Ch]
0x92507C: mov     eax, [edi+80h]
0x925082: movaps  xmm0, [esp+120h+var_90]
0x92508A: mov     dword ptr [esp+120h+var_70], edx
0x925091: lea     ecx, [esp+120h+var_70+8]
0x925098: push    ecx
0x925099: mov     dword ptr [esp+124h+var_70+4], eax
0x9250A0: lea     edx, [esp+124h+var_80]
0x9250A7: push    edx
0x9250A8: lea     eax, [esp+128h+var_D0]
0x9250AC: push    eax
0x9250AD: lea     ecx, [esp+12Ch+var_A0]
0x9250B4: push    ecx
0x9250B5: lea     edx, [esp+130h+var_C0]
0x9250B9: push    edx
0x9250BA: lea     eax, [esp+134h+var_90]
0x9250C1: push    eax
0x9250C2: movaps  [esp+138h+var_80], xmm0
0x9250CA: call    sub_943230
0x9250CF: push    ebx
0x9250D0: lea     ecx, [esp+13Ch+var_80]
0x9250D7: push    esi
0x9250D8: push    ecx
0x9250D9: call    sub_8F1B60
0x9250DE: push    ebx
0x9250DF: push    esi
0x9250E0: lea     edx, [esp+14Ch+var_E0]
0x9250E4: push    edx
0x9250E5: lea     eax, [esp+150h+var_B0]
0x9250EC: push    eax
0x9250ED: call    sub_8F1CC0
0x9250F2: mov     al, [edi+90h]
0x9250F8: add     esp, 34h
0x9250FB: test    al, al
0x9250FD: jz      loc_9254BE
0x925103: mov     edx, [esi+20h]
0x925106: lea     ecx, [edi+0A0h]
0x92510C: push    ecx
0x92510D: push    edx
0x92510E: lea     ecx, [esp+128h+var_30]
0x925115: call    sub_8D2AB0
0x92511A: mov     eax, [edi+0D0h]
0x925120: test    eax, eax
0x925122: mov     ebx, [esi+28h]
0x925125: mov     [esp+120h+var_EC], 0
0x92512D: mov     [esp+120h+var_E8], 0
0x925135: mov     [esp+120h+var_F0], esi
0x925139: jz      loc_9251EF
0x92513F: lea     eax, [esp+120h+var_F8]
0x925143: push    eax
0x925144: lea     ecx, [esp+124h+var_110]
0x925148: push    ecx
0x925149: lea     edx, [esp+128h+var_D0]
0x92514D: push    edx
0x92514E: lea     eax, [esp+12Ch+var_A0]
0x925155: push    eax
0x925156: lea     ecx, [esp+130h+var_C0]
0x92515A: push    ecx
0x92515B: lea     edx, [esp+134h+var_90]
0x925162: push    edx
0x925163: call    sub_943230
0x925168: lea     eax, [esp+138h+var_F4]
0x92516C: push    eax
0x92516D: lea     ecx, [esp+13Ch+var_110]
0x925171: push    ecx
0x925172: lea     edx, [esp+140h+var_D0]
0x925176: push    edx
0x925177: lea     eax, [esp+144h+var_20]
0x92517E: push    eax
0x92517F: lea     ecx, [esp+148h+var_C0]
0x925186: push    ecx
0x925187: lea     edx, [esp+14Ch+var_30]
0x92518E: push    edx
0x92518F: call    sub_943230
0x925194: mov     ecx, [ebp+arg_4]
0x925197: mov     edx, [ecx]
0x925199: lea     eax, [esp+150h+var_FC]
0x92519D: push    eax
0x92519E: push    edx
0x92519F: lea     eax, [esp+158h+var_110]
0x9251A3: push    esi
0x9251A4: push    eax
0x9251A5: call    sub_8F1070
0x9251AA: mov     ecx, [ebx+30h]
0x9251AD: mov     [esp+160h+var_EC], ecx
0x9251B1: mov     edx, [ebx+34h]
0x9251B4: mov     ecx, [edi+0D0h]
0x9251BA: lea     eax, [ebx+48h]
0x9251BD: mov     [esp+160h+var_E4], eax
0x9251C1: add     esp, 40h
0x9251C4: lea     eax, [esp+120h+var_60]
0x9251CB: push    eax
0x9251CC: lea     eax, [esp+124h+var_FC]
0x9251D0: mov     [esp+124h+var_E8], edx
0x9251D4: mov     edx, [ecx]
0x9251D6: push    eax
0x9251D7: call    dword ptr [edx+8]
0x9251DA: mov     ecx, [ebp+arg_4]
0x9251DD: push    ecx
0x9251DE: lea     edx, [esp+124h+var_60]
0x9251E5: push    esi
0x9251E6: push    edx
0x9251E7: call    sub_8F0FB0
0x9251EC: add     esp, 0Ch
0x9251EF: mov     eax, [edi+0D8h]
0x9251F5: test    eax, eax
0x9251F7: jz      loc_9252AD
0x9251FD: lea     eax, [esp+120h+var_F8]
0x925201: push    eax
0x925202: lea     ecx, [esp+124h+var_110]
0x925206: push    ecx
0x925207: lea     edx, [esp+128h+var_C0]
0x92520B: push    edx
0x92520C: lea     eax, [esp+12Ch+var_90]
0x925213: push    eax
0x925214: lea     ecx, [esp+130h+var_D0]
0x925218: push    ecx
0x925219: lea     edx, [esp+134h+var_A0]
0x925220: push    edx
0x925221: call    sub_943230
0x925226: lea     eax, [esp+138h+var_F4]
0x92522A: push    eax
0x92522B: lea     ecx, [esp+13Ch+var_110]
0x92522F: push    ecx
0x925230: lea     edx, [esp+140h+var_C0]
0x925237: push    edx
0x925238: lea     eax, [esp+144h+var_30]
0x92523F: push    eax
0x925240: lea     ecx, [esp+148h+var_D0]
0x925244: push    ecx
0x925245: lea     edx, [esp+14Ch+var_20]
0x92524C: push    edx
0x92524D: call    sub_943230
0x925252: mov     eax, [ebx+38h]
0x925255: mov     [esp+150h+var_EC], eax
0x925259: mov     ecx, [ebx+3Ch]
0x92525C: mov     [esp+150h+var_E8], ecx
0x925260: mov     ecx, [ebp+arg_4]
0x925263: lea     edx, [ebx+4Ch]
0x925266: lea     eax, [esp+150h+var_FC]
0x92526A: push    eax
0x92526B: mov     [esp+154h+var_E4], edx
0x92526F: mov     edx, [ecx]
0x925271: push    edx
0x925272: lea     eax, [esp+158h+var_110]
0x925276: push    esi
0x925277: push    eax
0x925278: call    sub_8F1070
0x92527D: mov     ecx, [edi+0D8h]
0x925283: mov     edx, [ecx]
0x925285: add     esp, 40h
0x925288: lea     eax, [esp+120h+var_60]
0x92528F: push    eax
0x925290: lea     eax, [esp+124h+var_FC]
0x925294: push    eax
0x925295: call    dword ptr [edx+8]
0x925298: mov     ecx, [ebp+arg_4]
0x92529B: push    ecx
0x92529C: lea     edx, [esp+124h+var_60]
0x9252A3: push    esi
0x9252A4: push    edx
0x9252A5: call    sub_8F0FB0
0x9252AA: add     esp, 0Ch
0x9252AD: mov     eax, [edi+0D4h]
0x9252B3: test    eax, eax
0x9252B5: jz      loc_925503
0x9252BB: movaps  xmm0, [esp+120h+var_A0]
0x9252C3: movaps  xmm1, xmm0
0x9252C6: shufps  xmm1, xmm0, 0C9h ; 'É'
0x9252CA: movaps  xmm2, xmm1
0x9252CD: movaps  xmm1, [esp+120h+var_90]
0x9252D5: movaps  xmm3, xmm1
0x9252D8: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x9252DC: mulps   xmm3, xmm2
0x9252DF: movaps  xmm2, xmm0
0x9252E2: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x9252E6: movaps  xmm0, xmm1
0x9252E9: shufps  xmm0, xmm1, 0C9h ; 'É'
0x9252ED: movaps  xmm1, xmm0
0x9252F0: mulps   xmm1, xmm2
0x9252F3: subps   xmm1, xmm3
0x9252F6: movaps  xmm0, xmm1
0x9252F9: mulps   xmm0, xmm1
0x9252FC: movaps  xmm2, xmm0
0x9252FF: shufps  xmm2, xmm0, 55h ; 'U'
0x925303: addss   xmm2, xmm0
0x925307: movaps  xmm3, xmm0
0x92530A: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92530E: movaps  xmm0, xmm3
0x925311: addss   xmm0, xmm2
0x925315: movaps  [esp+120h+var_110], xmm0
0x92531A: rsqrtss xmm2, xmm0
0x92531E: movss   dword ptr [esp+120h+var_110], xmm2
0x925324: movaps  xmm4, [esp+120h+var_110]
0x925329: mulss   xmm0, xmm4
0x92532D: mulss   xmm0, xmm4
0x925331: mov     [esp+120h+var_100], 40400000h
0x925339: movss   xmm2, [esp+120h+var_100]
0x92533F: mov     [esp+120h+var_100], 3F000000h
0x925347: movss   xmm3, [esp+120h+var_100]
0x92534D: movaps  xmm5, xmm2
0x925350: subss   xmm5, xmm0
0x925354: movaps  xmm0, xmm3
0x925357: mulss   xmm0, xmm4
0x92535B: mulss   xmm0, xmm5
0x92535F: movaps  xmm4, xmm0
0x925362: shufps  xmm4, xmm0, 0
0x925366: movaps  xmm0, [esp+120h+var_D0]
0x92536B: mulps   xmm4, xmm1
0x92536E: movaps  xmm1, xmm0
0x925371: shufps  xmm1, xmm0, 0C9h ; 'É'
0x925375: movaps  [esp+120h+var_60], xmm4
0x92537D: movaps  xmm4, xmm1
0x925380: movaps  xmm1, xmmword ptr [esp+120h+var_C0]
0x925385: movaps  xmm5, xmm1
0x925388: shufps  xmm5, xmm1, 0D2h ; 'Ò'
0x92538C: mulps   xmm5, xmm4
0x92538F: movaps  xmm4, xmm0
0x925392: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x925396: movaps  xmm0, xmm1
0x925399: shufps  xmm0, xmm1, 0C9h ; 'É'
0x92539D: movaps  xmm1, xmm0
0x9253A0: mulps   xmm1, xmm4
0x9253A3: subps   xmm1, xmm5
0x9253A6: movaps  xmm0, xmm1
0x9253A9: mulps   xmm0, xmm1
0x9253AC: movaps  xmm4, xmm0
0x9253AF: shufps  xmm4, xmm0, 55h ; 'U'
0x9253B3: addss   xmm4, xmm0
0x9253B7: movaps  xmm5, xmm0
0x9253BA: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x9253BE: movaps  xmm0, xmm5
0x9253C1: addss   xmm0, xmm4
0x9253C5: movaps  [esp+120h+var_110], xmm0
0x9253CA: rsqrtss xmm4, xmm0
0x9253CE: movss   dword ptr [esp+120h+var_110], xmm4
0x9253D4: movaps  xmm4, [esp+120h+var_110]
0x9253D9: mulss   xmm0, xmm4
0x9253DD: mulss   xmm0, xmm4
0x9253E1: subss   xmm2, xmm0
0x9253E5: mulss   xmm3, xmm4
0x9253E9: mulss   xmm3, xmm2
0x9253ED: movaps  xmm0, xmm3
0x9253F0: shufps  xmm0, xmm3, 0
0x9253F4: mulps   xmm0, xmm1
0x9253F7: movaps  [esp+120h+var_110], xmm0
0x9253FC: lea     eax, [esp+120h+var_F8]
0x925400: push    eax
0x925401: lea     ecx, [esp+124h+var_40]
0x925408: push    ecx
0x925409: lea     edx, [esp+128h+var_C0]
0x92540D: push    edx
0x92540E: lea     eax, [esp+12Ch+var_90]
0x925415: push    eax
0x925416: lea     ecx, [esp+130h+var_110]
0x92541A: push    ecx
0x92541B: lea     edx, [esp+134h+var_60]
0x925422: push    edx
0x925423: call    sub_943230
0x925428: lea     eax, [esp+138h+var_F4]
0x92542C: push    eax
0x92542D: lea     ecx, [esp+13Ch+var_40]
0x925434: push    ecx
0x925435: lea     edx, [esp+140h+var_C0]
0x92543C: push    edx
0x92543D: lea     eax, [esp+144h+var_30]
0x925444: push    eax
0x925445: lea     ecx, [esp+148h+var_110]
0x925449: push    ecx
0x92544A: lea     edx, [esp+14Ch+var_10]
0x925451: push    edx
0x925452: call    sub_943230
0x925457: mov     ecx, [ebp+arg_4]
0x92545A: mov     edx, [ecx]
0x92545C: lea     eax, [esp+150h+var_FC]
0x925460: push    eax
0x925461: push    edx
0x925462: lea     eax, [esp+158h+var_40]
0x925469: push    esi
0x92546A: push    eax
0x92546B: call    sub_8F1070
0x925470: mov     ecx, [ebx+40h]
0x925473: mov     [esp+160h+var_EC], ecx
0x925477: mov     edx, [ebx+44h]
0x92547A: mov     ecx, [edi+0D4h]
0x925480: mov     [esp+160h+var_E8], edx
0x925484: add     esp, 40h
0x925487: lea     edx, [esp+120h+var_80]
0x92548E: push    edx
0x92548F: add     ebx, 50h ; 'P'
0x925492: lea     edx, [esp+124h+var_FC]
0x925496: mov     [esp+124h+var_E4], ebx
0x92549A: mov     eax, [ecx]
0x92549C: push    edx
0x92549D: call    dword ptr [eax+8]
0x9254A0: mov     eax, [ebp+arg_4]
0x9254A3: push    eax
0x9254A4: lea     ecx, [esp+124h+var_80]
0x9254AB: push    esi
0x9254AC: push    ecx
0x9254AD: call    sub_8F0FB0
0x9254B2: add     esp, 0Ch
0x9254B5: pop     edi
0x9254B6: pop     esi
0x9254B7: pop     ebx
0x9254B8: mov     esp, ebp
0x9254BA: pop     ebp
0x9254BB: retn    8
0x9254BE: fld     dword ptr [edi+84h]
0x9254C4: fcomp   dword ptr ds:0A2FAA8h
0x9254CA: fnstsw  ax
0x9254CC: test    ah, 41h
0x9254CF: jnz     short loc_925503
0x9254D1: mov     edx, [edi+84h]
0x9254D7: mov     ecx, [esi+28h]
0x9254DA: mov     eax, [esi+1Ch]
0x9254DD: push    ebx
0x9254DE: mov     dword ptr [esp+124h+var_110+8], edx
0x9254E2: lea     edx, [esp+124h+var_110]
0x9254E6: add     ecx, 30h ; '0'
0x9254E9: push    esi
0x9254EA: push    edx
0x9254EB: mov     dword ptr [esp+12Ch+var_110], eax
0x9254EF: mov     dword ptr [esp+12Ch+var_110+0Ch], 3
0x9254F7: mov     dword ptr [esp+12Ch+var_110+4], ecx
0x9254FB: call    sub_8F1460
0x925500: add     esp, 0Ch
0x925503: pop     edi
0x925504: pop     esi
0x925505: pop     ebx
0x925506: mov     esp, ebp
0x925508: pop     ebp
0x925509: retn    8
