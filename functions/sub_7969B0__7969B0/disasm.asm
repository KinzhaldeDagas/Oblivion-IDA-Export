0x7969B0: sub     esp, 0Ch
0x7969B3: push    ebx
0x7969B4: push    ebp
0x7969B5: push    esi
0x7969B6: push    edi; MaxCount
0x7969B7: xor     edi, edi
0x7969B9: xor     ebp, ebp
0x7969BB: mov     esi, ecx
0x7969BD: mov     [esp+1Ch+var_C], edi
0x7969C1: mov     [esp+1Ch+var_8], ebp
0x7969C5: mov     ecx, [esi+4Ch]
0x7969C8: test    ecx, ecx
0x7969CA: jz      loc_796B2E
0x7969D0: mov     eax, [esi+50h]
0x7969D3: sub     eax, ecx
0x7969D5: sar     eax, 4
0x7969D8: cmp     edi, eax
0x7969DA: jnb     loc_796B2E
0x7969E0: xor     ebx, ebx
0x7969E2: mov     ecx, [esi+4Ch]
0x7969E5: test    ecx, ecx
0x7969E7: jz      short loc_7969F5
0x7969E9: mov     eax, [esi+50h]
0x7969EC: sub     eax, ecx
0x7969EE: sar     eax, 4
0x7969F1: cmp     edi, eax
0x7969F3: jb      short loc_7969FA
0x7969F5: call    __invalid_parameter_noinfo
0x7969FA: mov     eax, [esi+4Ch]
0x7969FD: mov     ecx, [eax+ebp+4]
0x796A01: add     eax, ebp
0x796A03: test    ecx, ecx
0x796A05: jz      loc_796AAE
0x796A0B: mov     eax, [eax+8]
0x796A0E: sub     eax, ecx
0x796A10: sar     eax, 2
0x796A13: cmp     ebx, eax
0x796A15: jnb     loc_796AAE
0x796A1B: mov     ecx, [esi+4Ch]
0x796A1E: test    ecx, ecx
0x796A20: jz      short loc_796A2E
0x796A22: mov     eax, [esi+50h]
0x796A25: sub     eax, ecx
0x796A27: sar     eax, 4
0x796A2A: cmp     edi, eax
0x796A2C: jb      short loc_796A33
0x796A2E: call    __invalid_parameter_noinfo
0x796A33: mov     edi, [esi+4Ch]
0x796A36: mov     ecx, [edi+ebp+4]
0x796A3A: add     edi, ebp
0x796A3C: test    ecx, ecx
0x796A3E: jz      short loc_796A4C
0x796A40: mov     eax, [edi+8]
0x796A43: sub     eax, ecx
0x796A45: sar     eax, 2
0x796A48: cmp     ebx, eax
0x796A4A: jb      short loc_796A51
0x796A4C: call    __invalid_parameter_noinfo
0x796A51: mov     eax, [edi+4]
0x796A54: mov     ecx, [eax+ebx*4]
0x796A57: push    ecx
0x796A58: call    FormHeapFree
0x796A5D: mov     ecx, [esi+4Ch]
0x796A60: add     esp, 4
0x796A63: test    ecx, ecx
0x796A65: jz      short loc_796A75
0x796A67: mov     eax, [esi+50h]
0x796A6A: sub     eax, ecx
0x796A6C: sar     eax, 4
0x796A6F: cmp     [esp+1Ch+var_C], eax
0x796A73: jb      short loc_796A7A
0x796A75: call    __invalid_parameter_noinfo
0x796A7A: mov     edi, [esi+4Ch]
0x796A7D: mov     ecx, [edi+ebp+4]
0x796A81: add     edi, ebp
0x796A83: test    ecx, ecx
0x796A85: jz      short loc_796A93
0x796A87: mov     eax, [edi+8]
0x796A8A: sub     eax, ecx
0x796A8C: sar     eax, 2
0x796A8F: cmp     ebx, eax
0x796A91: jb      short loc_796A98
0x796A93: call    __invalid_parameter_noinfo
0x796A98: mov     edx, [edi+4]
0x796A9B: mov     edi, [esp+1Ch+var_C]
0x796A9F: mov     dword ptr [edx+ebx*4], 0
0x796AA6: add     ebx, 1
0x796AA9: jmp     loc_7969E2
0x796AAE: mov     ecx, [esi+4Ch]
0x796AB1: test    ecx, ecx
0x796AB3: jz      short loc_796AC1
0x796AB5: mov     eax, [esi+50h]
0x796AB8: sub     eax, ecx
0x796ABA: sar     eax, 4
0x796ABD: cmp     edi, eax
0x796ABF: jb      short loc_796AC6
0x796AC1: call    __invalid_parameter_noinfo
0x796AC6: mov     edi, [esi+4Ch]
0x796AC9: mov     ebx, [edi+ebp+8]
0x796ACD: add     edi, ebp
0x796ACF: cmp     [edi+4], ebx
0x796AD2: jbe     short loc_796AD9
0x796AD4: call    __invalid_parameter_noinfo
0x796AD9: mov     ebp, [edi+4]
0x796ADC: cmp     ebp, [edi+8]
0x796ADF: jbe     short loc_796AE6
0x796AE1: call    __invalid_parameter_noinfo
0x796AE6: cmp     ebp, ebx
0x796AE8: jz      short loc_796B17
0x796AEA: mov     eax, [edi+8]
0x796AED: sub     eax, ebx
0x796AEF: sar     eax, 2
0x796AF2: test    eax, eax
0x796AF4: lea     ecx, ds:0[eax*4]
0x796AFB: lea     edx, [ecx+ebp]
0x796AFE: mov     [esp+1Ch+var_4], edx
0x796B02: jle     short loc_796B10
0x796B04: push    ecx; Src
0x796B05: push    ebx; Src
0x796B06: push    ecx; DstSize
0x796B07: push    ebp; Dst
0x796B08: call    _memmove_s
0x796B0D: add     esp, 10h
0x796B10: mov     eax, [esp+1Ch+var_4]
0x796B14: mov     [edi+8], eax
0x796B17: add     [esp+1Ch+var_C], 1
0x796B1C: add     [esp+1Ch+var_8], 10h
0x796B21: mov     ebp, [esp+1Ch+var_8]
0x796B25: mov     edi, [esp+1Ch+var_C]
0x796B29: jmp     loc_7969C5
0x796B2E: mov     edi, [esi+50h]
0x796B31: cmp     ecx, edi
0x796B33: jbe     short loc_796B3A
0x796B35: call    __invalid_parameter_noinfo
0x796B3A: mov     ebx, [esi+4Ch]
0x796B3D: cmp     ebx, [esi+50h]
0x796B40: mov     [esp+1Ch+var_4], ebx
0x796B44: jbe     short loc_796B4B
0x796B46: call    __invalid_parameter_noinfo
0x796B4B: cmp     ebx, edi
0x796B4D: jz      short loc_796BB6
0x796B4F: mov     ebp, [esi+50h]
0x796B52: mov     eax, [esp+1Ch+var_4]
0x796B56: mov     ebx, ebp
0x796B58: sub     ebx, edi
0x796B5A: sar     ebx, 4
0x796B5D: shl     ebx, 4
0x796B60: add     ebx, eax
0x796B62: cmp     edi, ebp
0x796B64: jz      short loc_796B84
0x796B66: sub     eax, edi
0x796B68: mov     [esp+1Ch+var_4], eax
0x796B6C: jmp     short loc_796B74
0x796B6E: align 10h
0x796B70: mov     eax, [esp+1Ch+var_4]
0x796B74: push    edi
0x796B75: lea     ecx, [eax+edi]
0x796B78: call    sub_79B2F0
0x796B7D: add     edi, 10h
0x796B80: cmp     edi, ebp
0x796B82: jnz     short loc_796B70
0x796B84: mov     ebp, [esi+50h]
0x796B87: cmp     ebx, ebp
0x796B89: jz      short loc_796BB3
0x796B8B: lea     edi, [ebx+4]
0x796B8E: mov     edi, edi
0x796B90: mov     eax, [edi]
0x796B92: test    eax, eax
0x796B94: jz      short loc_796B9F
0x796B96: push    eax
0x796B97: call    FormHeapFree
0x796B9C: add     esp, 4
0x796B9F: xor     eax, eax
0x796BA1: mov     [edi], eax
0x796BA3: mov     [edi+4], eax
0x796BA6: mov     [edi+8], eax
0x796BA9: add     edi, 10h
0x796BAC: lea     ecx, [edi-4]
0x796BAF: cmp     ecx, ebp
0x796BB1: jnz     short loc_796B90
0x796BB3: mov     [esi+50h], ebx
0x796BB6: pop     edi
0x796BB7: pop     esi
0x796BB8: pop     ebp
0x796BB9: pop     ebx
0x796BBA: add     esp, 0Ch
0x796BBD: retn
