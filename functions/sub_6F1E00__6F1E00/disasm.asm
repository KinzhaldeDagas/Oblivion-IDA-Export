0x6F1E00: push    ebp
0x6F1E01: mov     ebp, esp
0x6F1E03: push    0FFFFFFFFh
0x6F1E05: push    offset SEH_6F1E00
0x6F1E0A: mov     eax, large fs:0
0x6F1E10: push    eax
0x6F1E11: sub     esp, 18h
0x6F1E14: push    ebx
0x6F1E15: push    esi
0x6F1E16: push    edi
0x6F1E17: mov     eax, ds:0B30AACh
0x6F1E1C: xor     eax, ebp
0x6F1E1E: push    eax
0x6F1E1F: lea     eax, [ebp+var_C]
0x6F1E22: mov     large fs:0, eax
0x6F1E28: mov     [ebp+var_10], esp
0x6F1E2B: mov     esi, ecx
0x6F1E2D: mov     eax, [ebp+arg_C]
0x6F1E30: mov     ecx, [eax]
0x6F1E32: mov     edx, [eax+4]
0x6F1E35: mov     [ebp+var_24], ecx
0x6F1E38: mov     ecx, [eax+8]
0x6F1E3B: mov     [ebp+var_1C], ecx
0x6F1E3E: mov     ecx, [esi+4]
0x6F1E41: test    ecx, ecx
0x6F1E43: mov     [ebp+var_20], edx
0x6F1E46: mov     edx, [eax+0Ch]
0x6F1E49: mov     [ebp+var_18], edx
0x6F1E4C: jnz     short loc_6F1E52
0x6F1E4E: xor     eax, eax
0x6F1E50: jmp     short loc_6F1E5A
0x6F1E52: mov     eax, [esi+0Ch]
0x6F1E55: sub     eax, ecx
0x6F1E57: sar     eax, 4
0x6F1E5A: mov     edi, [ebp+arg_8]
0x6F1E5D: test    edi, edi
0x6F1E5F: jz      loc_6F2043
0x6F1E65: test    ecx, ecx
0x6F1E67: jnz     short loc_6F1E6D
0x6F1E69: xor     edx, edx
0x6F1E6B: jmp     short loc_6F1E75
0x6F1E6D: mov     edx, [esi+8]
0x6F1E70: sub     edx, ecx
0x6F1E72: sar     edx, 4
0x6F1E75: or      ebx, 0FFFFFFFFh
0x6F1E78: sub     ebx, edx
0x6F1E7A: cmp     ebx, edi
0x6F1E7C: jnb     short loc_6F1E83
0x6F1E7E: call    sub_790B90
0x6F1E83: test    ecx, ecx
0x6F1E85: jnz     short loc_6F1E8B
0x6F1E87: xor     edx, edx
0x6F1E89: jmp     short loc_6F1E93
0x6F1E8B: mov     edx, [esi+8]
0x6F1E8E: sub     edx, ecx
0x6F1E90: sar     edx, 4
0x6F1E93: add     edx, edi
0x6F1E95: cmp     eax, edx
0x6F1E97: jnb     loc_6F1F97
0x6F1E9D: mov     edx, eax
0x6F1E9F: shr     edx, 1
0x6F1EA1: or      ebx, 0FFFFFFFFh
0x6F1EA4: sub     ebx, edx
0x6F1EA6: cmp     ebx, eax
0x6F1EA8: jnb     short loc_6F1EAE
0x6F1EAA: xor     eax, eax
0x6F1EAC: jmp     short loc_6F1EB0
0x6F1EAE: add     eax, edx
0x6F1EB0: test    ecx, ecx
0x6F1EB2: jnz     short loc_6F1EB8
0x6F1EB4: xor     edx, edx
0x6F1EB6: jmp     short loc_6F1EC0
0x6F1EB8: mov     edx, [esi+8]
0x6F1EBB: sub     edx, ecx
0x6F1EBD: sar     edx, 4
0x6F1EC0: add     edx, edi
0x6F1EC2: cmp     eax, edx
0x6F1EC4: jnb     short loc_6F1ED8
0x6F1EC6: test    ecx, ecx
0x6F1EC8: jnz     short loc_6F1ECE
0x6F1ECA: xor     eax, eax
0x6F1ECC: jmp     short loc_6F1ED6
0x6F1ECE: mov     eax, [esi+8]
0x6F1ED1: sub     eax, ecx
0x6F1ED3: sar     eax, 4
0x6F1ED6: add     eax, edi
0x6F1ED8: shl     eax, 4
0x6F1EDB: push    eax; Size
0x6F1EDC: mov     [ebp+arg_8], eax
0x6F1EDF: call    FormHeapAlloc
0x6F1EE4: mov     byte ptr [ebp+arg_C], 0
0x6F1EE8: mov     ecx, [ebp+arg_C]
0x6F1EEB: mov     edx, [ebp+arg_C]
0x6F1EEE: push    ecx
0x6F1EEF: mov     ecx, [ebp+arg_4]
0x6F1EF2: push    edx
0x6F1EF3: mov     ebx, eax
0x6F1EF5: mov     eax, [esi+4]
0x6F1EF8: push    esi
0x6F1EF9: push    ebx
0x6F1EFA: push    ecx
0x6F1EFB: push    eax
0x6F1EFC: mov     [ebp+var_14], ebx
0x6F1EFF: mov     [ebp+var_4], 0
0x6F1F06: call    sub_54D910
0x6F1F0B: add     esp, 1Ch
0x6F1F0E: lea     edx, [ebp+var_24]
0x6F1F11: push    edx
0x6F1F12: push    edi
0x6F1F13: push    eax
0x6F1F14: mov     ecx, esi
0x6F1F16: call    sub_6F13C0
0x6F1F1B: mov     ecx, [esi+8]
0x6F1F1E: mov     byte ptr [ebp+arg_C], 0
0x6F1F22: mov     edx, [ebp+arg_C]
0x6F1F25: push    edx
0x6F1F26: mov     edx, [ebp+arg_C]
0x6F1F29: push    edx
0x6F1F2A: push    esi
0x6F1F2B: push    eax
0x6F1F2C: mov     eax, [ebp+arg_4]
0x6F1F2F: push    ecx
0x6F1F30: push    eax
0x6F1F31: call    sub_54D910
0x6F1F36: mov     ecx, [esi+4]
0x6F1F39: add     esp, 18h
0x6F1F3C: test    ecx, ecx
0x6F1F3E: jnz     short loc_6F1F44
0x6F1F40: xor     eax, eax
0x6F1F42: jmp     short loc_6F1F4C
0x6F1F44: mov     eax, [esi+8]
0x6F1F47: sub     eax, ecx
0x6F1F49: sar     eax, 4
0x6F1F4C: add     edi, eax
0x6F1F4E: test    ecx, ecx
0x6F1F50: jz      short loc_6F1F5B
0x6F1F52: push    ecx
0x6F1F53: call    FormHeapFree
0x6F1F58: add     esp, 4
0x6F1F5B: mov     ecx, [ebp+arg_8]
0x6F1F5E: add     ecx, ebx
0x6F1F60: shl     edi, 4
0x6F1F63: add     edi, ebx
0x6F1F65: mov     [esi+0Ch], ecx
0x6F1F68: mov     [esi+8], edi
0x6F1F6B: mov     [esi+4], ebx
0x6F1F6E: mov     ecx, [ebp+var_C]
0x6F1F71: mov     large fs:0, ecx
0x6F1F78: pop     ecx
0x6F1F79: pop     edi
0x6F1F7A: pop     esi
0x6F1F7B: pop     ebx
0x6F1F7C: mov     esp, ebp
0x6F1F7E: pop     ebp
0x6F1F7F: retn    10h
0x6F1F82: mov     edx, [ebp+var_14]
0x6F1F85: push    edx
0x6F1F86: call    FormHeapFree
0x6F1F8B: add     esp, 4
0x6F1F8E: push    0
0x6F1F90: push    0
0x6F1F92: call    ThrowException??
0x6F1F97: mov     eax, [esi+8]
0x6F1F9A: mov     ebx, [ebp+arg_4]
0x6F1F9D: mov     ecx, eax
0x6F1F9F: sub     ecx, ebx
0x6F1FA1: sar     ecx, 4
0x6F1FA4: cmp     ecx, edi
0x6F1FA6: mov     [ebp+arg_8], eax
0x6F1FA9: jnb     short loc_6F200C
0x6F1FAB: mov     ecx, edi
0x6F1FAD: shl     ecx, 4
0x6F1FB0: mov     [ebp+arg_C], ecx
0x6F1FB3: add     ecx, ebx
0x6F1FB5: push    ecx
0x6F1FB6: push    eax
0x6F1FB7: push    ebx
0x6F1FB8: mov     ecx, esi
0x6F1FBA: call    sub_6F15D0
0x6F1FBF: mov     eax, [esi+8]
0x6F1FC2: mov     ecx, eax
0x6F1FC4: sub     ecx, ebx
0x6F1FC6: sar     ecx, 4
0x6F1FC9: lea     edx, [ebp+var_24]
0x6F1FCC: push    edx
0x6F1FCD: sub     edi, ecx
0x6F1FCF: push    edi
0x6F1FD0: push    eax
0x6F1FD1: mov     ecx, esi
0x6F1FD3: mov     [ebp+var_4], 2
0x6F1FDA: call    sub_6F13C0
0x6F1FDF: mov     eax, [ebp+arg_C]
0x6F1FE2: add     [esi+8], eax
0x6F1FE5: mov     esi, [esi+8]
0x6F1FE8: lea     edx, [ebp+var_24]
0x6F1FEB: push    edx
0x6F1FEC: sub     esi, eax
0x6F1FEE: push    esi
0x6F1FEF: push    ebx
0x6F1FF0: call    sub_54D9A0
0x6F1FF5: add     esp, 0Ch
0x6F1FF8: mov     ecx, [ebp+var_C]
0x6F1FFB: mov     large fs:0, ecx
0x6F2002: pop     ecx
0x6F2003: pop     edi
0x6F2004: pop     esi
0x6F2005: pop     ebx
0x6F2006: mov     esp, ebp
0x6F2008: pop     ebp
0x6F2009: retn    10h
0x6F200C: shl     edi, 4
0x6F200F: mov     ecx, edi
0x6F2011: push    eax
0x6F2012: mov     edi, eax
0x6F2014: sub     edi, ecx
0x6F2016: push    eax
0x6F2017: mov     [ebp+arg_C], ecx
0x6F201A: push    edi
0x6F201B: mov     ecx, esi
0x6F201D: call    sub_6F15D0
0x6F2022: mov     [esi+8], eax
0x6F2025: mov     eax, [ebp+arg_8]
0x6F2028: push    eax
0x6F2029: push    edi
0x6F202A: push    ebx
0x6F202B: call    sub_6F1440
0x6F2030: mov     edx, [ebp+arg_C]
0x6F2033: lea     ecx, [ebp+var_24]
0x6F2036: push    ecx
0x6F2037: add     edx, ebx
0x6F2039: push    edx
0x6F203A: push    ebx
0x6F203B: call    sub_54D9A0
0x6F2040: add     esp, 18h
0x6F2043: mov     ecx, [ebp+var_C]
0x6F2046: mov     large fs:0, ecx
0x6F204D: pop     ecx
0x6F204E: pop     edi
0x6F204F: pop     esi
0x6F2050: pop     ebx
0x6F2051: mov     esp, ebp
0x6F2053: pop     ebp
0x6F2054: retn    10h
