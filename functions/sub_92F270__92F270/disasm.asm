0x92F270: push    ebp
0x92F271: mov     ebp, esp
0x92F273: and     esp, 0FFFFFFF0h
0x92F276: sub     esp, 0B4h
0x92F27C: push    ebx
0x92F27D: push    esi
0x92F27E: mov     esi, [ebp+arg_10]
0x92F281: test    dword ptr [esi+8], 3FFFFFFFh
0x92F288: push    edi
0x92F289: mov     edi, [ebp+arg_0]
0x92F28C: mov     dword ptr [esi+4], 0
0x92F293: movaps  xmm1, xmmword ptr ds:0A965C0h
0x92F29A: movaps  xmm0, xmmword ptr [edi]
0x92F29D: xorps   xmm0, xmm1
0x92F2A0: movaps  [esp+0C0h+var_50], xmm0
0x92F2A5: jnz     short loc_92F2B7
0x92F2A7: push    10h
0x92F2A9: push    esi
0x92F2AA: call    sub_8A6EE0
0x92F2AF: movaps  xmm0, [esp+0C8h+var_50]
0x92F2B4: add     esp, 8
0x92F2B7: mov     ecx, [esi+4]
0x92F2BA: mov     ebx, [esi]
0x92F2BC: mov     eax, ecx
0x92F2BE: shl     eax, 4
0x92F2C1: add     eax, ebx
0x92F2C3: inc     ecx
0x92F2C4: mov     [esi+4], ecx
0x92F2C7: movaps  xmm1, xmmword ptr [edi]
0x92F2CA: movaps  xmmword ptr [eax], xmm1
0x92F2CD: mov     eax, [esi+8]
0x92F2D0: mov     ecx, [esi+4]
0x92F2D3: and     eax, 3FFFFFFFh
0x92F2D8: cmp     ecx, eax
0x92F2DA: jnz     short loc_92F2EC
0x92F2DC: push    10h
0x92F2DE: push    esi
0x92F2DF: call    sub_8A6EE0
0x92F2E4: movaps  xmm0, [esp+0C8h+var_50]
0x92F2E9: add     esp, 8
0x92F2EC: mov     ecx, [esi+4]
0x92F2EF: mov     edx, [esi]
0x92F2F1: mov     ebx, [ebp+arg_8]
0x92F2F4: mov     eax, ecx
0x92F2F6: shl     eax, 4
0x92F2F9: add     eax, edx
0x92F2FB: mov     edx, large fs:2Ch
0x92F302: inc     ecx
0x92F303: mov     [esi+4], ecx
0x92F306: mov     ecx, ds:0BA9DE4h
0x92F30C: movaps  xmmword ptr [eax], xmm0
0x92F30F: mov     eax, [edx+ecx*4]
0x92F312: mov     ecx, [eax+19Ch]
0x92F318: push    14h
0x92F31A: push    ebx
0x92F31B: mov     [esp+0C8h+var_60], eax
0x92F31F: call    sub_8A7560
0x92F324: test    ebx, ebx
0x92F326: mov     edx, eax
0x92F328: mov     [esp+0C0h+var_2C], edx
0x92F32F: jle     short loc_92F348
0x92F331: mov     ecx, ebx
0x92F333: mov     edi, edx
0x92F335: mov     edx, ecx
0x92F337: shr     ecx, 2
0x92F33A: xor     eax, eax
0x92F33C: rep stosd
0x92F33E: mov     ecx, edx
0x92F340: and     ecx, 3
0x92F343: rep stosb
0x92F345: mov     edi, [ebp+arg_0]
0x92F348: fld     dword ptr [edi+8]
0x92F34B: movaps  xmm0, xmmword ptr [edi]
0x92F34E: fabs
0x92F350: or      edx, 0FFFFFFFFh
0x92F353: fsubr   dword ptr ds:0A2F948h
0x92F359: mov     [esp+0C0h+var_94], edx
0x92F35D: mov     dword ptr [esp+0C0h+var_90+0Ch], 0
0x92F365: fabs
0x92F367: fcomp   dword ptr ds:0A372CCh
0x92F36D: mov     dword ptr [esp+0C0h+var_90+4], 0
0x92F375: fnstsw  ax
0x92F377: test    ah, 5
0x92F37A: jp      short loc_92F3C0
0x92F37C: movaps  xmm1, xmm0
0x92F37F: shufps  xmm1, xmm0, 0C9h ; 'É'
0x92F383: movaps  xmm2, xmm1
0x92F386: mov     dword ptr [esp+0C0h+var_90], 3F800000h
0x92F38E: mov     dword ptr [esp+0C0h+var_90+8], 0
0x92F396: movaps  xmm1, [esp+0C0h+var_90]
0x92F39B: movaps  xmm3, xmm1
0x92F39E: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x92F3A2: mulps   xmm3, xmm2
0x92F3A5: movaps  xmm2, xmm0
0x92F3A8: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x92F3AC: movaps  xmm0, xmm1
0x92F3AF: shufps  xmm0, xmm1, 0C9h ; 'É'
0x92F3B3: mulps   xmm0, xmm2
0x92F3B6: subps   xmm0, xmm3
0x92F3B9: movaps  [esp+0C0h+var_90], xmm0
0x92F3BE: jmp     short loc_92F407
0x92F3C0: movaps  xmm3, xmm0
0x92F3C3: mov     dword ptr [esp+0C0h+var_90], 0
0x92F3CB: mov     dword ptr [esp+0C0h+var_90+8], 3F800000h
0x92F3D3: movaps  xmm1, [esp+0C0h+var_90]
0x92F3D8: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x92F3DC: movaps  xmm2, xmm1
0x92F3DF: shufps  xmm2, xmm1, 0C9h ; 'É'
0x92F3E3: mulps   xmm3, xmm2
0x92F3E6: movaps  xmm2, xmm1
0x92F3E9: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x92F3ED: movaps  xmm1, xmm0
0x92F3F0: shufps  xmm1, xmm0, 0C9h ; 'É'
0x92F3F4: movaps  xmm0, xmm1
0x92F3F7: mulps   xmm0, xmm2
0x92F3FA: subps   xmm0, xmm3
0x92F3FD: movaps  [esp+0C0h+var_90], xmm0
0x92F402: movaps  xmm0, [esp+0C0h+var_90]
0x92F407: fld     dword ptr ds:0A3B888h
0x92F40D: xor     ecx, ecx
0x92F40F: test    ebx, ebx
0x92F411: mov     ebx, [ebp+arg_4]
0x92F414: jle     short loc_92F468
0x92F416: mov     edi, ebx
0x92F418: jmp     short loc_92F420
0x92F41A: align 10h
0x92F420: movaps  xmm1, xmmword ptr [edi]
0x92F423: mulps   xmm1, xmm0
0x92F426: movaps  xmm2, xmm1
0x92F429: shufps  xmm2, xmm1, 55h ; 'U'
0x92F42D: movaps  xmm3, xmm1
0x92F430: lea     eax, [esp+0C0h+var_A4]
0x92F434: addss   xmm2, xmm1
0x92F438: shufps  xmm3, xmm1, 0AAh ; 'ª'
0x92F43C: addss   xmm3, xmm2
0x92F440: movss   dword ptr [eax], xmm3
0x92F444: fld     [esp+0C0h+var_A4]
0x92F448: fcomp   st(1)
0x92F44A: fnstsw  ax
0x92F44C: test    ah, 41h
0x92F44F: jnz     short loc_92F45D
0x92F451: fstp    st
0x92F453: mov     [esp+0C0h+var_94], ecx
0x92F457: fld     [esp+0C0h+var_A4]
0x92F45B: mov     edx, ecx
0x92F45D: mov     eax, [ebp+arg_8]
0x92F460: inc     ecx
0x92F461: add     edi, 10h
0x92F464: cmp     ecx, eax
0x92F466: jl      short loc_92F420
0x92F468: mov     ecx, [esp+0C0h+var_2C]
0x92F46F: fstp    st
0x92F471: mov     edi, [ebp+arg_C]
0x92F474: mov     byte ptr [edx+ecx], 1
0x92F478: mov     eax, [edi+8]
0x92F47B: mov     ecx, [edi+4]
0x92F47E: and     eax, 3FFFFFFFh
0x92F483: cmp     ecx, eax
0x92F485: jnz     short loc_92F49B
0x92F487: push    10h
0x92F489: push    edi
0x92F48A: call    sub_8A6EE0
0x92F48F: movaps  xmm0, [esp+0C8h+var_90]
0x92F494: mov     edx, [esp+0C8h+var_94]
0x92F498: add     esp, 8
0x92F49B: mov     ecx, [edi+4]
0x92F49E: mov     eax, ecx
0x92F4A0: shl     eax, 4
0x92F4A3: add     eax, [edi]
0x92F4A5: inc     ecx
0x92F4A6: mov     [edi+4], ecx
0x92F4A9: mov     ecx, edx
0x92F4AB: shl     ecx, 4
0x92F4AE: movaps  xmm1, xmmword ptr [ecx+ebx]
0x92F4B2: movaps  xmmword ptr [eax], xmm1
0x92F4B5: mov     eax, [ebp+arg_0]
0x92F4B8: movaps  xmm1, xmmword ptr [eax]
0x92F4BB: movaps  xmm2, xmm1
0x92F4BE: shufps  xmm2, xmm1, 0C9h ; 'É'
0x92F4C2: movaps  xmm3, xmm0
0x92F4C5: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x92F4C9: mulps   xmm3, xmm2
0x92F4CC: movaps  xmm2, xmm1
0x92F4CF: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x92F4D3: mov     [esp+0C0h+var_A8], 40400000h
0x92F4DB: movss   xmm4, [esp+0C0h+var_A8]
0x92F4E1: movaps  xmm1, xmm0
0x92F4E4: shufps  xmm1, xmm0, 0C9h ; 'É'
0x92F4E8: mulps   xmm1, xmm2
0x92F4EB: mov     [esp+0C0h+var_A8], 3F000000h
0x92F4F3: movss   xmm5, [esp+0C0h+var_A8]
0x92F4F9: or      edi, 0FFFFFFFFh
0x92F4FC: subps   xmm1, xmm3
0x92F4FF: addps   xmm1, xmm0
0x92F502: mov     [esp+0C0h+var_98], edx
0x92F506: mov     [esp+0C0h+var_A4], edx
0x92F50A: mov     [esp+0C0h+var_6C], edi
0x92F50E: movaps  [esp+0C0h+var_90], xmm4
0x92F513: movaps  [esp+0C0h+var_50], xmm5
0x92F518: jmp     short loc_92F520
0x92F51A: align 10h
0x92F520: mov     eax, [ebp+arg_8]
0x92F523: movaps  xmm0, xmm1
0x92F526: mulps   xmm0, xmm1
0x92F529: movaps  xmm2, xmm0
0x92F52C: shufps  xmm2, xmm0, 55h ; 'U'
0x92F530: addss   xmm2, xmm0
0x92F534: movaps  xmm3, xmm0
0x92F537: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92F53B: movaps  xmm0, xmm3
0x92F53E: addss   xmm0, xmm2
0x92F542: movaps  [esp+0C0h+var_80], xmm0
0x92F547: rsqrtss xmm2, xmm0
0x92F54B: movss   dword ptr [esp+0C0h+var_80], xmm2
0x92F551: movaps  xmm2, [esp+0C0h+var_80]
0x92F556: mulss   xmm0, xmm2
0x92F55A: mulss   xmm0, xmm2
0x92F55E: movaps  xmm3, xmm4
0x92F561: subss   xmm3, xmm0
0x92F565: movaps  xmm0, xmm5
0x92F568: mulss   xmm0, xmm2
0x92F56C: mulss   xmm0, xmm3
0x92F570: movaps  xmm2, xmm0
0x92F573: shufps  xmm2, xmm0, 0
0x92F577: movaps  xmm3, xmm2
0x92F57A: xor     ecx, ecx
0x92F57C: test    eax, eax
0x92F57E: mulps   xmm3, xmm1
0x92F581: mov     [esp+0C0h+var_A8], 0C0000000h
0x92F589: movaps  [esp+0C0h+var_40], xmm3
0x92F591: mov     [esp+0C0h+var_70], 7F7FFFFFh
0x92F599: jle     loc_92F733
0x92F59F: mov     [esp+0C0h+var_A0], ebx
0x92F5A3: cmp     ecx, edx
0x92F5A5: jz      loc_92F722
0x92F5AB: fld     dword ptr ds:0A2F948h
0x92F5B1: mov     eax, edx
0x92F5B3: shl     eax, 4
0x92F5B6: movaps  xmm1, xmmword ptr [eax+ebx]
0x92F5BA: mov     eax, [esp+0C0h+var_A0]
0x92F5BE: movaps  xmm0, xmmword ptr [eax]
0x92F5C1: subps   xmm0, xmm1
0x92F5C4: movaps  xmm1, xmm0
0x92F5C7: shufps  xmm1, xmm0, 0C9h ; 'É'
0x92F5CB: movaps  xmm2, xmm3
0x92F5CE: shufps  xmm2, xmm3, 0D2h ; 'Ò'
0x92F5D2: mulps   xmm2, xmm1
0x92F5D5: movaps  xmm1, xmm0
0x92F5D8: shufps  xmm1, xmm0, 0D2h ; 'Ò'
0x92F5DC: movaps  xmm6, xmm3
0x92F5DF: shufps  xmm6, xmm3, 0C9h ; 'É'
0x92F5E3: mulps   xmm6, xmm1
0x92F5E6: movaps  xmm1, xmm6
0x92F5E9: subps   xmm1, xmm2
0x92F5EC: movaps  xmm2, xmm3
0x92F5EF: mulps   xmm2, xmm0
0x92F5F2: mulps   xmm0, xmm0
0x92F5F5: movaps  xmm6, xmm2
0x92F5F8: shufps  xmm6, xmm2, 55h ; 'U'
0x92F5FC: addss   xmm6, xmm2
0x92F600: movaps  xmm7, xmm2
0x92F603: shufps  xmm7, xmm2, 0AAh ; 'ª'
0x92F607: movaps  xmm2, xmm0
0x92F60A: shufps  xmm2, xmm0, 55h ; 'U'
0x92F60E: addss   xmm2, xmm0
0x92F612: addss   xmm7, xmm6
0x92F616: movaps  xmm6, xmm0
0x92F619: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x92F61D: movaps  xmm0, xmm6
0x92F620: addss   xmm0, xmm2
0x92F624: movaps  [esp+0C0h+var_80], xmm0
0x92F629: sqrtss  xmm0, xmm0
0x92F62D: movss   dword ptr [esp+0C0h+var_80], xmm0
0x92F633: movaps  xmm0, [esp+0C0h+var_80]
0x92F638: lea     eax, [esp+0C0h+var_68]
0x92F63C: movss   dword ptr [eax], xmm7
0x92F640: lea     eax, [esp+0C0h+var_64]
0x92F644: movss   dword ptr [eax], xmm0
0x92F648: fdiv    [esp+0C0h+var_64]
0x92F64C: movaps  xmm0, xmm1
0x92F64F: mulps   xmm0, xmm1
0x92F652: movaps  xmm2, xmm0
0x92F655: shufps  xmm2, xmm0, 55h ; 'U'
0x92F659: addss   xmm2, xmm0
0x92F65D: movaps  xmm6, xmm0
0x92F660: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x92F664: movaps  xmm0, xmm6
0x92F667: addss   xmm0, xmm2
0x92F66B: movaps  [esp+0C0h+var_80], xmm0
0x92F670: sqrtss  xmm0, xmm0
0x92F674: movss   dword ptr [esp+0C0h+var_80], xmm0
0x92F67A: movaps  xmm0, [esp+0C0h+var_80]
0x92F67F: lea     eax, [esp+0C0h+var_54]
0x92F683: movss   dword ptr [eax], xmm0
0x92F687: mov     eax, [ebp+arg_0]
0x92F68A: movaps  xmm0, xmmword ptr [eax]
0x92F68D: mulps   xmm1, xmm0
0x92F690: movaps  xmm0, xmm1
0x92F693: shufps  xmm0, xmm1, 55h ; 'U'
0x92F697: movaps  xmm2, xmm1
0x92F69A: lea     eax, [esp+0C0h+var_58]
0x92F69E: addss   xmm0, xmm1
0x92F6A2: shufps  xmm2, xmm1, 0AAh ; 'ª'
0x92F6A6: addss   xmm2, xmm0
0x92F6AA: movss   dword ptr [eax], xmm2
0x92F6AE: fst     [esp+0C0h+var_9C]
0x92F6B2: fmul    [esp+0C0h+var_54]
0x92F6B6: fld     [esp+0C0h+var_9C]
0x92F6BA: fmul    [esp+0C0h+var_68]
0x92F6BE: fld     [esp+0C0h+var_58]
0x92F6C2: fcomp   dword ptr ds:0A2FAA8h
0x92F6C8: fnstsw  ax
0x92F6CA: test    ah, 41h
0x92F6CD: jnz     short loc_92F6D9
0x92F6CF: fxch    st(1)
0x92F6D1: fmul    dword ptr ds:0A30634h
0x92F6D7: fxch    st(1)
0x92F6D9: fcomp   dword ptr ds:0A2FAA8h
0x92F6DF: fnstsw  ax
0x92F6E1: test    ah, 5
0x92F6E4: jp      short loc_92F6EE
0x92F6E6: fld     dword ptr ds:0A379B4h
0x92F6EC: jmp     short loc_92F705
0x92F6EE: fcom    dword ptr ds:0A2FAA8h
0x92F6F4: fnstsw  ax
0x92F6F6: test    ah, 41h
0x92F6F9: jnz     short loc_92F6FF
0x92F6FB: fld     st
0x92F6FD: jmp     short loc_92F707
0x92F6FF: fld     dword ptr ds:0A46B10h
0x92F705: fsub    st, st(1)
0x92F707: fcom    [esp+0C0h+var_70]
0x92F70B: fnstsw  ax
0x92F70D: test    ah, 5
0x92F710: jp      short loc_92F71E
0x92F712: fstp    [esp+0C0h+var_70]
0x92F716: mov     edi, ecx
0x92F718: fstp    [esp+0C0h+var_A8]
0x92F71C: jmp     short loc_92F722
0x92F71E: fstp    st
0x92F720: fstp    st
0x92F722: add     [esp+0C0h+var_A0], 10h
0x92F727: mov     eax, [ebp+arg_8]
0x92F72A: inc     ecx
0x92F72B: cmp     ecx, eax
0x92F72D: jl      loc_92F5A3
0x92F733: cmp     edx, [esp+0C0h+var_94]
0x92F737: jz      loc_92F916
0x92F73D: mov     ecx, edx
0x92F73F: shl     ecx, 4
0x92F742: movaps  xmm6, xmmword ptr [ecx+ebx]
0x92F746: lea     eax, [ecx+ebx]
0x92F749: mov     [esp+0C0h+var_A0], eax
0x92F74D: mov     eax, [esp+0C0h+var_A4]
0x92F751: shl     eax, 4
0x92F754: movaps  xmm1, xmmword ptr [eax+ebx]
0x92F758: mov     eax, [esi+8]
0x92F75B: mov     ecx, edi
0x92F75D: shl     ecx, 4
0x92F760: movaps  xmm0, xmm6
0x92F763: subps   xmm0, xmm1
0x92F766: movaps  xmm1, xmmword ptr [ecx+ebx]
0x92F76A: mov     ecx, [esi+4]
0x92F76D: and     eax, 3FFFFFFFh
0x92F772: cmp     ecx, eax
0x92F774: subps   xmm6, xmm1
0x92F777: movaps  [esp+0C0h+var_10], xmm0
0x92F77F: movaps  [esp+0C0h+var_20], xmm6
0x92F787: jnz     short loc_92F7BA
0x92F789: push    10h
0x92F78B: push    esi
0x92F78C: call    sub_8A6EE0
0x92F791: movaps  xmm4, [esp+0C8h+var_90]
0x92F796: movaps  xmm6, [esp+0C8h+var_20]
0x92F79E: movaps  xmm0, [esp+0C8h+var_10]
0x92F7A6: movaps  xmm3, [esp+0C8h+var_40]
0x92F7AE: movaps  xmm5, [esp+0C8h+var_50]
0x92F7B3: mov     edx, [esp+0C8h+var_98]
0x92F7B7: add     esp, 8
0x92F7BA: mov     eax, [esi+4]
0x92F7BD: mov     ecx, eax
0x92F7BF: shl     ecx, 4
0x92F7C2: add     ecx, [esi]
0x92F7C4: inc     eax
0x92F7C5: mov     [esi+4], eax
0x92F7C8: cmp     [esp+0C0h+var_A4], edi
0x92F7CC: jz      short loc_92F7F8
0x92F7CE: movaps  xmm1, xmm6
0x92F7D1: shufps  xmm1, xmm6, 0C9h ; 'É'
0x92F7D5: movaps  xmm2, xmm0
0x92F7D8: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x92F7DC: mulps   xmm2, xmm1
0x92F7DF: movaps  xmm1, xmm6
0x92F7E2: shufps  xmm1, xmm6, 0D2h ; 'Ò'
0x92F7E6: movaps  xmm7, xmm0
0x92F7E9: shufps  xmm7, xmm0, 0C9h ; 'É'
0x92F7ED: mulps   xmm7, xmm1
0x92F7F0: movaps  xmm1, xmm7
0x92F7F3: subps   xmm1, xmm2
0x92F7F6: jmp     short loc_92F7FE
0x92F7F8: mov     eax, [ebp+arg_0]
0x92F7FB: movaps  xmm1, xmmword ptr [eax]
0x92F7FE: movaps  xmm2, xmm1
0x92F801: shufps  xmm2, xmm1, 0C9h ; 'É'
0x92F805: movaps  xmm7, xmm0
0x92F808: shufps  xmm7, xmm0, 0D2h ; 'Ò'
0x92F80C: mulps   xmm7, xmm2
0x92F80F: movaps  xmm2, xmm1
0x92F812: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x92F816: movaps  xmm1, xmm0
0x92F819: shufps  xmm1, xmm0, 0C9h ; 'É'
0x92F81D: movaps  xmm0, xmm1
0x92F820: mulps   xmm0, xmm2
0x92F823: movaps  xmm2, xmm0
0x92F826: subps   xmm2, xmm7
0x92F829: movaps  xmm0, xmm2
0x92F82C: mulps   xmm0, xmm6
0x92F82F: movaps  xmm1, xmm0
0x92F832: shufps  xmm1, xmm0, 55h ; 'U'
0x92F836: movaps  xmm6, xmm0
0x92F839: lea     eax, [esp+0C0h+var_5C]
0x92F83D: addss   xmm1, xmm0
0x92F841: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x92F845: addss   xmm6, xmm1
0x92F849: movss   dword ptr [eax], xmm6
0x92F84D: fld     [esp+0C0h+var_5C]
0x92F851: fcomp   dword ptr ds:0A372CCh
0x92F857: movaps  xmmword ptr [ecx], xmm2
0x92F85A: fnstsw  ax
0x92F85C: test    ah, 5
0x92F85F: jp      short loc_92F869
0x92F861: fld     dword ptr ds:0A30634h
0x92F867: jmp     short loc_92F86F
0x92F869: fld     dword ptr ds:0A2F948h
0x92F86F: mov     eax, [esp+0C0h+var_A0]
0x92F873: fstp    [esp+0C0h+var_9C]
0x92F877: movss   xmm0, [esp+0C0h+var_9C]
0x92F87D: movaps  xmm1, xmm0
0x92F880: shufps  xmm1, xmm0, 0
0x92F884: mulps   xmm1, xmm2
0x92F887: movaps  xmm0, xmm1
0x92F88A: mulps   xmm0, xmm1
0x92F88D: movaps  xmm2, xmm0
0x92F890: shufps  xmm2, xmm0, 55h ; 'U'
0x92F894: addss   xmm2, xmm0
0x92F898: movaps  xmm6, xmm0
0x92F89B: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x92F89F: movaps  xmm0, xmm6
0x92F8A2: addss   xmm0, xmm2
0x92F8A6: movaps  [esp+0C0h+var_80], xmm0
0x92F8AB: rsqrtss xmm2, xmm0
0x92F8AF: movss   dword ptr [esp+0C0h+var_80], xmm2
0x92F8B5: movaps  xmm2, [esp+0C0h+var_80]
0x92F8BA: mulss   xmm0, xmm2
0x92F8BE: mulss   xmm0, xmm2
0x92F8C2: movaps  xmm6, xmm4
0x92F8C5: subss   xmm6, xmm0
0x92F8C9: movaps  xmm0, xmm5
0x92F8CC: mulss   xmm0, xmm2
0x92F8D0: mulss   xmm0, xmm6
0x92F8D4: movaps  xmm2, xmm0
0x92F8D7: shufps  xmm2, xmm0, 0
0x92F8DB: movaps  xmmword ptr [ecx], xmm1
0x92F8DE: movaps  xmm0, xmm2
0x92F8E1: mulps   xmm0, xmm1
0x92F8E4: movaps  xmmword ptr [ecx], xmm0
0x92F8E7: movaps  xmm1, xmmword ptr [eax]
0x92F8EA: mulps   xmm0, xmm1
0x92F8ED: movaps  xmm1, xmm0
0x92F8F0: shufps  xmm1, xmm0, 55h ; 'U'
0x92F8F4: movaps  xmm2, xmm0
0x92F8F7: addss   xmm1, xmm0
0x92F8FB: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92F8FF: lea     eax, [esp+0C0h+var_AC]
0x92F903: addss   xmm2, xmm1
0x92F907: movss   dword ptr [eax], xmm2
0x92F90B: fld     [esp+0C0h+var_AC]
0x92F90F: fchs
0x92F911: fstp    dword ptr [ecx+0Ch]
0x92F914: jmp     short loc_92F91A
0x92F916: mov     [esp+0C0h+var_6C], edi
0x92F91A: mov     eax, [esp+0C0h+var_2C]
0x92F921: cmp     byte ptr [edi+eax], 0
0x92F925: jnz     loc_92FA12
0x92F92B: mov     ecx, [ebp+arg_C]
0x92F92E: mov     byte ptr [edi+eax], 1
0x92F932: mov     edx, [ecx+8]
0x92F935: mov     eax, [ecx+4]
0x92F938: and     edx, 3FFFFFFFh
0x92F93E: cmp     eax, edx
0x92F940: jnz     short loc_92F962
0x92F942: push    10h
0x92F944: push    ecx
0x92F945: call    sub_8A6EE0
0x92F94A: movaps  xmm4, [esp+0C8h+var_90]
0x92F94F: movaps  xmm3, [esp+0C8h+var_40]
0x92F957: movaps  xmm5, [esp+0C8h+var_50]
0x92F95C: mov     ecx, [ebp+arg_C]
0x92F95F: add     esp, 8
0x92F962: mov     edx, [ecx+4]
0x92F965: fld     [esp+0C0h+var_A8]
0x92F969: mov     eax, edx
0x92F96B: fcomp   dword ptr ds:0A79DB4h
0x92F971: shl     eax, 4
0x92F974: add     eax, [ecx]
0x92F976: inc     edx
0x92F977: mov     [ecx+4], edx
0x92F97A: mov     edx, [esp+0C0h+var_98]
0x92F97E: mov     ecx, edi
0x92F980: shl     ecx, 4
0x92F983: movaps  xmm0, xmmword ptr [ecx+ebx]
0x92F987: movaps  xmmword ptr [eax], xmm0
0x92F98A: movaps  xmm1, xmmword ptr [ecx+ebx]
0x92F98E: add     ecx, ebx
0x92F990: mov     eax, edx
0x92F992: shl     eax, 4
0x92F995: movaps  xmm0, xmmword ptr [eax+ebx]
0x92F999: fnstsw  ax
0x92F99B: subps   xmm1, xmm0
0x92F99E: test    ah, 5
0x92F9A1: movaps  xmm0, xmm1
0x92F9A4: mulps   xmm0, xmm1
0x92F9A7: movaps  xmm2, xmm0
0x92F9AA: shufps  xmm2, xmm0, 55h ; 'U'
0x92F9AE: addss   xmm2, xmm0
0x92F9B2: movaps  xmm6, xmm0
0x92F9B5: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x92F9B9: movaps  xmm0, xmm6
0x92F9BC: addss   xmm0, xmm2
0x92F9C0: movaps  [esp+0C0h+var_80], xmm0
0x92F9C5: rsqrtss xmm2, xmm0
0x92F9C9: movss   dword ptr [esp+0C0h+var_80], xmm2
0x92F9CF: movaps  xmm2, [esp+0C0h+var_80]
0x92F9D4: mulss   xmm0, xmm2
0x92F9D8: mulss   xmm0, xmm2
0x92F9DC: movaps  xmm6, xmm4
0x92F9DF: subss   xmm6, xmm0
0x92F9E3: movaps  xmm0, xmm5
0x92F9E6: mulss   xmm0, xmm2
0x92F9EA: mulss   xmm0, xmm6
0x92F9EE: movaps  xmm2, xmm0
0x92F9F1: shufps  xmm2, xmm0, 0
0x92F9F5: movaps  xmm0, xmm2
0x92F9F8: mulps   xmm0, xmm1
0x92F9FB: jnp     short loc_92FA00
0x92F9FD: addps   xmm0, xmm3
0x92FA00: mov     [esp+0C0h+var_A4], edx
0x92FA04: movaps  xmm1, xmm0
0x92FA07: mov     [esp+0C0h+var_98], edi
0x92FA0B: mov     edx, edi
0x92FA0D: jmp     loc_92F520
0x92FA12: mov     eax, [esp+0C0h+var_6C]
0x92FA16: mov     ecx, [esi+8]
0x92FA19: shl     edi, 4
0x92FA1C: movaps  xmm1, xmmword ptr [edi+ebx]
0x92FA20: add     edi, ebx
0x92FA22: shl     edx, 4
0x92FA25: movaps  xmm2, xmmword ptr [edx+ebx]
0x92FA29: shl     eax, 4
0x92FA2C: movaps  xmm0, xmm1
0x92FA2F: subps   xmm0, xmm2
0x92FA32: movaps  xmm2, xmmword ptr [eax+ebx]
0x92FA36: mov     eax, [esi+4]
0x92FA39: and     ecx, 3FFFFFFFh
0x92FA3F: cmp     eax, ecx
0x92FA41: subps   xmm1, xmm2
0x92FA44: movaps  [esp+0C0h+var_10], xmm0
0x92FA4C: movaps  [esp+0C0h+var_20], xmm1
0x92FA54: jnz     short loc_92FA73
0x92FA56: push    10h
0x92FA58: push    esi
0x92FA59: call    sub_8A6EE0
0x92FA5E: movaps  xmm4, [esp+0C8h+var_90]
0x92FA63: movaps  xmm0, [esp+0C8h+var_10]
0x92FA6B: movaps  xmm5, [esp+0C8h+var_50]
0x92FA70: add     esp, 8
0x92FA73: mov     eax, [esi+4]
0x92FA76: mov     edx, [esi]
0x92FA78: mov     ecx, eax
0x92FA7A: shl     ecx, 4
0x92FA7D: add     ecx, edx
0x92FA7F: inc     eax
0x92FA80: mov     [esi+4], eax
0x92FA83: movaps  xmm1, xmmword ptr [edx]
0x92FA86: movaps  xmm2, xmm1
0x92FA89: shufps  xmm2, xmm1, 0C9h ; 'É'
0x92FA8D: movaps  xmm3, xmm0
0x92FA90: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x92FA94: mulps   xmm3, xmm2
0x92FA97: movaps  xmm2, xmm1
0x92FA9A: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x92FA9E: movaps  xmm1, xmm0
0x92FAA1: shufps  xmm1, xmm0, 0C9h ; 'É'
0x92FAA5: movaps  xmm0, xmm1
0x92FAA8: mulps   xmm0, xmm2
0x92FAAB: movaps  xmm2, xmm0
0x92FAAE: subps   xmm2, xmm3
0x92FAB1: movaps  xmm0, xmm2
0x92FAB4: mulps   xmm0, [esp+0C0h+var_20]
0x92FABC: movaps  xmm1, xmm0
0x92FABF: shufps  xmm1, xmm0, 55h ; 'U'
0x92FAC3: movaps  xmm3, xmm0
0x92FAC6: addss   xmm1, xmm0
0x92FACA: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92FACE: lea     edx, [esp+0C0h+var_AC]
0x92FAD2: addss   xmm3, xmm1
0x92FAD6: movss   dword ptr [edx], xmm3
0x92FADA: fld     [esp+0C0h+var_AC]
0x92FADE: fcomp   dword ptr ds:0A372CCh
0x92FAE4: movaps  xmmword ptr [ecx], xmm2
0x92FAE7: fnstsw  ax
0x92FAE9: test    ah, 5
0x92FAEC: jp      short loc_92FAF6
0x92FAEE: fld     dword ptr ds:0A30634h
0x92FAF4: jmp     short loc_92FAFC
0x92FAF6: fld     dword ptr ds:0A2F948h
0x92FAFC: fstp    [esp+0C0h+var_AC]
0x92FB00: movss   xmm0, [esp+0C0h+var_AC]
0x92FB06: movaps  xmm1, xmm0
0x92FB09: shufps  xmm1, xmm0, 0
0x92FB0D: mulps   xmm1, xmm2
0x92FB10: movaps  xmm0, xmm1
0x92FB13: mulps   xmm0, xmm1
0x92FB16: movaps  xmm2, xmm0
0x92FB19: shufps  xmm2, xmm0, 55h ; 'U'
0x92FB1D: addss   xmm2, xmm0
0x92FB21: movaps  xmm3, xmm0
0x92FB24: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92FB28: movaps  xmm0, xmm3
0x92FB2B: addss   xmm0, xmm2
0x92FB2F: movaps  [esp+0C0h+var_40], xmm0
0x92FB37: rsqrtss xmm2, xmm0
0x92FB3B: movss   dword ptr [esp+0C0h+var_40], xmm2
0x92FB44: movaps  xmm2, [esp+0C0h+var_40]
0x92FB4C: mulss   xmm0, xmm2
0x92FB50: mulss   xmm0, xmm2
0x92FB54: mulss   xmm5, xmm2
0x92FB58: subss   xmm4, xmm0
0x92FB5C: movaps  xmmword ptr [ecx], xmm1
0x92FB5F: movaps  xmm0, xmm5
0x92FB62: mulss   xmm0, xmm4
0x92FB66: movaps  xmm2, xmm0
0x92FB69: shufps  xmm2, xmm0, 0
0x92FB6D: movaps  xmm0, xmm2
0x92FB70: mulps   xmm0, xmm1
0x92FB73: movaps  xmmword ptr [ecx], xmm0
0x92FB76: movaps  xmm1, xmmword ptr [edi]
0x92FB79: mulps   xmm0, xmm1
0x92FB7C: movaps  xmm1, xmm0
0x92FB7F: shufps  xmm1, xmm0, 55h ; 'U'
0x92FB83: movaps  xmm2, xmm0
0x92FB86: lea     eax, [esp+0C0h+var_AC]
0x92FB8A: addss   xmm1, xmm0
0x92FB8E: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92FB92: addss   xmm2, xmm1
0x92FB96: movss   dword ptr [eax], xmm2
0x92FB9A: fld     [esp+0C0h+var_AC]
0x92FB9E: mov     eax, [ebp+arg_8]
0x92FBA1: fchs
0x92FBA3: test    eax, eax
0x92FBA5: fstp    dword ptr [ecx+0Ch]
0x92FBA8: js      short loc_92FBC9
0x92FBAA: mov     ecx, [esp+0C0h+var_2C]
0x92FBB1: mov     edx, [esp+0C0h+var_60]
0x92FBB5: push    14h
0x92FBB7: and     eax, 3FFFFFFFh
0x92FBBC: push    eax
0x92FBBD: push    ecx
0x92FBBE: mov     ecx, [edx+19Ch]
0x92FBC4: call    sub_8A75D0
0x92FBC9: pop     edi
0x92FBCA: pop     esi
0x92FBCB: pop     ebx
0x92FBCC: mov     esp, ebp
0x92FBCE: pop     ebp
0x92FBCF: retn
