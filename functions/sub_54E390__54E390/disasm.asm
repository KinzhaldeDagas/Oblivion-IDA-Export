0x54E390: push    0FFFFFFFFh
0x54E392: push    offset SEH_54E390
0x54E397: mov     eax, large fs:0
0x54E39D: push    eax
0x54E39E: sub     esp, 1Ch
0x54E3A1: push    ebx
0x54E3A2: push    ebp
0x54E3A3: push    esi
0x54E3A4: push    edi
0x54E3A5: mov     eax, ds:0B30AACh
0x54E3AA: xor     eax, esp
0x54E3AC: push    eax
0x54E3AD: lea     eax, [esp+3Ch+var_C]
0x54E3B1: mov     large fs:0, eax
0x54E3B7: mov     eax, [ecx+10h]
0x54E3BA: test    eax, eax
0x54E3BC: lea     esi, [ecx+0Ch]
0x54E3BF: jz      short loc_54E3CF
0x54E3C1: mov     edx, [esi+8]
0x54E3C4: sub     edx, eax
0x54E3C6: sar     edx, 4
0x54E3C9: jnz     loc_54E537
0x54E3CF: mov     ecx, [ecx+8]
0x54E3D2: test    ecx, ecx
0x54E3D4: jz      loc_54E537
0x54E3DA: push    offset unk_B25E00
0x54E3DF: push    ecx
0x54E3E0: call    sub_480000
0x54E3E5: mov     edi, eax
0x54E3E7: add     esp, 8
0x54E3EA: test    edi, edi
0x54E3EC: mov     [esp+3Ch+var_20], edi
0x54E3F0: jz      short loc_54E3FC
0x54E3F2: lea     eax, [edi+4]
0x54E3F5: push    eax; lpAddend
0x54E3F6: call    dword ptr ds:0A28078h
0x54E3FC: test    edi, edi
0x54E3FE: mov     [esp+3Ch+var_4], 0
0x54E406: jz      loc_54E537
0x54E40C: mov     eax, [edi+3Ch]
0x54E40F: fldz
0x54E411: mov     ecx, [eax+5Ch]
0x54E414: fst     [esp+3Ch+var_10]
0x54E418: mov     ebx, [ecx]
0x54E41A: fst     [esp+3Ch+var_14]
0x54E41E: mov     edx, [eax+54h]
0x54E421: fst     [esp+3Ch+var_18]
0x54E425: add     ebx, [eax+50h]
0x54E428: fstp    [esp+3Ch+var_1C]
0x54E42C: mov     ecx, [edx]
0x54E42E: mov     eax, [eax+58h]
0x54E431: imul    ecx, [eax]
0x54E434: mov     ebp, ecx
0x54E436: lea     ecx, [esp+3Ch+var_1C]
0x54E43A: push    ecx
0x54E43B: push    ebp
0x54E43C: mov     ecx, esi
0x54E43E: mov     [esp+44h+var_24], ebp
0x54E442: call    sub_54E230
0x54E447: xor     edi, edi
0x54E449: test    ebp, ebp
0x54E44B: jbe     loc_54E513
0x54E451: xor     ebp, ebp
0x54E453: add     ebx, 2
0x54E456: mov     ecx, [esi+4]
0x54E459: test    ecx, ecx
0x54E45B: jz      short loc_54E469
0x54E45D: mov     eax, [esi+8]
0x54E460: sub     eax, ecx
0x54E462: sar     eax, 4
0x54E465: cmp     edi, eax
0x54E467: jb      short loc_54E46E
0x54E469: call    __invalid_parameter_noinfo
0x54E46E: movzx   edx, byte ptr [ebx-2]
0x54E472: mov     eax, [esi+4]
0x54E475: mov     [esp+3Ch+var_28], edx
0x54E479: fild    [esp+3Ch+var_28]
0x54E47D: fstp    dword ptr [eax+ebp]
0x54E480: mov     ecx, [esi+4]
0x54E483: test    ecx, ecx
0x54E485: jz      short loc_54E493
0x54E487: mov     eax, [esi+8]
0x54E48A: sub     eax, ecx
0x54E48C: sar     eax, 4
0x54E48F: cmp     edi, eax
0x54E491: jb      short loc_54E498
0x54E493: call    __invalid_parameter_noinfo
0x54E498: movzx   ecx, byte ptr [ebx-1]
0x54E49C: mov     edx, [esi+4]
0x54E49F: mov     [esp+3Ch+var_28], ecx
0x54E4A3: fild    [esp+3Ch+var_28]
0x54E4A7: fstp    dword ptr [edx+ebp+4]
0x54E4AB: mov     ecx, [esi+4]
0x54E4AE: test    ecx, ecx
0x54E4B0: jz      short loc_54E4BE
0x54E4B2: mov     eax, [esi+8]
0x54E4B5: sub     eax, ecx
0x54E4B7: sar     eax, 4
0x54E4BA: cmp     edi, eax
0x54E4BC: jb      short loc_54E4C3
0x54E4BE: call    __invalid_parameter_noinfo
0x54E4C3: movzx   eax, byte ptr [ebx]
0x54E4C6: mov     ecx, [esi+4]
0x54E4C9: mov     [esp+3Ch+var_28], eax
0x54E4CD: fild    [esp+3Ch+var_28]
0x54E4D1: fstp    dword ptr [ecx+ebp+8]
0x54E4D5: mov     ecx, [esi+4]
0x54E4D8: test    ecx, ecx
0x54E4DA: jz      short loc_54E4E8
0x54E4DC: mov     eax, [esi+8]
0x54E4DF: sub     eax, ecx
0x54E4E1: sar     eax, 4
0x54E4E4: cmp     edi, eax
0x54E4E6: jb      short loc_54E4ED
0x54E4E8: call    __invalid_parameter_noinfo
0x54E4ED: movzx   edx, byte ptr [ebx+1]
0x54E4F1: mov     eax, [esi+4]
0x54E4F4: mov     [esp+3Ch+var_28], edx
0x54E4F8: add     edi, 1
0x54E4FB: add     ebx, 4
0x54E4FE: fild    [esp+3Ch+var_28]
0x54E502: add     ebp, 10h
0x54E505: cmp     edi, [esp+3Ch+var_24]
0x54E509: fstp    dword ptr [eax+ebp-4]
0x54E50D: jb      loc_54E456
0x54E513: mov     edi, [esp+3Ch+var_20]
0x54E517: lea     ecx, [edi+4]
0x54E51A: push    ecx; lpAddend
0x54E51B: mov     [esp+40h+var_4], 0FFFFFFFFh
0x54E523: call    dword ptr ds:0A2807Ch
0x54E529: test    eax, eax
0x54E52B: jnz     short loc_54E537
0x54E52D: mov     edx, [edi]
0x54E52F: mov     eax, [edx]
0x54E531: push    1
0x54E533: mov     ecx, edi
0x54E535: call    eax
0x54E537: mov     eax, esi
0x54E539: mov     ecx, dword ptr [esp+3Ch+var_C]
0x54E53D: mov     large fs:0, ecx
0x54E544: pop     ecx
0x54E545: pop     edi
0x54E546: pop     esi
0x54E547: pop     ebp
0x54E548: pop     ebx
0x54E549: add     esp, 28h
0x54E54C: retn
