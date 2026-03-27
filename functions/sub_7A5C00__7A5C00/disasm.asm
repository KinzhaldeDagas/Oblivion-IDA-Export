0x7A5C00: push    ebp
0x7A5C01: mov     ebp, esp
0x7A5C03: push    0FFFFFFFFh
0x7A5C05: push    offset SEH_7A5C00
0x7A5C0A: mov     eax, large fs:0
0x7A5C10: push    eax
0x7A5C11: sub     esp, 6Ch
0x7A5C14: mov     eax, ds:0B30AACh
0x7A5C19: xor     eax, ebp
0x7A5C1B: mov     [ebp+var_14], eax
0x7A5C1E: push    ebx
0x7A5C1F: push    esi
0x7A5C20: push    edi
0x7A5C21: push    eax
0x7A5C22: lea     eax, [ebp+var_C]
0x7A5C25: mov     large fs:0, eax
0x7A5C2B: mov     [ebp+var_10], esp
0x7A5C2E: mov     eax, [ebp+arg_C]
0x7A5C31: mov     esi, ecx
0x7A5C33: push    eax
0x7A5C34: lea     ecx, [ebp+var_68]
0x7A5C37: mov     [ebp+var_70], esi
0x7A5C3A: call    sub_7A2850
0x7A5C3F: mov     ecx, [esi+4]
0x7A5C42: xor     edi, edi
0x7A5C44: cmp     ecx, edi
0x7A5C46: mov     [ebp+var_4], edi
0x7A5C49: jz      short loc_7A5C61
0x7A5C4B: mov     edx, [esi+0Ch]
0x7A5C4E: sub     edx, ecx
0x7A5C50: mov     eax, 30C30C31h
0x7A5C55: imul    edx
0x7A5C57: sar     edx, 4
0x7A5C5A: mov     edi, edx
0x7A5C5C: shr     edi, 1Fh
0x7A5C5F: add     edi, edx
0x7A5C61: mov     ebx, [ebp+arg_8]
0x7A5C64: test    ebx, ebx
0x7A5C66: jz      loc_7A5EC5
0x7A5C6C: test    ecx, ecx
0x7A5C6E: jnz     short loc_7A5C74
0x7A5C70: xor     eax, eax
0x7A5C72: jmp     short loc_7A5C8A
0x7A5C74: mov     edx, [esi+8]
0x7A5C77: sub     edx, ecx
0x7A5C79: mov     eax, 30C30C31h
0x7A5C7E: imul    edx
0x7A5C80: sar     edx, 4
0x7A5C83: mov     eax, edx
0x7A5C85: shr     eax, 1Fh
0x7A5C88: add     eax, edx
0x7A5C8A: mov     edx, 30C30C3h
0x7A5C8F: sub     edx, eax
0x7A5C91: cmp     edx, ebx
0x7A5C93: jnb     short loc_7A5C9A
0x7A5C95: call    sub_790B90
0x7A5C9A: test    ecx, ecx
0x7A5C9C: jnz     short loc_7A5CA2
0x7A5C9E: xor     eax, eax
0x7A5CA0: jmp     short loc_7A5CB8
0x7A5CA2: mov     edx, [esi+8]
0x7A5CA5: sub     edx, ecx
0x7A5CA7: mov     eax, 30C30C31h
0x7A5CAC: imul    edx
0x7A5CAE: sar     edx, 4
0x7A5CB1: mov     eax, edx
0x7A5CB3: shr     eax, 1Fh
0x7A5CB6: add     eax, edx
0x7A5CB8: add     eax, ebx
0x7A5CBA: cmp     edi, eax
0x7A5CBC: jnb     loc_7A5DE6
0x7A5CC2: mov     eax, edi
0x7A5CC4: shr     eax, 1
0x7A5CC6: mov     edx, 30C30C3h
0x7A5CCB: sub     edx, eax
0x7A5CCD: cmp     edx, edi
0x7A5CCF: jnb     short loc_7A5CD5
0x7A5CD1: xor     edi, edi
0x7A5CD3: jmp     short loc_7A5CD7
0x7A5CD5: add     edi, eax
0x7A5CD7: test    ecx, ecx
0x7A5CD9: jnz     short loc_7A5CDF
0x7A5CDB: xor     eax, eax
0x7A5CDD: jmp     short loc_7A5CF5
0x7A5CDF: mov     edx, [esi+8]
0x7A5CE2: sub     edx, ecx
0x7A5CE4: mov     eax, 30C30C31h
0x7A5CE9: imul    edx
0x7A5CEB: sar     edx, 4
0x7A5CEE: mov     eax, edx
0x7A5CF0: shr     eax, 1Fh
0x7A5CF3: add     eax, edx
0x7A5CF5: add     eax, ebx
0x7A5CF7: cmp     edi, eax
0x7A5CF9: jnb     short loc_7A5D06
0x7A5CFB: mov     ecx, esi
0x7A5CFD: call    sub_7876A0
0x7A5D02: mov     edi, eax
0x7A5D04: add     edi, ebx
0x7A5D06: push    0
0x7A5D08: push    edi; char *
0x7A5D09: call    sub_7A2560
0x7A5D0E: mov     ecx, [esi+4]
0x7A5D11: mov     byte ptr [ebp+var_6C], 0
0x7A5D15: mov     edx, [ebp+var_6C]
0x7A5D18: push    edx
0x7A5D19: mov     edx, [ebp+var_6C]
0x7A5D1C: push    edx
0x7A5D1D: push    esi
0x7A5D1E: push    eax
0x7A5D1F: mov     [ebp+var_78], eax
0x7A5D22: mov     [ebp+var_74], eax
0x7A5D25: mov     eax, [ebp+arg_4]
0x7A5D28: push    eax
0x7A5D29: push    ecx
0x7A5D2A: mov     byte ptr [ebp+var_4], 1
0x7A5D2E: call    sub_7A3BD0
0x7A5D33: add     esp, 20h
0x7A5D36: lea     ecx, [ebp+var_68]
0x7A5D39: push    ecx
0x7A5D3A: push    ebx
0x7A5D3B: push    eax
0x7A5D3C: mov     ecx, esi
0x7A5D3E: mov     [ebp+var_74], eax
0x7A5D41: call    sub_7A5AA0
0x7A5D46: mov     ecx, [esi+8]
0x7A5D49: mov     byte ptr [ebp+var_6C], 0
0x7A5D4D: mov     edx, [ebp+var_6C]
0x7A5D50: push    edx
0x7A5D51: mov     edx, [ebp+var_6C]
0x7A5D54: push    edx
0x7A5D55: push    esi
0x7A5D56: push    eax
0x7A5D57: mov     [ebp+var_74], eax
0x7A5D5A: mov     eax, [ebp+arg_4]
0x7A5D5D: push    ecx
0x7A5D5E: push    eax
0x7A5D5F: call    sub_7A3BD0
0x7A5D64: mov     ecx, [esi+4]
0x7A5D67: add     esp, 18h
0x7A5D6A: test    ecx, ecx
0x7A5D6C: jnz     short loc_7A5D72
0x7A5D6E: xor     eax, eax
0x7A5D70: jmp     short loc_7A5D88
0x7A5D72: mov     edx, [esi+8]
0x7A5D75: sub     edx, ecx
0x7A5D77: mov     eax, 30C30C31h
0x7A5D7C: imul    edx
0x7A5D7E: sar     edx, 4
0x7A5D81: mov     eax, edx
0x7A5D83: shr     eax, 1Fh
0x7A5D86: add     eax, edx
0x7A5D88: add     ebx, eax
0x7A5D8A: test    ecx, ecx
0x7A5D8C: jz      short loc_7A5DA9
0x7A5D8E: mov     edx, [ebp+var_6C]
0x7A5D91: mov     eax, [esi+8]
0x7A5D94: push    edx
0x7A5D95: push    esi
0x7A5D96: push    eax
0x7A5D97: push    ecx
0x7A5D98: call    sub_7A36B0
0x7A5D9D: mov     ecx, [esi+4]
0x7A5DA0: push    ecx
0x7A5DA1: call    FormHeapFree
0x7A5DA6: add     esp, 14h
0x7A5DA9: mov     eax, [ebp+var_78]
0x7A5DAC: imul    edi, 54h ; 'T'
0x7A5DAF: imul    ebx, 54h ; 'T'
0x7A5DB2: add     edi, eax
0x7A5DB4: add     ebx, eax
0x7A5DB6: mov     [esi+0Ch], edi
0x7A5DB9: mov     [esi+8], ebx
0x7A5DBC: mov     [esi+4], eax
0x7A5DBF: jmp     loc_7A5EC5
0x7A5DC4: mov     edx, [ebp+var_74]
0x7A5DC7: mov     esi, [ebp+var_78]
0x7A5DCA: mov     ecx, [ebp+var_70]
0x7A5DCD: push    edx
0x7A5DCE: push    esi
0x7A5DCF: call    sub_7A45A0
0x7A5DD4: push    esi
0x7A5DD5: call    FormHeapFree
0x7A5DDA: add     esp, 4
0x7A5DDD: push    0
0x7A5DDF: push    0
0x7A5DE1: call    ThrowException??
0x7A5DE6: mov     ecx, [esi+8]
0x7A5DE9: mov     edi, [ebp+arg_4]
0x7A5DEC: mov     edx, ecx
0x7A5DEE: sub     edx, edi
0x7A5DF0: mov     eax, 30C30C31h
0x7A5DF5: imul    edx
0x7A5DF7: sar     edx, 4
0x7A5DFA: mov     eax, edx
0x7A5DFC: shr     eax, 1Fh
0x7A5DFF: add     eax, edx
0x7A5E01: cmp     eax, ebx
0x7A5E03: mov     [ebp+var_6C], ecx
0x7A5E06: jnb     loc_7A5E90
0x7A5E0C: mov     eax, ebx
0x7A5E0E: imul    eax, 54h ; 'T'
0x7A5E11: mov     [ebp+var_6C], eax
0x7A5E14: add     eax, edi
0x7A5E16: push    eax
0x7A5E17: push    ecx
0x7A5E18: push    edi
0x7A5E19: mov     ecx, esi
0x7A5E1B: call    sub_7A4BF0
0x7A5E20: mov     ecx, [esi+8]
0x7A5E23: lea     edx, [ebp+var_68]
0x7A5E26: push    edx
0x7A5E27: mov     edx, ecx
0x7A5E29: sub     edx, edi
0x7A5E2B: mov     eax, 30C30C31h
0x7A5E30: imul    edx
0x7A5E32: sar     edx, 4
0x7A5E35: mov     eax, edx
0x7A5E37: shr     eax, 1Fh
0x7A5E3A: add     eax, edx
0x7A5E3C: sub     ebx, eax
0x7A5E3E: push    ebx
0x7A5E3F: push    ecx
0x7A5E40: mov     ecx, esi
0x7A5E42: mov     byte ptr [ebp+var_4], 3
0x7A5E46: call    sub_7A5AA0
0x7A5E4B: mov     eax, [ebp+var_6C]
0x7A5E4E: add     [esi+8], eax
0x7A5E51: mov     esi, [esi+8]
0x7A5E54: lea     ecx, [ebp+var_68]
0x7A5E57: push    ecx
0x7A5E58: sub     esi, eax
0x7A5E5A: push    esi
0x7A5E5B: push    edi
0x7A5E5C: mov     [ebp+var_4], 0
0x7A5E63: call    sub_7A5970
0x7A5E68: add     esp, 0Ch
0x7A5E6B: jmp     short loc_7A5EC5
0x7A5E6D: mov     eax, [ebp+arg_8]
0x7A5E70: mov     ecx, [ebp+var_70]
0x7A5E73: imul    eax, 54h ; 'T'
0x7A5E76: mov     edx, [ecx+8]
0x7A5E79: add     edx, eax
0x7A5E7B: push    edx
0x7A5E7C: mov     edx, [ebp+arg_4]
0x7A5E7F: add     eax, edx
0x7A5E81: push    eax
0x7A5E82: call    sub_7A45A0
0x7A5E87: push    0
0x7A5E89: push    0
0x7A5E8B: call    ThrowException??
0x7A5E90: imul    ebx, 54h ; 'T'
0x7A5E93: push    ecx
0x7A5E94: mov     eax, ecx
0x7A5E96: sub     eax, ebx
0x7A5E98: push    ecx
0x7A5E99: push    eax
0x7A5E9A: mov     ecx, esi
0x7A5E9C: mov     [ebp+var_70], eax
0x7A5E9F: call    sub_7A4BF0
0x7A5EA4: mov     ecx, [ebp+var_70]
0x7A5EA7: mov     [esi+8], eax
0x7A5EAA: mov     eax, [ebp+var_6C]
0x7A5EAD: push    eax
0x7A5EAE: push    ecx
0x7A5EAF: push    edi
0x7A5EB0: call    sub_7A5AE0
0x7A5EB5: lea     edx, [ebp+var_68]
0x7A5EB8: push    edx
0x7A5EB9: add     ebx, edi
0x7A5EBB: push    ebx
0x7A5EBC: push    edi
0x7A5EBD: call    sub_7A5970
0x7A5EC2: add     esp, 18h
0x7A5EC5: cmp     [ebp+var_3C], 10h
0x7A5EC9: jb      short loc_7A5ED7
0x7A5ECB: mov     eax, [ebp+var_50]
0x7A5ECE: push    eax
0x7A5ECF: call    FormHeapFree
0x7A5ED4: add     esp, 4
0x7A5ED7: mov     ecx, [ebp+var_C]
0x7A5EDA: mov     large fs:0, ecx
0x7A5EE1: pop     ecx
0x7A5EE2: pop     edi
0x7A5EE3: pop     esi
0x7A5EE4: pop     ebx
0x7A5EE5: mov     ecx, [ebp+var_14]
0x7A5EE8: xor     ecx, ebp
0x7A5EEA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7A5EEF: mov     esp, ebp
0x7A5EF1: pop     ebp
0x7A5EF2: retn    10h
