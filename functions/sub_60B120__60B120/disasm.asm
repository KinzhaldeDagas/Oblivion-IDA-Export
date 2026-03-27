0x60B120: push    ebp
0x60B121: mov     ebp, esp
0x60B123: and     esp, 0FFFFFFF0h
0x60B126: push    0FFFFFFFFh
0x60B128: push    offset SEH_60B120
0x60B12D: mov     eax, large fs:0
0x60B133: push    eax
0x60B134: sub     esp, 218h
0x60B13A: mov     eax, ds:0B30AACh
0x60B13F: xor     eax, esp
0x60B141: mov     [esp+224h+var_14], eax
0x60B148: push    ebx
0x60B149: push    esi
0x60B14A: push    edi
0x60B14B: mov     eax, ds:0B30AACh
0x60B150: xor     eax, esp
0x60B152: push    eax; ArgList
0x60B153: lea     eax, [esp+234h+var_C]
0x60B15A: mov     large fs:0, eax
0x60B160: mov     eax, [ebp+arg_8]
0x60B163: mov     esi, [ebp+arg_0]
0x60B166: mov     edi, [ebp+arg_4]
0x60B169: mov     ebx, ecx
0x60B16B: mov     ecx, [ebp+arg_C]
0x60B16E: push    54h ; 'T'; Size
0x60B170: mov     [esp+238h+var_20C], esi
0x60B174: mov     [esp+238h+var_1F0], edi
0x60B178: mov     [esp+238h+var_1F8], eax
0x60B17C: mov     [esp+238h+var_218], ecx
0x60B180: call    FormHeapAlloc
0x60B185: mov     [ebx+5Ch], eax
0x60B188: mov     dword ptr [eax], 1
0x60B18E: mov     edx, [ebx+5Ch]
0x60B191: xor     eax, eax
0x60B193: mov     [edx+2Ch], eax
0x60B196: mov     ecx, [ebx+5Ch]
0x60B199: mov     [ecx+28h], eax
0x60B19C: mov     eax, [ebx+5Ch]
0x60B19F: mov     edx, [edi]
0x60B1A1: mov     [eax+10h], edx
0x60B1A4: mov     ecx, [edi+4]
0x60B1A7: mov     [eax+14h], ecx
0x60B1AA: mov     edx, [edi+8]
0x60B1AD: mov     [eax+18h], edx
0x60B1B0: mov     ecx, [esi]
0x60B1B2: add     eax, 10h
0x60B1B5: mov     eax, [ebx+5Ch]
0x60B1B8: mov     [eax+4], ecx
0x60B1BB: mov     edx, [esi+4]
0x60B1BE: mov     [eax+8], edx
0x60B1C1: mov     ecx, [esi+8]
0x60B1C4: add     eax, 4
0x60B1C7: mov     [eax+8], ecx
0x60B1CA: mov     edi, [ebx+5Ch]
0x60B1CD: add     edi, 30h ; '0'
0x60B1D0: mov     ecx, 9
0x60B1D5: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x60B1DA: rep movsd
0x60B1DC: mov     eax, [ebx+5Ch]
0x60B1DF: mov     edx, ds:0B3F9A8h
0x60B1E5: add     eax, 1Ch
0x60B1E8: mov     [eax], edx
0x60B1EA: mov     ecx, ds:0B3F9ACh
0x60B1F0: mov     [eax+4], ecx
0x60B1F3: mov     edx, ds:0B3F9B0h
0x60B1F9: add     esp, 4
0x60B1FC: mov     ecx, ebx; this
0x60B1FE: mov     [eax+8], edx
0x60B201: call    MobileObject_GetCharProxy
0x60B206: test    eax, eax
0x60B208: jz      loc_60B2F8
0x60B20E: mov     ecx, ebx; this
0x60B210: call    MobileObject_GetCharProxy
0x60B215: test    eax, eax
0x60B217: jz      short loc_60B229
0x60B219: mov     eax, [eax+8]
0x60B21C: test    eax, eax
0x60B21E: jz      short loc_60B229
0x60B220: mov     ecx, eax
0x60B222: call    sub_8AC0A0
0x60B227: jmp     short loc_60B22E
0x60B229: mov     eax, offset stru_BA7A40
0x60B22E: movaps  xmm0, xmmword ptr [eax]
0x60B231: movss   [esp+234h+var_1C0], xmm0
0x60B237: fld     [esp+234h+var_1C0]
0x60B23B: fld     dword ptr ds:0A7DEB4h
0x60B241: movaps  [esp+234h+var_1D0], xmm0
0x60B246: fchs
0x60B248: fucompp
0x60B24A: fnstsw  ax
0x60B24C: test    ah, 44h
0x60B24F: jp      loc_60B2E4
0x60B255: mov     eax, [ebx]
0x60B257: mov     edx, [eax+154h]
0x60B25D: mov     ecx, ebx
0x60B25F: call    edx
0x60B261: test    eax, eax
0x60B263: jz      loc_60B2F8
0x60B269: fld     dword ptr [ebx+6Ch]
0x60B26C: mov     eax, [ebx]
0x60B26E: fstp    [esp+234h+var_210]
0x60B272: mov     edx, [eax+154h]
0x60B278: fld     [esp+234h+var_210]
0x60B27C: mov     ecx, ebx
0x60B27E: fld     st
0x60B280: fmul    dword ptr ds:0B258DCh
0x60B286: fstp    [esp+234h+var_210]
0x60B28A: fld     st
0x60B28C: fmul    dword ptr ds:0B258E0h
0x60B292: fstp    [esp+234h+var_1FC]
0x60B296: fmul    dword ptr ds:0B258E4h
0x60B29C: fstp    [esp+234h+var_214]
0x60B2A0: fld     [esp+234h+var_210]
0x60B2A4: fstp    [esp+234h+a3]
0x60B2A8: fld     [esp+234h+var_1FC]
0x60B2AC: fstp    [esp+234h+var_204]
0x60B2B0: fld     [esp+234h+var_214]
0x60B2B4: fstp    [esp+234h+var_200]
0x60B2B8: call    edx
0x60B2BA: lea     ecx, [esp+234h+a3]
0x60B2BE: push    ecx
0x60B2BF: lea     edx, [esp+238h+var_1DC]
0x60B2C3: push    edx
0x60B2C4: lea     ecx, [eax+64h]
0x60B2C7: call    sub_7101F0
0x60B2CC: mov     ecx, [ebx+5Ch]
0x60B2CF: mov     edx, [eax]
0x60B2D1: add     ecx, 1Ch
0x60B2D4: mov     [ecx], edx
0x60B2D6: mov     edx, [eax+4]
0x60B2D9: mov     [ecx+4], edx
0x60B2DC: mov     eax, [eax+8]
0x60B2DF: mov     [ecx+8], eax
0x60B2E2: jmp     short loc_60B2F8
0x60B2E4: mov     edx, [ebx+5Ch]
0x60B2E7: lea     ecx, [esp+234h+var_1D0]
0x60B2EB: push    ecx
0x60B2EC: add     edx, 1Ch
0x60B2EF: push    edx
0x60B2F0: call    sub_43F3E0
0x60B2F5: add     esp, 8
0x60B2F8: mov     eax, [ebx]
0x60B2FA: mov     edx, [eax+154h]
0x60B300: mov     ecx, ebx
0x60B302: mov     dword ptr [ebx+60h], 1
0x60B309: mov     [esp+234h+var_214], 0
0x60B311: call    edx
0x60B313: mov     esi, [esp+234h+var_1F8]
0x60B317: test    esi, esi
0x60B319: mov     [esp+234h+var_210], eax
0x60B31D: jz      loc_60BA65
0x60B323: test    eax, eax
0x60B325: jz      loc_60BA65
0x60B32B: mov     ecx, [ebx+78h]
0x60B32E: test    ecx, ecx
0x60B330: jz      short loc_60B365
0x60B332: mov     eax, [ecx]
0x60B334: mov     edx, [eax+330h]
0x60B33A: call    edx
0x60B33C: test    eax, eax
0x60B33E: jz      short loc_60B365
0x60B340: mov     eax, [esi]
0x60B342: mov     edx, [eax+174h]
0x60B348: mov     edi, [ebx+78h]
0x60B34B: push    0; float
0x60B34D: mov     ecx, esi
0x60B34F: call    edx
0x60B351: push    eax; int
0x60B352: mov     eax, [edi]
0x60B354: mov     edx, [eax+330h]
0x60B35A: mov     ecx, edi
0x60B35C: call    edx
0x60B35E: mov     ecx, eax
0x60B360: call    sub_618120
0x60B365: mov     eax, [ebx+5Ch]
0x60B368: mov     [eax+28h], esi
0x60B36B: mov     ecx, [ebx+5Ch]
0x60B36E: mov     eax, [ecx+28h]
0x60B371: mov     edx, [ebx]
0x60B373: add     eax, 44h ; 'D'
0x60B376: push    100h
0x60B37B: push    eax
0x60B37C: mov     eax, [edx+170h]
0x60B382: mov     ecx, ebx
0x60B384: call    eax
0x60B386: push    eax; float
0x60B387: call    Script_AddEventToExtraScript
0x60B38C: mov     edi, [esp+240h+var_218]
0x60B390: add     esp, 0Ch
0x60B393: test    edi, edi
0x60B395: jz      short loc_60B3BC
0x60B397: mov     ecx, [edi+8]
0x60B39A: push    ecx
0x60B39B: call    sub_47FA60
0x60B3A0: add     esp, 4
0x60B3A3: test    eax, eax
0x60B3A5: jz      short loc_60B3BC
0x60B3A7: mov     ecx, eax
0x60B3A9: call    sub_452A60
0x60B3AE: test    eax, eax
0x60B3B0: jz      short loc_60B3BC
0x60B3B2: mov     edx, [ebx+5Ch]
0x60B3B5: mov     [edx+2Ch], eax
0x60B3B8: mov     [esp+234h+var_214], edi
0x60B3BC: mov     eax, [ebx+5Ch]
0x60B3BF: cmp     dword ptr [eax+2Ch], 0
0x60B3C3: jnz     short loc_60B3E7
0x60B3C5: mov     ecx, [esi+3Ch]
0x60B3C8: mov     [eax+2Ch], ecx
0x60B3CB: mov     edx, [ebx+5Ch]
0x60B3CE: mov     eax, [edx+2Ch]
0x60B3D1: push    eax
0x60B3D2: call    sub_480340
0x60B3D7: xor     esi, esi
0x60B3D9: add     esp, 4
0x60B3DC: cmp     eax, esi
0x60B3DE: jz      short loc_60B406
0x60B3E0: mov     ecx, [eax+10h]
0x60B3E3: mov     [esp+234h+var_214], ecx
0x60B3E7: mov     ecx, [esp+234h+var_214]
0x60B3EB: test    ecx, ecx
0x60B3ED: jz      short loc_60B41D
0x60B3EF: mov     eax, [ecx+8]
0x60B3F2: test    eax, eax
0x60B3F4: jz      short loc_60B41D
0x60B3F6: add     eax, 14h
0x60B3F9: jz      short loc_60B41D
0x60B3FB: mov     eax, [eax]
0x60B3FD: test    eax, eax
0x60B3FF: jz      short loc_60B41D
0x60B401: mov     esi, [eax+8]
0x60B404: jmp     short loc_60B41F
0x60B406: mov     edx, [ebx+5Ch]
0x60B409: push    edx
0x60B40A: call    FormHeapFree
0x60B40F: add     esp, 4
0x60B412: mov     [ebx+5Ch], esi
0x60B415: mov     [ebx+60h], esi
0x60B418: jmp     loc_60BA65
0x60B41D: xor     esi, esi
0x60B41F: test    ecx, ecx
0x60B421: jz      short loc_60B428
0x60B423: mov     eax, [ecx+8]
0x60B426: jmp     short loc_60B42A
0x60B428: xor     eax, eax
0x60B42A: mov     eax, [eax+50h]
0x60B42D: movaps  xmm0, xmmword ptr [eax+10h]
0x60B431: movaps  [esp+234h+var_160], xmm0
0x60B439: movaps  xmm0, xmmword ptr [eax+20h]
0x60B43D: movaps  [esp+234h+var_150], xmm0
0x60B445: movaps  xmm0, xmmword ptr [eax+30h]
0x60B449: movaps  [esp+234h+var_140], xmm0
0x60B451: movaps  xmm0, xmmword ptr [eax+40h]
0x60B455: mov     eax, [esp+234h+var_210]
0x60B459: add     eax, 64h ; 'd'
0x60B45C: push    eax
0x60B45D: lea     eax, [esp+238h+var_A0]
0x60B464: push    eax
0x60B465: movaps  [esp+23Ch+var_130], xmm0
0x60B46D: call    sub_5398E0
0x60B472: add     esp, 8
0x60B475: lea     ecx, [esp+234h+var_A0]
0x60B47C: push    ecx
0x60B47D: lea     edx, [esp+238h+var_160]
0x60B484: push    edx
0x60B485: lea     ecx, [esp+23Ch+var_E0]
0x60B48C: call    sub_8B1FF0
0x60B491: fld1
0x60B493: fstp    [esp+234h+var_19C]
0x60B49A: lea     eax, [esp+234h+var_1D0]
0x60B49E: fldz
0x60B4A0: push    eax
0x60B4A1: fst     dword ptr [esp+238h+var_1D0]
0x60B4A5: lea     ecx, [esp+238h+var_E0]
0x60B4AC: fld     dword ptr ds:0A6F3E0h
0x60B4B2: xor     edi, edi
0x60B4B4: fstp    dword ptr [esp+238h+var_1D0+4]
0x60B4B8: push    ecx
0x60B4B9: lea     ecx, [esp+23Ch+var_190]
0x60B4C0: mov     [esp+23Ch+var_170], edi
0x60B4C7: mov     [esp+23Ch+var_16C], edi
0x60B4CE: fst     dword ptr [esp+23Ch+var_1D0+8]
0x60B4D2: mov     [esp+23Ch+var_1A0], 0FFFFFFFFh
0x60B4DD: fst     dword ptr [esp+23Ch+var_1D0+0Ch]
0x60B4E1: fst     [esp+23Ch+var_1C0]
0x60B4E5: fld     dword ptr ds:0A6F3DCh
0x60B4EB: fstp    [esp+23Ch+var_1BC]
0x60B4F2: fst     [esp+23Ch+var_1B8]
0x60B4F9: fstp    [esp+23Ch+var_1B4]
0x60B500: call    sub_88FCC0
0x60B505: lea     edx, [esp+234h+var_1C0]
0x60B509: push    edx
0x60B50A: lea     eax, [esp+238h+var_E0]
0x60B511: push    eax
0x60B512: lea     ecx, [esp+23Ch+var_180]
0x60B519: call    sub_88FCC0
0x60B51E: lea     ecx, [esp+234h+var_1B0]
0x60B525: push    ecx
0x60B526: lea     edx, [esp+238h+var_190]
0x60B52D: push    edx
0x60B52E: mov     ecx, esi
0x60B530: call    sub_6077F0
0x60B535: fld1
0x60B537: fcomp   [esp+234h+var_19C]
0x60B53E: fnstsw  ax
0x60B540: test    ah, 41h
0x60B543: jz      short loc_60B55C
0x60B545: mov     eax, [ebx+5Ch]
0x60B548: push    eax
0x60B549: call    FormHeapFree
0x60B54E: add     esp, 4
0x60B551: mov     [ebx+5Ch], edi
0x60B554: mov     [ebx+60h], edi
0x60B557: jmp     loc_60BA65
0x60B55C: cmp     [esp+234h+var_1A0], 0FFFFFFFFh
0x60B564: mov     edi, [esi+10h]
0x60B567: mov     [esp+234h+var_1FC], edi
0x60B56B: jz      short loc_60B5A6
0x60B56D: mov     edx, [esi]
0x60B56F: mov     eax, [edx+88h]
0x60B575: mov     ecx, esi
0x60B577: call    eax
0x60B579: test    eax, eax
0x60B57B: jz      short loc_60B599
0x60B57D: mov     ecx, [esp+234h+var_1A0]
0x60B584: mov     edx, [eax]
0x60B586: mov     edx, [edx+9Ch]
0x60B58C: push    ecx
0x60B58D: mov     ecx, eax
0x60B58F: call    edx
0x60B591: mov     [esp+234h+var_1FC], eax
0x60B595: mov     edi, eax
0x60B597: jmp     short loc_60B5A6
0x60B599: push    offset aTheArrowRaycas; "The arrow raycast has returned a sub-sh"...
0x60B59E: call    PrintError
0x60B5A3: add     esp, 4
0x60B5A6: mov     eax, [ebx+5Ch]
0x60B5A9: fld     dword ptr [eax+20h]
0x60B5AC: add     eax, 1Ch
0x60B5AF: fld     dword ptr [eax]
0x60B5B1: fld     dword ptr [eax+8]
0x60B5B4: fld     st(1)
0x60B5B6: fmulp   st(2), st
0x60B5B8: fld     st(2)
0x60B5BA: fmulp   st(3), st
0x60B5BC: fxch    st(1)
0x60B5BE: faddp   st(2), st
0x60B5C0: fmul    st, st
0x60B5C2: faddp   st(1), st
0x60B5C4: fstp    [esp+234h+var_218]
0x60B5C8: fld     [esp+234h+var_218]
0x60B5CC: call    __CIsqrt
0x60B5D1: fstp    [esp+234h+var_218]
0x60B5D5: mov     eax, [esp+234h+var_214]
0x60B5D9: fld     [esp+234h+var_218]
0x60B5DD: mov     esi, [esp+234h+var_20C]
0x60B5E1: fstp    [esp+234h+var_218]
0x60B5E5: mov     ecx, [esi]
0x60B5E7: fld     [esp+234h+var_218]
0x60B5EB: mov     edx, [esi+4]
0x60B5EE: push    edi; char
0x60B5EF: push    eax; int
0x60B5F0: sub     esp, 0Ch
0x60B5F3: mov     eax, esp
0x60B5F5: mov     [eax], ecx
0x60B5F7: mov     ecx, [esi+8]
0x60B5FA: mov     [eax+4], edx
0x60B5FD: mov     [eax+8], ecx
0x60B600: push    ecx
0x60B601: mov     ecx, ebx
0x60B603: fstp    [esp+24Ch+var_24C]; float
0x60B606: call    sub_609D50
0x60B60B: fld     dword ptr [ebx+88h]
0x60B611: fchs
0x60B613: lea     ecx, [esp+234h+a3]
0x60B617: fstp    [esp+234h+var_20C]
0x60B61B: fld     dword ptr [ebx+8Ch]
0x60B621: fchs
0x60B623: fstp    [esp+234h+var_218]
0x60B627: fld     dword ptr [ebx+90h]
0x60B62D: fchs
0x60B62F: fstp    [esp+234h+var_1F4]
0x60B633: fld     [esp+234h+var_20C]
0x60B637: fstp    [esp+234h+a3]
0x60B63B: fld     [esp+234h+var_218]
0x60B63F: fstp    [esp+234h+var_204]
0x60B643: fld     [esp+234h+var_1F4]
0x60B647: fstp    [esp+234h+var_200]
0x60B64B: call    sub_43F350
0x60B650: mov     eax, [esp+234h+var_1F0]
0x60B654: fstp    st
0x60B656: fld     [esp+234h+a3]
0x60B65A: lea     ecx, [esp+234h+a3]
0x60B65E: fadd    dword ptr [eax]
0x60B660: fstp    [esp+234h+a3]
0x60B664: fld     dword ptr [eax+4]
0x60B667: fadd    [esp+234h+var_204]
0x60B66B: fstp    [esp+234h+var_204]
0x60B66F: fld     dword ptr [eax+8]
0x60B672: fadd    [esp+234h+var_200]
0x60B676: fstp    [esp+234h+var_200]
0x60B67A: call    sub_43F350
0x60B67F: push    edi
0x60B680: fstp    st
0x60B682: call    sub_5361B0
0x60B687: mov     edi, eax
0x60B689: add     esp, 4
0x60B68C: test    edi, edi
0x60B68E: jz      loc_60B747
0x60B694: mov     ecx, ebx; this
0x60B696: call    TESObjectREFR_GetParentCell
0x60B69B: push    ebx; TESObjectREFR *
0x60B69C: call    sub_4C9BE0
0x60B6A1: add     esp, 4
0x60B6A4: push    3
0x60B6A6: push    eax
0x60B6A7: mov     ecx, ebx; this
0x60B6A9: call    TESObjectREFR_GetParentCell
0x60B6AE: mov     ecx, eax
0x60B6B0: call    sub_441800
0x60B6B5: push    20h ; ' '; Size
0x60B6B7: mov     [esp+238h+var_1F4], eax
0x60B6BB: call    FormHeapAlloc
0x60B6C0: add     esp, 4
0x60B6C3: mov     [esp+234h+var_20C], eax
0x60B6C7: test    eax, eax
0x60B6C9: mov     [esp+234h+var_4], 0
0x60B6D4: jz      short loc_60B72F
0x60B6D6: fld1
0x60B6D8: mov     edx, [esi]
0x60B6DA: mov     ecx, [esi+4]
0x60B6DD: push    0; float
0x60B6DF: sub     esp, 10h
0x60B6E2: fstp    [esp+248h+a2]; float
0x60B6E6: mov     eax, esp
0x60B6E8: fld     dword ptr ds:0A31E2Ch
0x60B6EE: mov     [eax], edx
0x60B6F0: mov     edx, [esi+8]
0x60B6F3: mov     [eax+4], ecx
0x60B6F6: mov     ecx, [esp+248h+a3]
0x60B6FA: mov     [eax+8], edx
0x60B6FD: mov     edx, [esp+248h+var_204]
0x60B701: sub     esp, 0Ch
0x60B704: mov     eax, esp
0x60B706: mov     [eax], ecx
0x60B708: mov     ecx, [esp+254h+var_200]
0x60B70C: mov     [eax+4], edx
0x60B70F: mov     edx, [esp+254h+var_1F4]
0x60B713: push    edi; float
0x60B714: push    edx; int
0x60B715: mov     [eax+8], ecx
0x60B718: push    ecx
0x60B719: mov     ecx, ebx; this
0x60B71B: fstp    [esp+260h+var_260]; float
0x60B71E: call    TESObjectREFR_GetParentCell
0x60B723: mov     ecx, [esp+260h+var_20C]
0x60B727: push    eax; int
0x60B728: call    sub_5713F0
0x60B72D: jmp     short loc_60B731
0x60B72F: xor     eax, eax
0x60B731: push    eax
0x60B732: mov     ecx, offset ActorProcessManager_ptr
0x60B737: mov     [esp+238h+var_4], 0FFFFFFFFh
0x60B742: call    sub_678D30
0x60B747: mov     ecx, [ebx+78h]
0x60B74A: test    ecx, ecx
0x60B74C: jz      loc_60B894
0x60B752: mov     eax, [ecx+5Ch]
0x60B755: mov     edx, [eax+30h]
0x60B758: add     ecx, 5Ch ; '\'
0x60B75B: call    edx
0x60B75D: mov     ecx, [ebx+78h]
0x60B760: add     ecx, 5Ch ; '\'
0x60B763: mov     [esp+234h+var_1F4], eax
0x60B767: mov     eax, [ecx]
0x60B769: mov     edx, [eax+38h]
0x60B76C: call    edx
0x60B76E: mov     [esp+234h+var_20C], eax
0x60B772: mov     eax, [ebx+7Ch]
0x60B775: test    eax, eax
0x60B777: jz      short loc_60B7C5
0x60B779: mov     ecx, [ebx+78h]
0x60B77C: mov     edx, [ecx+5Ch]
0x60B77F: add     ecx, 5Ch ; '\'
0x60B782: add     eax, 18h
0x60B785: push    eax
0x60B786: mov     eax, [edx+34h]
0x60B789: call    eax
0x60B78B: mov     ecx, [ebx+78h]
0x60B78E: mov     edi, [ecx+5Ch]
0x60B791: mov     ecx, [esp+234h+var_1F8]
0x60B795: mov     edx, [ecx]
0x60B797: mov     eax, [edx+124h]
0x60B79D: add     edi, 3Ch ; '<'
0x60B7A0: call    eax
0x60B7A2: mov     ecx, [ebx+78h]
0x60B7A5: mov     edx, [edi]
0x60B7A7: push    eax
0x60B7A8: add     ecx, 5Ch ; '\'
0x60B7AB: call    edx
0x60B7AD: mov     eax, [ebx]
0x60B7AF: mov     edx, [eax+170h]
0x60B7B5: mov     ecx, ebx
0x60B7B7: call    edx
0x60B7B9: mov     ecx, [ebx+78h]
0x60B7BC: push    eax
0x60B7BD: add     ecx, 5Ch ; '\'
0x60B7C0: call    MagicCaster_UseActiveMagicItem
0x60B7C5: mov     edx, [ebx+84h]
0x60B7CB: test    edx, edx
0x60B7CD: jz      short loc_60B81A
0x60B7CF: mov     eax, [ebx+78h]
0x60B7D2: lea     ecx, [eax+5Ch]
0x60B7D5: mov     eax, [ecx]
0x60B7D7: add     edx, 24h ; '$'
0x60B7DA: push    edx
0x60B7DB: mov     edx, [eax+34h]
0x60B7DE: call    edx
0x60B7E0: mov     eax, [ebx+78h]
0x60B7E3: mov     ecx, [esp+234h+var_1F8]
0x60B7E7: mov     edi, [eax+5Ch]
0x60B7EA: mov     edx, [ecx]
0x60B7EC: mov     eax, [edx+124h]
0x60B7F2: add     edi, 3Ch ; '<'
0x60B7F5: call    eax
0x60B7F7: mov     ecx, [ebx+78h]
0x60B7FA: mov     edx, [edi]
0x60B7FC: push    eax
0x60B7FD: add     ecx, 5Ch ; '\'
0x60B800: call    edx
0x60B802: mov     eax, [ebx]
0x60B804: mov     edx, [eax+170h]
0x60B80A: mov     ecx, ebx
0x60B80C: call    edx
0x60B80E: mov     ecx, [ebx+78h]
0x60B811: push    eax
0x60B812: add     ecx, 5Ch ; '\'
0x60B815: call    MagicCaster_UseActiveMagicItem
0x60B81A: mov     edx, [ebx+80h]
0x60B820: test    edx, edx
0x60B822: jz      short loc_60B86F
0x60B824: mov     eax, [ebx+78h]
0x60B827: lea     ecx, [eax+5Ch]
0x60B82A: mov     eax, [ecx]
0x60B82C: add     edx, 18h
0x60B82F: push    edx
0x60B830: mov     edx, [eax+34h]
0x60B833: call    edx
0x60B835: mov     eax, [ebx+78h]
0x60B838: mov     ecx, [esp+234h+var_1F8]
0x60B83C: mov     edi, [eax+5Ch]
0x60B83F: mov     edx, [ecx]
0x60B841: mov     eax, [edx+124h]
0x60B847: add     edi, 3Ch ; '<'
0x60B84A: call    eax
0x60B84C: mov     ecx, [ebx+78h]
0x60B84F: mov     edx, [edi]
0x60B851: push    eax
0x60B852: add     ecx, 5Ch ; '\'
0x60B855: call    edx
0x60B857: mov     eax, [ebx]
0x60B859: mov     edx, [eax+170h]
0x60B85F: mov     ecx, ebx
0x60B861: call    edx
0x60B863: mov     ecx, [ebx+78h]
0x60B866: push    eax
0x60B867: add     ecx, 5Ch ; '\'
0x60B86A: call    MagicCaster_UseActiveMagicItem
0x60B86F: mov     eax, [ebx+78h]
0x60B872: mov     edx, [esp+234h+var_1F4]
0x60B876: lea     ecx, [eax+5Ch]
0x60B879: mov     eax, [ecx]
0x60B87B: mov     eax, [eax+34h]
0x60B87E: push    edx
0x60B87F: call    eax
0x60B881: mov     eax, [ebx+78h]
0x60B884: mov     edx, [eax+5Ch]
0x60B887: mov     edx, [edx+3Ch]
0x60B88A: lea     ecx, [eax+5Ch]
0x60B88D: mov     eax, [esp+234h+var_20C]
0x60B891: push    eax
0x60B892: call    edx
0x60B894: mov     edi, [esp+234h+var_1F8]
0x60B898: mov     ecx, edi; this
0x60B89A: call    TESObjectREFR_GetParentCell
0x60B89F: test    eax, eax
0x60B8A1: jz      short loc_60B8B3
0x60B8A3: mov     ecx, eax
0x60B8A5: call    sub_4440C0
0x60B8AA: test    eax, eax
0x60B8AC: jz      short loc_60B8B3
0x60B8AE: mov     ecx, [eax+24h]
0x60B8B1: jmp     short loc_60B8B5
0x60B8B3: xor     ecx, ecx
0x60B8B5: test    ecx, ecx
0x60B8B7: jz      short loc_60B8D9
0x60B8B9: push    edi
0x60B8BA: call    sub_536AE0
0x60B8BF: test    al, al
0x60B8C1: jz      short loc_60B8D9
0x60B8C3: lea     eax, [edi+44h]
0x60B8C6: test    eax, eax
0x60B8C8: jz      short loc_60B8D9
0x60B8CA: push    10000000h
0x60B8CF: push    eax
0x60B8D0: push    edi; a2
0x60B8D1: call    Script_AddEventToExtraScript
0x60B8D6: add     esp, 0Ch
0x60B8D9: cmp     dword ptr [ebx+7Ch], 0
0x60B8DD: jz      short loc_60B8E6
0x60B8DF: mov     dword ptr [ebx+60h], 3
0x60B8E6: mov     edi, [esp+234h+var_210]
0x60B8EA: push    offset dword_B258DC
0x60B8EF: lea     eax, [esp+238h+var_1DC]
0x60B8F3: add     edi, 64h ; 'd'
0x60B8F6: push    eax; float
0x60B8F7: mov     ecx, edi
0x60B8F9: call    sub_7101F0
0x60B8FE: mov     ecx, [esp+234h+var_214]
0x60B902: mov     edx, [eax]
0x60B904: push    ecx; int
0x60B905: sub     esp, 0Ch
0x60B908: mov     ecx, esp
0x60B90A: mov     [ecx], edx
0x60B90C: mov     edx, [eax+4]
0x60B90F: mov     eax, [eax+8]
0x60B912: mov     [ecx+4], edx
0x60B915: mov     edx, [esi+4]
0x60B918: mov     [ecx+8], eax
0x60B91B: mov     ecx, [esi]
0x60B91D: sub     esp, 0Ch
0x60B920: mov     eax, esp
0x60B922: mov     [eax], ecx
0x60B924: mov     ecx, [esi+8]
0x60B927: mov     [eax+4], edx
0x60B92A: mov     [eax+8], ecx
0x60B92D: mov     ecx, ebx
0x60B92F: call    sub_6088F0
0x60B934: mov     eax, [esp+234h+var_1FC]
0x60B938: cmp     eax, 1Eh; switch 31 cases
0x60B93B: ja      short def_60B944; jumptable 0060B944 default case, cases 1,2,4,6-9,12,14,16,17,19,21-24,27,29
0x60B93D: movzx   edx, ds:byte_60BA94[eax]
0x60B944: jmp     ds:jpt_60B944[edx*4]; switch jump
0x60B94B: mov     eax, [esp+234h+var_1F0]; jumptable 0060B944 cases 0,3,5,10,11,13,15,18,20,25,26,28,30
0x60B94F: push    eax
0x60B950: jmp     loc_60BA5D
0x60B955: lea     ecx, [esp+234h+var_1E0]; jumptable 0060B944 default case, cases 1,2,4,6-9,12,14,16,17,19,21-24,27,29
0x60B959: push    ecx
0x60B95A: mov     ecx, [esp+238h+var_214]
0x60B95E: call    sub_497340
0x60B963: mov     eax, [eax]
0x60B965: and     eax, 3Fh
0x60B968: jz      loc_60BA58
0x60B96E: cmp     eax, 3
0x60B971: jle     short loc_60B97C
0x60B973: cmp     eax, 6
0x60B976: jle     loc_60BA58
0x60B97C: fldz
0x60B97E: lea     edx, [esp+234h+a4]
0x60B982: fst     [esp+234h+a4]
0x60B986: push    edx; a4
0x60B987: fld     [esp+238h+var_19C]
0x60B98E: lea     eax, [esp+238h+a3]
0x60B992: fmul    qword ptr ds:0A687B0h
0x60B998: push    eax; a3
0x60B999: mov     ecx, edi
0x60B99B: fsub    qword ptr ds:0A3F428h
0x60B9A1: fstp    [esp+23Ch+var_1E8]
0x60B9A5: fstp    [esp+23Ch+var_1E4]
0x60B9A9: fld     [esp+23Ch+var_1E8]
0x60B9AD: fadd    qword ptr ds:0A2F910h
0x60B9B3: fstp    [esp+23Ch+var_1E8]
0x60B9B7: call    sub_53D4B0
0x60B9BC: mov     esi, [esp+234h+a3]
0x60B9C0: mov     ecx, [esp+234h+var_204]
0x60B9C4: mov     edx, [esp+234h+var_200]
0x60B9C8: sub     esp, 0Ch
0x60B9CB: mov     eax, esp
0x60B9CD: mov     [eax], esi
0x60B9CF: mov     [eax+4], ecx
0x60B9D2: mov     ecx, ebx; this
0x60B9D4: mov     [eax+8], edx
0x60B9D7: call    TESObjectREFR_SetPosition
0x60B9DC: fldz
0x60B9DE: mov     ecx, [esp+234h+var_210]; this
0x60B9E2: mov     eax, [esp+234h+var_204]
0x60B9E6: mov     edx, [esp+234h+var_200]
0x60B9EA: push    0; a3
0x60B9EC: mov     [ecx+54h], esi
0x60B9EF: push    ecx
0x60B9F0: mov     [ecx+58h], eax
0x60B9F3: fstp    [esp+23Ch+a2]; a2
0x60B9F6: mov     [ecx+5Ch], edx
0x60B9F9: call    NiAVObject_UpdateNiAVObject
0x60B9FE: lea     eax, [esp+234h+var_60]
0x60BA05: push    edi
0x60BA06: push    eax
0x60BA07: call    sub_5398E0
0x60BA0C: add     esp, 8
0x60BA0F: lea     ecx, [esp+234h+var_60]
0x60BA16: push    ecx
0x60BA17: lea     edx, [esp+238h+var_160]
0x60BA1E: push    edx
0x60BA1F: lea     ecx, [esp+23Ch+var_120]
0x60BA26: call    sub_8B1FF0
0x60BA2B: mov     ecx, [ebx+5Ch]
0x60BA2E: lea     eax, [esp+234h+var_F0]
0x60BA35: push    eax
0x60BA36: add     ecx, 4
0x60BA39: push    ecx
0x60BA3A: call    sub_43F3E0
0x60BA3F: mov     eax, [ebx+5Ch]
0x60BA42: lea     edx, [esp+23Ch+var_120]
0x60BA49: push    edx
0x60BA4A: add     eax, 30h ; '0'
0x60BA4D: push    eax
0x60BA4E: call    sub_607740
0x60BA53: add     esp, 10h
0x60BA56: jmp     short loc_60BA65
0x60BA58: mov     ecx, [esp+234h+var_1F0]
0x60BA5C: push    ecx
0x60BA5D: push    esi
0x60BA5E: mov     ecx, ebx
0x60BA60: call    sub_608DA0
0x60BA65: mov     ecx, dword ptr [esp+234h+var_C]
0x60BA6C: mov     large fs:0, ecx
0x60BA73: pop     ecx
0x60BA74: pop     edi
0x60BA75: pop     esi
0x60BA76: pop     ebx
0x60BA77: mov     ecx, [esp+224h+var_14]
0x60BA7E: xor     ecx, esp
0x60BA80: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60BA85: mov     esp, ebp
0x60BA87: pop     ebp
0x60BA88: retn    10h
