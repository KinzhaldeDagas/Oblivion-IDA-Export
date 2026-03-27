0x9797B0: sub     esp, 1Ch
0x9797B3: fldz
0x9797B5: push    ebx
0x9797B6: mov     ebx, [esp+20h+arg_8]
0x9797BA: push    ebp
0x9797BB: mov     ebp, ecx
0x9797BD: mov     ecx, [esp+24h+arg_4]
0x9797C1: lea     eax, [ecx+ebx]
0x9797C4: cdq
0x9797C5: push    esi
0x9797C6: sub     eax, edx
0x9797C8: mov     edx, [esp+28h+arg_10]
0x9797CC: lea     esi, [ecx-1]
0x9797CF: push    edi
0x9797D0: mov     [edx], esi
0x9797D2: mov     esi, [esp+2Ch+arg_14]
0x9797D6: lea     edi, [ebx+1]
0x9797D9: sar     eax, 1
0x9797DB: mov     [esp+2Ch+var_14], ebp
0x9797DF: mov     [esi], edi
0x9797E1: mov     edi, [esp+2Ch+arg_18]
0x9797E5: mov     [esp+2Ch+var_1C], eax
0x9797E9: mov     [esp+2Ch+var_10], 0
0x9797F1: add     ebp, 18h
0x9797F4: cmp     [edx], ecx
0x9797F6: jl      short loc_979800
0x9797F8: cmp     [esi], ebx
0x9797FA: jle     loc_979B49
0x979800: lea     eax, [ecx-1]
0x979803: mov     [edx], eax
0x979805: lea     eax, [ebx+1]
0x979808: mov     [esi], eax
0x97980A: mov     eax, ebx
0x97980C: sub     eax, ecx
0x97980E: add     eax, 1
0x979811: cmp     eax, 4
0x979814: mov     [esp+2Ch+arg_14], ecx
0x979818: jl      loc_979A7D
0x97981E: lea     eax, [ecx+2]
0x979821: mov     ecx, [esp+2Ch+arg_C]
0x979825: mov     [esp+2Ch+var_18], eax
0x979829: lea     eax, [ecx+eax*4]
0x97982C: mov     [esp+2Ch+arg_18], eax
0x979830: mov     ecx, [esp+2Ch+arg_18]
0x979834: mov     ebx, [ecx-8]
0x979837: mov     ecx, [esp+2Ch+arg_0]
0x97983B: lea     eax, [ebx+ebx*2]
0x97983E: fld     dword ptr [ecx+eax*4]
0x979841: lea     eax, [ecx+eax*4]
0x979844: mov     ecx, [esp+2Ch+var_14]
0x979848: fsub    dword ptr [ecx+4]
0x97984B: fstp    [esp+2Ch+var_C]
0x97984F: fld     dword ptr [eax+4]
0x979852: fsub    dword ptr [ecx+8]
0x979855: fstp    [esp+2Ch+var_8]
0x979859: fld     dword ptr [eax+8]
0x97985C: fsub    dword ptr [ecx+0Ch]
0x97985F: fstp    [esp+2Ch+var_4]
0x979863: fld     dword ptr [ebp-4]
0x979866: fmul    [esp+2Ch+var_8]
0x97986A: fld     dword ptr [ebp-8]
0x97986D: fmul    [esp+2Ch+var_C]
0x979871: faddp   st(1), st
0x979873: fld     [esp+2Ch+var_4]
0x979877: fmul    dword ptr [ebp+0]
0x97987A: faddp   st(1), st
0x97987C: fstp    [esp+2Ch+arg_10]
0x979880: fld     [esp+2Ch+arg_10]
0x979884: fcom    st(1)
0x979886: fnstsw  ax
0x979888: test    ah, 41h
0x97988B: jnz     short loc_979896
0x97988D: add     dword ptr [edx], 1
0x979890: fstp    st
0x979892: mov     eax, [edx]
0x979894: jmp     short loc_9798B5
0x979896: fcomp   st(1)
0x979898: fnstsw  ax
0x97989A: test    ah, 5
0x97989D: jnp     short loc_9798B0
0x97989F: mov     eax, [esp+2Ch+var_1C]
0x9798A3: cmp     [esp+2Ch+arg_14], eax
0x9798A7: jg      short loc_9798B0
0x9798A9: add     dword ptr [edx], 1
0x9798AC: mov     eax, [edx]
0x9798AE: jmp     short loc_9798B5
0x9798B0: add     dword ptr [esi], 0FFFFFFFFh
0x9798B3: mov     eax, [esi]
0x9798B5: mov     ecx, [esp+2Ch+arg_18]
0x9798B9: mov     [edi+eax*4], ebx
0x9798BC: mov     ebx, [ecx-4]
0x9798BF: mov     ecx, [esp+2Ch+arg_0]
0x9798C3: lea     eax, [ebx+ebx*2]
0x9798C6: fld     dword ptr [ecx+eax*4]
0x9798C9: lea     eax, [ecx+eax*4]
0x9798CC: mov     ecx, [esp+2Ch+var_14]
0x9798D0: fsub    dword ptr [ecx+4]
0x9798D3: fstp    [esp+2Ch+var_C]
0x9798D7: fld     dword ptr [eax+4]
0x9798DA: fsub    dword ptr [ecx+8]
0x9798DD: fstp    [esp+2Ch+var_8]
0x9798E1: fld     dword ptr [eax+8]
0x9798E4: fsub    dword ptr [ecx+0Ch]
0x9798E7: fstp    [esp+2Ch+var_4]
0x9798EB: fld     dword ptr [ebp-4]
0x9798EE: fmul    [esp+2Ch+var_8]
0x9798F2: fld     dword ptr [ebp-8]
0x9798F5: fmul    [esp+2Ch+var_C]
0x9798F9: faddp   st(1), st
0x9798FB: fld     [esp+2Ch+var_4]
0x9798FF: fmul    dword ptr [ebp+0]
0x979902: faddp   st(1), st
0x979904: fstp    [esp+2Ch+arg_10]
0x979908: fld     [esp+2Ch+arg_10]
0x97990C: fcom    st(1)
0x97990E: fnstsw  ax
0x979910: test    ah, 41h
0x979913: jnz     short loc_97991E
0x979915: add     dword ptr [edx], 1
0x979918: fstp    st
0x97991A: mov     eax, [edx]
0x97991C: jmp     short loc_979940
0x97991E: fcomp   st(1)
0x979920: fnstsw  ax
0x979922: test    ah, 5
0x979925: jnp     short loc_97993B
0x979927: mov     eax, [esp+2Ch+var_18]
0x97992B: add     eax, 0FFFFFFFFh
0x97992E: cmp     eax, [esp+2Ch+var_1C]
0x979932: jg      short loc_97993B
0x979934: add     dword ptr [edx], 1
0x979937: mov     eax, [edx]
0x979939: jmp     short loc_979940
0x97993B: add     dword ptr [esi], 0FFFFFFFFh
0x97993E: mov     eax, [esi]
0x979940: mov     ecx, [esp+2Ch+arg_18]
0x979944: mov     [edi+eax*4], ebx
0x979947: mov     ebx, [ecx]
0x979949: mov     ecx, [esp+2Ch+arg_0]
0x97994D: lea     eax, [ebx+ebx*2]
0x979950: fld     dword ptr [ecx+eax*4]
0x979953: lea     eax, [ecx+eax*4]
0x979956: mov     ecx, [esp+2Ch+var_14]
0x97995A: fsub    dword ptr [ecx+4]
0x97995D: fstp    [esp+2Ch+var_C]
0x979961: fld     dword ptr [eax+4]
0x979964: fsub    dword ptr [ecx+8]
0x979967: fstp    [esp+2Ch+var_8]
0x97996B: fld     dword ptr [eax+8]
0x97996E: fsub    dword ptr [ecx+0Ch]
0x979971: fstp    [esp+2Ch+var_4]
0x979975: fld     dword ptr [ebp-4]
0x979978: fmul    [esp+2Ch+var_8]
0x97997C: fld     dword ptr [ebp-8]
0x97997F: fmul    [esp+2Ch+var_C]
0x979983: faddp   st(1), st
0x979985: fld     [esp+2Ch+var_4]
0x979989: fmul    dword ptr [ebp+0]
0x97998C: faddp   st(1), st
0x97998E: fstp    [esp+2Ch+arg_10]
0x979992: fld     [esp+2Ch+arg_10]
0x979996: fcom    st(1)
0x979998: fnstsw  ax
0x97999A: test    ah, 41h
0x97999D: jnz     short loc_9799A8
0x97999F: add     dword ptr [edx], 1
0x9799A2: fstp    st
0x9799A4: mov     eax, [edx]
0x9799A6: jmp     short loc_9799C7
0x9799A8: fcomp   st(1)
0x9799AA: fnstsw  ax
0x9799AC: test    ah, 5
0x9799AF: jnp     short loc_9799C2
0x9799B1: mov     eax, [esp+2Ch+var_1C]
0x9799B5: cmp     [esp+2Ch+var_18], eax
0x9799B9: jg      short loc_9799C2
0x9799BB: add     dword ptr [edx], 1
0x9799BE: mov     eax, [edx]
0x9799C0: jmp     short loc_9799C7
0x9799C2: add     dword ptr [esi], 0FFFFFFFFh
0x9799C5: mov     eax, [esi]
0x9799C7: mov     ecx, [esp+2Ch+arg_18]
0x9799CB: mov     [edi+eax*4], ebx
0x9799CE: mov     ebx, [ecx+4]
0x9799D1: mov     ecx, [esp+2Ch+arg_0]
0x9799D5: lea     eax, [ebx+ebx*2]
0x9799D8: fld     dword ptr [ecx+eax*4]
0x9799DB: lea     eax, [ecx+eax*4]
0x9799DE: mov     ecx, [esp+2Ch+var_14]
0x9799E2: fsub    dword ptr [ecx+4]
0x9799E5: fstp    [esp+2Ch+var_C]
0x9799E9: fld     dword ptr [eax+4]
0x9799EC: fsub    dword ptr [ecx+8]
0x9799EF: fstp    [esp+2Ch+var_8]
0x9799F3: fld     dword ptr [eax+8]
0x9799F6: fsub    dword ptr [ecx+0Ch]
0x9799F9: fstp    [esp+2Ch+var_4]
0x9799FD: fld     dword ptr [ebp-4]
0x979A00: fmul    [esp+2Ch+var_8]
0x979A04: fld     dword ptr [ebp-8]
0x979A07: fmul    [esp+2Ch+var_C]
0x979A0B: faddp   st(1), st
0x979A0D: fld     [esp+2Ch+var_4]
0x979A11: fmul    dword ptr [ebp+0]
0x979A14: faddp   st(1), st
0x979A16: fstp    [esp+2Ch+arg_10]
0x979A1A: fld     [esp+2Ch+arg_10]
0x979A1E: fcom    st(1)
0x979A20: fnstsw  ax
0x979A22: test    ah, 41h
0x979A25: jnz     short loc_979A30
0x979A27: add     dword ptr [edx], 1
0x979A2A: fstp    st
0x979A2C: mov     eax, [edx]
0x979A2E: jmp     short loc_979A52
0x979A30: fcomp   st(1)
0x979A32: fnstsw  ax
0x979A34: test    ah, 5
0x979A37: jnp     short loc_979A4D
0x979A39: mov     eax, [esp+2Ch+var_18]
0x979A3D: add     eax, 1
0x979A40: cmp     eax, [esp+2Ch+var_1C]
0x979A44: jg      short loc_979A4D
0x979A46: add     dword ptr [edx], 1
0x979A49: mov     eax, [edx]
0x979A4B: jmp     short loc_979A52
0x979A4D: add     dword ptr [esi], 0FFFFFFFFh
0x979A50: mov     eax, [esi]
0x979A52: mov     ecx, [esp+2Ch+arg_14]
0x979A56: add     [esp+2Ch+arg_18], 10h
0x979A5B: add     [esp+2Ch+var_18], 4
0x979A60: mov     [edi+eax*4], ebx
0x979A63: mov     ebx, [esp+2Ch+arg_8]
0x979A67: add     ecx, 4
0x979A6A: lea     eax, [ebx-3]
0x979A6D: cmp     ecx, eax
0x979A6F: mov     [esp+2Ch+arg_14], ecx
0x979A73: jle     loc_979830
0x979A79: mov     ecx, [esp+2Ch+arg_4]
0x979A7D: cmp     [esp+2Ch+arg_14], ebx
0x979A81: jg      loc_979B2E
0x979A87: mov     ecx, [esp+2Ch+arg_C]
0x979A8B: mov     eax, [esp+2Ch+arg_14]
0x979A8F: mov     ebx, [ecx+eax*4]
0x979A92: mov     eax, [esp+2Ch+arg_0]
0x979A96: lea     ecx, [ebx+ebx*2]
0x979A99: fld     dword ptr [eax+ecx*4]
0x979A9C: lea     eax, [eax+ecx*4]
0x979A9F: mov     ecx, [esp+2Ch+var_14]
0x979AA3: fsub    dword ptr [ecx+4]
0x979AA6: fstp    [esp+2Ch+var_C]
0x979AAA: fld     dword ptr [eax+4]
0x979AAD: fsub    dword ptr [ecx+8]
0x979AB0: fstp    [esp+2Ch+var_8]
0x979AB4: fld     dword ptr [eax+8]
0x979AB7: fsub    dword ptr [ecx+0Ch]
0x979ABA: fstp    [esp+2Ch+var_4]
0x979ABE: fld     dword ptr [ebp-4]
0x979AC1: fmul    [esp+2Ch+var_8]
0x979AC5: fld     dword ptr [ebp-8]
0x979AC8: fmul    [esp+2Ch+var_C]
0x979ACC: faddp   st(1), st
0x979ACE: fld     [esp+2Ch+var_4]
0x979AD2: fmul    dword ptr [ebp+0]
0x979AD5: faddp   st(1), st
0x979AD7: fstp    [esp+2Ch+arg_10]
0x979ADB: fld     [esp+2Ch+arg_10]
0x979ADF: fcom    st(1)
0x979AE1: fnstsw  ax
0x979AE3: test    ah, 41h
0x979AE6: jnz     short loc_979AF1
0x979AE8: add     dword ptr [edx], 1
0x979AEB: fstp    st
0x979AED: mov     eax, [edx]
0x979AEF: jmp     short loc_979B10
0x979AF1: fcomp   st(1)
0x979AF3: fnstsw  ax
0x979AF5: test    ah, 5
0x979AF8: jnp     short loc_979B0B
0x979AFA: mov     ecx, [esp+2Ch+arg_14]
0x979AFE: cmp     ecx, [esp+2Ch+var_1C]
0x979B02: jg      short loc_979B0B
0x979B04: add     dword ptr [edx], 1
0x979B07: mov     eax, [edx]
0x979B09: jmp     short loc_979B10
0x979B0B: add     dword ptr [esi], 0FFFFFFFFh
0x979B0E: mov     eax, [esi]
0x979B10: mov     [edi+eax*4], ebx
0x979B13: mov     eax, [esp+2Ch+arg_14]
0x979B17: mov     ebx, [esp+2Ch+arg_8]
0x979B1B: add     eax, 1
0x979B1E: cmp     eax, ebx
0x979B20: mov     [esp+2Ch+arg_14], eax
0x979B24: jle     loc_979A87
0x979B2A: mov     ecx, [esp+2Ch+arg_4]
0x979B2E: mov     eax, [esp+2Ch+var_10]
0x979B32: add     eax, 1
0x979B35: add     ebp, 0Ch
0x979B38: mov     [esp+2Ch+var_10], eax
0x979B3C: cmp     eax, 3
0x979B3F: mov     eax, [esp+2Ch+var_1C]
0x979B43: jl      loc_9797F4
0x979B49: cmp     [esp+2Ch+var_10], 3
0x979B4E: fstp    st
0x979B50: jnz     short loc_979B80
0x979B52: cmp     [edx], ecx
0x979B54: jl      short loc_979B5A
0x979B56: cmp     [esi], ebx
0x979B58: jle     short loc_979B80
0x979B5A: mov     [edx], eax
0x979B5C: add     eax, 1
0x979B5F: cmp     ecx, ebx
0x979B61: mov     [esi], eax
0x979B63: jg      short loc_979B80
0x979B65: mov     edx, [esp+2Ch+arg_C]
0x979B69: sub     ebx, ecx
0x979B6B: sub     edx, edi
0x979B6D: lea     eax, [edi+ecx*4]
0x979B70: add     ebx, 1
0x979B73: mov     ecx, [edx+eax]
0x979B76: mov     [eax], ecx
0x979B78: add     eax, 4
0x979B7B: sub     ebx, 1
0x979B7E: jnz     short loc_979B73
0x979B80: pop     edi
0x979B81: pop     esi
0x979B82: pop     ebp
0x979B83: pop     ebx
0x979B84: add     esp, 1Ch
0x979B87: retn    1Ch
