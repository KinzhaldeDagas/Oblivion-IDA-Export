0x93B220: push    ebp
0x93B221: mov     ebp, esp
0x93B223: and     esp, 0FFFFFFF0h
0x93B226: sub     esp, 0A4h
0x93B22C: mov     al, [ebp+arg_10]
0x93B22F: test    al, al
0x93B231: push    ebx
0x93B232: push    esi
0x93B233: push    edi
0x93B234: jz      loc_93B460
0x93B23A: mov     edi, [ebp+arg_4]
0x93B23D: movaps  xmm2, xmmword ptr [edi]
0x93B240: movaps  xmm3, xmmword ptr [edi+20h]
0x93B244: movaps  xmm0, xmmword ptr [edi+10h]
0x93B248: mov     esi, [ebp+arg_0]
0x93B24B: subps   xmm0, xmm3
0x93B24E: movaps  xmm4, xmm0
0x93B251: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x93B255: movaps  xmm1, xmm2
0x93B258: subps   xmm1, xmm3
0x93B25B: movaps  xmm3, xmm1
0x93B25E: shufps  xmm3, xmm1, 0C9h ; 'É'
0x93B262: mulps   xmm4, xmm3
0x93B265: lea     ebx, [edi+20h]
0x93B268: movaps  xmm3, xmm1
0x93B26B: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x93B26F: movaps  [esp+0B0h+var_80], xmm1
0x93B274: movaps  xmm1, xmm0
0x93B277: shufps  xmm1, xmm0, 0C9h ; 'É'
0x93B27B: movaps  [esp+0B0h+var_70], xmm0
0x93B280: mulps   xmm1, xmm3
0x93B283: movaps  xmm3, xmmword ptr [esi]
0x93B286: subps   xmm1, xmm4
0x93B289: movaps  xmm0, xmm3
0x93B28C: subps   xmm0, xmm2
0x93B28F: movaps  xmm4, xmm0
0x93B292: movaps  xmm0, xmm1
0x93B295: mulps   xmm0, xmm4
0x93B298: movaps  xmm4, xmm0
0x93B29B: shufps  xmm4, xmm0, 55h ; 'U'
0x93B29F: movaps  xmm5, xmm0
0x93B2A2: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x93B2A6: addss   xmm4, xmm0
0x93B2AA: movaps  xmm0, xmm5
0x93B2AD: addss   xmm0, xmm4
0x93B2B1: movaps  xmm4, xmmword ptr [esi+10h]
0x93B2B5: movaps  xmm5, xmm4
0x93B2B8: subps   xmm5, xmm2
0x93B2BB: mulps   xmm1, xmm5
0x93B2BE: movaps  xmm2, xmm1
0x93B2C1: shufps  xmm2, xmm1, 55h ; 'U'
0x93B2C5: movaps  xmm5, xmm1
0x93B2C8: addss   xmm2, xmm1
0x93B2CC: shufps  xmm5, xmm1, 0AAh ; 'ª'
0x93B2D0: movaps  xmm1, xmm5
0x93B2D3: addss   xmm1, xmm2
0x93B2D7: movmskps eax, xmm1
0x93B2DA: movmskps edx, xmm0
0x93B2DD: xor     eax, edx
0x93B2DF: test    al, 1
0x93B2E1: jz      short loc_93B331
0x93B2E3: movaps  xmm2, xmm0
0x93B2E6: subss   xmm2, xmm1
0x93B2EA: divss   xmm0, xmm2
0x93B2EE: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x93B2F5: push    0
0x93B2F7: shufps  xmm0, xmm0, 0
0x93B2FB: subps   xmm2, xmm0
0x93B2FE: movaps  xmm1, xmm0
0x93B301: push    edi
0x93B302: lea     eax, [esp+0B8h+var_A0]
0x93B306: mulps   xmm1, xmm4
0x93B309: mulps   xmm2, xmm3
0x93B30C: addps   xmm2, xmm1
0x93B30F: push    eax
0x93B310: movaps  [esp+0BCh+var_A0], xmm2
0x93B315: call    sub_93B000
0x93B31A: cmp     eax, 7
0x93B31D: jnz     loc_93B3D4
0x93B323: mov     eax, 1
0x93B328: pop     edi
0x93B329: pop     esi
0x93B32A: pop     ebx
0x93B32B: mov     esp, ebp
0x93B32D: pop     ebp
0x93B32E: retn    18h
0x93B331: lea     edx, [esp+0B0h+var_88]
0x93B335: movss   dword ptr [edx], xmm0
0x93B339: fld     [esp+0B0h+var_88]
0x93B33D: fabs
0x93B33F: lea     eax, [esp+0B0h+var_84]
0x93B343: movss   dword ptr [eax], xmm1
0x93B347: fld     [esp+0B0h+var_84]
0x93B34B: fabs
0x93B34D: fxch    st(1)
0x93B34F: fxch    st(1)
0x93B351: fcompp
0x93B353: fnstsw  ax
0x93B355: test    ah, 5
0x93B358: jp      short loc_93B3B6
0x93B35A: movaps  xmm0, xmmword ptr [esi+10h]
0x93B35E: mov     edx, esi
0x93B360: mov     eax, [edx]
0x93B362: mov     dword ptr [esp+0B0h+var_A0], eax
0x93B366: mov     eax, [edx+4]
0x93B369: mov     dword ptr [esp+0B0h+var_A0+4], eax
0x93B36D: mov     eax, [edx+8]
0x93B370: mov     edx, [edx+0Ch]
0x93B373: movaps  xmmword ptr [esi], xmm0
0x93B376: mov     dword ptr [esp+0B0h+var_A0+8], eax
0x93B37A: mov     dword ptr [esp+0B0h+var_A0+0Ch], edx
0x93B37E: movaps  xmm0, [esp+0B0h+var_A0]
0x93B383: movaps  xmmword ptr [esi+10h], xmm0
0x93B387: movaps  xmm0, xmmword ptr [esi+50h]
0x93B38B: lea     eax, [esi+40h]
0x93B38E: mov     edx, [eax]
0x93B390: mov     dword ptr [esp+0B0h+var_A0], edx
0x93B394: mov     edx, [eax+4]
0x93B397: mov     dword ptr [esp+0B0h+var_A0+4], edx
0x93B39B: mov     edx, [eax+8]
0x93B39E: mov     eax, [eax+0Ch]
0x93B3A1: movaps  xmmword ptr [esi+40h], xmm0
0x93B3A5: mov     dword ptr [esp+0B0h+var_A0+8], edx
0x93B3A9: mov     dword ptr [esp+0B0h+var_A0+0Ch], eax
0x93B3AD: movaps  xmm0, [esp+0B0h+var_A0]
0x93B3B2: movaps  xmmword ptr [esi+50h], xmm0
0x93B3B6: push    1
0x93B3B8: push    edi
0x93B3B9: push    esi
0x93B3BA: call    sub_93B000
0x93B3BF: cmp     eax, 7
0x93B3C2: jnz     short loc_93B3D4
0x93B3C4: mov     eax, [ebp+arg_8]
0x93B3C7: dec     dword ptr [eax]
0x93B3C9: xor     eax, eax
0x93B3CB: pop     edi
0x93B3CC: pop     esi
0x93B3CD: pop     ebx
0x93B3CE: mov     esp, ebp
0x93B3D0: pop     ebp
0x93B3D1: retn    18h
0x93B3D4: movaps  xmm0, xmmword ptr [esi]
0x93B3D7: movaps  xmm1, xmmword ptr [esi+10h]
0x93B3DB: lea     ecx, [esp+0B0h+var_60]
0x93B3DF: push    ecx
0x93B3E0: lea     edx, [esp+0B4h+var_70]
0x93B3E4: push    edx
0x93B3E5: push    ebx
0x93B3E6: lea     eax, [esp+0BCh+var_A0]
0x93B3EA: push    eax
0x93B3EB: subps   xmm1, xmm0
0x93B3EE: push    esi
0x93B3EF: movaps  [esp+0C4h+var_A0], xmm1
0x93B3F4: call    sub_8D1A30
0x93B3F9: lea     ecx, [esp+0C4h+var_30]
0x93B400: push    ecx
0x93B401: lea     edx, [esp+0C8h+var_80]
0x93B405: push    edx
0x93B406: push    ebx
0x93B407: lea     eax, [esp+0D0h+var_A0]
0x93B40B: push    eax
0x93B40C: push    esi
0x93B40D: call    sub_8D1A30
0x93B412: fld     [esp+0D8h+var_40]
0x93B419: fcomp   [esp+0D8h+var_10]
0x93B420: add     esp, 28h
0x93B423: fnstsw  ax
0x93B425: test    ah, 41h
0x93B428: jnz     short loc_93B431
0x93B42A: mov     eax, 1
0x93B42F: jmp     short loc_93B433
0x93B431: xor     eax, eax
0x93B433: movaps  xmm0, xmmword ptr [ebx]
0x93B436: mov     ecx, eax
0x93B438: add     eax, 4
0x93B43B: shl     ecx, 4
0x93B43E: movaps  xmmword ptr [ecx+edi], xmm0
0x93B442: movaps  xmm0, xmmword ptr [edi+60h]
0x93B446: shl     eax, 4
0x93B449: movaps  xmmword ptr [eax+edi], xmm0
0x93B44D: mov     eax, [ebp+arg_C]
0x93B450: dec     dword ptr [eax]
0x93B452: mov     eax, 2
0x93B457: pop     edi
0x93B458: pop     esi
0x93B459: pop     ebx
0x93B45A: mov     esp, ebp
0x93B45C: pop     ebp
0x93B45D: retn    18h
0x93B460: mov     ebx, [ebp+arg_0]
0x93B463: mov     esi, [ebp+arg_4]
0x93B466: movaps  xmm3, xmmword ptr [esi]
0x93B469: movaps  xmm4, xmmword ptr [ebx+10h]
0x93B46D: movaps  xmm1, xmmword ptr [ecx+120h]
0x93B474: lea     edi, [ebx+10h]
0x93B477: movaps  xmm0, xmm4
0x93B47A: subps   xmm0, xmm3
0x93B47D: movaps  xmm2, xmm0
0x93B480: movaps  xmm0, xmm1
0x93B483: mulps   xmm0, xmm2
0x93B486: movaps  xmm2, xmm0
0x93B489: shufps  xmm2, xmm0, 55h ; 'U'
0x93B48D: addss   xmm2, xmm0
0x93B491: movaps  xmm5, xmm2
0x93B494: movaps  xmm2, xmm0
0x93B497: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x93B49B: lea     eax, [ecx+160h]
0x93B4A1: mov     [esp+0B0h+var_88], eax
0x93B4A5: mov     edx, [eax]
0x93B4A7: addss   xmm2, xmm5
0x93B4AB: movaps  xmm5, xmmword ptr [ebx]
0x93B4AE: movaps  xmm0, xmm5
0x93B4B1: subps   xmm0, xmm3
0x93B4B4: mulps   xmm1, xmm0
0x93B4B7: movaps  xmm0, xmm1
0x93B4BA: shufps  xmm1, xmm0, 55h ; 'U'
0x93B4BE: mov     dword ptr [esp+0B0h+var_A0], edx
0x93B4C2: mov     edx, [eax+4]
0x93B4C5: addss   xmm1, xmm0
0x93B4C9: movaps  xmm3, xmm0
0x93B4CC: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93B4D0: mov     dword ptr [esp+0B0h+var_A0+4], edx
0x93B4D4: mov     edx, [eax+8]
0x93B4D7: mov     eax, [eax+0Ch]
0x93B4DA: movaps  xmm0, xmm3
0x93B4DD: addss   xmm0, xmm1
0x93B4E1: movaps  xmm1, xmm0
0x93B4E4: mov     dword ptr [esp+0B0h+var_A0+8], edx
0x93B4E8: mulss   xmm1, xmm2
0x93B4EC: movmskps edx, xmm1
0x93B4EF: test    dl, 1
0x93B4F2: mov     dword ptr [esp+0B0h+var_A0+0Ch], eax
0x93B4F6: jz      short loc_93B538
0x93B4F8: movaps  xmm1, xmm0
0x93B4FB: subss   xmm1, xmm2
0x93B4FF: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x93B506: divss   xmm0, xmm1
0x93B50A: push    0
0x93B50C: shufps  xmm0, xmm0, 0
0x93B510: subps   xmm2, xmm0
0x93B513: movaps  xmm1, xmm0
0x93B516: push    esi
0x93B517: lea     eax, [esp+0B8h+var_80]
0x93B51B: mulps   xmm1, xmm4
0x93B51E: mulps   xmm2, xmm5
0x93B521: addps   xmm2, xmm1
0x93B524: push    eax
0x93B525: movaps  [esp+0BCh+var_80], xmm2
0x93B52A: call    sub_93B000
0x93B52F: cmp     eax, 7
0x93B532: jz      loc_93B323
0x93B538: push    0
0x93B53A: push    esi
0x93B53B: push    edi
0x93B53C: call    sub_93B000
0x93B541: cmp     eax, 7
0x93B544: jnz     short loc_93B56D
0x93B546: mov     eax, [ebp+arg_8]
0x93B549: dec     dword ptr [eax]
0x93B54B: movaps  xmm0, xmmword ptr [edi]
0x93B54E: mov     edx, [ebp+arg_14]
0x93B551: movaps  xmmword ptr [ebx], xmm0
0x93B554: movaps  xmm0, xmmword ptr [ebx+50h]
0x93B558: movaps  xmmword ptr [ebx+40h], xmm0
0x93B55C: mov     [ecx+170h], edx
0x93B562: xor     eax, eax
0x93B564: pop     edi
0x93B565: pop     esi
0x93B566: pop     ebx
0x93B567: mov     esp, ebp
0x93B569: pop     ebp
0x93B56A: retn    18h
0x93B56D: cmp     eax, 6
0x93B570: jz      loc_93B63A
0x93B576: cmp     eax, 5
0x93B579: jz      loc_93B617
0x93B57F: cmp     eax, 3
0x93B582: jz      short loc_93B5DA
0x93B584: cmp     eax, 1
0x93B587: jnz     short loc_93B5B0
0x93B589: fld     dword ptr [ecx+164h]
0x93B58F: fsub    dword ptr [esp+0B0h+var_A0+4]
0x93B593: fmul    dword ptr [esp+0B0h+var_A0+8]
0x93B597: fld     dword ptr [ecx+168h]
0x93B59D: fsub    dword ptr [esp+0B0h+var_A0+8]
0x93B5A1: fmul    dword ptr [esp+0B0h+var_A0+4]
0x93B5A5: fcompp
0x93B5A7: fnstsw  ax
0x93B5A9: test    ah, 5
0x93B5AC: jnp     short loc_93B5DA
0x93B5AE: jmp     short loc_93B617
0x93B5B0: cmp     eax, 2
0x93B5B3: jnz     short loc_93B5ED
0x93B5B5: fld     dword ptr [ecx+168h]
0x93B5BB: mov     eax, [esp+0B0h+var_88]
0x93B5BF: fsub    dword ptr [esp+0B0h+var_A0+8]
0x93B5C3: fmul    dword ptr [esp+0B0h+var_A0]
0x93B5C7: fld     dword ptr [eax]
0x93B5C9: fsub    dword ptr [esp+0B0h+var_A0]
0x93B5CD: fmul    dword ptr [esp+0B0h+var_A0+8]
0x93B5D1: fcompp
0x93B5D3: fnstsw  ax
0x93B5D5: test    ah, 5
0x93B5D8: jnp     short loc_93B63A
0x93B5DA: mov     eax, [ebp+arg_C]
0x93B5DD: dec     dword ptr [eax]
0x93B5DF: mov     eax, 2
0x93B5E4: pop     edi
0x93B5E5: pop     esi
0x93B5E6: pop     ebx
0x93B5E7: mov     esp, ebp
0x93B5E9: pop     ebp
0x93B5EA: retn    18h
0x93B5ED: cmp     eax, 4
0x93B5F0: jnz     short loc_93B63A
0x93B5F2: mov     edx, [esp+0B0h+var_88]
0x93B5F6: fld     dword ptr [edx]
0x93B5F8: fsub    dword ptr [esp+0B0h+var_A0]
0x93B5FC: fmul    dword ptr [esp+0B0h+var_A0+4]
0x93B600: fld     dword ptr [ecx+164h]
0x93B606: fsub    dword ptr [esp+0B0h+var_A0+4]
0x93B60A: fmul    dword ptr [esp+0B0h+var_A0]
0x93B60E: fcompp
0x93B610: fnstsw  ax
0x93B612: test    ah, 5
0x93B615: jp      short loc_93B63A
0x93B617: mov     eax, [ebp+arg_C]
0x93B61A: dec     dword ptr [eax]
0x93B61C: movaps  xmm0, xmmword ptr [esi+20h]
0x93B620: movaps  xmmword ptr [esi+10h], xmm0
0x93B624: movaps  xmm0, xmmword ptr [esi+60h]
0x93B628: movaps  xmmword ptr [esi+50h], xmm0
0x93B62C: mov     eax, 2
0x93B631: pop     edi
0x93B632: pop     esi
0x93B633: pop     ebx
0x93B634: mov     esp, ebp
0x93B636: pop     ebp
0x93B637: retn    18h
0x93B63A: mov     eax, [ebp+arg_C]
0x93B63D: dec     dword ptr [eax]
0x93B63F: movaps  xmm0, xmmword ptr [esi+20h]
0x93B643: movaps  xmmword ptr [esi], xmm0
0x93B646: movaps  xmm0, xmmword ptr [esi+60h]
0x93B64A: pop     edi
0x93B64B: movaps  xmmword ptr [esi+40h], xmm0
0x93B64F: pop     esi
0x93B650: mov     eax, 2
0x93B655: pop     ebx
0x93B656: mov     esp, ebp
0x93B658: pop     ebp
0x93B659: retn    18h
