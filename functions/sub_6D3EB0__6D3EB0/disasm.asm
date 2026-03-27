0x6D3EB0: push    0FFFFFFFFh
0x6D3EB2: push    offset SEH_798CC0
0x6D3EB7: mov     eax, large fs:0
0x6D3EBD: push    eax
0x6D3EBE: sub     esp, 0Ch
0x6D3EC1: push    ebx
0x6D3EC2: push    ebp
0x6D3EC3: push    esi
0x6D3EC4: push    edi
0x6D3EC5: mov     eax, ds:0B30AACh
0x6D3ECA: xor     eax, esp
0x6D3ECC: push    eax
0x6D3ECD: lea     eax, [esp+2Ch+var_C]
0x6D3ED1: mov     large fs:0, eax
0x6D3ED7: mov     ebp, [esp+2Ch+arg_0]
0x6D3EDB: mov     ebx, [ebp+30h]
0x6D3EDE: mov     edi, [ebx+0Ch]
0x6D3EE1: test    edi, edi
0x6D3EE3: mov     [esp+2Ch+var_14], ebx
0x6D3EE7: jz      loc_6D3FDB
0x6D3EED: mov     eax, [edi]
0x6D3EEF: mov     edx, [eax+4]
0x6D3EF2: mov     ecx, edi
0x6D3EF4: call    edx
0x6D3EF6: test    eax, eax
0x6D3EF8: jz      short loc_6D3F3F
0x6D3EFA: lea     ebx, [ebx+0]
0x6D3F00: cmp     eax, offset dword_B3CA58
0x6D3F05: jz      short loc_6D3F10
0x6D3F07: mov     eax, [eax+4]
0x6D3F0A: test    eax, eax
0x6D3F0C: jnz     short loc_6D3F00
0x6D3F0E: jmp     short loc_6D3F3F
0x6D3F10: mov     eax, [edi]
0x6D3F12: mov     edx, [eax+80h]
0x6D3F18: push    0
0x6D3F1A: mov     ecx, edi
0x6D3F1C: call    edx
0x6D3F1E: mov     esi, eax
0x6D3F20: test    esi, esi
0x6D3F22: jz      short loc_6D3F3F
0x6D3F24: mov     eax, [esi]
0x6D3F26: mov     edx, [eax+4]
0x6D3F29: mov     ecx, esi
0x6D3F2B: call    edx
0x6D3F2D: test    eax, eax
0x6D3F2F: jz      short loc_6D3F3F
0x6D3F31: cmp     eax, offset dword_B3DF08
0x6D3F36: jz      short loc_6D3F4B
0x6D3F38: mov     eax, [eax+4]
0x6D3F3B: test    eax, eax
0x6D3F3D: jnz     short loc_6D3F31
0x6D3F3F: mov     edi, [edi+34h]
0x6D3F42: test    edi, edi
0x6D3F44: jnz     short loc_6D3EED
0x6D3F46: jmp     loc_6D3FDB
0x6D3F4B: mov     ebx, [ebp+40h]
0x6D3F4E: push    18h; Size
0x6D3F50: call    FormHeapAlloc
0x6D3F55: add     esp, 4
0x6D3F58: mov     [esp+2Ch+var_10], eax
0x6D3F5C: test    eax, eax
0x6D3F5E: mov     [esp+2Ch+var_4], 0
0x6D3F66: jz      short loc_6D3F72
0x6D3F68: push    ebx
0x6D3F69: mov     ecx, eax
0x6D3F6B: call    sub_6D2990
0x6D3F70: jmp     short loc_6D3F74
0x6D3F72: xor     eax, eax
0x6D3F74: push    eax
0x6D3F75: mov     ecx, esi
0x6D3F77: mov     [esp+30h+var_4], 0FFFFFFFFh
0x6D3F7F: call    sub_6D3940
0x6D3F84: push    edi
0x6D3F85: push    ebp
0x6D3F86: call    sub_6D3B40
0x6D3F8B: mov     eax, [esi]
0x6D3F8D: mov     eax, [eax+80h]
0x6D3F93: add     esp, 8
0x6D3F96: lea     ecx, [esp+2Ch+arg_0]
0x6D3F9A: push    ecx
0x6D3F9B: lea     edx, [esp+30h+var_18]
0x6D3F9F: push    edx
0x6D3FA0: mov     ecx, esi
0x6D3FA2: call    eax
0x6D3FA4: fld     [esp+2Ch+arg_0]
0x6D3FA8: mov     edx, [esi]
0x6D3FAA: mov     eax, [edx+84h]
0x6D3FB0: sub     esp, 8
0x6D3FB3: fstp    [esp+34h+var_30]
0x6D3FB7: mov     ecx, esi
0x6D3FB9: fld     [esp+34h+var_18]
0x6D3FBD: fstp    [esp+34h+var_34]
0x6D3FC0: call    eax
0x6D3FC2: mov     edx, [edi]
0x6D3FC4: mov     eax, [edx+88h]
0x6D3FCA: mov     ecx, edi
0x6D3FCC: call    eax
0x6D3FCE: mov     edx, [esi]
0x6D3FD0: mov     eax, [edx+7Ch]
0x6D3FD3: mov     ecx, esi
0x6D3FD5: call    eax
0x6D3FD7: mov     ebx, [esp+2Ch+var_14]
0x6D3FDB: push    ebp
0x6D3FDC: mov     ecx, ebx
0x6D3FDE: call    sub_6FFE90
0x6D3FE3: mov     ecx, dword ptr [esp+2Ch+var_C]
0x6D3FE7: mov     large fs:0, ecx
0x6D3FEE: pop     ecx
0x6D3FEF: pop     edi
0x6D3FF0: pop     esi
0x6D3FF1: pop     ebp
0x6D3FF2: pop     ebx
0x6D3FF3: add     esp, 18h
0x6D3FF6: retn
