0x94A630: push    ebp
0x94A631: mov     ebp, esp
0x94A633: and     esp, 0FFFFFFF0h
0x94A636: sub     esp, 304h
0x94A63C: mov     eax, ds:0B30AACh
0x94A641: push    ebx
0x94A642: mov     ebx, [ebp+arg_0]
0x94A645: push    esi
0x94A646: push    edi
0x94A647: mov     edi, ecx
0x94A649: mov     [esp+310h+var_4], eax
0x94A650: mov     eax, [ebx]
0x94A652: mov     ecx, ebx
0x94A654: mov     dword ptr [esp+310h+var_2F0], edi
0x94A658: call    dword ptr [eax+8]
0x94A65B: add     eax, 0FFFFFFFEh; switch 24 cases
0x94A65E: cmp     eax, 17h
0x94A661: ja      def_94A667; jumptable 0094A667 default case, cases 18,21
0x94A667: jmp     ds:jpt_94A667[eax*4]; switch jump
0x94A66E: mov     ecx, [ebx+0Ch]; jumptable 0094A667 case 4
0x94A671: xorps   xmm0, xmm0
0x94A674: movaps  [esp+310h+var_2A0], xmm0
0x94A679: mov     dword ptr [esp+310h+var_2A0+0Ch], ecx
0x94A67D: mov     ecx, ds:0BA7D98h
0x94A683: mov     edx, [ecx]
0x94A685: push    8
0x94A687: push    80h ; '€'
0x94A68C: call    dword ptr [edx+10h]
0x94A68F: mov     word ptr [eax+4], 80h ; '€'
0x94A695: mov     ecx, [edi+8]
0x94A698: mov     edx, [edi+0Ch]
0x94A69B: push    ecx
0x94A69C: push    edx
0x94A69D: lea     ecx, [esp+318h+var_2A0]
0x94A6A1: push    ecx
0x94A6A2: mov     ecx, eax
0x94A6A4: call    sub_958590
0x94A6A9: mov     edx, [ebp+arg_4]
0x94A6AC: mov     edi, eax
0x94A6AE: push    edx
0x94A6AF: lea     ecx, [edi+10h]
0x94A6B2: call    sub_539980
0x94A6B7: mov     esi, [ebp+arg_8]
0x94A6BA: mov     eax, [esi+8]
0x94A6BD: mov     ecx, [esi+4]
0x94A6C0: and     eax, 3FFFFFFFh
0x94A6C5: cmp     ecx, eax
0x94A6C7: jnz     loc_94A995
0x94A6CD: push    4
0x94A6CF: push    esi
0x94A6D0: call    sub_8A6EE0
0x94A6D5: mov     ecx, [esi+4]
0x94A6D8: mov     edx, [esi]
0x94A6DA: mov     [edx+ecx*4], edi
0x94A6DD: mov     eax, [esi+4]
0x94A6E0: add     esp, 8
0x94A6E3: inc     eax
0x94A6E4: mov     [esi+4], eax
0x94A6E7: mov     ecx, [esp+310h+var_4]
0x94A6EE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94A6F3: pop     edi
0x94A6F4: pop     esi
0x94A6F5: pop     ebx
0x94A6F6: mov     esp, ebp
0x94A6F8: pop     ebp
0x94A6F9: retn    0Ch
0x94A6FC: mov     ecx, [ebx+0Ch]; jumptable 0094A667 case 11
0x94A6FF: test    ecx, ecx
0x94A701: lea     eax, [ebx+10h]
0x94A704: mov     [esp+310h+var_2F4], 0
0x94A70C: jle     loc_94B76A
0x94A712: mov     edi, [ebp+arg_8]
0x94A715: xorps   xmm0, xmm0
0x94A718: movaps  [esp+310h+var_2D0], xmm0
0x94A71D: mov     [esp+310h+var_2F8], eax
0x94A721: mov     eax, [esp+310h+var_2F8]
0x94A725: mov     ecx, [eax+0Ch]
0x94A728: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x94A72F: movaps  [esp+310h+var_2A0], xmm0
0x94A734: mov     dword ptr [esp+310h+var_2A0+0Ch], ecx
0x94A738: mov     ecx, ds:0BA7D98h
0x94A73E: mov     edx, [ecx]
0x94A740: push    8
0x94A742: push    80h ; '€'
0x94A747: call    dword ptr [edx+10h]
0x94A74A: mov     ecx, dword ptr [esp+310h+var_2F0]
0x94A74E: mov     word ptr [eax+4], 80h ; '€'
0x94A754: mov     edx, [ecx+8]
0x94A757: mov     ecx, [ecx+0Ch]
0x94A75A: push    edx
0x94A75B: push    ecx
0x94A75C: lea     edx, [esp+318h+var_2A0]
0x94A760: push    edx
0x94A761: mov     ecx, eax
0x94A763: call    sub_958590
0x94A768: movaps  xmm0, [esp+310h+var_2D0]
0x94A76D: mov     esi, eax
0x94A76F: movaps  xmmword ptr [esi+10h], xmm0
0x94A773: movaps  xmmword ptr [esi+20h], xmm0
0x94A777: movaps  xmmword ptr [esi+30h], xmm0
0x94A77B: mov     eax, 3F800000h
0x94A780: mov     [esi+10h], eax
0x94A783: mov     [esi+24h], eax
0x94A786: mov     [esi+38h], eax
0x94A789: mov     eax, [esp+310h+var_2F8]
0x94A78D: movaps  xmmword ptr [esi+40h], xmm0
0x94A791: movaps  xmm0, xmmword ptr [eax]
0x94A794: movaps  xmmword ptr [esi+40h], xmm0
0x94A798: mov     ecx, [edi+8]
0x94A79B: mov     eax, [edi+4]
0x94A79E: and     ecx, 3FFFFFFFh
0x94A7A4: cmp     eax, ecx
0x94A7A6: jnz     short loc_94A7B3
0x94A7A8: push    4
0x94A7AA: push    edi
0x94A7AB: call    sub_8A6EE0
0x94A7B0: add     esp, 8
0x94A7B3: mov     edx, [edi+4]
0x94A7B6: mov     eax, [edi]
0x94A7B8: mov     [eax+edx*4], esi
0x94A7BB: mov     eax, [edi+4]
0x94A7BE: mov     edx, [esp+310h+var_2F8]
0x94A7C2: inc     eax
0x94A7C3: mov     [edi+4], eax
0x94A7C6: mov     eax, [esp+310h+var_2F4]
0x94A7CA: mov     ecx, [ebx+0Ch]
0x94A7CD: inc     eax
0x94A7CE: add     edx, 10h
0x94A7D1: cmp     eax, ecx
0x94A7D3: mov     [esp+310h+var_2F4], eax
0x94A7D7: mov     [esp+310h+var_2F8], edx
0x94A7DB: jl      loc_94A721
0x94A7E1: mov     ecx, [esp+310h+var_4]
0x94A7E8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94A7ED: pop     edi
0x94A7EE: pop     esi
0x94A7EF: pop     ebx
0x94A7F0: mov     esp, ebp
0x94A7F2: pop     ebp
0x94A7F3: retn    0Ch
0x94A7F6: mov     edx, [ebx]; jumptable 0094A667 case 23
0x94A7F8: lea     eax, [esp+310h+var_250]
0x94A7FF: push    eax
0x94A800: push    3A83126Fh
0x94A805: push    offset xmmword_B2F090
0x94A80A: mov     ecx, ebx
0x94A80C: lea     esi, [ebx+10h]
0x94A80F: call    dword ptr [edx+0Ch]
0x94A812: movaps  xmm2, [esp+310h+var_250]
0x94A81A: movaps  xmm1, [esp+310h+anonymous_0]
0x94A822: xorps   xmm0, xmm0
0x94A825: subps   xmm1, xmm2
0x94A828: movaps  [esp+310h+var_2A0], xmm0
0x94A82D: movaps  xmm0, xmmword ptr ds:0A372D0h
0x94A834: movaps  xmm3, xmm1
0x94A837: andps   xmm3, xmm0
0x94A83A: movaps  [esp+310h+var_2E0], xmm3
0x94A83F: fld     dword ptr [esp+310h+var_2E0]
0x94A843: fcomp   dword ptr [esp+310h+var_2E0+4]
0x94A847: fnstsw  ax
0x94A849: test    ah, 5
0x94A84C: jp      short loc_94A86B
0x94A84E: fld     dword ptr [esp+310h+var_2E0+4]
0x94A852: fcomp   dword ptr [esp+310h+var_2E0+8]
0x94A856: fnstsw  ax
0x94A858: test    ah, 5
0x94A85B: jp      short loc_94A864
0x94A85D: mov     eax, 2
0x94A862: jmp     short loc_94A883
0x94A864: mov     eax, 1
0x94A869: jmp     short loc_94A883
0x94A86B: fld     dword ptr [esp+310h+var_2E0]
0x94A86F: fcomp   dword ptr [esp+310h+var_2E0+8]
0x94A873: fnstsw  ax
0x94A875: test    ah, 5
0x94A878: jp      short loc_94A881
0x94A87A: mov     eax, 2
0x94A87F: jmp     short loc_94A883
0x94A881: xor     eax, eax
0x94A883: mov     ecx, ds:0BA7D98h
0x94A889: mov     dword ptr [esp+310h+var_2F0+8], 3F000000h
0x94A891: movss   xmm0, dword ptr [esp+310h+var_2F0+8]
0x94A897: movaps  xmm3, xmm0
0x94A89A: shufps  xmm3, xmm0, 0
0x94A89E: movaps  xmm0, xmm3
0x94A8A1: mulps   xmm0, xmm1
0x94A8A4: movaps  [esp+310h+var_2D0], xmm0
0x94A8A9: addps   xmm0, xmm2
0x94A8AC: push    8
0x94A8AE: mov     dword ptr [esp+eax*4+314h+var_2A0], 3F800000h
0x94A8B6: movaps  [esp+314h+var_2C0], xmm0
0x94A8BB: mov     edx, [ecx]
0x94A8BD: push    0A0h ; ' '
0x94A8C2: call    dword ptr [edx+10h]
0x94A8C5: lea     ecx, [esp+310h+var_2D0]
0x94A8C9: push    ecx
0x94A8CA: lea     edx, [esp+314h+var_2C0]
0x94A8CE: push    edx
0x94A8CF: lea     ecx, [esp+318h+var_2A0]
0x94A8D3: push    ecx
0x94A8D4: push    esi
0x94A8D5: mov     ecx, eax
0x94A8D7: mov     word ptr [eax+4], 0A0h ; ' '
0x94A8DD: call    sub_94D710
0x94A8E2: mov     edx, [ebp+arg_4]
0x94A8E5: mov     edi, eax
0x94A8E7: push    edx
0x94A8E8: lea     ecx, [edi+10h]
0x94A8EB: call    sub_539980
0x94A8F0: mov     esi, [ebp+arg_8]
0x94A8F3: mov     eax, [esi+8]
0x94A8F6: mov     ecx, [esi+4]
0x94A8F9: and     eax, 3FFFFFFFh
0x94A8FE: cmp     ecx, eax
0x94A900: jnz     loc_94A995
0x94A906: push    4
0x94A908: push    esi
0x94A909: call    sub_8A6EE0
0x94A90E: mov     ecx, [esi+4]
0x94A911: mov     edx, [esi]
0x94A913: mov     [edx+ecx*4], edi
0x94A916: mov     eax, [esi+4]
0x94A919: add     esp, 8
0x94A91C: inc     eax
0x94A91D: mov     [esi+4], eax
0x94A920: mov     ecx, [esp+310h+var_4]
0x94A927: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94A92C: pop     edi
0x94A92D: pop     esi
0x94A92E: pop     ebx
0x94A92F: mov     esp, ebp
0x94A931: pop     ebp
0x94A932: retn    0Ch
0x94A935: mov     ecx, ds:0BA7D98h; jumptable 0094A667 case 8
0x94A93B: mov     eax, [ecx]
0x94A93D: push    8
0x94A93F: push    90h
0x94A944: call    dword ptr [eax+10h]
0x94A947: push    1
0x94A949: mov     word ptr [eax+4], 90h
0x94A94F: mov     ecx, [ebx+0Ch]
0x94A952: push    6
0x94A954: mov     edx, ecx
0x94A956: mov     dword ptr [esp+318h+var_2F0+8], ecx
0x94A95A: push    edx
0x94A95B: lea     ecx, [ebx+10h]
0x94A95E: push    ecx
0x94A95F: add     ebx, 20h ; ' '
0x94A962: push    ebx
0x94A963: mov     ecx, eax
0x94A965: call    sub_8F4080
0x94A96A: mov     edx, [ebp+arg_4]
0x94A96D: mov     edi, eax
0x94A96F: push    edx
0x94A970: lea     ecx, [edi+10h]
0x94A973: call    sub_539980
0x94A978: mov     esi, [ebp+arg_8]
0x94A97B: mov     eax, [esi+8]
0x94A97E: mov     ecx, [esi+4]
0x94A981: and     eax, 3FFFFFFFh
0x94A986: cmp     ecx, eax
0x94A988: jnz     short loc_94A995
0x94A98A: push    4
0x94A98C: push    esi
0x94A98D: call    sub_8A6EE0
0x94A992: add     esp, 8
0x94A995: mov     ecx, [esi+4]
0x94A998: mov     edx, [esi]
0x94A99A: mov     [edx+ecx*4], edi
0x94A99D: inc     dword ptr [esi+4]
0x94A9A0: mov     ecx, [esp+310h+var_4]
0x94A9A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94A9AC: pop     edi
0x94A9AD: pop     esi
0x94A9AE: pop     ebx
0x94A9AF: mov     esp, ebp
0x94A9B1: pop     ebp
0x94A9B2: retn    0Ch
0x94A9B5: mov     esi, [ebp+arg_4]; jumptable 0094A667 case 5
0x94A9B8: lea     eax, [ebx+30h]
0x94A9BB: push    eax
0x94A9BC: push    esi
0x94A9BD: lea     ecx, [esp+318h+var_2D0]
0x94A9C1: call    sub_88FCC0
0x94A9C6: lea     ecx, [ebx+20h]
0x94A9C9: push    ecx
0x94A9CA: push    esi
0x94A9CB: lea     ecx, [esp+318h+var_2A0]
0x94A9CF: call    sub_88FCC0
0x94A9D4: mov     ecx, ds:0BA7D98h
0x94A9DA: mov     edx, [ecx]
0x94A9DC: push    8
0x94A9DE: push    90h
0x94A9E3: call    dword ptr [edx+10h]
0x94A9E6: push    1
0x94A9E8: mov     edi, eax
0x94A9EA: push    9
0x94A9EC: mov     ecx, ebx
0x94A9EE: mov     word ptr [edi+4], 90h
0x94A9F4: call    sub_8F2260
0x94A9F9: push    ecx
0x94A9FA: fstp    [esp+31Ch+var_31C]
0x94A9FD: lea     eax, [esp+31Ch+var_2A0]
0x94AA01: push    eax
0x94AA02: lea     ecx, [esp+320h+var_2D0]
0x94AA06: push    ecx
0x94AA07: mov     ecx, edi
0x94AA09: call    sub_916380
0x94AA0E: mov     edi, eax
0x94AA10: push    esi
0x94AA11: lea     ecx, [edi+10h]
0x94AA14: call    sub_539980
0x94AA19: mov     esi, [ebp+arg_8]
0x94AA1C: mov     edx, [esi+8]
0x94AA1F: mov     eax, [esi+4]
0x94AA22: and     edx, 3FFFFFFFh
0x94AA28: cmp     eax, edx
0x94AA2A: jnz     loc_94AC60
0x94AA30: push    4
0x94AA32: push    esi
0x94AA33: call    sub_8A6EE0
0x94AA38: mov     eax, [esi+4]
0x94AA3B: mov     ecx, [esi]
0x94AA3D: mov     [ecx+eax*4], edi
0x94AA40: mov     eax, [esi+4]
0x94AA43: add     esp, 8
0x94AA46: inc     eax
0x94AA47: mov     [esi+4], eax
0x94AA4A: mov     ecx, [esp+310h+var_4]
0x94AA51: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94AA56: pop     edi
0x94AA57: pop     esi
0x94AA58: pop     ebx
0x94AA59: mov     esp, ebp
0x94AA5B: pop     ebp
0x94AA5C: retn    0Ch
0x94AA5F: mov     edx, [ebp+arg_8]; jumptable 0094A667 case 17
0x94AA62: mov     ecx, dword ptr [esp+310h+var_2F0]
0x94AA66: push    edx
0x94AA67: call    sub_94A560
0x94AA6C: mov     esi, [eax+50h]
0x94AA6F: mov     ecx, [ebx+10h]
0x94AA72: xor     eax, eax
0x94AA74: cmp     ecx, eax
0x94AA76: mov     dword ptr [esp+310h+var_2F0], eax
0x94AA7A: jle     loc_94B76A
0x94AA80: mov     dword ptr [esp+310h+var_2D0], 3C23D70Ah
0x94AA88: mov     dword ptr [esp+310h+var_2D0+4], eax
0x94AA8C: mov     dword ptr [esp+310h+var_2D0+8], eax
0x94AA90: mov     dword ptr [esp+310h+var_2D0+0Ch], eax
0x94AA94: mov     [esp+310h+var_2F4], 2
0x94AA9C: mov     [esp+310h+var_2F8], eax
0x94AAA0: mov     edi, [esp+310h+var_2F8]
0x94AAA4: mov     eax, [ebx+0Ch]
0x94AAA7: movaps  xmm0, xmmword ptr [eax+edi]
0x94AAAB: add     eax, edi
0x94AAAD: mov     edi, [esi+4]
0x94AAB0: movaps  [esp+310h+var_2A0], xmm0
0x94AAB5: movaps  xmm0, xmmword ptr [eax+10h]
0x94AAB9: mov     eax, [esi+8]
0x94AABC: lea     ecx, [edi+1]
0x94AABF: and     eax, 3FFFFFFFh
0x94AAC4: cmp     eax, ecx
0x94AAC6: movaps  [esp+310h+var_290], xmm0
0x94AACE: jge     short loc_94AAE4
0x94AAD0: add     eax, eax
0x94AAD2: cmp     ecx, eax
0x94AAD4: jl      short loc_94AAD8
0x94AAD6: mov     eax, ecx
0x94AAD8: push    10h
0x94AADA: push    eax
0x94AADB: push    esi
0x94AADC: call    sub_8A6E40
0x94AAE1: add     esp, 0Ch
0x94AAE4: movaps  xmm0, [esp+310h+var_2A0]
0x94AAE9: lea     eax, [edi+1]
0x94AAEC: mov     [esi+4], eax
0x94AAEF: mov     eax, [esi]
0x94AAF1: shl     edi, 4
0x94AAF4: add     edi, eax
0x94AAF6: mov     eax, [ebp+arg_4]
0x94AAF9: push    edi
0x94AAFA: push    eax
0x94AAFB: mov     ecx, edi
0x94AAFD: movaps  xmmword ptr [edi], xmm0
0x94AB00: call    sub_88FCC0
0x94AB05: mov     edi, [esi+4]
0x94AB08: mov     eax, [esi+8]
0x94AB0B: lea     ecx, [edi+1]
0x94AB0E: and     eax, 3FFFFFFFh
0x94AB13: cmp     eax, ecx
0x94AB15: jge     short loc_94AB2B
0x94AB17: add     eax, eax
0x94AB19: cmp     ecx, eax
0x94AB1B: jl      short loc_94AB1F
0x94AB1D: mov     eax, ecx
0x94AB1F: push    10h
0x94AB21: push    eax
0x94AB22: push    esi
0x94AB23: call    sub_8A6E40
0x94AB28: add     esp, 0Ch
0x94AB2B: movaps  xmm0, [esp+310h+var_2A0]
0x94AB30: addps   xmm0, [esp+310h+var_2D0]
0x94AB35: lea     eax, [edi+1]
0x94AB38: mov     [esi+4], eax
0x94AB3B: mov     eax, [esi]
0x94AB3D: shl     edi, 4
0x94AB40: add     edi, eax
0x94AB42: movaps  xmmword ptr [edi], xmm0
0x94AB45: mov     edi, [esi+4]
0x94AB48: mov     eax, [esi+8]
0x94AB4B: lea     ecx, [edi+1]
0x94AB4E: and     eax, 3FFFFFFFh
0x94AB53: cmp     eax, ecx
0x94AB55: jge     short loc_94AB6B
0x94AB57: add     eax, eax
0x94AB59: cmp     ecx, eax
0x94AB5B: jl      short loc_94AB5F
0x94AB5D: mov     eax, ecx
0x94AB5F: push    10h
0x94AB61: push    eax
0x94AB62: push    esi
0x94AB63: call    sub_8A6E40
0x94AB68: add     esp, 0Ch
0x94AB6B: mov     edx, [esi]
0x94AB6D: mov     ecx, [ebp+arg_4]
0x94AB70: movaps  xmm0, [esp+310h+var_290]
0x94AB78: lea     eax, [edi+1]
0x94AB7B: shl     edi, 4
0x94AB7E: add     edi, edx
0x94AB80: push    edi
0x94AB81: push    ecx
0x94AB82: mov     [esi+4], eax
0x94AB85: mov     ecx, edi
0x94AB87: movaps  xmmword ptr [edi], xmm0
0x94AB8A: call    sub_88FCC0
0x94AB8F: mov     edi, [esi+10h]
0x94AB92: mov     eax, [esi+14h]
0x94AB95: lea     ecx, [edi+1]
0x94AB98: and     eax, 3FFFFFFFh
0x94AB9D: cmp     eax, ecx
0x94AB9F: jge     short loc_94ABB8
0x94ABA1: add     eax, eax
0x94ABA3: cmp     ecx, eax
0x94ABA5: jl      short loc_94ABA9
0x94ABA7: mov     eax, ecx
0x94ABA9: push    0Ch
0x94ABAB: push    eax
0x94ABAC: lea     eax, [esi+0Ch]
0x94ABAF: push    eax
0x94ABB0: call    sub_8A6E40
0x94ABB5: add     esp, 0Ch
0x94ABB8: mov     ecx, [esp+310h+var_2F4]
0x94ABBC: lea     eax, [edi+1]
0x94ABBF: mov     [esi+10h], eax
0x94ABC2: mov     eax, [esi+0Ch]
0x94ABC5: lea     edx, [edi+edi*2]
0x94ABC8: lea     eax, [eax+edx*4]
0x94ABCB: lea     edx, [ecx-2]
0x94ABCE: mov     [eax], edx
0x94ABD0: lea     edx, [ecx-1]
0x94ABD3: mov     [eax+4], edx
0x94ABD6: mov     edx, [esp+310h+var_2F8]
0x94ABDA: mov     [eax+8], ecx
0x94ABDD: mov     eax, dword ptr [esp+310h+var_2F0]
0x94ABE1: add     ecx, 3
0x94ABE4: mov     [esp+310h+var_2F4], ecx
0x94ABE8: mov     ecx, [ebx+10h]
0x94ABEB: inc     eax
0x94ABEC: add     edx, 20h ; ' '
0x94ABEF: cmp     eax, ecx
0x94ABF1: mov     dword ptr [esp+310h+var_2F0], eax
0x94ABF5: mov     [esp+310h+var_2F8], edx
0x94ABF9: jl      loc_94AAA0
0x94ABFF: mov     ecx, [esp+310h+var_4]
0x94AC06: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94AC0B: pop     edi
0x94AC0C: pop     esi
0x94AC0D: pop     ebx
0x94AC0E: mov     esp, ebp
0x94AC10: pop     ebp
0x94AC11: retn    0Ch
0x94AC14: mov     ecx, ds:0BA7D98h; jumptable 0094A667 case 7
0x94AC1A: mov     eax, [ecx]
0x94AC1C: push    8
0x94AC1E: push    70h ; 'p'
0x94AC20: call    dword ptr [eax+10h]
0x94AC23: add     ebx, 10h
0x94AC26: push    ebx
0x94AC27: mov     ecx, eax
0x94AC29: mov     word ptr [eax+4], 70h ; 'p'
0x94AC2F: call    sub_949CA0
0x94AC34: mov     ecx, [ebp+arg_4]
0x94AC37: mov     edi, eax
0x94AC39: push    ecx
0x94AC3A: lea     ecx, [edi+10h]
0x94AC3D: call    sub_539980
0x94AC42: mov     esi, [ebp+arg_8]
0x94AC45: mov     edx, [esi+8]
0x94AC48: mov     eax, [esi+4]
0x94AC4B: and     edx, 3FFFFFFFh
0x94AC51: cmp     eax, edx
0x94AC53: jnz     short loc_94AC60
0x94AC55: push    4
0x94AC57: push    esi
0x94AC58: call    sub_8A6EE0
0x94AC5D: add     esp, 8
0x94AC60: mov     eax, [esi+4]
0x94AC63: mov     ecx, [esi]
0x94AC65: mov     [ecx+eax*4], edi
0x94AC68: inc     dword ptr [esi+4]
0x94AC6B: mov     ecx, [esp+310h+var_4]
0x94AC72: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94AC77: pop     edi
0x94AC78: pop     esi
0x94AC79: pop     ebx
0x94AC7A: mov     esp, ebp
0x94AC7C: pop     ebp
0x94AC7D: retn    0Ch
0x94AC80: mov     eax, [ebp+arg_4]; jumptable 0094A667 case 14
0x94AC83: xorps   xmm0, xmm0
0x94AC86: lea     edx, [esp+310h+var_2A0]
0x94AC8A: movaps  [esp+310h+var_2A0], xmm0
0x94AC8F: movaps  [esp+310h+var_290], xmm0
0x94AC97: movaps  [esp+310h+var_280], xmm0
0x94AC9F: movaps  xmm0, xmmword ptr [ebx+20h]
0x94ACA3: push    edx
0x94ACA4: push    eax
0x94ACA5: lea     ecx, [esp+318h+var_250]
0x94ACAC: mov     dword ptr [esp+318h+var_2A0], 3F800000h
0x94ACB4: mov     dword ptr [esp+318h+var_290+4], 3F800000h
0x94ACBF: mov     dword ptr [esp+318h+var_280+8], 3F800000h
0x94ACCA: movaps  [esp+318h+var_270], xmm0
0x94ACD2: call    sub_8B1F70
0x94ACD7: mov     ecx, [ebp+arg_8]
0x94ACDA: mov     eax, [ebx+10h]
0x94ACDD: push    ecx
0x94ACDE: lea     edx, [esp+314h+var_250]
0x94ACE5: push    edx
0x94ACE6: push    eax
0x94ACE7: mov     ecx, edi
0x94ACE9: call    sub_94A630
0x94ACEE: mov     ecx, [esp+310h+var_4]
0x94ACF5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94ACFA: pop     edi
0x94ACFB: pop     esi
0x94ACFC: pop     ebx
0x94ACFD: mov     esp, ebp
0x94ACFF: pop     ebp
0x94AD00: retn    0Ch
0x94AD03: mov     edx, [ebp+arg_4]; jumptable 0094A667 case 15
0x94AD06: lea     ecx, [ebx+20h]
0x94AD09: push    ecx
0x94AD0A: push    edx
0x94AD0B: lea     ecx, [esp+318h+var_2A0]
0x94AD0F: call    sub_8B1F70
0x94AD14: mov     eax, [ebp+arg_8]
0x94AD17: mov     edx, [ebx+10h]
0x94AD1A: push    eax
0x94AD1B: lea     ecx, [esp+314h+var_2A0]
0x94AD1F: push    ecx
0x94AD20: push    edx
0x94AD21: mov     ecx, edi
0x94AD23: call    sub_94A630
0x94AD28: mov     ecx, [esp+310h+var_4]
0x94AD2F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94AD34: pop     edi
0x94AD35: pop     esi
0x94AD36: pop     ebx
0x94AD37: mov     esp, ebp
0x94AD39: pop     ebp
0x94AD3A: retn    0Ch
0x94AD3D: mov     ecx, [ebp+arg_4]; jumptable 0094A667 case 25
0x94AD40: lea     eax, [ebx+20h]
0x94AD43: push    eax
0x94AD44: push    ecx
0x94AD45: lea     ecx, [esp+318h+var_2A0]
0x94AD49: call    sub_8B1F70
0x94AD4E: mov     edx, [ebp+arg_8]
0x94AD51: mov     ecx, [ebx+0Ch]
0x94AD54: push    edx
0x94AD55: lea     eax, [esp+314h+var_2A0]
0x94AD59: push    eax
0x94AD5A: push    ecx
0x94AD5B: mov     ecx, edi
0x94AD5D: call    sub_94A630
0x94AD62: mov     ecx, [esp+310h+var_4]
0x94AD69: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94AD6E: pop     edi
0x94AD6F: pop     esi
0x94AD70: pop     ebx
0x94AD71: mov     esp, ebp
0x94AD73: pop     ebp
0x94AD74: retn    0Ch
0x94AD77: mov     edx, [ebp+arg_8]; jumptable 0094A667 cases 3,22,24
0x94AD7A: mov     eax, [ebp+arg_4]
0x94AD7D: mov     ecx, [ebx+0Ch]
0x94AD80: push    edx
0x94AD81: push    eax
0x94AD82: push    ecx
0x94AD83: mov     ecx, edi
0x94AD85: call    sub_94A630
0x94AD8A: mov     ecx, [esp+310h+var_4]
0x94AD91: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94AD96: pop     edi
0x94AD97: pop     esi
0x94AD98: pop     ebx
0x94AD99: mov     esp, ebp
0x94AD9B: pop     ebp
0x94AD9C: retn    0Ch
0x94AD9F: mov     edx, [ebx]; jumptable 0094A667 cases 2,12,13,16,20
0x94ADA1: mov     ecx, ebx
0x94ADA3: call    dword ptr [edx+20h]
0x94ADA6: mov     esi, eax
0x94ADA8: cmp     esi, 0FFFFFFFFh
0x94ADAB: jz      loc_94B76A
0x94ADB1: mov     eax, [ebx]
0x94ADB3: lea     ecx, [esp+310h+var_210]
0x94ADBA: push    ecx
0x94ADBB: push    esi
0x94ADBC: mov     ecx, ebx
0x94ADBE: call    dword ptr [eax+28h]
0x94ADC1: mov     edx, [ebp+arg_8]
0x94ADC4: mov     ecx, [ebp+arg_4]
0x94ADC7: push    edx
0x94ADC8: push    ecx
0x94ADC9: push    eax
0x94ADCA: mov     ecx, edi
0x94ADCC: call    sub_94A630
0x94ADD1: mov     edx, [ebx]
0x94ADD3: push    esi
0x94ADD4: mov     ecx, ebx
0x94ADD6: call    dword ptr [edx+24h]
0x94ADD9: mov     esi, eax
0x94ADDB: cmp     esi, 0FFFFFFFFh
0x94ADDE: jnz     short loc_94ADB1
0x94ADE0: mov     ecx, [esp+310h+var_4]
0x94ADE7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94ADEC: pop     edi
0x94ADED: pop     esi
0x94ADEE: pop     ebx
0x94ADEF: mov     esp, ebp
0x94ADF1: pop     ebp
0x94ADF2: retn    0Ch
0x94ADF5: mov     eax, [ebp+arg_8]; jumptable 0094A667 case 6
0x94ADF8: mov     ecx, dword ptr [esp+310h+var_2F0]
0x94ADFC: push    eax
0x94ADFD: call    sub_94A560
0x94AE02: mov     esi, [eax+50h]
0x94AE05: mov     ecx, [esi+4]
0x94AE08: mov     eax, [esi+8]
0x94AE0B: lea     edi, [ecx+1]
0x94AE0E: and     eax, 3FFFFFFFh
0x94AE13: cmp     eax, edi
0x94AE15: mov     [esp+310h+var_2F4], ecx
0x94AE19: jge     short loc_94AE33
0x94AE1B: add     eax, eax
0x94AE1D: cmp     edi, eax
0x94AE1F: jl      short loc_94AE23
0x94AE21: mov     eax, edi
0x94AE23: push    10h
0x94AE25: push    eax
0x94AE26: push    esi
0x94AE27: call    sub_8A6E40
0x94AE2C: mov     ecx, [esp+31Ch+var_2F4]
0x94AE30: add     esp, 0Ch
0x94AE33: mov     eax, [ebp+arg_4]
0x94AE36: lea     edx, [ebx+10h]
0x94AE39: mov     [esi+4], edi
0x94AE3C: mov     edi, [esi]
0x94AE3E: push    edx
0x94AE3F: shl     ecx, 4
0x94AE42: push    eax
0x94AE43: add     ecx, edi
0x94AE45: call    sub_88FCC0
0x94AE4A: mov     edi, [esi+4]
0x94AE4D: mov     eax, [esi+8]
0x94AE50: mov     dword ptr [esp+310h+var_2F0+8], edi
0x94AE54: inc     edi
0x94AE55: and     eax, 3FFFFFFFh
0x94AE5A: cmp     eax, edi
0x94AE5C: jge     short loc_94AE72
0x94AE5E: add     eax, eax
0x94AE60: cmp     edi, eax
0x94AE62: jl      short loc_94AE66
0x94AE64: mov     eax, edi
0x94AE66: push    10h
0x94AE68: push    eax
0x94AE69: push    esi
0x94AE6A: call    sub_8A6E40
0x94AE6F: add     esp, 0Ch
0x94AE72: mov     edx, [ebp+arg_4]
0x94AE75: lea     ecx, [ebx+20h]
0x94AE78: push    ecx
0x94AE79: mov     ecx, dword ptr [esp+314h+var_2F0+8]
0x94AE7D: mov     [esi+4], edi
0x94AE80: mov     edi, [esi]
0x94AE82: shl     ecx, 4
0x94AE85: push    edx
0x94AE86: add     ecx, edi
0x94AE88: call    sub_88FCC0
0x94AE8D: mov     edi, [esi+4]
0x94AE90: mov     eax, [esi+8]
0x94AE93: mov     dword ptr [esp+310h+var_2F0+8], edi
0x94AE97: inc     edi
0x94AE98: and     eax, 3FFFFFFFh
0x94AE9D: cmp     eax, edi
0x94AE9F: jge     short loc_94AEB5
0x94AEA1: add     eax, eax
0x94AEA3: cmp     edi, eax
0x94AEA5: jl      short loc_94AEA9
0x94AEA7: mov     eax, edi
0x94AEA9: push    10h
0x94AEAB: push    eax
0x94AEAC: push    esi
0x94AEAD: call    sub_8A6E40
0x94AEB2: add     esp, 0Ch
0x94AEB5: mov     ecx, dword ptr [esp+310h+var_2F0+8]
0x94AEB9: mov     eax, [ebp+arg_4]
0x94AEBC: mov     [esi+4], edi
0x94AEBF: mov     edi, [esi]
0x94AEC1: add     ebx, 30h ; '0'
0x94AEC4: push    ebx
0x94AEC5: shl     ecx, 4
0x94AEC8: push    eax
0x94AEC9: add     ecx, edi
0x94AECB: call    sub_88FCC0
0x94AED0: mov     ebx, [esi+10h]
0x94AED3: mov     eax, [esi+14h]
0x94AED6: add     esi, 0Ch
0x94AED9: lea     edi, [ebx+1]
0x94AEDC: and     eax, 3FFFFFFFh
0x94AEE1: cmp     eax, edi
0x94AEE3: jge     short loc_94AEF9
0x94AEE5: add     eax, eax
0x94AEE7: cmp     edi, eax
0x94AEE9: jl      short loc_94AEED
0x94AEEB: mov     eax, edi
0x94AEED: push    0Ch
0x94AEEF: push    eax
0x94AEF0: push    esi
0x94AEF1: call    sub_8A6E40
0x94AEF6: add     esp, 0Ch
0x94AEF9: mov     edx, [esi]
0x94AEFB: lea     ecx, [ebx+ebx*2]
0x94AEFE: lea     eax, [edx+ecx*4]
0x94AF01: mov     ecx, [esp+310h+var_2F4]
0x94AF05: mov     [esi+4], edi
0x94AF08: lea     edx, [ecx+1]
0x94AF0B: mov     [eax], ecx
0x94AF0D: add     ecx, 2
0x94AF10: mov     [eax+4], edx
0x94AF13: mov     [eax+8], ecx
0x94AF16: mov     ecx, [esp+310h+var_4]
0x94AF1D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94AF22: pop     edi
0x94AF23: pop     esi
0x94AF24: pop     ebx
0x94AF25: mov     esp, ebp
0x94AF27: pop     ebp
0x94AF28: retn    0Ch
0x94AF2B: mov     eax, [ebx]; jumptable 0094A667 case 9
0x94AF2D: lea     ecx, [esp+310h+var_2B0]
0x94AF31: push    ecx
0x94AF32: mov     ecx, ebx
0x94AF34: call    dword ptr [eax+1Ch]
0x94AF37: mov     al, [esp+310h+var_2AC]
0x94AF3B: xor     esi, esi
0x94AF3D: test    al, al
0x94AF3F: mov     dword ptr [esp+310h+var_2C0], esi
0x94AF43: mov     dword ptr [esp+310h+var_2C0+4], esi
0x94AF47: mov     dword ptr [esp+310h+var_2C0+8], 80000000h
0x94AF4F: jz      short loc_94AF79
0x94AF51: mov     eax, [esp+310h+var_2B0]
0x94AF55: cmp     eax, esi
0x94AF57: mov     edi, eax
0x94AF59: jle     short loc_94AF75
0x94AF5B: xor     edx, edx
0x94AF5D: cmp     eax, esi
0x94AF5F: setl    dl
0x94AF62: push    10h
0x94AF64: dec     edx
0x94AF65: and     eax, edx
0x94AF67: push    eax
0x94AF68: lea     eax, [esp+318h+var_2C0]
0x94AF6C: push    eax
0x94AF6D: call    sub_8A6E40
0x94AF72: add     esp, 0Ch
0x94AF75: mov     dword ptr [esp+310h+var_2C0+4], edi
0x94AF79: mov     eax, dword ptr [esp+310h+var_2C0]
0x94AF7D: mov     edx, [ebx]
0x94AF7F: push    eax
0x94AF80: mov     ecx, ebx
0x94AF82: call    dword ptr [edx+20h]
0x94AF85: mov     edi, eax
0x94AF87: mov     eax, [esp+310h+var_2B0]
0x94AF8B: cmp     eax, esi
0x94AF8D: mov     dword ptr [esp+310h+var_250], esi
0x94AF94: mov     dword ptr [esp+310h+var_250+4], esi
0x94AF9B: mov     dword ptr [esp+310h+var_250+8], 80000000h
0x94AFA6: mov     ebx, eax
0x94AFA8: jle     short loc_94AFCB
0x94AFAA: xor     ecx, ecx
0x94AFAC: cmp     eax, esi
0x94AFAE: setl    cl
0x94AFB1: push    10h
0x94AFB3: lea     edx, [esp+314h+var_250]
0x94AFBA: dec     ecx
0x94AFBB: and     eax, ecx
0x94AFBD: push    eax
0x94AFBE: push    edx
0x94AFBF: call    sub_8A6E40
0x94AFC4: mov     eax, [esp+31Ch+var_2B0]
0x94AFC8: add     esp, 0Ch
0x94AFCB: mov     dword ptr [esp+310h+var_250+4], ebx
0x94AFD2: xor     ebx, ebx
0x94AFD4: cmp     eax, esi
0x94AFD6: jle     short loc_94B003
0x94AFD8: xor     esi, esi
0x94AFDA: lea     ebx, [ebx+0]
0x94AFE0: mov     ecx, [ebp+arg_4]
0x94AFE3: mov     edx, dword ptr [esp+310h+var_250]
0x94AFEA: lea     eax, [edi+esi]
0x94AFED: push    eax
0x94AFEE: push    ecx
0x94AFEF: lea     ecx, [edx+esi]
0x94AFF2: call    sub_88FCC0
0x94AFF7: mov     eax, [esp+310h+var_2B0]
0x94AFFB: inc     ebx
0x94AFFC: add     esi, 10h
0x94AFFF: cmp     ebx, eax
0x94B001: jl      short loc_94AFE0
0x94B003: mov     ecx, ds:0BA7D98h
0x94B009: mov     eax, [ecx]
0x94B00B: push    24h ; '$'
0x94B00D: push    18h
0x94B00F: call    dword ptr [eax+10h]
0x94B012: xor     edi, edi
0x94B014: cmp     eax, edi
0x94B016: jz      short loc_94B032
0x94B018: mov     ecx, 80000000h
0x94B01D: mov     [eax], edi
0x94B01F: mov     [eax+4], edi
0x94B022: mov     [eax+8], ecx
0x94B025: mov     [eax+0Ch], edi
0x94B028: mov     [eax+10h], edi
0x94B02B: mov     [eax+14h], ecx
0x94B02E: mov     esi, eax
0x94B030: jmp     short loc_94B034
0x94B032: xor     esi, esi
0x94B034: mov     ecx, dword ptr [esp+310h+var_250+4]
0x94B03B: mov     edx, dword ptr [esp+310h+var_250]
0x94B042: push    1
0x94B044: lea     eax, [esp+314h+var_2E0]
0x94B048: push    esi
0x94B049: push    eax
0x94B04A: mov     dword ptr [esp+31Ch+var_2E0+4], ecx
0x94B04E: mov     dword ptr [esp+31Ch+var_2E0+8], 10h
0x94B056: mov     dword ptr [esp+31Ch+var_2E0], edx
0x94B05A: call    sub_8F21E0
0x94B05F: mov     ecx, ds:0BA7D98h
0x94B065: mov     edx, [ecx]
0x94B067: add     esp, 0Ch
0x94B06A: push    8
0x94B06C: push    60h ; '`'
0x94B06E: call    dword ptr [edx+10h]
0x94B071: push    esi
0x94B072: mov     ecx, eax
0x94B074: mov     word ptr [eax+4], 60h ; '`'
0x94B07A: call    sub_94CCB0
0x94B07F: mov     esi, [ebp+arg_8]
0x94B082: mov     ecx, [esi+4]
0x94B085: mov     ebx, eax
0x94B087: mov     eax, [esi+8]
0x94B08A: and     eax, 3FFFFFFFh
0x94B08F: cmp     ecx, eax
0x94B091: jnz     short loc_94B09E
0x94B093: push    4
0x94B095: push    esi
0x94B096: call    sub_8A6EE0
0x94B09B: add     esp, 8
0x94B09E: mov     ecx, [esi+4]
0x94B0A1: mov     edx, [esi]
0x94B0A3: mov     [edx+ecx*4], ebx
0x94B0A6: mov     edx, [esi+4]
0x94B0A9: mov     eax, dword ptr [esp+310h+var_250+8]
0x94B0B0: mov     ebx, large fs:2Ch
0x94B0B7: inc     edx
0x94B0B8: test    eax, eax
0x94B0BA: mov     [esi+4], edx
0x94B0BD: mov     esi, ds:0BA9DE4h
0x94B0C3: js      short loc_94B0F0
0x94B0C5: mov     ecx, [ebx+esi*4]
0x94B0C8: mov     ecx, [ecx+19Ch]
0x94B0CE: cmp     ecx, edi
0x94B0D0: jnz     short loc_94B0D8
0x94B0D2: mov     ecx, ds:0BA7D9Ch
0x94B0D8: mov     edx, dword ptr [esp+310h+var_250]
0x94B0DF: and     eax, 3FFFFFFFh
0x94B0E4: push    14h
0x94B0E6: shl     eax, 4
0x94B0E9: push    eax
0x94B0EA: push    edx
0x94B0EB: call    sub_8A75D0
0x94B0F0: mov     eax, dword ptr [esp+310h+var_2C0+8]
0x94B0F4: test    eax, eax
0x94B0F6: js      loc_94B76A
0x94B0FC: mov     ecx, [ebx+esi*4]
0x94B0FF: mov     ecx, [ecx+19Ch]
0x94B105: cmp     ecx, edi
0x94B107: jnz     short loc_94B10F
0x94B109: mov     ecx, ds:0BA7D9Ch
0x94B10F: mov     edx, dword ptr [esp+310h+var_2C0]
0x94B113: and     eax, 3FFFFFFFh
0x94B118: push    14h
0x94B11A: shl     eax, 4
0x94B11D: push    eax
0x94B11E: push    edx
0x94B11F: call    sub_8A75D0
0x94B124: mov     ecx, [esp+310h+var_4]
0x94B12B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94B130: pop     edi
0x94B131: pop     esi
0x94B132: pop     ebx
0x94B133: mov     esp, ebp
0x94B135: pop     ebp
0x94B136: retn    0Ch
0x94B139: mov     ecx, ds:0BA7D98h; jumptable 0094A667 case 10
0x94B13F: mov     eax, [ecx]
0x94B141: push    24h ; '$'
0x94B143: push    18h
0x94B145: call    dword ptr [eax+10h]
0x94B148: test    eax, eax
0x94B14A: jz      short loc_94B157
0x94B14C: mov     ecx, eax
0x94B14E: call    sub_8B44A0
0x94B153: mov     esi, eax
0x94B155: jmp     short loc_94B159
0x94B157: xor     esi, esi
0x94B159: mov     eax, [ebx+20h]
0x94B15C: test    eax, eax
0x94B15E: mov     dword ptr [esp+310h+var_2F0], 0
0x94B166: jle     loc_94B26E
0x94B16C: lea     esp, [esp+0]
0x94B170: mov     edi, dword ptr [esp+310h+var_2F0]
0x94B174: mov     ecx, [ebx+18h]
0x94B177: mov     edx, [ecx]
0x94B179: lea     eax, [esp+310h+var_210]
0x94B180: push    eax
0x94B181: mov     eax, [ebx+1Ch]
0x94B184: mov     eax, [eax+edi*4]
0x94B187: push    eax
0x94B188: call    dword ptr [edx+28h]
0x94B18B: mov     dword ptr [esp+310h+var_2F0+8], eax
0x94B18F: mov     eax, [esi+10h]
0x94B192: lea     edi, [esi+0Ch]
0x94B195: lea     ecx, [eax+1]
0x94B198: mov     [esp+310h+var_2F4], eax
0x94B19C: mov     eax, [edi+8]
0x94B19F: and     eax, 3FFFFFFFh
0x94B1A4: cmp     eax, ecx
0x94B1A6: jge     short loc_94B1C1
0x94B1A8: mov     ecx, [esp+310h+var_2F4]
0x94B1AC: add     eax, eax
0x94B1AE: inc     ecx
0x94B1AF: cmp     ecx, eax
0x94B1B1: jl      short loc_94B1B5
0x94B1B3: mov     eax, ecx
0x94B1B5: push    0Ch
0x94B1B7: push    eax
0x94B1B8: push    edi
0x94B1B9: call    sub_8A6E40
0x94B1BE: add     esp, 0Ch
0x94B1C1: mov     eax, [esp+310h+var_2F4]
0x94B1C5: mov     edx, [edi]
0x94B1C7: lea     ecx, [eax+1]
0x94B1CA: mov     [edi+4], ecx
0x94B1CD: lea     ecx, [eax+eax*2]
0x94B1D0: lea     eax, [edx+ecx*4]
0x94B1D3: mov     ecx, [esi+4]
0x94B1D6: mov     [eax], ecx
0x94B1D8: lea     edx, [ecx+1]
0x94B1DB: add     ecx, 2
0x94B1DE: mov     [eax+4], edx
0x94B1E1: mov     [eax+8], ecx
0x94B1E4: mov     eax, dword ptr [esp+310h+var_2F0+8]
0x94B1E8: add     eax, 10h
0x94B1EB: mov     [esp+310h+var_2F8], eax
0x94B1EF: mov     [esp+310h+var_2F4], 3
0x94B1F7: jmp     short loc_94B200
0x94B1F9: align 10h
0x94B200: mov     edi, [esi+4]
0x94B203: mov     eax, [esi+8]
0x94B206: mov     dword ptr [esp+310h+var_2F0+8], edi
0x94B20A: inc     edi
0x94B20B: and     eax, 3FFFFFFFh
0x94B210: cmp     eax, edi
0x94B212: jge     short loc_94B228
0x94B214: add     eax, eax
0x94B216: cmp     edi, eax
0x94B218: jl      short loc_94B21C
0x94B21A: mov     eax, edi
0x94B21C: push    10h
0x94B21E: push    eax
0x94B21F: push    esi
0x94B220: call    sub_8A6E40
0x94B225: add     esp, 0Ch
0x94B228: mov     ecx, [esp+310h+var_2F8]
0x94B22C: mov     edx, [ebp+arg_4]
0x94B22F: push    ecx
0x94B230: mov     ecx, dword ptr [esp+314h+var_2F0+8]
0x94B234: push    edx
0x94B235: mov     edx, [esi]
0x94B237: shl     ecx, 4
0x94B23A: add     ecx, edx
0x94B23C: mov     [esi+4], edi
0x94B23F: call    sub_88FCC0
0x94B244: mov     ecx, [esp+310h+var_2F8]
0x94B248: mov     eax, [esp+310h+var_2F4]
0x94B24C: add     ecx, 10h
0x94B24F: dec     eax
0x94B250: mov     [esp+310h+var_2F8], ecx
0x94B254: mov     [esp+310h+var_2F4], eax
0x94B258: jnz     short loc_94B200
0x94B25A: mov     eax, dword ptr [esp+310h+var_2F0]
0x94B25E: mov     ecx, [ebx+20h]
0x94B261: inc     eax
0x94B262: cmp     eax, ecx
0x94B264: mov     dword ptr [esp+310h+var_2F0], eax
0x94B268: jl      loc_94B170
0x94B26E: mov     ecx, ds:0BA7D98h
0x94B274: mov     eax, [ecx]
0x94B276: push    8
0x94B278: push    60h ; '`'
0x94B27A: call    dword ptr [eax+10h]
0x94B27D: push    esi
0x94B27E: mov     ecx, eax
0x94B280: mov     word ptr [eax+4], 60h ; '`'
0x94B286: call    sub_94CCB0
0x94B28B: mov     esi, [ebp+arg_8]
0x94B28E: mov     ecx, [esi+8]
0x94B291: mov     edi, eax
0x94B293: mov     eax, [esi+4]
0x94B296: and     ecx, 3FFFFFFFh
0x94B29C: cmp     eax, ecx
0x94B29E: jnz     short loc_94B2AB
0x94B2A0: push    4
0x94B2A2: push    esi
0x94B2A3: call    sub_8A6EE0
0x94B2A8: add     esp, 8
0x94B2AB: mov     edx, [esi+4]
0x94B2AE: mov     eax, [esi]
0x94B2B0: mov     [eax+edx*4], edi
0x94B2B3: inc     dword ptr [esi+4]
0x94B2B6: mov     ecx, [esp+310h+var_4]
0x94B2BD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94B2C2: pop     edi
0x94B2C3: pop     esi
0x94B2C4: pop     ebx
0x94B2C5: mov     esp, ebp
0x94B2C7: pop     ebp
0x94B2C8: retn    0Ch
0x94B2CB: mov     ecx, [ebp+arg_8]; jumptable 0094A667 case 19
0x94B2CE: push    ecx
0x94B2CF: mov     ecx, edi
0x94B2D1: call    sub_94A560
0x94B2D6: mov     edx, [ebx+0Ch]
0x94B2D9: movaps  xmm0, xmmword ptr [ebx+20h]
0x94B2DD: mov     edi, [eax+50h]
0x94B2E0: dec     edx
0x94B2E1: test    edx, edx
0x94B2E3: movaps  [esp+310h+var_2A0], xmm0
0x94B2E8: mov     dword ptr [esp+310h+var_2F0], 0
0x94B2F0: jle     loc_94B76A
0x94B2F6: mov     eax, [ebx+10h]
0x94B2F9: dec     eax
0x94B2FA: test    eax, eax
0x94B2FC: mov     [esp+310h+var_2F8], 0
0x94B304: jle     loc_94B6EF
0x94B30A: fild    dword ptr [esp+310h+var_2F0]
0x94B30E: lea     esi, [edi+0Ch]
0x94B311: fst     [esp+310h+var_2F4]
0x94B315: fadd    dword ptr ds:0A2F948h
0x94B31B: fstp    [esp+310h+var_2A4]
0x94B31F: nop
0x94B320: mov     eax, [esp+310h+var_2F8]
0x94B324: mov     ecx, dword ptr [esp+310h+var_2F0]
0x94B328: mov     edx, [ebx]
0x94B32A: push    eax
0x94B32B: push    ecx
0x94B32C: mov     ecx, ebx
0x94B32E: call    dword ptr [edx+24h]
0x94B331: fstp    dword ptr [esp+310h+var_2E0+4]
0x94B335: fild    [esp+310h+var_2F8]
0x94B339: mov     eax, [esp+310h+var_2F8]
0x94B33D: mov     edx, [esp+310h+var_2F4]
0x94B341: inc     eax
0x94B342: mov     dword ptr [esp+310h+var_2E0], edx
0x94B346: fst     dword ptr [esp+310h+var_2F0+4]
0x94B34A: mov     edx, [ebx]
0x94B34C: fstp    dword ptr [esp+310h+var_2E0+8]
0x94B350: push    eax
0x94B351: mov     dword ptr [esp+314h+var_2E0+0Ch], 0
0x94B359: movaps  xmm0, [esp+314h+var_2E0]
0x94B35E: mulps   xmm0, [esp+314h+var_2A0]
0x94B363: mov     dword ptr [esp+314h+var_2F0+8], eax
0x94B367: mov     eax, dword ptr [esp+314h+var_2F0]
0x94B36B: push    eax
0x94B36C: mov     ecx, ebx
0x94B36E: movaps  [esp+318h+var_2E0], xmm0
0x94B373: call    dword ptr [edx+24h]
0x94B376: fstp    dword ptr [esp+310h+var_2C0+4]
0x94B37A: fld     dword ptr [esp+310h+var_2F0+4]
0x94B37E: mov     eax, [esp+310h+var_2F8]
0x94B382: fadd    dword ptr ds:0A2F948h
0x94B388: mov     ecx, [esp+310h+var_2F4]
0x94B38C: mov     edx, [ebx]
0x94B38E: push    eax
0x94B38F: mov     eax, dword ptr [esp+314h+var_2F0]
0x94B393: fst     dword ptr [esp+314h+var_2F0+0Ch]
0x94B397: mov     dword ptr [esp+314h+var_2C0], ecx
0x94B39B: fstp    dword ptr [esp+314h+var_2C0+8]
0x94B39F: mov     dword ptr [esp+314h+var_2C0+0Ch], 0
0x94B3A7: movaps  xmm0, [esp+314h+var_2C0]
0x94B3AC: mulps   xmm0, [esp+314h+var_2A0]
0x94B3B1: inc     eax
0x94B3B2: push    eax
0x94B3B3: mov     ecx, ebx
0x94B3B5: movaps  [esp+318h+var_2C0], xmm0
0x94B3BA: call    dword ptr [edx+24h]
0x94B3BD: fstp    dword ptr [esp+310h+var_250+4]
0x94B3C4: mov     eax, dword ptr [esp+310h+var_2F0+8]
0x94B3C8: mov     ecx, [esp+310h+var_2A4]
0x94B3CC: mov     edx, dword ptr [esp+310h+var_2F0+4]
0x94B3D0: push    eax
0x94B3D1: mov     eax, dword ptr [esp+314h+var_2F0]
0x94B3D5: mov     dword ptr [esp+314h+var_250], ecx
0x94B3DC: mov     dword ptr [esp+314h+var_250+8], edx
0x94B3E3: mov     edx, [ebx]
0x94B3E5: mov     dword ptr [esp+314h+var_250+0Ch], 0
0x94B3F0: movaps  xmm0, [esp+314h+var_250]
0x94B3F8: mulps   xmm0, [esp+314h+var_2A0]
0x94B3FD: inc     eax
0x94B3FE: push    eax
0x94B3FF: mov     ecx, ebx
0x94B401: movaps  [esp+318h+var_250], xmm0
0x94B409: call    dword ptr [edx+24h]
0x94B40C: fstp    dword ptr [esp+310h+var_2D0+4]
0x94B410: mov     ecx, [esp+310h+var_2A4]
0x94B414: mov     eax, [edi+4]
0x94B417: mov     edx, dword ptr [esp+310h+var_2F0+0Ch]
0x94B41B: mov     dword ptr [esp+310h+var_2D0], ecx
0x94B41F: lea     ecx, [eax+1]
0x94B422: mov     [esp+310h+var_2F8], eax
0x94B426: mov     eax, [edi+8]
0x94B429: mov     dword ptr [esp+310h+var_2D0+8], edx
0x94B42D: mov     dword ptr [esp+310h+var_2D0+0Ch], 0
0x94B435: movaps  xmm0, [esp+310h+var_2D0]
0x94B43A: mulps   xmm0, [esp+310h+var_2A0]
0x94B43F: and     eax, 3FFFFFFFh
0x94B444: cmp     eax, ecx
0x94B446: movaps  [esp+310h+var_2D0], xmm0
0x94B44B: jge     short loc_94B466
0x94B44D: mov     ecx, [esp+310h+var_2F8]
0x94B451: add     eax, eax
0x94B453: inc     ecx
0x94B454: cmp     ecx, eax
0x94B456: jl      short loc_94B45A
0x94B458: mov     eax, ecx
0x94B45A: push    10h
0x94B45C: push    eax
0x94B45D: push    edi
0x94B45E: call    sub_8A6E40
0x94B463: add     esp, 0Ch
0x94B466: mov     ecx, [esp+310h+var_2F8]
0x94B46A: mov     edx, [ebp+arg_4]
0x94B46D: lea     eax, [ecx+1]
0x94B470: mov     [edi+4], eax
0x94B473: lea     eax, [esp+310h+var_2E0]
0x94B477: push    eax
0x94B478: mov     eax, [edi]
0x94B47A: shl     ecx, 4
0x94B47D: push    edx
0x94B47E: add     ecx, eax
0x94B480: call    sub_88FCC0
0x94B485: mov     eax, [edi+4]
0x94B488: lea     ecx, [eax+1]
0x94B48B: mov     dword ptr [esp+310h+var_2F0+4], eax
0x94B48F: mov     eax, [edi+8]
0x94B492: and     eax, 3FFFFFFFh
0x94B497: cmp     eax, ecx
0x94B499: jge     short loc_94B4B4
0x94B49B: mov     ecx, dword ptr [esp+310h+var_2F0+4]
0x94B49F: add     eax, eax
0x94B4A1: inc     ecx
0x94B4A2: cmp     ecx, eax
0x94B4A4: jl      short loc_94B4A8
0x94B4A6: mov     eax, ecx
0x94B4A8: push    10h
0x94B4AA: push    eax
0x94B4AB: push    edi
0x94B4AC: call    sub_8A6E40
0x94B4B1: add     esp, 0Ch
0x94B4B4: mov     ecx, dword ptr [esp+310h+var_2F0+4]
0x94B4B8: mov     edx, [ebp+arg_4]
0x94B4BB: lea     eax, [ecx+1]
0x94B4BE: mov     [edi+4], eax
0x94B4C1: lea     eax, [esp+310h+var_2C0]
0x94B4C5: push    eax
0x94B4C6: mov     eax, [edi]
0x94B4C8: shl     ecx, 4
0x94B4CB: push    edx
0x94B4CC: add     ecx, eax
0x94B4CE: call    sub_88FCC0
0x94B4D3: mov     eax, [edi+4]
0x94B4D6: lea     ecx, [eax+1]
0x94B4D9: mov     dword ptr [esp+310h+var_2F0+4], eax
0x94B4DD: mov     eax, [edi+8]
0x94B4E0: and     eax, 3FFFFFFFh
0x94B4E5: cmp     eax, ecx
0x94B4E7: jge     short loc_94B502
0x94B4E9: mov     ecx, dword ptr [esp+310h+var_2F0+4]
0x94B4ED: add     eax, eax
0x94B4EF: inc     ecx
0x94B4F0: cmp     ecx, eax
0x94B4F2: jl      short loc_94B4F6
0x94B4F4: mov     eax, ecx
0x94B4F6: push    10h
0x94B4F8: push    eax
0x94B4F9: push    edi
0x94B4FA: call    sub_8A6E40
0x94B4FF: add     esp, 0Ch
0x94B502: mov     ecx, dword ptr [esp+310h+var_2F0+4]
0x94B506: mov     edx, [ebp+arg_4]
0x94B509: lea     eax, [ecx+1]
0x94B50C: mov     [edi+4], eax
0x94B50F: lea     eax, [esp+310h+var_250]
0x94B516: push    eax
0x94B517: mov     eax, [edi]
0x94B519: shl     ecx, 4
0x94B51C: push    edx
0x94B51D: add     ecx, eax
0x94B51F: call    sub_88FCC0
0x94B524: mov     eax, [edi+4]
0x94B527: lea     ecx, [eax+1]
0x94B52A: mov     dword ptr [esp+310h+var_2F0+4], eax
0x94B52E: mov     eax, [edi+8]
0x94B531: and     eax, 3FFFFFFFh
0x94B536: cmp     eax, ecx
0x94B538: jge     short loc_94B553
0x94B53A: mov     ecx, dword ptr [esp+310h+var_2F0+4]
0x94B53E: add     eax, eax
0x94B540: inc     ecx
0x94B541: cmp     ecx, eax
0x94B543: jl      short loc_94B547
0x94B545: mov     eax, ecx
0x94B547: push    10h
0x94B549: push    eax
0x94B54A: push    edi
0x94B54B: call    sub_8A6E40
0x94B550: add     esp, 0Ch
0x94B553: mov     ecx, dword ptr [esp+310h+var_2F0+4]
0x94B557: mov     edx, [ebp+arg_4]
0x94B55A: lea     eax, [ecx+1]
0x94B55D: mov     [edi+4], eax
0x94B560: lea     eax, [esp+310h+var_2D0]
0x94B564: push    eax
0x94B565: mov     eax, [edi]
0x94B567: shl     ecx, 4
0x94B56A: push    edx
0x94B56B: add     ecx, eax
0x94B56D: call    sub_88FCC0
0x94B572: mov     eax, [ebx]
0x94B574: lea     ecx, [esp+310h+var_2A5]
0x94B578: push    ecx
0x94B579: mov     ecx, ebx
0x94B57B: call    dword ptr [eax+28h]
0x94B57E: mov     cl, [eax]
0x94B580: mov     eax, [esi+4]
0x94B583: test    cl, cl
0x94B585: mov     ecx, [esi+8]
0x94B588: lea     edx, [eax+1]
0x94B58B: mov     dword ptr [esp+310h+var_2F0+0Ch], eax
0x94B58F: jz      loc_94B62D
0x94B595: and     ecx, 3FFFFFFFh
0x94B59B: cmp     ecx, edx
0x94B59D: jge     short loc_94B5B8
0x94B59F: lea     eax, [ecx+ecx]
0x94B5A2: cmp     edx, eax
0x94B5A4: jl      short loc_94B5A8
0x94B5A6: mov     eax, edx
0x94B5A8: push    0Ch
0x94B5AA: push    eax
0x94B5AB: push    esi
0x94B5AC: call    sub_8A6E40
0x94B5B1: mov     eax, dword ptr [esp+31Ch+var_2F0+0Ch]
0x94B5B5: add     esp, 0Ch
0x94B5B8: lea     ecx, [eax+1]
0x94B5BB: mov     [esi+4], ecx
0x94B5BE: lea     edx, [eax+eax*2]
0x94B5C1: mov     eax, [esi]
0x94B5C3: lea     ecx, [eax+edx*4]
0x94B5C6: mov     eax, [esp+310h+var_2F8]
0x94B5CA: lea     edx, [eax+1]
0x94B5CD: mov     [ecx+4], edx
0x94B5D0: lea     edx, [eax+3]
0x94B5D3: mov     [ecx+8], edx
0x94B5D6: mov     [ecx], eax
0x94B5D8: mov     ecx, [esi+4]
0x94B5DB: lea     edx, [ecx+1]
0x94B5DE: mov     dword ptr [esp+310h+var_2F0+4], ecx
0x94B5E2: mov     ecx, [esi+8]
0x94B5E5: and     ecx, 3FFFFFFFh
0x94B5EB: cmp     ecx, edx
0x94B5ED: jge     short loc_94B608
0x94B5EF: lea     eax, [ecx+ecx]
0x94B5F2: cmp     edx, eax
0x94B5F4: jl      short loc_94B5F8
0x94B5F6: mov     eax, edx
0x94B5F8: push    0Ch
0x94B5FA: push    eax
0x94B5FB: push    esi
0x94B5FC: call    sub_8A6E40
0x94B601: mov     eax, [esp+31Ch+var_2F8]
0x94B605: add     esp, 0Ch
0x94B608: mov     ecx, dword ptr [esp+310h+var_2F0+4]
0x94B60C: lea     edx, [ecx+1]
0x94B60F: mov     [esi+4], edx
0x94B612: mov     edx, [esi]
0x94B614: lea     ecx, [ecx+ecx*2]
0x94B617: lea     ecx, [edx+ecx*4]
0x94B61A: lea     edx, [eax+3]
0x94B61D: mov     [ecx], eax
0x94B61F: add     eax, 2
0x94B622: mov     [ecx+4], edx
0x94B625: mov     [ecx+8], eax
0x94B628: jmp     loc_94B6DB
0x94B62D: and     ecx, 3FFFFFFFh
0x94B633: cmp     ecx, edx
0x94B635: jge     short loc_94B650
0x94B637: lea     eax, [ecx+ecx]
0x94B63A: cmp     edx, eax
0x94B63C: jl      short loc_94B640
0x94B63E: mov     eax, edx
0x94B640: push    0Ch
0x94B642: push    eax
0x94B643: push    esi
0x94B644: call    sub_8A6E40
0x94B649: mov     eax, dword ptr [esp+31Ch+var_2F0+0Ch]
0x94B64D: add     esp, 0Ch
0x94B650: mov     edx, [esp+310h+var_2F8]
0x94B654: lea     ecx, [eax+1]
0x94B657: mov     [esi+4], ecx
0x94B65A: mov     ecx, [esi]
0x94B65C: lea     eax, [eax+eax*2]
0x94B65F: lea     eax, [ecx+eax*4]
0x94B662: lea     ecx, [edx+1]
0x94B665: mov     [eax+4], ecx
0x94B668: mov     [esp+310h+var_2B0], ecx
0x94B66C: lea     ecx, [edx+2]
0x94B66F: mov     [eax], edx
0x94B671: mov     [eax+8], ecx
0x94B674: mov     [esp+310h+var_254], ecx
0x94B67B: mov     ecx, [esi+4]
0x94B67E: lea     eax, [ecx+1]
0x94B681: mov     dword ptr [esp+310h+var_2F0+4], eax
0x94B685: mov     eax, [esi+8]
0x94B688: and     eax, 3FFFFFFFh
0x94B68D: cmp     eax, dword ptr [esp+310h+var_2F0+4]
0x94B691: mov     dword ptr [esp+310h+var_2F0+0Ch], ecx
0x94B695: jge     short loc_94B6B7
0x94B697: mov     ecx, dword ptr [esp+310h+var_2F0+4]
0x94B69B: add     eax, eax
0x94B69D: cmp     ecx, eax
0x94B69F: jl      short loc_94B6A3
0x94B6A1: mov     eax, ecx
0x94B6A3: push    0Ch
0x94B6A5: push    eax
0x94B6A6: push    esi
0x94B6A7: call    sub_8A6E40
0x94B6AC: mov     edx, [esp+31Ch+var_2F8]
0x94B6B0: mov     ecx, dword ptr [esp+31Ch+var_2F0+0Ch]
0x94B6B4: add     esp, 0Ch
0x94B6B7: lea     eax, [ecx+1]
0x94B6BA: mov     [esi+4], eax
0x94B6BD: mov     eax, [esi]
0x94B6BF: lea     ecx, [ecx+ecx*2]
0x94B6C2: lea     eax, [eax+ecx*4]
0x94B6C5: mov     ecx, [esp+310h+var_254]
0x94B6CC: add     edx, 3
0x94B6CF: mov     [eax], edx
0x94B6D1: mov     edx, [esp+310h+var_2B0]
0x94B6D5: mov     [eax+4], ecx
0x94B6D8: mov     [eax+8], edx
0x94B6DB: mov     ecx, [ebx+10h]
0x94B6DE: mov     eax, dword ptr [esp+310h+var_2F0+8]
0x94B6E2: dec     ecx
0x94B6E3: cmp     eax, ecx
0x94B6E5: mov     [esp+310h+var_2F8], eax
0x94B6E9: jl      loc_94B320
0x94B6EF: mov     eax, dword ptr [esp+310h+var_2F0]
0x94B6F3: mov     edx, [ebx+0Ch]
0x94B6F6: inc     eax
0x94B6F7: dec     edx
0x94B6F8: cmp     eax, edx
0x94B6FA: mov     dword ptr [esp+310h+var_2F0], eax
0x94B6FE: jl      loc_94B2F6
0x94B704: mov     ecx, [esp+310h+var_4]
0x94B70B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94B710: pop     edi
0x94B711: pop     esi
0x94B712: pop     ebx
0x94B713: mov     esp, ebp
0x94B715: pop     ebp
0x94B716: retn    0Ch
0x94B719: mov     eax, ds:0BA9510h; jumptable 0094A667 default case, cases 18,21
0x94B71E: mov     ecx, [eax+0Ch]
0x94B721: test    ecx, ecx
0x94B723: mov     [esp+310h+var_2F4], 0
0x94B72B: jle     short loc_94B76A
0x94B72D: lea     ecx, [ecx+0]
0x94B730: mov     eax, [eax+8]
0x94B733: mov     ecx, [esp+310h+var_2F4]
0x94B737: mov     edx, [ebx]
0x94B739: lea     esi, [eax+ecx*8]
0x94B73C: mov     ecx, ebx
0x94B73E: call    dword ptr [edx+8]
0x94B741: cmp     [esi+4], eax
0x94B744: jnz     short loc_94B755
0x94B746: mov     eax, [ebp+arg_8]
0x94B749: mov     ecx, [ebp+arg_4]
0x94B74C: push    edi
0x94B74D: push    eax
0x94B74E: push    ecx
0x94B74F: push    ebx
0x94B750: call    dword ptr [esi]
0x94B752: add     esp, 10h
0x94B755: mov     ecx, [esp+310h+var_2F4]
0x94B759: mov     eax, ds:0BA9510h
0x94B75E: mov     edx, [eax+0Ch]
0x94B761: inc     ecx
0x94B762: cmp     ecx, edx
0x94B764: mov     [esp+310h+var_2F4], ecx
0x94B768: jl      short loc_94B730
0x94B76A: mov     ecx, [esp+310h+var_4]
0x94B771: call    @__security_check_cookie@4; __security_check_cookie(x)
0x94B776: pop     edi
0x94B777: pop     esi
0x94B778: pop     ebx
0x94B779: mov     esp, ebp
0x94B77B: pop     ebp
0x94B77C: retn    0Ch
