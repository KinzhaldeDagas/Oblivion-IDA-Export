0x928640: push    ebp
0x928641: mov     ebp, esp
0x928643: and     esp, 0FFFFFFF0h
0x928646: sub     esp, 164h
0x92864C: push    ebx
0x92864D: push    esi
0x92864E: push    edi
0x92864F: mov     edi, [ebp+arg_0]
0x928652: mov     eax, [edi+28h]
0x928655: push    8
0x928657: mov     esi, ecx
0x928659: mov     ecx, [ebp+arg_4]
0x92865C: push    eax
0x92865D: push    ecx
0x92865E: push    edi
0x92865F: call    sub_8F0F70
0x928664: mov     eax, [edi+20h]
0x928667: add     esp, 10h
0x92866A: lea     edx, [esi+60h]
0x92866D: push    edx
0x92866E: push    eax
0x92866F: lea     ecx, [esp+178h+var_40]
0x928676: call    sub_8B1F70
0x92867B: mov     edx, [edi+1Ch]
0x92867E: lea     ecx, [esi+20h]
0x928681: push    ecx
0x928682: push    edx
0x928683: lea     ecx, [esp+178h+var_D0]
0x92868A: call    sub_8B1F70
0x92868F: mov     ebx, [edi+28h]
0x928692: lea     eax, [esp+170h+var_A0]
0x928699: push    eax
0x92869A: lea     ecx, [esp+174h+var_40]
0x9286A1: push    ecx
0x9286A2: lea     ecx, [esp+178h+var_154+4]
0x9286A6: call    sub_88FD10
0x9286AB: mov     ecx, [esi+0Ch]
0x9286AE: mov     edx, [ecx]
0x9286B0: lea     eax, [esp+170h+var_154+4]
0x9286B4: push    eax
0x9286B5: push    eax
0x9286B6: mov     eax, [ebx+38h]
0x9286B9: push    eax
0x9286BA: call    dword ptr [edx+0Ch]
0x9286BD: fstp    dword ptr [ebx+38h]
0x9286C0: lea     ecx, [esp+170h+var_154+4]
0x9286C4: push    ecx
0x9286C5: lea     edx, [esp+174h+var_40]
0x9286CC: push    edx
0x9286CD: lea     ecx, [esp+0F8h]
0x9286D4: call    sub_88FCC0
0x9286D9: mov     ecx, [esi+0Ch]
0x9286DC: mov     eax, [ecx]
0x9286DE: lea     edx, [esp+170h+var_130]
0x9286E2: push    edx
0x9286E3: mov     edx, [ebx+38h]
0x9286E6: push    edx
0x9286E7: call    dword ptr [eax+10h]
0x9286EA: lea     eax, [esp+170h+var_130]
0x9286EE: push    eax
0x9286EF: lea     ecx, [esp+174h+var_40]
0x9286F6: push    ecx
0x9286F7: lea     ecx, [esp+178h+var_144+4]
0x9286FB: call    sub_88FE00
0x928700: fld     [esp+170h+var_144+4]
0x928704: fabs
0x928706: xor     ecx, ecx
0x928708: fld     [esp+170h+var_144+8]
0x92870C: fabs
0x92870E: mov     edx, 1
0x928713: fst     dword ptr [esp+170h+var_118+4]
0x928717: fld     [esp+170h+var_144+0Ch]
0x92871B: mov     [esp+170h+var_158], 2
0x928723: fabs
0x928725: fstp    dword ptr [esp+170h+var_118]
0x928729: fcomp   st(1)
0x92872B: fnstsw  ax
0x92872D: test    ah, 5
0x928730: jp      short loc_92873F
0x928732: fstp    st
0x928734: xor     edx, edx
0x928736: fld     dword ptr [esp+170h+var_118+4]
0x92873A: mov     ecx, 1
0x92873F: fld     dword ptr [esp+170h+var_118]
0x928743: fcomp   st(1)
0x928745: fnstsw  ax
0x928747: fstp    st
0x928749: test    ah, 5
0x92874C: jp      short loc_928757
0x92874E: mov     eax, ecx
0x928750: mov     ecx, 2
0x928755: jmp     short loc_92875B
0x928757: mov     eax, [esp+170h+var_158]
0x92875B: fld     [esp+edx*4+170h+var_144+4]
0x92875F: mov     dword ptr [esp+ecx*4+170h+var_154+4], 0
0x928767: mov     ecx, [esp+eax*4+170h+var_144+4]
0x92876B: fchs
0x92876D: mov     [esp+170h+var_144], 0
0x928775: mov     dword ptr [esp+edx*4+170h+var_154+4], ecx
0x928779: fstp    dword ptr [esp+eax*4+170h+var_154+4]
0x92877D: movaps  xmm2, [esp+170h+var_154+4]
0x928782: movaps  xmm0, xmm2
0x928785: mulps   xmm0, xmm2
0x928788: movaps  xmm1, xmm0
0x92878B: shufps  xmm1, xmm0, 55h ; 'U'
0x92878F: addss   xmm1, xmm0
0x928793: movaps  xmm3, xmm0
0x928796: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92879A: mov     ecx, [esi+0Ch]
0x92879D: mov     eax, [ebx+38h]
0x9287A0: movaps  xmm0, xmm3
0x9287A3: addss   xmm0, xmm1
0x9287A7: movaps  [esp+170h+var_130], xmm0
0x9287AC: rsqrtss xmm1, xmm0
0x9287B0: mov     edx, [ecx]
0x9287B2: movss   dword ptr [esp+170h+var_130], xmm1
0x9287B8: movaps  xmm1, [esp+170h+var_130]
0x9287BD: mulss   xmm0, xmm1
0x9287C1: mulss   xmm0, xmm1
0x9287C5: mov     [esp+170h+var_158], 40400000h
0x9287CD: movss   xmm3, [esp+170h+var_158]
0x9287D3: subss   xmm3, xmm0
0x9287D7: mov     [esp+170h+var_158], 3F000000h
0x9287DF: movss   xmm0, [esp+170h+var_158]
0x9287E5: mulss   xmm0, xmm1
0x9287E9: mulss   xmm0, xmm3
0x9287ED: movaps  xmm1, xmm0
0x9287F0: shufps  xmm1, xmm0, 0
0x9287F4: movaps  xmm0, xmm1
0x9287F7: mulps   xmm0, xmm2
0x9287FA: movaps  xmm1, xmm0
0x9287FD: shufps  xmm1, xmm0, 0C9h ; 'É'
0x928801: movaps  xmm2, xmm1
0x928804: movaps  xmm1, xmmword ptr [esp+170h+var_144+4]
0x928809: movaps  xmm3, xmm1
0x92880C: movaps  [esp+170h+var_154+4], xmm0
0x928811: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x928815: mulps   xmm3, xmm2
0x928818: movaps  xmm2, xmm0
0x92881B: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x92881F: movaps  xmm0, xmm1
0x928822: shufps  xmm0, xmm1, 0C9h ; 'É'
0x928826: mulps   xmm0, xmm2
0x928829: subps   xmm0, xmm3
0x92882C: push    eax
0x92882D: movaps  [esp+174h+var_130], xmm0
0x928832: call    dword ptr [edx+1Ch]
0x928835: movaps  xmm1, xmmword ptr [esp+170h+var_144+4]
0x92883A: fchs
0x92883C: fstp    [esp+170h+var_158]
0x928840: fld     dword ptr [esi+10h]
0x928843: movss   xmm0, [esp+170h+var_158]
0x928849: fcomp   dword ptr ds:0A2FAA8h
0x92884F: movaps  xmm2, xmm0
0x928852: shufps  xmm2, xmm0, 0
0x928856: movaps  xmm0, [esp+170h+var_A0]
0x92885E: mulps   xmm2, xmm1
0x928861: fnstsw  ax
0x928863: addps   xmm0, xmm2
0x928866: movaps  [esp+170h+anonymous_0], xmm0
0x92886E: test    ah, 41h
0x928871: jnz     short loc_9288A0
0x928873: mov     edx, [ebp+arg_4]
0x928876: mov     ecx, [esi+10h]
0x928879: push    edx
0x92887A: lea     eax, [esp+174h+var_118+8]
0x92887E: push    edi
0x92887F: push    eax
0x928880: movaps  xmmword ptr [esp+17Ch+var_108+8], xmm1
0x928885: movaps  [esp+17Ch+var_118+8], xmm0
0x92888A: mov     dword ptr [esp+17Ch+var_F0], ecx
0x928891: mov     dword ptr [esp+17Ch+var_F0+4], ebx
0x928898: call    sub_8F15F0
0x92889D: add     esp, 0Ch
0x9288A0: mov     ecx, [ebp+arg_4]
0x9288A3: movaps  xmm0, [esp+170h+var_A0]
0x9288AB: push    ecx
0x9288AC: movaps  xmmword ptr [esp+174h+var_78+8], xmm0
0x9288B4: movaps  xmm0, xmmword ptr [esp+0F4h]
0x9288BC: lea     edx, [esp+174h+var_78+8]
0x9288C3: movaps  [esp+174h+anonymous_1], xmm0
0x9288CB: movaps  xmm0, [esp+174h+var_154+4]
0x9288D0: push    edi
0x9288D1: push    edx
0x9288D2: movaps  [esp+17Ch+var_50], xmm0
0x9288DA: call    sub_8F1790
0x9288DF: mov     eax, [ebp+arg_4]
0x9288E2: movaps  xmm0, [esp+17Ch+var_130]
0x9288E7: push    eax
0x9288E8: lea     ecx, [esp+180h+var_78+8]
0x9288EF: push    edi
0x9288F0: push    ecx
0x9288F1: movaps  [esp+188h+var_50], xmm0
0x9288F9: call    sub_8F1790
0x9288FE: mov     al, [esi+14h]
0x928901: add     esp, 18h
0x928904: cmp     al, 1
0x928906: jl      loc_9289EF
0x92890C: mov     edx, [ebp+arg_4]
0x92890F: movaps  xmm0, xmmword ptr [esp+170h+var_144+4]
0x928914: push    edx
0x928915: movaps  [esp+174h+var_118+8], xmm0
0x92891A: movaps  xmm0, [esp+174h+anonymous_3]
0x928922: lea     eax, [esp+174h+var_118+8]
0x928926: movaps  [esp+174h+var_F0], xmm0
0x92892E: movaps  xmm0, [esp+174h+anonymous_2]
0x928936: push    edi
0x928937: push    eax
0x928938: movaps  xmmword ptr [esp+17Ch+var_108+8], xmm0
0x92893D: call    sub_8F1310
0x928942: mov     ecx, [ebp+arg_4]
0x928945: movaps  xmm0, [esp+17Ch+anonymous_2]
0x92894D: movaps  xmm1, [esp+17Ch+anonymous_3]
0x928955: push    ecx
0x928956: movaps  [esp+180h+var_F0], xmm0
0x92895E: movaps  xmm0, xmmword ptr ds:0A965C0h
0x928965: lea     edx, [esp+180h+var_118+8]
0x928969: push    edi
0x92896A: xorps   xmm1, xmm0
0x92896D: push    edx
0x92896E: movaps  xmmword ptr [esp+188h+var_108+8], xmm1
0x928976: call    sub_8F1310
0x92897B: mov     al, [esi+14h]
0x92897E: add     esp, 18h
0x928981: cmp     al, 3
0x928983: jnz     short loc_9289EF
0x928985: mov     ecx, [esi+0Ch]
0x928988: mov     eax, [ecx]
0x92898A: lea     edx, [esp+170h+var_130]
0x92898E: push    edx
0x92898F: mov     edx, [ebx+38h]
0x928992: push    edx
0x928993: call    dword ptr [eax+20h]
0x928996: lea     eax, [esp+170h+var_130]
0x92899A: push    eax
0x92899B: lea     ecx, [esp+174h+var_40]
0x9289A2: push    ecx
0x9289A3: lea     ecx, [esp+178h+var_154+4]
0x9289A7: call    sub_88FE00
0x9289AC: mov     edx, [ebp+arg_4]
0x9289AF: movaps  xmm0, [esp+170h+anonymous_3]
0x9289B7: movaps  xmm1, [esp+170h+var_154+4]
0x9289BC: push    edx
0x9289BD: movaps  [esp+174h+var_118+8], xmm0
0x9289C2: movaps  xmm0, xmmword ptr ds:0A965C0h
0x9289C9: xorps   xmm1, xmm0
0x9289CC: movaps  xmm0, [esp+174h+var_D0]
0x9289D4: lea     eax, [esp+174h+var_118+8]
0x9289D8: push    edi
0x9289D9: push    eax
0x9289DA: movaps  [esp+17Ch+var_F0], xmm1
0x9289E2: movaps  xmmword ptr [esp+17Ch+var_108+8], xmm0
0x9289E7: call    sub_8F1310
0x9289EC: add     esp, 0Ch
0x9289EF: mov     ecx, [esi+0Ch]
0x9289F2: mov     edx, [ecx]
0x9289F4: lea     eax, [esp+170h+var_154+3]
0x9289F8: push    eax
0x9289F9: call    dword ptr [edx+24h]
0x9289FC: cmp     byte ptr [eax], 0
0x9289FF: jnz     short loc_928A74
0x928A01: movaps  xmm0, [esp+170h+var_A0]
0x928A09: mov     ecx, [esi+0Ch]
0x928A0C: movaps  [esp+170h+var_118+8], xmm0
0x928A11: movaps  xmm0, [esp+170h+anonymous_0]
0x928A19: movaps  xmmword ptr [esp+170h+var_108+8], xmm0
0x928A1E: mov     eax, [ecx]
0x928A20: mov     edx, ecx
0x928A22: mov     ebx, [edx]
0x928A24: call    dword ptr [eax+14h]
0x928A27: push    ecx
0x928A28: mov     ecx, [esi+0Ch]
0x928A2B: fstp    [esp+174h+var_174]
0x928A2E: call    dword ptr [ebx+1Ch]
0x928A31: fstp    [esp+170h+var_E0]
0x928A38: mov     ecx, [esi+0Ch]
0x928A3B: mov     eax, [ecx]
0x928A3D: mov     edx, ecx
0x928A3F: mov     ebx, [edx]
0x928A41: call    dword ptr [eax+18h]
0x928A44: push    ecx
0x928A45: mov     ecx, [esi+0Ch]
0x928A48: fstp    [esp+174h+var_174]
0x928A4B: call    dword ptr [ebx+1Ch]
0x928A4E: fstp    [esp+170h+var_DC]
0x928A55: mov     ecx, [ebp+arg_4]
0x928A58: movaps  xmm0, xmmword ptr [esp+170h+var_144+4]
0x928A5D: push    ecx
0x928A5E: lea     edx, [esp+174h+var_118+8]
0x928A62: push    edi
0x928A63: push    edx
0x928A64: movaps  [esp+17Ch+var_F0], xmm0
0x928A6C: call    sub_8F1970
0x928A71: add     esp, 0Ch
0x928A74: pop     edi
0x928A75: pop     esi
0x928A76: pop     ebx
0x928A77: mov     esp, ebp
0x928A79: pop     ebp
0x928A7A: retn    8
