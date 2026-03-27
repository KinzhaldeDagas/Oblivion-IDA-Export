0x889E20: push    ecx
0x889E21: push    esi
0x889E22: mov     esi, ecx
0x889E24: mov     eax, [esi+2Ch]
0x889E27: test    eax, eax
0x889E29: jbe     loc_889F10
0x889E2F: cmp     eax, 0BB8h
0x889E34: jb      short loc_889E3D
0x889E36: mov     dword ptr [esi+2Ch], 0BB8h
0x889E3D: mov     eax, [esi]
0x889E3F: mov     edx, [eax+58h]
0x889E42: push    ebx
0x889E43: call    edx
0x889E45: mov     ebx, eax
0x889E47: test    ebx, ebx
0x889E49: jz      loc_889F0F
0x889E4F: mov     eax, [esi+2Ch]
0x889E52: mov     ecx, [esi+28h]
0x889E55: push    edi
0x889E56: push    0
0x889E58: push    eax
0x889E59: push    ecx
0x889E5A: mov     ecx, ebx
0x889E5C: call    sub_89C310
0x889E61: xor     edi, edi
0x889E63: cmp     [esi+2Ch], edi
0x889E66: jbe     short loc_889EA8
0x889E68: mov     edx, [esi+28h]
0x889E6B: mov     eax, [edx+edi*4]
0x889E6E: test    eax, eax
0x889E70: lea     ecx, [edx+edi*4]
0x889E73: jz      short loc_889E7A
0x889E75: mov     eax, [eax+0Ch]
0x889E78: jmp     short loc_889E7C
0x889E7A: xor     eax, eax
0x889E7C: test    eax, eax
0x889E7E: jz      short loc_889E86
0x889E80: and     dword ptr [eax+18h], 0FFFFFFEFh
0x889E84: jmp     short loc_889E95
0x889E86: mov     eax, [ecx]
0x889E88: push    eax
0x889E89: lea     ecx, [esp+14h+var_1]
0x889E8D: push    ecx
0x889E8E: mov     ecx, ebx
0x889E90: call    sub_8996C0
0x889E95: mov     edx, [esi+28h]
0x889E98: mov     ecx, [edx+edi*4]
0x889E9B: call    sub_8BC730
0x889EA0: add     edi, 1
0x889EA3: cmp     edi, [esi+2Ch]
0x889EA6: jb      short loc_889E68
0x889EA8: mov     eax, [esi]
0x889EAA: mov     edx, [eax+58h]
0x889EAD: mov     ecx, esi
0x889EAF: call    edx
0x889EB1: mov     ecx, [esi+10h]
0x889EB4: test    ecx, ecx
0x889EB6: pop     edi
0x889EB7: jz      short loc_889EE1
0x889EB9: cmp     dword ptr [eax+0B4h], 9
0x889EC0: jnz     short loc_889EE1
0x889EC2: fld     dword ptr ds:0A34BA0h
0x889EC8: sub     esp, 8
0x889ECB: fst     [esp+14h+var_10]
0x889ECF: fstp    [esp+14h+var_14]
0x889ED2: call    sub_8BAB10
0x889ED7: mov     ecx, [esi+10h]
0x889EDA: call    sub_8BAB60
0x889EDF: jmp     short loc_889EF2
0x889EE1: fld     dword ptr ds:0A34BA0h
0x889EE7: push    ecx
0x889EE8: mov     ecx, eax
0x889EEA: fstp    [esp+10h+var_10]
0x889EED: call    sub_898B70
0x889EF2: mov     eax, [esi+2Ch]
0x889EF5: mov     ecx, [esi+28h]
0x889EF8: add     eax, eax
0x889EFA: add     eax, eax
0x889EFC: push    eax
0x889EFD: push    0
0x889EFF: push    ecx
0x889F00: call    __memset
0x889F05: add     esp, 0Ch
0x889F08: mov     dword ptr [esi+2Ch], 0
0x889F0F: pop     ebx
0x889F10: pop     esi
0x889F11: pop     ecx
0x889F12: retn
