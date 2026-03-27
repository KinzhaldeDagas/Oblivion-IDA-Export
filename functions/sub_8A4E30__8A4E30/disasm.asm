0x8A4E30: push    0FFFFFFFFh
0x8A4E32: push    offset SEH_8A4E30
0x8A4E37: mov     eax, large fs:0
0x8A4E3D: push    eax
0x8A4E3E: sub     esp, 10h
0x8A4E41: push    ebx
0x8A4E42: push    ebp
0x8A4E43: push    esi
0x8A4E44: push    edi
0x8A4E45: mov     eax, ds:0B30AACh
0x8A4E4A: xor     eax, esp
0x8A4E4C: push    eax
0x8A4E4D: lea     eax, [esp+30h+var_C]
0x8A4E51: mov     large fs:0, eax
0x8A4E57: mov     esi, ecx
0x8A4E59: mov     eax, [esi]
0x8A4E5B: mov     edx, [eax+74h]
0x8A4E5E: lea     ecx, [esp+30h+var_1C+3]
0x8A4E62: push    ecx
0x8A4E63: mov     ecx, esi
0x8A4E65: mov     [esp+34h+var_18], 0
0x8A4E6D: call    edx
0x8A4E6F: mov     edi, [esp+30h+arg_4]
0x8A4E73: mov     ecx, eax
0x8A4E75: test    ecx, ecx
0x8A4E77: jz      short loc_8A4E9E
0x8A4E79: fld     dword ptr [edi+10h]
0x8A4E7C: fstp    [esp+30h+var_14]
0x8A4E80: fld1
0x8A4E82: fld     [esp+30h+var_14]
0x8A4E86: fucom   st(1)
0x8A4E88: fnstsw  ax
0x8A4E8A: fstp    st(1)
0x8A4E8C: test    ah, 44h
0x8A4E8F: jnp     short loc_8A4E9C
0x8A4E91: push    ecx
0x8A4E92: fstp    [esp+34h+var_34]; float
0x8A4E95: call    sub_8A2D60
0x8A4E9A: jmp     short loc_8A4E9E
0x8A4E9C: fstp    st
0x8A4E9E: mov     ebx, [esp+30h+arg_0]
0x8A4EA2: push    edi
0x8A4EA3: push    ebx
0x8A4EA4: mov     ecx, esi
0x8A4EA6: call    sub_89F5D0
0x8A4EAB: mov     eax, [esi+18h]
0x8A4EAE: mov     ecx, [ebx+18h]
0x8A4EB1: or      ecx, eax
0x8A4EB3: and     ecx, 0FFFFFFC7h
0x8A4EB6: lea     ebp, [esi+10h]
0x8A4EB9: mov     [ebx+18h], ecx
0x8A4EBC: mov     esi, [esi+8]
0x8A4EBF: test    esi, esi
0x8A4EC1: jz      short loc_8A4ECF
0x8A4EC3: lea     eax, [esi+14h]
0x8A4EC6: test    eax, eax
0x8A4EC8: jz      short loc_8A4ECF
0x8A4ECA: mov     eax, [eax+1Ch]
0x8A4ECD: jmp     short loc_8A4ED1
0x8A4ECF: xor     eax, eax
0x8A4ED1: shr     eax, 0Dh
0x8A4ED4: test    al, 1
0x8A4ED6: jnz     short loc_8A4EE4
0x8A4ED8: fld1
0x8A4EDA: fcomp   dword ptr [edi+10h]
0x8A4EDD: fnstsw  ax
0x8A4EDF: test    ah, 44h
0x8A4EE2: jnp     short loc_8A4F16
0x8A4EE4: mov     ecx, [ebx+8]
0x8A4EE7: test    ecx, ecx
0x8A4EE9: jz      short loc_8A4EF7
0x8A4EEB: lea     eax, [ecx+14h]
0x8A4EEE: test    eax, eax
0x8A4EF0: jz      short loc_8A4EF7
0x8A4EF2: mov     eax, [eax+1Ch]
0x8A4EF5: jmp     short loc_8A4EF9
0x8A4EF7: xor     eax, eax
0x8A4EF9: or      eax, 2000h
0x8A4EFE: test    ecx, ecx
0x8A4F00: jz      short loc_8A4F0A
0x8A4F02: add     ecx, 14h
0x8A4F05: jz      short loc_8A4F0A
0x8A4F07: mov     [ecx+1Ch], eax
0x8A4F0A: mov     edx, [ebx]
0x8A4F0C: mov     eax, [edx+80h]
0x8A4F12: mov     ecx, ebx
0x8A4F14: call    eax
0x8A4F16: test    ebp, ebp
0x8A4F18: jz      short loc_8A4F34
0x8A4F1A: lea     ecx, [esp+30h+var_14]
0x8A4F1E: push    ecx
0x8A4F1F: mov     ecx, ebp
0x8A4F21: call    sub_677C70
0x8A4F26: or      [esp+30h+var_18], 1
0x8A4F2B: cmp     dword ptr [eax], 0
0x8A4F2E: jz      short loc_8A4F34
0x8A4F30: mov     bl, 1
0x8A4F32: jmp     short loc_8A4F36
0x8A4F34: xor     bl, bl
0x8A4F36: test    byte ptr [esp+30h+var_18], 1
0x8A4F3B: jz      short loc_8A4F66
0x8A4F3D: mov     esi, [esp+30h+var_14]
0x8A4F41: and     [esp+30h+var_18], 0FFFFFFFEh
0x8A4F46: test    esi, esi
0x8A4F48: jz      short loc_8A4F66
0x8A4F4A: lea     edx, [esi+4]
0x8A4F4D: push    edx; lpAddend
0x8A4F4E: call    dword ptr ds:0A2807Ch
0x8A4F54: test    eax, eax
0x8A4F56: jnz     short loc_8A4F66
0x8A4F58: test    esi, esi
0x8A4F5A: jz      short loc_8A4F66
0x8A4F5C: mov     eax, [esi]
0x8A4F5E: mov     edx, [eax]
0x8A4F60: push    1
0x8A4F62: mov     ecx, esi
0x8A4F64: call    edx
0x8A4F66: test    bl, bl
0x8A4F68: jz      short loc_8A4FCE
0x8A4F6A: lea     eax, [esp+30h+var_10]
0x8A4F6E: push    eax
0x8A4F6F: mov     ecx, ebp
0x8A4F71: call    sub_677C70
0x8A4F76: mov     ecx, [eax]
0x8A4F78: mov     edx, [ecx]
0x8A4F7A: mov     eax, [edx+18h]
0x8A4F7D: push    edi
0x8A4F7E: mov     [esp+34h+var_4], 0
0x8A4F86: call    eax
0x8A4F88: mov     edi, eax
0x8A4F8A: mov     eax, [esp+30h+var_10]
0x8A4F8E: test    eax, eax
0x8A4F90: mov     [esp+30h+var_4], 0FFFFFFFFh
0x8A4F98: jz      short loc_8A4FB8
0x8A4F9A: mov     esi, eax
0x8A4F9C: add     eax, 4
0x8A4F9F: push    eax; lpAddend
0x8A4FA0: call    dword ptr ds:0A2807Ch
0x8A4FA6: test    eax, eax
0x8A4FA8: jnz     short loc_8A4FB8
0x8A4FAA: test    esi, esi
0x8A4FAC: jz      short loc_8A4FB8
0x8A4FAE: mov     edx, [esi]
0x8A4FB0: mov     eax, [edx]
0x8A4FB2: push    1
0x8A4FB4: mov     ecx, esi
0x8A4FB6: call    eax
0x8A4FB8: mov     ecx, [esp+30h+arg_0]
0x8A4FBC: push    edi
0x8A4FBD: call    sub_8A46C0
0x8A4FC2: mov     ebp, [ebp+4]
0x8A4FC5: mov     edi, [esp+30h+arg_4]
0x8A4FC9: jmp     loc_8A4F16
0x8A4FCE: mov     ecx, [esp+30h+var_C]
0x8A4FD2: mov     large fs:0, ecx
0x8A4FD9: pop     ecx
0x8A4FDA: pop     edi
0x8A4FDB: pop     esi
0x8A4FDC: pop     ebp
0x8A4FDD: pop     ebx
0x8A4FDE: add     esp, 1Ch
0x8A4FE1: retn    8
