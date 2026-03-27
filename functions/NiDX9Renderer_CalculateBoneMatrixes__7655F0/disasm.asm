0x7655F0: sub     esp, 0E8h
0x7655F6: push    ebp
0x7655F7: mov     ebp, [esp+0ECh+arg_0]
0x7655FE: push    esi
0x7655FF: mov     esi, ecx
0x765601: mov     ecx, [esi+8B0h]; this
0x765607: push    edi
0x765608: mov     edi, [ebp+18h]
0x76560B: mov     [esp+0F4h+var_D4], esi
0x76560F: call    TESObjectREFR_GetNiNode
0x765614: cmp     edi, eax
0x765616: jz      loc_765984
0x76561C: mov     ecx, [esi+8B0h]; this
0x765622: push    ebx
0x765623: call    TESObjectREFR_GetNiNode
0x765628: mov     esi, [esp+0F8h+arg_C]
0x76562F: cmp     esi, 3
0x765632: mov     ecx, [ebp+20h]
0x765635: mov     edx, [ebp+24h]
0x765638: mov     [ebp+18h], eax
0x76563B: mov     eax, [ebp+8]
0x76563E: mov     ebx, [eax+40h]
0x765641: mov     [esp+0F8h+var_E4], eax
0x765645: mov     eax, [ebp+1Ch]
0x765648: mov     [esp+0F8h+var_DC], ebx
0x76564C: mov     [esp+0F8h+var_E8], ecx
0x765650: jnz     short loc_76565A
0x765652: mov     [esp+0F8h+arg_8], 1
0x76565A: cmp     ebx, eax
0x76565C: ja      short loc_765666
0x76565E: cmp     esi, edx
0x765660: jz      loc_765703
0x765666: push    ecx
0x765667: call    FormHeapFree
0x76566C: add     esp, 4
0x76566F: xor     ecx, ecx
0x765671: cmp     esi, 4
0x765674: jnz     short loc_7656A4
0x765676: mov     eax, ebx
0x765678: mov     edx, 40h ; '@'
0x76567D: mul     edx
0x76567F: seto    cl
0x765682: neg     ecx
0x765684: or      ecx, eax
0x765686: push    ecx; Size
0x765687: call    FormHeapAlloc
0x76568C: add     esp, 4
0x76568F: test    ebx, ebx
0x765691: mov     edx, eax
0x765693: mov     [esp+0F8h+var_E8], edx
0x765697: jbe     short loc_7656FA
0x765699: fld1
0x76569B: lea     eax, [edx+34h]
0x76569E: fldz
0x7656A0: mov     ecx, ebx
0x7656A2: jmp     short loc_7656CC
0x7656A4: lea     eax, [ebx+ebx*2]
0x7656A7: add     eax, eax
0x7656A9: add     eax, eax
0x7656AB: mov     edx, 4
0x7656B0: mul     edx
0x7656B2: seto    cl
0x7656B5: neg     ecx
0x7656B7: or      ecx, eax
0x7656B9: push    ecx; Size
0x7656BA: call    FormHeapAlloc
0x7656BF: add     esp, 4
0x7656C2: mov     [esp+0F8h+var_E8], eax
0x7656C6: mov     edx, eax
0x7656C8: jmp     short loc_7656FA
0x7656CA: fxch    st(1)
0x7656CC: cmp     [esp+0F8h+arg_8], 0
0x7656D4: jz      short loc_7656E0
0x7656D6: fst     dword ptr [eax+4]
0x7656D9: fst     dword ptr [eax]
0x7656DB: fst     dword ptr [eax-4]
0x7656DE: jmp     short loc_7656E9
0x7656E0: fst     dword ptr [eax-8]
0x7656E3: fst     dword ptr [eax-18h]
0x7656E6: fst     dword ptr [eax-28h]
0x7656E9: fxch    st(1)
0x7656EB: add     eax, 40h ; '@'
0x7656EE: sub     ecx, 1
0x7656F1: fst     dword ptr [eax-38h]
0x7656F4: jnz     short loc_7656CA
0x7656F6: fstp    st(1)
0x7656F8: fstp    st
0x7656FA: mov     [ebp+1Ch], ebx
0x7656FD: mov     [ebp+24h], esi
0x765700: mov     [ebp+20h], edx
0x765703: mov     ecx, [ebp+10h]
0x765706: lea     eax, [esp+0F8h+var_D0]
0x76570A: push    eax
0x76570B: add     ecx, 64h ; 'd'
0x76570E: call    sub_718A80
0x765713: mov     eax, [ebp+8]
0x765716: lea     ecx, [esp+0F8h+var_D0]
0x76571A: push    ecx
0x76571B: lea     edx, [esp+0FCh+var_34]
0x765722: push    edx
0x765723: lea     ecx, [eax+0Ch]
0x765726: call    sub_53D7A0
0x76572B: mov     esi, eax
0x76572D: mov     ecx, 0Dh
0x765732: lea     edi, [esp+0F8h+var_68]
0x765739: rep movsd
0x76573B: lea     eax, [esp+0F8h+var_68]
0x765742: push    eax
0x765743: lea     ecx, [esp+0FCh+var_34]
0x76574A: push    ecx
0x76574B: mov     ecx, [esp+100h+arg_4]
0x765752: call    sub_53D7A0
0x765757: mov     esi, eax
0x765759: fld     [esp+0F8h+var_38]
0x765760: mov     ecx, 0Dh
0x765765: fcom    qword ptr ds:0A88D40h
0x76576B: lea     edi, [esp+0F8h+var_9C]
0x76576F: rep movsd
0x765771: fnstsw  ax
0x765773: test    ah, 5
0x765776: mov     byte ptr [esp+0F8h+var_E0], 0
0x76577B: jp      short loc_765791
0x76577D: fcomp   dword ptr ds:0A88D38h
0x765783: fnstsw  ax
0x765785: test    ah, 41h
0x765788: jnz     short loc_765793
0x76578A: mov     byte ptr [esp+0F8h+var_E0], 1
0x76578F: jmp     short loc_765793
0x765791: fstp    st
0x765793: cmp     [esp+0F8h+arg_10], 0
0x76579B: jz      short loc_7657E2
0x76579D: mov     eax, [ebp+28h]
0x7657A0: test    eax, eax
0x7657A2: jnz     short loc_7657C1
0x7657A4: push    40h ; '@'; Size
0x7657A6: call    FormHeapAlloc
0x7657AB: fldz
0x7657AD: mov     [ebp+28h], eax
0x7657B0: fst     dword ptr [eax+0Ch]
0x7657B3: fst     dword ptr [eax+1Ch]
0x7657B6: add     esp, 4
0x7657B9: fstp    dword ptr [eax+2Ch]
0x7657BC: fld1
0x7657BE: fstp    dword ptr [eax+3Ch]
0x7657C1: fld     [esp+0F8h+var_6C]
0x7657C8: push    ecx
0x7657C9: fstp    [esp+0FCh+var_FC]; float
0x7657CC: lea     edx, [esp+0FCh+var_78]
0x7657D3: push    edx; int
0x7657D4: lea     ecx, [esp+100h+var_9C]
0x7657D8: push    ecx; int
0x7657D9: push    eax; int
0x7657DA: call    sub_761BE0
0x7657DF: add     esp, 10h
0x7657E2: mov     esi, [ebp+14h]
0x7657E5: mov     edx, [esp+0F8h+var_E4]
0x7657E9: mov     eax, [edx+44h]
0x7657EC: xor     ebp, ebp
0x7657EE: test    ebx, ebx
0x7657F0: mov     [esp+0F8h+var_D8], esi
0x7657F4: jbe     loc_76596A
0x7657FA: mov     ebx, [esp+0F8h+var_E8]
0x7657FE: mov     edi, ebx
0x765800: mov     [esp+0F8h+var_E4], edi
0x765804: mov     [esp+0F8h+var_E8], eax
0x765808: add     ebx, 20h ; ' '
0x76580B: jmp     short loc_765810
0x76580D: align 10h
0x765810: mov     eax, [esp+0F8h+var_E8]
0x765814: push    eax
0x765815: lea     ecx, [esp+0FCh+var_D0]
0x765819: push    ecx
0x76581A: mov     ecx, [esi+ebp*4]
0x76581D: add     ecx, 64h ; 'd'
0x765820: call    sub_53D7A0
0x765825: mov     ecx, [esi+ebp*4]
0x765828: fld     dword ptr [ecx+94h]
0x76582E: fcomp   qword ptr ds:0A88D40h
0x765834: fnstsw  ax
0x765836: test    ah, 5
0x765839: jp      short loc_765853
0x76583B: fld     dword ptr ds:0A88D38h
0x765841: fcomp   dword ptr [ecx+94h]
0x765847: fnstsw  ax
0x765849: test    ah, 5
0x76584C: jp      short loc_765853
0x76584E: mov     byte ptr [esp+0F8h+var_E0], 1
0x765853: cmp     [esp+0F8h+arg_10], 0
0x76585B: jnz     short loc_765888
0x76585D: lea     edx, [esp+0F8h+var_D0]
0x765861: push    edx
0x765862: lea     eax, [esp+0FCh+var_34]
0x765869: push    eax
0x76586A: lea     ecx, [esp+100h+var_9C]
0x76586E: call    sub_53D7A0
0x765873: mov     ecx, 0Dh
0x765878: mov     esi, eax
0x76587A: lea     edi, [esp+0F8h+var_D0]
0x76587E: rep movsd
0x765880: mov     edi, [esp+0F8h+var_E4]
0x765884: mov     esi, [esp+0F8h+var_D8]
0x765888: cmp     [esp+0F8h+arg_C], 4
0x765890: jnz     short loc_7658D1
0x765892: cmp     [esp+0F8h+arg_8], 0
0x76589A: fld     [esp+0F8h+var_A0]
0x76589E: push    ecx
0x76589F: fstp    [esp+0FCh+var_FC]; float
0x7658A2: jz      short loc_7658BC
0x7658A4: lea     ecx, [esp+0FCh+var_AC]
0x7658A8: push    ecx; int
0x7658A9: lea     edx, [esp+100h+var_D0]
0x7658AD: push    edx; int
0x7658AE: push    edi; int
0x7658AF: call    sub_761B60
0x7658B4: add     esp, 10h
0x7658B7: jmp     loc_76594E
0x7658BC: lea     eax, [esp+0FCh+var_AC]
0x7658C0: push    eax; int
0x7658C1: lea     ecx, [esp+100h+var_D0]
0x7658C5: push    ecx; int
0x7658C6: push    edi; int
0x7658C7: call    sub_761AE0
0x7658CC: add     esp, 10h
0x7658CF: jmp     short loc_76594E
0x7658D1: fld     [esp+0F8h+var_D0]
0x7658D5: fld     [esp+0F8h+var_A0]
0x7658D9: fld     st
0x7658DB: fmulp   st(2), st
0x7658DD: fxch    st(1)
0x7658DF: fstp    dword ptr [ebx-20h]
0x7658E2: fld     [esp+0F8h+var_C4]
0x7658E6: fmul    st, st(1)
0x7658E8: fstp    dword ptr [ebx-10h]
0x7658EB: fld     [esp+0F8h+var_B8]
0x7658EF: fmul    st, st(1)
0x7658F1: fstp    dword ptr [ebx]
0x7658F3: fld     [esp+0F8h+var_CC]
0x7658F7: fmul    st, st(1)
0x7658F9: fstp    dword ptr [ebx-1Ch]
0x7658FC: fld     [esp+0F8h+var_C0]
0x765900: fmul    st, st(1)
0x765902: fstp    dword ptr [ebx-0Ch]
0x765905: fld     [esp+0F8h+var_B4]
0x765909: fmul    st, st(1)
0x76590B: fstp    dword ptr [ebx+4]
0x76590E: fld     [esp+0F8h+var_C8]
0x765912: fmul    st, st(1)
0x765914: fstp    dword ptr [ebx-18h]
0x765917: fld     [esp+0F8h+var_BC]
0x76591B: fmul    st, st(1)
0x76591D: fstp    dword ptr [ebx-8]
0x765920: fmul    [esp+0F8h+var_B0]
0x765924: fstp    dword ptr [ebx+8]
0x765927: fld     [esp+0F8h+var_AC]
0x76592B: fsub    dword ptr ds:0B3F92Ch
0x765931: fstp    dword ptr [ebx-14h]
0x765934: fld     [esp+0F8h+var_A8]
0x765938: fsub    dword ptr ds:0B3F930h
0x76593E: fstp    dword ptr [ebx-4]
0x765941: fld     [esp+0F8h+var_A4]
0x765945: fsub    dword ptr ds:0B3F934h
0x76594B: fstp    dword ptr [ebx+0Ch]
0x76594E: add     [esp+0F8h+var_E8], 4Ch ; 'L'
0x765953: add     ebp, 1
0x765956: add     edi, 40h ; '@'
0x765959: add     ebx, 30h ; '0'
0x76595C: cmp     ebp, [esp+0F8h+var_DC]
0x765960: mov     [esp+0F8h+var_E4], edi
0x765964: jb      loc_765810
0x76596A: mov     edx, [esp+0F8h+var_D4]
0x76596E: mov     ecx, [edx+8ACh]
0x765974: mov     eax, [ecx]
0x765976: mov     edx, [esp+0F8h+var_E0]
0x76597A: mov     eax, [eax+0FCh]
0x765980: push    edx
0x765981: call    eax
0x765983: pop     ebx
0x765984: pop     edi
0x765985: pop     esi
0x765986: pop     ebp
0x765987: add     esp, 0E8h
0x76598D: retn    14h
