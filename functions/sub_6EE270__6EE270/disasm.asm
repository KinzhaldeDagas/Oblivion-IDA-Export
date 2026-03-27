0x6EE270: push    0FFFFFFFFh
0x6EE272: push    offset SEH_6EE270
0x6EE277: mov     eax, large fs:0
0x6EE27D: push    eax
0x6EE27E: sub     esp, 88h
0x6EE284: push    ebx
0x6EE285: push    ebp
0x6EE286: push    esi
0x6EE287: push    edi
0x6EE288: mov     eax, ds:0B30AACh
0x6EE28D: xor     eax, esp
0x6EE28F: push    eax
0x6EE290: lea     eax, [esp+0A8h+var_C]
0x6EE297: mov     large fs:0, eax
0x6EE29D: mov     [esp+0A8h+var_78], ecx
0x6EE2A1: mov     ebx, [esp+0A8h+arg_0]
0x6EE2A8: add     ecx, 268h
0x6EE2AE: mov     [esp+0A8h+var_8C], 0
0x6EE2B6: mov     [esp+0A8h+var_88], ecx
0x6EE2BA: mov     eax, [esp+0A8h+var_88]
0x6EE2BE: mov     [esp+0A8h+var_84], 0
0x6EE2C6: mov     [esp+0A8h+var_94], eax
0x6EE2CA: mov     esi, [esp+0A8h+var_94]
0x6EE2CE: xor     edi, edi
0x6EE2D0: mov     ecx, [esp+0A8h+arg_4]
0x6EE2D7: fldz
0x6EE2D9: mov     eax, [ecx+edi*8]
0x6EE2DC: push    ecx
0x6EE2DD: fstp    [esp+0ACh+var_AC]; int
0x6EE2E0: lea     ebp, [esi-0Ch]
0x6EE2E3: push    eax; int
0x6EE2E4: lea     ecx, [esi-4]; int
0x6EE2E7: mov     dword ptr [ebp+0], 1
0x6EE2EE: mov     [esi-8], eax
0x6EE2F1: call    sub_527160
0x6EE2F6: mov     eax, [esi]
0x6EE2F8: test    eax, eax
0x6EE2FA: jz      short loc_6EE306
0x6EE2FC: mov     edx, [esi+4]
0x6EE2FF: sub     edx, eax
0x6EE301: sar     edx, 2
0x6EE304: jnz     short loc_6EE30B
0x6EE306: call    __invalid_parameter_noinfo
0x6EE30B: mov     ecx, [esp+0A8h+arg_4]
0x6EE312: mov     ecx, [ecx+edi*8]
0x6EE315: mov     eax, [esi]
0x6EE317: mov     edx, [ebx]
0x6EE319: mov     edx, [edx+10h]
0x6EE31C: push    ecx
0x6EE31D: push    4
0x6EE31F: push    eax
0x6EE320: mov     ecx, ebx
0x6EE322: call    edx
0x6EE324: test    al, al
0x6EE326: jz      loc_6EEA03
0x6EE32C: mov     eax, [ebx]
0x6EE32E: mov     edx, [eax+10h]
0x6EE331: push    1
0x6EE333: push    4
0x6EE335: lea     ecx, [esi+10h]
0x6EE338: push    ecx
0x6EE339: mov     ecx, ebx
0x6EE33B: call    edx
0x6EE33D: test    al, al
0x6EE33F: jz      loc_6EEA03
0x6EE345: mov     ecx, ebp
0x6EE347: call    sub_5511D0
0x6EE34C: fld1
0x6EE34E: fdivrp  st(1), st
0x6EE350: add     edi, 1
0x6EE353: add     esi, 20h ; ' '
0x6EE356: cmp     edi, 2
0x6EE359: fstp    dword ptr [esi-14h]
0x6EE35C: jb      loc_6EE2D0
0x6EE362: mov     eax, [esp+0A8h+var_84]
0x6EE366: add     [esp+0A8h+var_94], 40h ; '@'
0x6EE36B: add     eax, 1
0x6EE36E: cmp     eax, 2
0x6EE371: mov     [esp+0A8h+var_84], eax
0x6EE375: jb      loc_6EE2CA
0x6EE37B: mov     eax, [esp+0A8h+var_8C]
0x6EE37F: add     [esp+0A8h+var_88], 80h ; '€'
0x6EE387: add     eax, 1
0x6EE38A: cmp     eax, 5
0x6EE38D: mov     [esp+0A8h+var_8C], eax
0x6EE391: jb      loc_6EE2BA
0x6EE397: xor     ecx, ecx
0x6EE399: mov     [esp+0A8h+var_8C], ecx
0x6EE39D: mov     [esp+0A8h+var_94], ecx
0x6EE3A1: xor     eax, eax
0x6EE3A3: mov     [esp+0A8h+var_84], eax
0x6EE3A7: cmp     eax, [esp+0A8h+var_8C]
0x6EE3AB: jz      loc_6EE481
0x6EE3B1: mov     edx, [esp+0A8h+var_78]
0x6EE3B5: fldz
0x6EE3B7: add     eax, ecx
0x6EE3B9: fstp    [esp+0A8h+var_88]
0x6EE3BD: lea     ecx, ds:0[eax*8]
0x6EE3C4: sub     ecx, eax
0x6EE3C6: lea     esi, [edx+ecx*8]
0x6EE3C9: xor     edi, edi
0x6EE3CB: mov     [esp+0A8h+var_90], esi
0x6EE3CF: add     esi, 4E8h
0x6EE3D5: mov     eax, [esp+0A8h+arg_4]
0x6EE3DC: fldz
0x6EE3DE: mov     eax, [eax+edi*8]
0x6EE3E1: push    ecx
0x6EE3E2: fstp    [esp+0ACh+var_AC]; int
0x6EE3E5: lea     ebp, [esi-0Ch]
0x6EE3E8: push    eax; int
0x6EE3E9: lea     ecx, [esi-4]; int
0x6EE3EC: mov     dword ptr [ebp+0], 1
0x6EE3F3: mov     [esi-8], eax
0x6EE3F6: call    sub_527160
0x6EE3FB: mov     eax, [esi]
0x6EE3FD: test    eax, eax
0x6EE3FF: jz      short loc_6EE40B
0x6EE401: mov     ecx, [esi+4]
0x6EE404: sub     ecx, eax
0x6EE406: sar     ecx, 2
0x6EE409: jnz     short loc_6EE410
0x6EE40B: call    __invalid_parameter_noinfo
0x6EE410: mov     ecx, [esp+0A8h+arg_4]
0x6EE417: mov     ecx, [ecx+edi*8]
0x6EE41A: mov     eax, [esi]
0x6EE41C: mov     edx, [ebx]
0x6EE41E: mov     edx, [edx+10h]
0x6EE421: push    ecx
0x6EE422: push    4
0x6EE424: push    eax
0x6EE425: mov     ecx, ebx
0x6EE427: call    edx
0x6EE429: test    al, al
0x6EE42B: jz      loc_6EEA03
0x6EE431: mov     ecx, ebp
0x6EE433: call    sub_5511D0
0x6EE438: fadd    [esp+0A8h+var_88]
0x6EE43C: add     edi, 1
0x6EE43F: add     esi, 18h
0x6EE442: cmp     edi, 2
0x6EE445: fstp    [esp+0A8h+var_88]
0x6EE449: jb      short loc_6EE3D5
0x6EE44B: mov     esi, [esp+0A8h+var_90]
0x6EE44F: mov     eax, [ebx]
0x6EE451: mov     edx, [eax+10h]
0x6EE454: push    1
0x6EE456: push    4
0x6EE458: lea     ecx, [esi+510h]
0x6EE45E: push    ecx
0x6EE45F: mov     ecx, ebx
0x6EE461: call    edx
0x6EE463: test    al, al
0x6EE465: jz      loc_6EEA03
0x6EE46B: fld     [esp+0A8h+var_88]
0x6EE46F: mov     ecx, [esp+0A8h+var_94]
0x6EE473: fld1
0x6EE475: mov     eax, [esp+0A8h+var_84]
0x6EE479: fdivrp  st(1), st
0x6EE47B: fstp    dword ptr [esi+50Ch]
0x6EE481: add     eax, 1
0x6EE484: cmp     eax, 5
0x6EE487: mov     [esp+0A8h+var_84], eax
0x6EE48B: jb      loc_6EE3A7
0x6EE491: add     [esp+0A8h+var_8C], 1
0x6EE496: add     ecx, 5
0x6EE499: cmp     ecx, 19h
0x6EE49C: mov     [esp+0A8h+var_94], ecx
0x6EE4A0: jb      loc_6EE3A1
0x6EE4A6: mov     ecx, [esp+0A8h+arg_4]
0x6EE4AD: mov     eax, [ecx+8]
0x6EE4B0: add     eax, [ecx]
0x6EE4B2: mov     [esp+0A8h+var_8C], 0
0x6EE4BA: mov     [esp+0A8h+var_90], eax
0x6EE4BE: mov     eax, [esp+0A8h+var_78]
0x6EE4C2: add     eax, 40h ; '@'
0x6EE4C5: mov     [esp+0A8h+var_94], eax
0x6EE4C9: lea     esp, [esp+0]
0x6EE4D0: mov     esi, [esp+0A8h+var_94]
0x6EE4D4: xor     ebp, ebp
0x6EE4D6: add     esi, 0FFFFFFD0h
0x6EE4D9: lea     esp, [esp+0]
0x6EE4E0: mov     ecx, [esp+0A8h+arg_4]
0x6EE4E7: fldz
0x6EE4E9: mov     edi, [ecx+ebp*8]
0x6EE4EC: push    ecx
0x6EE4ED: fstp    [esp+0ACh+var_AC]; int
0x6EE4F0: push    edi; int
0x6EE4F1: lea     ecx, [esi-4]; int
0x6EE4F4: mov     [esi-0Ch], edi
0x6EE4F7: mov     dword ptr [esi-8], 1
0x6EE4FE: call    sub_527160
0x6EE503: mov     eax, [esi]
0x6EE505: test    eax, eax
0x6EE507: jz      short loc_6EE513
0x6EE509: mov     edx, [esi+4]
0x6EE50C: sub     edx, eax
0x6EE50E: sar     edx, 2
0x6EE511: jnz     short loc_6EE518
0x6EE513: call    __invalid_parameter_noinfo
0x6EE518: mov     eax, [esi]
0x6EE51A: mov     edx, [ebx]
0x6EE51C: push    edi
0x6EE51D: push    4
0x6EE51F: push    eax
0x6EE520: mov     eax, [edx+10h]
0x6EE523: mov     ecx, ebx
0x6EE525: call    eax
0x6EE527: test    al, al
0x6EE529: jz      loc_6EEA03
0x6EE52F: add     ebp, 1
0x6EE532: add     esi, 18h
0x6EE535: cmp     ebp, 2
0x6EE538: jb      short loc_6EE4E0
0x6EE53A: mov     esi, [esp+0A8h+var_90]
0x6EE53E: fldz
0x6EE540: mov     edi, [esp+0A8h+var_94]
0x6EE544: mov     [edi-0Ch], esi
0x6EE547: mov     [edi-8], esi
0x6EE54A: imul    esi, esi
0x6EE54D: push    ecx
0x6EE54E: lea     ecx, [edi-4]; int
0x6EE551: fstp    [esp+0ACh+var_AC]; int
0x6EE554: push    esi; int
0x6EE555: call    sub_527160
0x6EE55A: mov     eax, [edi]
0x6EE55C: test    eax, eax
0x6EE55E: jz      short loc_6EE56A
0x6EE560: mov     ecx, [edi+4]
0x6EE563: sub     ecx, eax
0x6EE565: sar     ecx, 2
0x6EE568: jnz     short loc_6EE56F
0x6EE56A: call    __invalid_parameter_noinfo
0x6EE56F: mov     edi, [edi]
0x6EE571: mov     edx, [ebx]
0x6EE573: mov     eax, [edx+10h]
0x6EE576: push    esi
0x6EE577: push    4
0x6EE579: push    edi
0x6EE57A: mov     ecx, ebx
0x6EE57C: call    eax
0x6EE57E: test    al, al
0x6EE580: jz      loc_6EEA03
0x6EE586: mov     esi, [esp+0A8h+var_94]
0x6EE58A: xor     ebp, ebp
0x6EE58C: add     esi, 18h
0x6EE58F: nop
0x6EE590: mov     ecx, [esp+0A8h+arg_4]
0x6EE597: fldz
0x6EE599: mov     eax, [ecx+ebp*8]
0x6EE59C: mov     edi, eax
0x6EE59E: imul    edi, eax
0x6EE5A1: push    ecx
0x6EE5A2: lea     ecx, [esi-4]; int
0x6EE5A5: mov     [esi-0Ch], eax
0x6EE5A8: fstp    [esp+0ACh+var_AC]; int
0x6EE5AB: push    edi; int
0x6EE5AC: mov     [esi-8], eax
0x6EE5AF: call    sub_527160
0x6EE5B4: mov     eax, [esi]
0x6EE5B6: test    eax, eax
0x6EE5B8: jz      short loc_6EE5C4
0x6EE5BA: mov     edx, [esi+4]
0x6EE5BD: sub     edx, eax
0x6EE5BF: sar     edx, 2
0x6EE5C2: jnz     short loc_6EE5C9
0x6EE5C4: call    __invalid_parameter_noinfo
0x6EE5C9: mov     eax, [esi]
0x6EE5CB: mov     edx, [ebx]
0x6EE5CD: push    edi
0x6EE5CE: push    4
0x6EE5D0: push    eax
0x6EE5D1: mov     eax, [edx+10h]
0x6EE5D4: mov     ecx, ebx
0x6EE5D6: call    eax
0x6EE5D8: test    al, al
0x6EE5DA: jz      loc_6EEA03
0x6EE5E0: add     ebp, 1
0x6EE5E3: add     esi, 18h
0x6EE5E6: cmp     ebp, 2
0x6EE5E9: jb      short loc_6EE590
0x6EE5EB: mov     eax, [esp+0A8h+var_8C]
0x6EE5EF: add     [esp+0A8h+var_94], 78h ; 'x'
0x6EE5F4: add     eax, 1
0x6EE5F7: cmp     eax, 5
0x6EE5FA: mov     [esp+0A8h+var_8C], eax
0x6EE5FE: jb      loc_6EE4D0
0x6EE604: mov     eax, [esp+0A8h+var_78]
0x6EE608: lea     ecx, [eax+29Ch]
0x6EE60E: mov     [esp+0A8h+var_88], ecx
0x6EE612: lea     edi, [eax+0A6Ch]
0x6EE618: mov     [esp+0A8h+var_8C], 5
0x6EE620: mov     ebp, [esp+0A8h+var_88]
0x6EE624: mov     [esp+0A8h+var_84], 2
0x6EE62C: lea     esp, [esp+0]
0x6EE630: lea     esi, [ebp-40h]
0x6EE633: mov     ecx, esi
0x6EE635: call    sub_5511D0
0x6EE63A: fstp    [esp+0A8h+var_90]
0x6EE63E: fld     [esp+0A8h+var_90]
0x6EE642: call    __CIsqrt
0x6EE647: fstp    [esp+0A8h+var_90]
0x6EE64B: fld     [esp+0A8h+var_90]
0x6EE64F: fstp    [esp+0A8h+var_94]
0x6EE653: fld     [esp+0A8h+var_94]
0x6EE657: fcomp   qword ptr ds:0A7CD98h
0x6EE65D: fnstsw  ax
0x6EE65F: test    ah, 41h
0x6EE662: jz      short loc_6EE676
0x6EE664: push    85h ; '…'; int
0x6EE669: push    offset a_Fancontrols_c; ".\\FanControls.cpp"
0x6EE66E: call    sub_6ED6D0
0x6EE673: add     esp, 8
0x6EE676: fld     [esp+0A8h+var_94]
0x6EE67A: push    ecx
0x6EE67B: lea     edx, [esp+0ACh+var_74]
0x6EE67F: fstp    [esp+0ACh+var_AC]; float
0x6EE682: push    edx; int
0x6EE683: mov     ecx, esi
0x6EE685: call    sub_6EE130
0x6EE68A: lea     esi, [edi-18h]
0x6EE68D: push    eax
0x6EE68E: mov     ecx, esi
0x6EE690: mov     [esp+0ACh+var_4], 0
0x6EE69B: call    sub_5520E0
0x6EE6A0: mov     eax, [esp+0A8h+var_68]
0x6EE6A4: test    eax, eax
0x6EE6A6: mov     [esp+0A8h+var_4], 0FFFFFFFFh
0x6EE6B1: jz      short loc_6EE6BC
0x6EE6B3: push    eax
0x6EE6B4: call    FormHeapFree
0x6EE6B9: add     esp, 4
0x6EE6BC: lea     eax, [esp+0A8h+var_3C]
0x6EE6C0: push    eax
0x6EE6C1: mov     ecx, esi
0x6EE6C3: call    sub_552730
0x6EE6C8: push    eax
0x6EE6C9: lea     ecx, [esp+0ACh+var_74]
0x6EE6CD: push    ecx
0x6EE6CE: mov     ecx, ebp
0x6EE6D0: mov     [esp+0B0h+var_4], 1
0x6EE6DB: call    sub_5523C0
0x6EE6E0: mov     ebx, eax
0x6EE6E2: mov     eax, [ebx+0Ch]
0x6EE6E5: test    eax, eax
0x6EE6E7: jz      short loc_6EE6F3
0x6EE6E9: mov     edx, [ebx+10h]
0x6EE6EC: sub     edx, eax
0x6EE6EE: sar     edx, 2
0x6EE6F1: jnz     short loc_6EE6F8
0x6EE6F3: call    __invalid_parameter_noinfo
0x6EE6F8: mov     ebx, [ebx+0Ch]
0x6EE6FB: mov     eax, [esp+0A8h+var_68]
0x6EE6FF: fld     dword ptr [ebx]
0x6EE701: xor     ecx, ecx
0x6EE703: fstp    [esp+0A8h+var_90]
0x6EE707: cmp     eax, ecx
0x6EE709: jz      short loc_6EE716
0x6EE70B: push    eax
0x6EE70C: call    FormHeapFree
0x6EE711: add     esp, 4
0x6EE714: xor     ecx, ecx
0x6EE716: mov     eax, [esp+0A8h+var_30]
0x6EE71A: cmp     eax, ecx
0x6EE71C: mov     [esp+0A8h+var_68], ecx
0x6EE720: mov     [esp+0A8h+var_64], ecx
0x6EE724: mov     [esp+0A8h+var_60], ecx
0x6EE728: mov     [esp+0A8h+var_4], 0FFFFFFFFh
0x6EE733: jz      short loc_6EE73E
0x6EE735: push    eax
0x6EE736: call    FormHeapFree
0x6EE73B: add     esp, 4
0x6EE73E: fld     [esp+0A8h+var_90]
0x6EE742: push    ecx
0x6EE743: lea     eax, [esp+0ACh+var_3C]
0x6EE747: fstp    [esp+0ACh+var_AC]; float
0x6EE74A: push    eax; int
0x6EE74B: mov     ecx, esi
0x6EE74D: call    sub_552310
0x6EE752: push    eax
0x6EE753: lea     ecx, [esp+0ACh+var_74]
0x6EE757: push    ecx
0x6EE758: mov     ecx, ebp
0x6EE75A: mov     [esp+0B0h+var_4], 2
0x6EE765: call    sub_552630
0x6EE76A: push    eax
0x6EE76B: mov     ecx, edi
0x6EE76D: mov     byte ptr [esp+0ACh+var_4], 3
0x6EE775: call    sub_5520E0
0x6EE77A: mov     eax, [esp+0A8h+var_68]
0x6EE77E: xor     esi, esi
0x6EE780: cmp     eax, esi
0x6EE782: jz      short loc_6EE78D
0x6EE784: push    eax
0x6EE785: call    FormHeapFree
0x6EE78A: add     esp, 4
0x6EE78D: mov     eax, [esp+0A8h+var_30]
0x6EE791: cmp     eax, esi
0x6EE793: mov     [esp+0A8h+var_68], esi
0x6EE797: mov     [esp+0A8h+var_64], esi
0x6EE79B: mov     [esp+0A8h+var_60], esi
0x6EE79F: mov     [esp+0A8h+var_4], 0FFFFFFFFh
0x6EE7AA: jz      short loc_6EE7B5
0x6EE7AC: push    eax
0x6EE7AD: call    FormHeapFree
0x6EE7B2: add     esp, 4
0x6EE7B5: mov     ecx, edi
0x6EE7B7: call    sub_5511D0
0x6EE7BC: fstp    [esp+0A8h+var_90]
0x6EE7C0: fld     [esp+0A8h+var_90]
0x6EE7C4: call    __CIsqrt
0x6EE7C9: fstp    [esp+0A8h+var_90]
0x6EE7CD: fld     [esp+0A8h+var_90]
0x6EE7D1: fstp    [esp+0A8h+var_94]
0x6EE7D5: fld     [esp+0A8h+var_94]
0x6EE7D9: fcomp   qword ptr ds:0A7CD98h
0x6EE7DF: fnstsw  ax
0x6EE7E1: test    ah, 41h
0x6EE7E4: jz      short loc_6EE7F8
0x6EE7E6: push    8Dh; int
0x6EE7EB: push    offset a_Fancontrols_c; ".\\FanControls.cpp"
0x6EE7F0: call    sub_6ED6D0
0x6EE7F5: add     esp, 8
0x6EE7F8: fld     [esp+0A8h+var_94]
0x6EE7FC: push    ecx
0x6EE7FD: fld1
0x6EE7FF: mov     ecx, edi
0x6EE801: fdivrp  st(1), st
0x6EE803: fstp    [esp+0ACh+var_90]
0x6EE807: fld     [esp+0ACh+var_90]
0x6EE80B: fstp    [esp+0ACh+var_AC]; float
0x6EE80E: call    sub_551D40
0x6EE813: add     ebp, 20h ; ' '
0x6EE816: add     edi, 30h ; '0'
0x6EE819: sub     [esp+0A8h+var_84], 1
0x6EE81E: jnz     loc_6EE630
0x6EE824: add     [esp+0A8h+var_88], 80h ; '€'
0x6EE82C: sub     [esp+0A8h+var_8C], 1
0x6EE831: jnz     loc_6EE620
0x6EE837: mov     ecx, [esp+0A8h+var_78]
0x6EE83B: lea     eax, [ecx+0C38h]
0x6EE841: add     ecx, 25Ch
0x6EE847: mov     [esp+0A8h+var_84], ecx
0x6EE84B: mov     [esp+0A8h+var_90], 5
0x6EE853: mov     edx, [esp+0A8h+var_84]
0x6EE857: mov     [esp+0A8h+var_94], edx
0x6EE85B: mov     [esp+0A8h+var_8C], eax
0x6EE85F: mov     [esp+0A8h+var_7C], 2
0x6EE867: mov     ebx, [esp+0A8h+var_8C]
0x6EE86B: add     ebx, 0FFFFFFFCh
0x6EE86E: xor     eax, eax
0x6EE870: mov     [ebx], eax
0x6EE872: mov     [ebx+4], eax
0x6EE875: mov     [ebx+8], eax
0x6EE878: mov     [ebx+0Ch], eax
0x6EE87B: mov     eax, [esp+0A8h+var_94]
0x6EE87F: mov     edi, ebx
0x6EE881: mov     [esp+0A8h+var_88], eax
0x6EE885: mov     [esp+0A8h+var_80], 2
0x6EE88D: lea     ecx, [ecx+0]
0x6EE890: mov     ebp, [esp+0A8h+var_94]
0x6EE894: mov     [esp+0A8h+var_5C], 2
0x6EE89C: lea     esp, [esp+0]
0x6EE8A0: lea     ecx, [esp+0A8h+var_24]
0x6EE8A7: push    ecx
0x6EE8A8: mov     ecx, ebp
0x6EE8AA: call    sub_552730
0x6EE8AF: mov     ecx, [esp+0A8h+var_88]
0x6EE8B3: push    eax
0x6EE8B4: lea     edx, [esp+0ACh+var_54]
0x6EE8B8: push    edx
0x6EE8B9: mov     [esp+0B0h+var_4], 4
0x6EE8C4: call    sub_5523C0
0x6EE8C9: mov     esi, eax
0x6EE8CB: mov     eax, [esi+0Ch]
0x6EE8CE: test    eax, eax
0x6EE8D0: jz      short loc_6EE8DC
0x6EE8D2: mov     ecx, [esi+10h]
0x6EE8D5: sub     ecx, eax
0x6EE8D7: sar     ecx, 2
0x6EE8DA: jnz     short loc_6EE8E1
0x6EE8DC: call    __invalid_parameter_noinfo
0x6EE8E1: mov     esi, [esi+0Ch]
0x6EE8E4: fld     dword ptr [edi]
0x6EE8E6: fadd    dword ptr [esi]
0x6EE8E8: mov     eax, [esp+0A8h+var_48]
0x6EE8EC: xor     ecx, ecx
0x6EE8EE: cmp     eax, ecx
0x6EE8F0: fstp    dword ptr [edi]
0x6EE8F2: jz      short loc_6EE8FF
0x6EE8F4: push    eax
0x6EE8F5: call    FormHeapFree
0x6EE8FA: add     esp, 4
0x6EE8FD: xor     ecx, ecx
0x6EE8FF: mov     eax, [esp+0A8h+var_18]
0x6EE906: cmp     eax, ecx
0x6EE908: mov     [esp+0A8h+var_48], ecx
0x6EE90C: mov     [esp+0A8h+var_44], ecx
0x6EE910: mov     [esp+0A8h+var_40], ecx
0x6EE914: mov     [esp+0A8h+var_4], 0FFFFFFFFh
0x6EE91F: jz      short loc_6EE92A
0x6EE921: push    eax
0x6EE922: call    FormHeapFree
0x6EE927: add     esp, 4
0x6EE92A: mov     ecx, 1
0x6EE92F: add     edi, 4
0x6EE932: add     ebp, 40h ; '@'
0x6EE935: sub     [esp+0A8h+var_5C], ecx
0x6EE939: jnz     loc_6EE8A0
0x6EE93F: add     [esp+0A8h+var_88], 40h ; '@'
0x6EE944: sub     [esp+0A8h+var_80], ecx
0x6EE948: jnz     loc_6EE890
0x6EE94E: mov     eax, [esp+0A8h+var_8C]
0x6EE952: fld     dword ptr [eax+8]
0x6EE955: add     [esp+0A8h+var_94], 20h ; ' '
0x6EE95A: fmul    dword ptr [ebx]
0x6EE95C: add     eax, 10h
0x6EE95F: sub     [esp+0A8h+var_7C], ecx
0x6EE963: fld     dword ptr [eax-0Ch]
0x6EE966: fmul    dword ptr [eax-10h]
0x6EE969: mov     [esp+0A8h+var_8C], eax
0x6EE96D: fsubp   st(1), st
0x6EE96F: fstp    [esp+0A8h+var_80]
0x6EE973: fld     [esp+0A8h+var_80]
0x6EE977: fld1
0x6EE979: fdivrp  st(1), st
0x6EE97B: fstp    [esp+0A8h+var_80]
0x6EE97F: fld     dword ptr [eax-8]
0x6EE982: fld     [esp+0A8h+var_80]
0x6EE986: fld     st
0x6EE988: fmulp   st(2), st
0x6EE98A: fxch    st(1)
0x6EE98C: fstp    [esp+0A8h+var_74]
0x6EE990: mov     edx, [esp+0A8h+var_74]
0x6EE994: fld     dword ptr [eax-10h]
0x6EE997: fchs
0x6EE999: fmul    st, st(1)
0x6EE99B: fstp    [esp+0A8h+var_70]
0x6EE99F: fld     dword ptr [eax-0Ch]
0x6EE9A2: fchs
0x6EE9A4: fmul    st, st(1)
0x6EE9A6: fstp    [esp+0A8h+var_6C]
0x6EE9AA: fmul    dword ptr [ebx]
0x6EE9AC: mov     [ebx], edx
0x6EE9AE: mov     edx, [esp+0A8h+var_70]
0x6EE9B2: mov     [ebx+4], edx
0x6EE9B5: mov     edx, [esp+0A8h+var_6C]
0x6EE9B9: fstp    [esp+0A8h+var_68]
0x6EE9BD: mov     [ebx+8], edx
0x6EE9C0: mov     edx, [esp+0A8h+var_68]
0x6EE9C4: mov     [ebx+0Ch], edx
0x6EE9C7: jnz     loc_6EE867
0x6EE9CD: add     [esp+0A8h+var_84], 80h ; '€'
0x6EE9D5: sub     [esp+0A8h+var_90], ecx
0x6EE9D9: jnz     loc_6EE853
0x6EE9DF: mov     eax, [esp+0A8h+var_78]
0x6EE9E3: mov     [eax], cl
0x6EE9E5: mov     al, cl
0x6EE9E7: mov     ecx, dword ptr [esp+0A8h+var_C]
0x6EE9EE: mov     large fs:0, ecx
0x6EE9F5: pop     ecx
0x6EE9F6: pop     edi
0x6EE9F7: pop     esi
0x6EE9F8: pop     ebp
0x6EE9F9: pop     ebx
0x6EE9FA: add     esp, 94h
0x6EEA00: retn    8
0x6EEA03: xor     al, al
0x6EEA05: jmp     short loc_6EE9E7
