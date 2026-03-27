0x795E00: push    ebp
0x795E01: mov     ebp, esp
0x795E03: push    0FFFFFFFFh
0x795E05: push    offset SEH_795E00
0x795E0A: mov     eax, large fs:0
0x795E10: push    eax
0x795E11: sub     esp, 1Ch
0x795E14: push    ebx
0x795E15: push    esi
0x795E16: push    edi
0x795E17: mov     eax, ds:0B30AACh
0x795E1C: xor     eax, ebp
0x795E1E: push    eax
0x795E1F: lea     eax, [ebp+var_C]
0x795E22: mov     large fs:0, eax
0x795E28: mov     [ebp+var_10], esp
0x795E2B: mov     esi, [ebp+arg_8]
0x795E2E: xor     ecx, ecx
0x795E30: mov     [ebp+var_14], esi
0x795E33: mov     [ebp+var_24], ecx
0x795E36: mov     [ebp+var_20], ecx
0x795E39: mov     [ebp+var_1C], ecx
0x795E3C: mov     edi, [ebp+arg_0]
0x795E3F: mov     bl, 1
0x795E41: mov     [ebp+var_4], ecx
0x795E44: mov     byte ptr [ebp+var_4], bl
0x795E47: cmp     edi, [ebp+arg_4]
0x795E4A: jz      short loc_795EA8
0x795E4C: mov     [ebp+arg_0], esi
0x795E4F: mov     [ebp+var_18], esi
0x795E52: cmp     esi, ecx
0x795E54: mov     byte ptr [ebp+var_4], 2
0x795E58: jz      short loc_795E65
0x795E5A: lea     eax, [ebp+var_28]
0x795E5D: push    eax
0x795E5E: mov     ecx, esi
0x795E60: call    sub_795480
0x795E65: push    edi
0x795E66: mov     ecx, esi
0x795E68: mov     byte ptr [ebp+var_4], bl
0x795E6B: call    sub_795630
0x795E70: add     esi, 10h
0x795E73: add     edi, 10h
0x795E76: mov     [ebp+arg_8], esi
0x795E79: xor     ecx, ecx
0x795E7B: jmp     short loc_795E47
0x795E7D: mov     esi, [ebp+var_14]
0x795E80: mov     edi, [ebp+arg_8]
0x795E83: cmp     esi, edi
0x795E85: jz      short loc_795E9F
0x795E87: mov     ebx, [ebp+arg_C]
0x795E8A: lea     ebx, [ebx+0]
0x795E90: push    esi
0x795E91: mov     ecx, ebx
0x795E93: call    sub_79BFF0
0x795E98: add     esi, 10h
0x795E9B: cmp     esi, edi
0x795E9D: jnz     short loc_795E90
0x795E9F: push    0
0x795EA1: push    0
0x795EA3: call    ThrowException??
0x795EA8: mov     eax, [ebp+var_24]
0x795EAB: cmp     eax, ecx
0x795EAD: jz      short loc_795EB8
0x795EAF: push    eax
0x795EB0: call    FormHeapFree
0x795EB5: add     esp, 4
0x795EB8: mov     eax, esi
0x795EBA: mov     ecx, [ebp+var_C]
0x795EBD: mov     large fs:0, ecx
0x795EC4: pop     ecx
0x795EC5: pop     edi
0x795EC6: pop     esi
0x795EC7: pop     ebx
0x795EC8: mov     esp, ebp
0x795ECA: pop     ebp
0x795ECB: retn
