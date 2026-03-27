0x7753F0: sub     esp, 34h
0x7753F3: push    ebx
0x7753F4: mov     ebx, ecx
0x7753F6: xor     ecx, ecx
0x7753F8: mov     eax, 25h ; '%'
0x7753FD: mov     [ebx+0Ch], eax
0x775400: mov     edx, 4
0x775405: mul     edx
0x775407: seto    cl
0x77540A: push    ebp
0x77540B: push    esi
0x77540C: push    edi
0x77540D: mov     [esp+44h+var_2C], ebx
0x775411: mov     dword ptr [ebx+8], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@W4_D3DFORMAT@@PAVRenderTargetInfo@DisplayFormatInfo@NiDX9DeviceDesc@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,_D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable'
0x775418: mov     dword ptr [ebx+14h], 0
0x77541F: neg     ecx
0x775421: or      ecx, eax
0x775423: push    ecx; Size
0x775424: call    FormHeapAlloc
0x775429: mov     ecx, [ebx+0Ch]
0x77542C: add     ecx, ecx
0x77542E: add     ecx, ecx
0x775430: push    ecx
0x775431: push    0
0x775433: push    eax
0x775434: mov     [ebx+10h], eax
0x775437: call    __memset
0x77543C: mov     edx, [esp+54h+arg_C]
0x775440: mov     al, [esp+54h+arg_10]
0x775444: mov     cl, [esp+54h+arg_14]
0x775448: mov     esi, [esp+54h+arg_0]
0x77544C: add     esp, 10h
0x77544F: mov     dword ptr [ebx+8], offset ??_7?$NiTPointerMap@W4_D3DFORMAT@@PAVRenderTargetInfo@DisplayFormatInfo@NiDX9DeviceDesc@@@@6B@; const NiTPointerMap<_D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable'
0x775456: xor     edi, edi
0x775458: mov     [ebx], edx
0x77545A: mov     [ebx+5], al
0x77545D: mov     [ebx+4], cl
0x775460: mov     [esp+44h+var_28], edi
0x775464: test    edi, edi
0x775466: jz      loc_7756D4
0x77546C: push    edi
0x77546D: call    sub_4979E0
0x775472: mov     ebp, [esp+48h+arg_8]
0x775476: mov     ecx, [esp+48h+arg_4]
0x77547A: mov     edx, [esi]
0x77547C: mov     edx, [edx+28h]
0x77547F: add     esp, 4
0x775482: push    eax
0x775483: push    1
0x775485: push    1
0x775487: mov     [esp+50h+a2], eax
0x77548B: mov     eax, [esp+50h+arg_C]
0x77548F: push    eax
0x775490: push    ebp
0x775491: push    ecx
0x775492: push    esi
0x775493: call    edx
0x775495: test    eax, eax
0x775497: jl      loc_7756D4
0x77549D: push    48h ; 'H'; Size
0x77549F: call    FormHeapAlloc
0x7754A4: xor     ecx, ecx
0x7754A6: add     esp, 4
0x7754A9: cmp     eax, ecx
0x7754AB: jz      short loc_7754E8
0x7754AD: mov     [eax], ecx
0x7754AF: mov     [eax+4], ecx
0x7754B2: mov     [eax+8], ecx
0x7754B5: mov     [eax+0Ch], ecx
0x7754B8: mov     [eax+10h], ecx
0x7754BB: mov     [eax+14h], ecx
0x7754BE: mov     [eax+18h], ecx
0x7754C1: mov     [eax+1Ch], ecx
0x7754C4: mov     [eax+20h], ecx
0x7754C7: mov     [eax+24h], ecx
0x7754CA: mov     [eax+28h], ecx
0x7754CD: mov     [eax+2Ch], ecx
0x7754D0: mov     [eax+30h], ecx
0x7754D3: mov     [eax+34h], ecx
0x7754D6: mov     [eax+38h], ecx
0x7754D9: mov     [eax+3Ch], ecx
0x7754DC: mov     [eax+40h], ecx
0x7754DF: mov     [eax+44h], ecx
0x7754E2: mov     [esp+44h+a3], eax
0x7754E6: jmp     short loc_7754EC
0x7754E8: mov     [esp+44h+a3], ecx
0x7754EC: xor     ebx, ebx
0x7754EE: mov     [esp+44h+var_30], ecx
0x7754F2: xor     edi, edi
0x7754F4: cmp     [esp+44h+arg_14], 0
0x7754F9: jz      short loc_77552A
0x7754FB: mov     eax, [esi]
0x7754FD: mov     eax, [eax+2Ch]
0x775500: lea     ecx, [esp+44h+var_10]
0x775504: push    ecx
0x775505: mov     ecx, [esp+48h+arg_C]
0x775509: lea     edx, [edi+1]
0x77550C: push    edx
0x77550D: mov     edx, [esp+4Ch+arg_4]
0x775511: push    1
0x775513: push    ecx
0x775514: push    ebp
0x775515: push    edx
0x775516: push    esi
0x775517: call    eax
0x775519: test    eax, eax
0x77551B: jl      short loc_77552A
0x77551D: mov     edx, 1
0x775522: mov     ecx, edi
0x775524: shl     edx, cl
0x775526: or      [esp+44h+var_30], edx
0x77552A: cmp     [esp+44h+arg_10], 0
0x77552F: jz      short loc_77555E
0x775531: mov     eax, [esi]
0x775533: mov     eax, [eax+2Ch]
0x775536: lea     ecx, [esp+44h+var_10]
0x77553A: push    ecx
0x77553B: mov     ecx, [esp+48h+arg_C]
0x77553F: lea     edx, [edi+1]
0x775542: push    edx
0x775543: mov     edx, [esp+4Ch+arg_4]
0x775547: push    0
0x775549: push    ecx
0x77554A: push    ebp
0x77554B: push    edx
0x77554C: push    esi
0x77554D: call    eax
0x77554F: test    eax, eax
0x775551: jl      short loc_77555E
0x775553: mov     edx, 1
0x775558: mov     ecx, edi
0x77555A: shl     edx, cl
0x77555C: or      ebx, edx
0x77555E: add     edi, 1
0x775561: cmp     edi, 10h
0x775564: jb      short loc_7754F4
0x775566: mov     dword ptr [esp+44h+var_24], ebx
0x77556A: mov     ebx, [esp+44h+a3]
0x77556E: mov     eax, offset dword_B29944
0x775573: sub     eax, ebx
0x775575: mov     byte ptr [esp+44h+arg_0], 0
0x77557A: mov     [esp+44h+var_C], eax
0x77557E: mov     [esp+44h+var_18], 9
0x775586: jmp     short loc_775594
0x775588: jmp     short loc_775590
0x77558A: align 10h
0x775590: mov     eax, [esp+44h+var_C]
0x775594: mov     edi, [eax+ebx]
0x775597: mov     ecx, [esp+44h+arg_C]
0x77559B: mov     edx, [esp+44h+arg_4]
0x77559F: mov     eax, [esi]
0x7755A1: mov     eax, [eax+28h]
0x7755A4: push    edi
0x7755A5: push    1
0x7755A7: push    2
0x7755A9: push    ecx
0x7755AA: push    ebp
0x7755AB: push    edx
0x7755AC: push    esi
0x7755AD: mov     [esp+60h+var_20], edi
0x7755B1: call    eax
0x7755B3: test    eax, eax
0x7755B5: jl      loc_775692
0x7755BB: mov     edx, [esp+44h+a2]
0x7755BF: mov     eax, [esp+44h+arg_C]
0x7755C3: mov     ecx, [esi]
0x7755C5: push    edi
0x7755C6: push    edx
0x7755C7: mov     edx, [esp+4Ch+arg_4]
0x7755CB: push    eax
0x7755CC: mov     eax, [ecx+30h]
0x7755CF: push    ebp
0x7755D0: push    edx
0x7755D1: push    esi
0x7755D2: call    eax
0x7755D4: test    eax, eax
0x7755D6: jl      loc_775692
0x7755DC: mov     cl, [esp+44h+arg_14]
0x7755E0: mov     dl, [esp+44h+arg_10]
0x7755E4: mov     [ebx], cl
0x7755E6: mov     byte ptr [esp+44h+arg_0], 1
0x7755EB: mov     [ebx+24h], dl
0x7755EE: mov     edi, 1
0x7755F3: mov     [esp+44h+var_1C], 10h
0x7755FB: jmp     short loc_775600
0x7755FD: align 10h
0x775600: lea     ecx, [edi-1]
0x775603: mov     ebp, 1
0x775608: shl     ebp, cl
0x77560A: mov     eax, ebp
0x77560C: or      eax, [esp+44h+var_30]
0x775610: jz      short loc_775645
0x775612: mov     eax, [esp+44h+var_20]
0x775616: mov     ecx, [esi]
0x775618: mov     ecx, [ecx+2Ch]
0x77561B: lea     edx, [esp+44h+var_8]
0x77561F: push    edx
0x775620: mov     edx, [esp+48h+arg_8]
0x775624: push    edi
0x775625: push    1
0x775627: push    eax
0x775628: mov     eax, [esp+54h+arg_4]
0x77562C: push    edx
0x77562D: push    eax
0x77562E: push    esi
0x77562F: call    ecx
0x775631: test    eax, eax
0x775633: jl      short loc_775645
0x775635: cmp     edi, 1
0x775638: jnz     short loc_775641
0x77563A: mov     dl, [esp+44h+var_8]
0x77563E: mov     [ebx+1], dl
0x775641: or      [ebx+2], bp
0x775645: mov     eax, ebp
0x775647: or      eax, dword ptr [esp+44h+var_24]
0x77564B: jz      short loc_775680
0x77564D: mov     eax, [esp+44h+var_20]
0x775651: mov     ecx, [esi]
0x775653: mov     ecx, [ecx+2Ch]
0x775656: lea     edx, [esp+44h+var_4]
0x77565A: push    edx
0x77565B: mov     edx, [esp+48h+arg_8]
0x77565F: push    edi
0x775660: push    0
0x775662: push    eax
0x775663: mov     eax, [esp+54h+arg_4]
0x775667: push    edx
0x775668: push    eax
0x775669: push    esi
0x77566A: call    ecx
0x77566C: test    eax, eax
0x77566E: jl      short loc_775680
0x775670: cmp     edi, 1
0x775673: jnz     short loc_77567C
0x775675: mov     dl, [esp+44h+var_4]
0x775679: mov     [ebx+25h], dl
0x77567C: or      [ebx+26h], bp
0x775680: add     edi, 1
0x775683: sub     [esp+44h+var_1C], 1
0x775688: jnz     loc_775600
0x77568E: mov     ebp, [esp+44h+arg_8]
0x775692: add     ebx, 4
0x775695: sub     [esp+44h+var_18], 1
0x77569A: jnz     loc_775590
0x7756A0: cmp     byte ptr [esp+44h+arg_0], 0
0x7756A5: jz      short loc_7756BF
0x7756A7: mov     eax, [esp+44h+a3]
0x7756AB: mov     ecx, [esp+44h+a2]
0x7756AF: push    eax; a3
0x7756B0: push    ecx; a2
0x7756B1: mov     ecx, [esp+4Ch+var_2C]
0x7756B5: add     ecx, 8; this
0x7756B8: call    NiTMap_SetAt
0x7756BD: jmp     short loc_7756CC
0x7756BF: mov     edx, [esp+44h+a3]
0x7756C3: push    edx
0x7756C4: call    FormHeapFree
0x7756C9: add     esp, 4
0x7756CC: mov     ebx, [esp+44h+var_2C]
0x7756D0: mov     edi, [esp+44h+var_28]
0x7756D4: add     edi, 1
0x7756D7: cmp     edi, 12h
0x7756DA: mov     [esp+44h+var_28], edi
0x7756DE: jb      loc_775464
0x7756E4: pop     edi
0x7756E5: pop     esi
0x7756E6: pop     ebp
0x7756E7: mov     eax, ebx
0x7756E9: pop     ebx
0x7756EA: add     esp, 34h
0x7756ED: retn    18h
