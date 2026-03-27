0x5364B0: push    ebp
0x5364B1: mov     ebp, esp
0x5364B3: and     esp, 0FFFFFFF0h
0x5364B6: sub     esp, 24h
0x5364B9: mov     eax, ds:0B30AACh
0x5364BE: xor     eax, esp
0x5364C0: mov     [esp+24h+var_4], eax
0x5364C4: push    ebx
0x5364C5: mov     ebx, [ebp+arg_4]
0x5364C8: push    esi
0x5364C9: push    edi
0x5364CA: mov     edi, [ebp+arg_0]
0x5364CD: test    edi, edi
0x5364CF: jz      loc_53663F
0x5364D5: push    edi
0x5364D6: call    sub_47FAC0
0x5364DB: add     esp, 4
0x5364DE: test    eax, eax
0x5364E0: jz      loc_5365F3
0x5364E6: mov     esi, [eax+10h]
0x5364E9: test    esi, esi
0x5364EB: jz      loc_5365F3
0x5364F1: mov     eax, [esi+8]
0x5364F4: test    eax, eax
0x5364F6: jz      short loc_536502
0x5364F8: add     eax, 14h
0x5364FB: jz      short loc_536502
0x5364FD: mov     eax, [eax+1Ch]
0x536500: jmp     short loc_536504
0x536502: xor     eax, eax
0x536504: shr     eax, 8
0x536507: and     eax, 1Fh
0x53650A: fld     dword ptr ds:0B11760h[eax*4]
0x536511: mov     eax, [esi]
0x536513: fmul    [ebp+arg_8]
0x536516: mov     edx, [eax+0A8h]
0x53651C: lea     ecx, [esp+30h+var_24+4]
0x536520: push    ecx
0x536521: mov     ecx, esi
0x536523: fstp    dword ptr [esp+34h+var_24]
0x536527: call    edx
0x536529: movaps  xmm1, [esp+30h+var_24+4]
0x53652E: movaps  xmm0, xmmword ptr [ebx]
0x536531: movss   xmm4, dword ptr ds:0A46C30h
0x536539: subps   xmm1, xmm0
0x53653C: mov     esi, [esi+8]
0x53653F: movaps  xmm0, xmm1
0x536542: mulps   xmm0, xmm1
0x536545: movaps  xmm2, xmm0
0x536548: shufps  xmm2, xmm0, 55h ; 'U'
0x53654C: addss   xmm2, xmm0
0x536550: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x536554: addss   xmm0, xmm2
0x536558: movaps  xmm2, xmm0
0x53655B: rsqrtss xmm2, xmm2
0x53655F: mulss   xmm0, xmm2
0x536563: mulss   xmm0, xmm2
0x536567: xorps   xmm3, xmm3
0x53656A: movss   xmm3, xmm4
0x53656E: movss   xmm4, dword ptr ds:0A3D65Ch
0x536576: subss   xmm3, xmm0
0x53657A: xorps   xmm0, xmm0
0x53657D: movss   xmm0, xmm4
0x536581: mulss   xmm0, xmm2
0x536585: mulss   xmm0, xmm3
0x536589: shufps  xmm0, xmm0, 0
0x53658D: mulps   xmm0, xmm1
0x536590: movaps  [esp+30h+var_24+4], xmm0
0x536595: mov     eax, [esi+50h]
0x536598: fld     dword ptr [eax+0C8h]
0x53659E: xorps   xmm1, xmm1
0x5365A1: fmul    qword ptr ds:0A3C770h
0x5365A7: fadd    qword ptr ds:0A31C70h
0x5365AD: fmul    dword ptr [esp+30h+var_24]
0x5365B1: fstp    dword ptr [esp+30h+var_24]
0x5365B5: movss   xmm2, dword ptr [esp+30h+var_24]
0x5365BB: movss   xmm1, xmm2
0x5365BF: shufps  xmm1, xmm1, 0
0x5365C3: mulps   xmm1, xmm0
0x5365C6: movaps  [esp+30h+var_24+4], xmm1
0x5365CB: mov     ecx, [esi+50h]
0x5365CE: movaps  xmm0, xmmword ptr [ecx+0D0h]
0x5365D5: addps   xmm0, xmm1
0x5365D8: mov     ecx, esi
0x5365DA: movaps  [esp+30h+var_24+4], xmm0
0x5365DF: call    sub_8A6410
0x5365E4: mov     ecx, [esi+50h]
0x5365E7: mov     edx, [ecx]
0x5365E9: mov     edx, [edx+54h]
0x5365EC: lea     eax, [esp+30h+var_24+4]
0x5365F0: push    eax
0x5365F1: call    edx
0x5365F3: mov     eax, [edi]
0x5365F5: mov     edx, [eax+8]
0x5365F8: mov     ecx, edi
0x5365FA: call    edx
0x5365FC: mov     edi, eax
0x5365FE: test    edi, edi
0x536600: jz      short loc_53663F
0x536602: movzx   eax, word ptr [edi+0B6h]
0x536609: xor     esi, esi
0x53660B: test    eax, eax
0x53660D: jbe     short loc_53663F
0x53660F: cmp     eax, esi
0x536611: ja      short loc_536617
0x536613: xor     eax, eax
0x536615: jmp     short loc_536620
0x536617: mov     eax, [edi+0B0h]
0x53661D: mov     eax, [eax+esi*4]
0x536620: fld     [ebp+arg_8]
0x536623: push    ecx
0x536624: fstp    [esp+34h+var_34]; float
0x536627: push    ebx; int
0x536628: push    eax; int
0x536629: call    sub_5364B0
0x53662E: movzx   eax, word ptr [edi+0B6h]
0x536635: add     esi, 1
0x536638: add     esp, 0Ch
0x53663B: cmp     eax, esi
0x53663D: ja      short loc_536617
0x53663F: mov     ecx, [esp+30h+var_4]
0x536643: pop     edi
0x536644: pop     esi
0x536645: pop     ebx
0x536646: xor     ecx, esp
0x536648: call    @__security_check_cookie@4; __security_check_cookie(x)
0x53664D: mov     esp, ebp
0x53664F: pop     ebp
0x536650: retn
