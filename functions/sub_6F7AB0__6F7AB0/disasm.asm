0x6F7AB0: push    0FFFFFFFFh
0x6F7AB2: push    offset SEH_6F7AB0
0x6F7AB7: mov     eax, large fs:0
0x6F7ABD: push    eax
0x6F7ABE: sub     esp, 28h
0x6F7AC1: mov     eax, ds:0B30AACh
0x6F7AC6: xor     eax, esp
0x6F7AC8: mov     [esp+34h+var_10], eax
0x6F7ACC: push    ebx
0x6F7ACD: push    ebp
0x6F7ACE: push    esi
0x6F7ACF: push    edi; File
0x6F7AD0: mov     eax, ds:0B30AACh
0x6F7AD5: xor     eax, esp
0x6F7AD7: push    eax
0x6F7AD8: lea     eax, [esp+48h+var_C]
0x6F7ADC: mov     large fs:0, eax
0x6F7AE2: mov     ebx, ecx
0x6F7AE4: cmp     dword ptr [ebx+3Ch], 0
0x6F7AE8: mov     [esp+48h+var_34], ebx
0x6F7AEC: jz      loc_6F7DAC
0x6F7AF2: cmp     byte ptr [ebx+41h], 0
0x6F7AF6: jz      loc_6F7DAC
0x6F7AFC: mov     eax, [ebx]
0x6F7AFE: mov     edx, [eax+4]
0x6F7B01: push    0FFFFFFFFh
0x6F7B03: call    edx
0x6F7B05: cmp     eax, 0FFFFFFFFh
0x6F7B08: jz      loc_6F7D9F
0x6F7B0E: mov     ecx, 0Fh
0x6F7B13: xor     eax, eax
0x6F7B15: cmp     ecx, 10h
0x6F7B18: mov     byte ptr [esp+48h+Str], 0
0x6F7B1D: mov     [esp+48h+var_14], ecx
0x6F7B21: mov     [esp+48h+Str], eax
0x6F7B25: mov     [esp+48h+var_24], eax
0x6F7B29: mov     [esp+48h+var_18], 8
0x6F7B31: jnb     short loc_6F7B37
0x6F7B33: lea     eax, [esp+48h+Str]
0x6F7B37: mov     byte ptr [eax+8], 0
0x6F7B3B: mov     [esp+48h+var_4], 0
0x6F7B43: mov     eax, [esp+48h+Str]
0x6F7B47: mov     edx, [esp+48h+var_14]
0x6F7B4B: jmp     short loc_6F7B50
0x6F7B4D: align 10h
0x6F7B50: cmp     edx, 10h
0x6F7B53: jb      loc_6F7C57
0x6F7B59: test    eax, eax
0x6F7B5B: mov     ebp, eax
0x6F7B5D: jz      short loc_6F7B83
0x6F7B5F: cmp     edx, 10h
0x6F7B62: mov     ecx, eax
0x6F7B64: jnb     short loc_6F7B6A
0x6F7B66: lea     ecx, [esp+48h+Str]
0x6F7B6A: cmp     ecx, ebp
0x6F7B6C: ja      short loc_6F7B83
0x6F7B6E: cmp     edx, 10h
0x6F7B71: mov     ecx, eax
0x6F7B73: jnb     short loc_6F7B79
0x6F7B75: lea     ecx, [esp+48h+Str]
0x6F7B79: mov     esi, [esp+48h+var_18]
0x6F7B7D: add     ecx, esi
0x6F7B7F: cmp     ebp, ecx
0x6F7B81: jbe     short loc_6F7B90
0x6F7B83: call    __invalid_parameter_noinfo
0x6F7B88: mov     edx, [esp+48h+var_14]
0x6F7B8C: mov     eax, [esp+48h+Str]
0x6F7B90: lea     ecx, [esp+48h+var_2C]
0x6F7B94: cmp     ecx, 0FFFFFFFEh
0x6F7B97: jz      short loc_6F7BBB
0x6F7B99: cmp     edx, 10h
0x6F7B9C: mov     ecx, eax
0x6F7B9E: jnb     short loc_6F7BA4
0x6F7BA0: lea     ecx, [esp+48h+Str]
0x6F7BA4: mov     esi, [esp+48h+var_18]
0x6F7BA8: add     ecx, esi
0x6F7BAA: cmp     ebp, ecx
0x6F7BAC: jb      short loc_6F7BBB
0x6F7BAE: call    __invalid_parameter_noinfo
0x6F7BB3: mov     edx, [esp+48h+var_14]
0x6F7BB7: mov     eax, [esp+48h+Str]
0x6F7BBB: cmp     edx, 10h
0x6F7BBE: mov     edi, [esp+48h+var_18]
0x6F7BC2: jb      loc_6F7C60
0x6F7BC8: test    eax, eax
0x6F7BCA: mov     esi, eax
0x6F7BCC: jz      short loc_6F7BF6
0x6F7BCE: cmp     edx, 10h
0x6F7BD1: mov     ecx, eax
0x6F7BD3: jnb     short loc_6F7BD9
0x6F7BD5: lea     ecx, [esp+48h+Str]
0x6F7BD9: cmp     ecx, esi
0x6F7BDB: ja      short loc_6F7BF6
0x6F7BDD: cmp     edx, 10h
0x6F7BE0: mov     ecx, eax
0x6F7BE2: jnb     short loc_6F7BE8
0x6F7BE4: lea     ecx, [esp+48h+Str]
0x6F7BE8: mov     ebx, [esp+48h+var_18]
0x6F7BEC: add     ecx, ebx
0x6F7BEE: cmp     esi, ecx
0x6F7BF0: mov     ebx, [esp+48h+var_34]
0x6F7BF4: jbe     short loc_6F7C03
0x6F7BF6: call    __invalid_parameter_noinfo
0x6F7BFB: mov     edx, [esp+48h+var_14]
0x6F7BFF: mov     eax, [esp+48h+Str]
0x6F7C03: lea     ecx, [esp+48h+var_2C]
0x6F7C07: cmp     ecx, 0FFFFFFFEh
0x6F7C0A: jz      short loc_6F7C24
0x6F7C0C: cmp     edx, 10h
0x6F7C0F: jnb     short loc_6F7C15
0x6F7C11: lea     eax, [esp+48h+Str]
0x6F7C15: mov     edx, [esp+48h+var_18]
0x6F7C19: add     eax, edx
0x6F7C1B: cmp     esi, eax
0x6F7C1D: jb      short loc_6F7C24
0x6F7C1F: call    __invalid_parameter_noinfo
0x6F7C24: mov     ecx, [ebx+3Ch]
0x6F7C27: mov     edx, [ecx]
0x6F7C29: mov     edx, [edx+18h]
0x6F7C2C: lea     eax, [esp+48h+var_30]
0x6F7C30: push    eax
0x6F7C31: add     ebp, edi
0x6F7C33: push    ebp
0x6F7C34: push    esi
0x6F7C35: lea     eax, [ebx+44h]
0x6F7C38: push    eax
0x6F7C39: call    edx
0x6F7C3B: sub     eax, 0
0x6F7C3E: jz      short loc_6F7C69
0x6F7C40: sub     eax, 1
0x6F7C43: jz      short loc_6F7C6D
0x6F7C45: sub     eax, 2
0x6F7C48: lea     ecx, [esp+48h+var_2C]
0x6F7C4C: jnz     loc_6F7D9A
0x6F7C52: jmp     loc_6F7DA7
0x6F7C57: lea     ebp, [esp+48h+Str]
0x6F7C5B: jmp     loc_6F7B5F
0x6F7C60: lea     esi, [esp+48h+Str]
0x6F7C64: jmp     loc_6F7BCE
0x6F7C69: mov     byte ptr [ebx+41h], 0
0x6F7C6D: mov     edx, [esp+48h+var_14]
0x6F7C71: cmp     edx, 10h
0x6F7C74: mov     eax, [esp+48h+Str]
0x6F7C78: jb      loc_6F7D84
0x6F7C7E: test    eax, eax
0x6F7C80: mov     esi, eax
0x6F7C82: jz      short loc_6F7CA8
0x6F7C84: cmp     edx, 10h
0x6F7C87: mov     ecx, eax
0x6F7C89: jnb     short loc_6F7C8F
0x6F7C8B: lea     ecx, [esp+48h+Str]
0x6F7C8F: cmp     ecx, esi
0x6F7C91: ja      short loc_6F7CA8
0x6F7C93: cmp     edx, 10h
0x6F7C96: mov     ecx, eax
0x6F7C98: jnb     short loc_6F7C9E
0x6F7C9A: lea     ecx, [esp+48h+Str]
0x6F7C9E: mov     edi, [esp+48h+var_18]
0x6F7CA2: add     ecx, edi
0x6F7CA4: cmp     esi, ecx
0x6F7CA6: jbe     short loc_6F7CB5
0x6F7CA8: call    __invalid_parameter_noinfo
0x6F7CAD: mov     edx, [esp+48h+var_14]
0x6F7CB1: mov     eax, [esp+48h+Str]
0x6F7CB5: lea     ecx, [esp+48h+var_2C]
0x6F7CB9: cmp     ecx, 0FFFFFFFEh
0x6F7CBC: jz      short loc_6F7CE0
0x6F7CBE: cmp     edx, 10h
0x6F7CC1: mov     ecx, eax
0x6F7CC3: jnb     short loc_6F7CC9
0x6F7CC5: lea     ecx, [esp+48h+Str]
0x6F7CC9: mov     edi, [esp+48h+var_18]
0x6F7CCD: add     ecx, edi
0x6F7CCF: cmp     esi, ecx
0x6F7CD1: jb      short loc_6F7CE0
0x6F7CD3: call    __invalid_parameter_noinfo
0x6F7CD8: mov     edx, [esp+48h+var_14]
0x6F7CDC: mov     eax, [esp+48h+Str]
0x6F7CE0: mov     edi, [esp+48h+var_30]
0x6F7CE4: sub     edi, esi
0x6F7CE6: jz      short loc_6F7D65
0x6F7CE8: cmp     edx, 10h
0x6F7CEB: jb      loc_6F7D8D
0x6F7CF1: test    eax, eax
0x6F7CF3: mov     esi, eax
0x6F7CF5: jz      short loc_6F7D1B
0x6F7CF7: cmp     edx, 10h
0x6F7CFA: mov     ecx, eax
0x6F7CFC: jnb     short loc_6F7D02
0x6F7CFE: lea     ecx, [esp+48h+Str]
0x6F7D02: cmp     ecx, esi
0x6F7D04: ja      short loc_6F7D1B
0x6F7D06: cmp     edx, 10h
0x6F7D09: mov     ecx, eax
0x6F7D0B: jnb     short loc_6F7D11
0x6F7D0D: lea     ecx, [esp+48h+Str]
0x6F7D11: mov     ebp, [esp+48h+var_18]
0x6F7D15: add     ecx, ebp
0x6F7D17: cmp     esi, ecx
0x6F7D19: jbe     short loc_6F7D28
0x6F7D1B: call    __invalid_parameter_noinfo
0x6F7D20: mov     edx, [esp+48h+var_14]
0x6F7D24: mov     eax, [esp+48h+Str]
0x6F7D28: lea     ecx, [esp+48h+var_2C]
0x6F7D2C: cmp     ecx, 0FFFFFFFEh
0x6F7D2F: jz      short loc_6F7D49
0x6F7D31: cmp     edx, 10h
0x6F7D34: jnb     short loc_6F7D3A
0x6F7D36: lea     eax, [esp+48h+Str]
0x6F7D3A: mov     edx, [esp+48h+var_18]
0x6F7D3E: add     eax, edx
0x6F7D40: cmp     esi, eax
0x6F7D42: jb      short loc_6F7D49
0x6F7D44: call    __invalid_parameter_noinfo
0x6F7D49: mov     eax, [ebx+4Ch]
0x6F7D4C: push    eax; Count
0x6F7D4D: push    edi; Count
0x6F7D4E: push    1; Size
0x6F7D50: push    esi; Str
0x6F7D51: call    _fwrite
0x6F7D56: add     esp, 10h
0x6F7D59: cmp     edi, eax
0x6F7D5B: jnz     short loc_6F7D96
0x6F7D5D: mov     edx, [esp+48h+var_14]
0x6F7D61: mov     eax, [esp+48h+Str]
0x6F7D65: cmp     byte ptr [ebx+41h], 0
0x6F7D69: jz      short loc_6F7DA3
0x6F7D6B: test    edi, edi
0x6F7D6D: jnz     loc_6F7B50
0x6F7D73: push    edi
0x6F7D74: push    8
0x6F7D76: lea     ecx, [esp+50h+var_2C]
0x6F7D7A: call    sub_6EDAA0
0x6F7D7F: jmp     loc_6F7B43
0x6F7D84: lea     esi, [esp+48h+Str]
0x6F7D88: jmp     loc_6F7C84
0x6F7D8D: lea     esi, [esp+48h+Str]
0x6F7D91: jmp     loc_6F7CF7
0x6F7D96: lea     ecx, [esp+48h+var_2C]
0x6F7D9A: call    sub_79AB00
0x6F7D9F: xor     al, al
0x6F7DA1: jmp     short loc_6F7DAE
0x6F7DA3: lea     ecx, [esp+48h+var_2C]
0x6F7DA7: call    sub_79AB00
0x6F7DAC: mov     al, 1
0x6F7DAE: mov     ecx, dword ptr [esp+48h+var_C]
0x6F7DB2: mov     large fs:0, ecx
0x6F7DB9: pop     ecx
0x6F7DBA: pop     edi
0x6F7DBB: pop     esi
0x6F7DBC: pop     ebp
0x6F7DBD: pop     ebx
0x6F7DBE: mov     ecx, [esp+34h+var_10]
0x6F7DC2: xor     ecx, esp
0x6F7DC4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6F7DC9: add     esp, 34h
0x6F7DCC: retn
