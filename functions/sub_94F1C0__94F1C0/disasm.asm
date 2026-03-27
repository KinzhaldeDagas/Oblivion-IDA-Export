0x94F1C0: push    ebp
0x94F1C1: mov     ebp, esp
0x94F1C3: and     esp, 0FFFFFFF0h
0x94F1C6: sub     esp, 0F4h
0x94F1CC: mov     eax, [ebp+arg_0]
0x94F1CF: push    ebx
0x94F1D0: mov     ebx, [eax+0Ch]
0x94F1D3: push    esi
0x94F1D4: push    edi
0x94F1D5: mov     edi, [ebp+arg_4]
0x94F1D8: mov     esi, ecx
0x94F1DA: push    edi
0x94F1DB: lea     ecx, [esi+0C0h]
0x94F1E1: mov     [esp+104h+var_D4], ebx
0x94F1E5: call    sub_958600
0x94F1EA: mov     eax, [ebp+arg_0]
0x94F1ED: lea     ecx, [esp+100h+var_40]
0x94F1F4: push    ecx
0x94F1F5: lea     edx, [esp+104h+var_80]
0x94F1FC: push    edx
0x94F1FD: push    eax
0x94F1FE: mov     ecx, esi
0x94F200: call    sub_94D100
0x94F205: lea     edx, [ebx+60h]
0x94F208: push    edx
0x94F209: lea     eax, [esp+104h+var_80]
0x94F210: lea     ecx, [esi+50h]
0x94F213: push    eax
0x94F214: call    sub_88FCC0
0x94F219: lea     edx, [ebx+20h]
0x94F21C: push    edx
0x94F21D: lea     eax, [esp+104h+var_40]
0x94F224: lea     ecx, [esi+40h]
0x94F227: push    eax
0x94F228: call    sub_88FCC0
0x94F22D: mov     ecx, [ebp+arg_8]
0x94F230: push    ecx
0x94F231: mov     ecx, esi
0x94F233: call    sub_94CF80
0x94F238: mov     edx, [ebp+arg_8]
0x94F23B: push    edx
0x94F23C: mov     ecx, esi
0x94F23E: call    sub_94CF30
0x94F243: lea     ecx, [ebx+70h]
0x94F246: push    ecx
0x94F247: lea     eax, [esi+90h]
0x94F24D: push    eax
0x94F24E: lea     ecx, [esp+108h+var_A0]
0x94F252: call    sub_88FE00
0x94F257: add     ebx, 80h ; '€'
0x94F25D: push    ebx
0x94F25E: lea     eax, [esi+90h]
0x94F264: push    eax
0x94F265: lea     ecx, [esp+108h+var_90]
0x94F269: call    sub_88FE00
0x94F26E: mov     eax, [ebp+arg_8]
0x94F271: mov     edx, [edi]
0x94F273: push    eax
0x94F274: push    0FFFF0000h
0x94F279: lea     ebx, [esi+50h]
0x94F27C: push    ebx
0x94F27D: lea     eax, [esi+40h]
0x94F280: push    eax
0x94F281: mov     ecx, edi
0x94F283: call    dword ptr [edx+1Ch]
0x94F286: fld     dword ptr [esi]
0x94F288: fmul    dword ptr ds:0A3D65Ch
0x94F28E: movaps  xmm2, [esp+100h+var_A0]
0x94F293: movaps  xmm1, xmmword ptr [ebx]
0x94F296: fstp    dword ptr [esp+100h+var_FC+8]
0x94F29A: movss   xmm0, dword ptr [esp+100h+var_FC+8]
0x94F2A0: fld     dword ptr [esi]
0x94F2A2: fmul    dword ptr ds:0A45E4Ch
0x94F2A8: movaps  xmm3, xmm0
0x94F2AB: shufps  xmm3, xmm0, 0
0x94F2AF: mulps   xmm3, xmm2
0x94F2B2: addps   xmm3, xmm1
0x94F2B5: fstp    dword ptr [esp+100h+var_FC+8]
0x94F2B9: movss   xmm0, dword ptr [esp+100h+var_FC+8]
0x94F2BF: movaps  [esp+100h+var_D0], xmm3
0x94F2C4: movaps  xmm3, xmm0
0x94F2C7: shufps  xmm3, xmm0, 0
0x94F2CB: mulps   xmm3, xmm2
0x94F2CE: addps   xmm3, xmm1
0x94F2D1: movaps  [esp+100h+var_C0], xmm3
0x94F2D6: mov     ecx, [ebp+arg_8]
0x94F2D9: mov     ebx, [edi]
0x94F2DB: push    ecx
0x94F2DC: push    3F800000h; float
0x94F2E1: push    3F800000h; float
0x94F2E6: push    3F000000h; float
0x94F2EB: push    0; float
0x94F2ED: call    sub_8AEBB0
0x94F2F2: add     esp, 10h
0x94F2F5: push    eax
0x94F2F6: lea     edx, [esp+108h+var_D0]
0x94F2FA: push    edx
0x94F2FB: lea     eax, [esp+10Ch+var_C0]
0x94F2FF: push    eax
0x94F300: mov     ecx, edi
0x94F302: call    dword ptr [ebx+1Ch]
0x94F305: lea     ecx, [esp+100h+var_90]
0x94F309: push    ecx
0x94F30A: lea     edx, [esp+104h+var_A0]
0x94F30E: push    edx
0x94F30F: lea     eax, [esi+50h]
0x94F312: push    eax
0x94F313: mov     eax, [esp+10Ch+var_D4]
0x94F317: mov     ecx, [eax+10h]
0x94F31A: mov     edx, [eax+0Ch]
0x94F31D: push    18h
0x94F31F: push    ecx
0x94F320: push    edx
0x94F321: lea     ebx, [esi+0D0h]
0x94F327: push    3FC00000h
0x94F32C: mov     ecx, ebx
0x94F32E: call    sub_94D1F0
0x94F333: xor     eax, eax
0x94F335: push    4
0x94F337: mov     dword ptr [esp+104h+var_FC+0Ch], eax
0x94F33B: mov     dword ptr [esp+104h+var_EC], eax
0x94F33F: lea     eax, [esp+104h+var_FC+0Ch]
0x94F343: push    1
0x94F345: push    eax
0x94F346: mov     dword ptr [esp+10Ch+var_EC+4], 80000000h
0x94F34E: call    sub_8A6E40
0x94F353: mov     ecx, dword ptr [esp+10Ch+var_FC+0Ch]
0x94F357: add     esp, 0Ch
0x94F35A: mov     dword ptr [esp+100h+var_EC], 1
0x94F362: mov     [ecx], ebx
0x94F364: mov     ebx, [ebp+arg_8]
0x94F367: mov     edx, [edi]
0x94F369: push    ebx
0x94F36A: push    0FFFFFFFFh
0x94F36C: lea     eax, [esp+108h+var_FC+0Ch]
0x94F370: push    eax
0x94F371: mov     ecx, edi
0x94F373: call    dword ptr [edx+24h]
0x94F376: mov     eax, dword ptr [esp+100h+var_EC+4]
0x94F37A: test    eax, eax
0x94F37C: js      short loc_94F3B3
0x94F37E: mov     ecx, ds:0BA9DE4h
0x94F384: mov     edx, large fs:2Ch
0x94F38B: mov     ecx, [edx+ecx*4]
0x94F38E: mov     ecx, [ecx+19Ch]
0x94F394: test    ecx, ecx
0x94F396: jnz     short loc_94F39E
0x94F398: mov     ecx, ds:0BA7D9Ch
0x94F39E: mov     edx, dword ptr [esp+100h+var_FC+0Ch]
0x94F3A2: and     eax, 3FFFFFFFh
0x94F3A7: push    14h
0x94F3A9: shl     eax, 2
0x94F3AC: push    eax
0x94F3AD: push    edx
0x94F3AE: call    sub_8A75D0
0x94F3B3: fld     dword ptr [esi]
0x94F3B5: movaps  xmm0, xmmword ptr [esi+50h]
0x94F3B9: fmul    dword ptr ds:0A3D65Ch
0x94F3BF: movaps  xmm2, [esp+100h+var_90]
0x94F3C4: mov     eax, [edi]
0x94F3C6: push    ebx
0x94F3C7: fstp    dword ptr [esp+104h+var_FC+8]
0x94F3CB: push    0FFFFFF00h
0x94F3D0: movss   xmm1, dword ptr [esp+108h+var_FC+8]
0x94F3D6: lea     ecx, [esp+108h+var_FC+0Ch]
0x94F3DA: movaps  xmm3, xmm1
0x94F3DD: push    ecx
0x94F3DE: shufps  xmm3, xmm1, 0
0x94F3E2: lea     edx, [esp+10Ch+var_B0]
0x94F3E6: movaps  [esp+10Ch+var_B0], xmm0
0x94F3EB: mulps   xmm3, xmm2
0x94F3EE: addps   xmm0, xmm3
0x94F3F1: push    edx
0x94F3F2: mov     ecx, edi
0x94F3F4: movaps  [esp+110h+var_FC+0Ch], xmm0
0x94F3F9: call    dword ptr [eax+1Ch]
0x94F3FC: mov     eax, [esp+100h+var_D4]
0x94F400: add     eax, 50h ; 'P'
0x94F403: push    eax
0x94F404: lea     ecx, [esi+60h]
0x94F407: push    ecx
0x94F408: lea     ecx, [esp+108h+var_D0]
0x94F40C: call    sub_88FE00
0x94F411: fld     dword ptr [esi]
0x94F413: movaps  xmm2, [esp+100h+var_D0]
0x94F418: fmul    dword ptr ds:0A3D65Ch
0x94F41E: mov     edx, [edi]
0x94F420: movaps  xmm0, xmm2
0x94F423: mulps   xmm0, xmm2
0x94F426: movaps  xmm1, xmm0
0x94F429: shufps  xmm1, xmm0, 55h ; 'U'
0x94F42D: addss   xmm1, xmm0
0x94F431: movaps  xmm3, xmm0
0x94F434: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x94F438: movaps  xmm0, xmm3
0x94F43B: addss   xmm0, xmm1
0x94F43F: movaps  [esp+100h+var_C0], xmm0
0x94F444: rsqrtss xmm1, xmm0
0x94F448: movss   dword ptr [esp+100h+var_C0], xmm1
0x94F44E: movaps  xmm1, [esp+100h+var_C0]
0x94F453: mulss   xmm0, xmm1
0x94F457: mulss   xmm0, xmm1
0x94F45B: mov     dword ptr [esp+100h+var_FC+8], 40400000h
0x94F463: movss   xmm3, dword ptr [esp+100h+var_FC+8]
0x94F469: subss   xmm3, xmm0
0x94F46D: mov     dword ptr [esp+100h+var_FC+8], 3F000000h
0x94F475: movss   xmm0, dword ptr [esp+100h+var_FC+8]
0x94F47B: fstp    dword ptr [esp+100h+var_FC+8]
0x94F47F: mulss   xmm0, xmm1
0x94F483: mulss   xmm0, xmm3
0x94F487: movaps  xmm1, xmm0
0x94F48A: shufps  xmm1, xmm0, 0
0x94F48E: push    ebx
0x94F48F: movaps  xmm0, xmm1
0x94F492: movaps  xmm1, xmmword ptr [esi+40h]
0x94F496: mulps   xmm0, xmm2
0x94F499: movss   xmm2, dword ptr [esp+104h+var_FC+8]
0x94F49F: push    0FFFFFF00h
0x94F4A4: lea     eax, [esp+108h+var_FC+0Ch]
0x94F4A8: movaps  xmm3, xmm2
0x94F4AB: push    eax
0x94F4AC: lea     ecx, [esp+10Ch+var_B0]
0x94F4B0: shufps  xmm3, xmm2, 0
0x94F4B4: movaps  [esp+10Ch+var_B0], xmm1
0x94F4B9: mulps   xmm3, xmm0
0x94F4BC: push    ecx
0x94F4BD: addps   xmm1, xmm3
0x94F4C0: mov     ecx, edi
0x94F4C2: movaps  [esp+110h+var_D0], xmm0
0x94F4C7: movaps  [esp+110h+var_FC+0Ch], xmm1
0x94F4CC: call    dword ptr [edx+1Ch]
0x94F4CF: pop     edi
0x94F4D0: pop     esi
0x94F4D1: pop     ebx
0x94F4D2: mov     esp, ebp
0x94F4D4: pop     ebp
0x94F4D5: retn    0Ch
