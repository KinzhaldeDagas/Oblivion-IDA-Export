0x7A0D40: push    ebp
0x7A0D41: mov     ebp, esp
0x7A0D43: push    0FFFFFFFFh
0x7A0D45: push    offset SEH_7A0D40
0x7A0D4A: mov     eax, large fs:0
0x7A0D50: push    eax
0x7A0D51: sub     esp, 1Ch
0x7A0D54: push    ebx
0x7A0D55: push    esi
0x7A0D56: push    edi
0x7A0D57: mov     eax, ds:0B30AACh
0x7A0D5C: xor     eax, ebp
0x7A0D5E: push    eax
0x7A0D5F: lea     eax, [ebp+var_C]
0x7A0D62: mov     large fs:0, eax
0x7A0D68: mov     [ebp+var_10], esp
0x7A0D6B: mov     esi, [ebp+arg_8]
0x7A0D6E: xor     ecx, ecx
0x7A0D70: mov     [ebp+var_14], esi
0x7A0D73: mov     [ebp+var_24], ecx
0x7A0D76: mov     [ebp+var_20], ecx
0x7A0D79: mov     [ebp+var_1C], ecx
0x7A0D7C: mov     edi, [ebp+arg_0]
0x7A0D7F: mov     [ebp+var_4], ecx
0x7A0D82: mov     bl, 1
0x7A0D84: cmp     edi, [ebp+arg_4]
0x7A0D87: mov     byte ptr [ebp+var_4], bl
0x7A0D8A: jz      short loc_7A0DFB
0x7A0D8C: mov     [ebp+arg_0], esi
0x7A0D8F: mov     [ebp+var_18], esi
0x7A0D92: cmp     esi, ecx
0x7A0D94: mov     byte ptr [ebp+var_4], 2
0x7A0D98: jz      short loc_7A0DA7
0x7A0D9A: lea     eax, [ebp+var_28]
0x7A0D9D: push    eax
0x7A0D9E: mov     ecx, esi
0x7A0DA0: call    sub_79EE40
0x7A0DA5: xor     ecx, ecx
0x7A0DA7: mov     edx, [edi+4]
0x7A0DAA: mov     eax, [esi+4]
0x7A0DAD: mov     [esi+4], edx
0x7A0DB0: mov     [edi+4], eax
0x7A0DB3: mov     edx, [edi+8]
0x7A0DB6: mov     eax, [esi+8]
0x7A0DB9: mov     [esi+8], edx
0x7A0DBC: mov     [edi+8], eax
0x7A0DBF: mov     edx, [edi+0Ch]
0x7A0DC2: mov     eax, [esi+0Ch]
0x7A0DC5: mov     [esi+0Ch], edx
0x7A0DC8: add     esi, 10h
0x7A0DCB: mov     [edi+0Ch], eax
0x7A0DCE: mov     [ebp+arg_8], esi
0x7A0DD1: add     edi, 10h
0x7A0DD4: jmp     short loc_7A0D84
0x7A0DD6: mov     esi, [ebp+var_14]
0x7A0DD9: mov     edi, [ebp+arg_8]
0x7A0DDC: cmp     esi, edi
0x7A0DDE: jz      short loc_7A0DF2
0x7A0DE0: mov     ebx, [ebp+arg_C]
0x7A0DE3: push    esi
0x7A0DE4: mov     ecx, ebx
0x7A0DE6: call    sub_7A0B00
0x7A0DEB: add     esi, 10h
0x7A0DEE: cmp     esi, edi
0x7A0DF0: jnz     short loc_7A0DE3
0x7A0DF2: push    0
0x7A0DF4: push    0
0x7A0DF6: call    ThrowException??
0x7A0DFB: mov     edi, [ebp+var_24]
0x7A0DFE: cmp     edi, ecx
0x7A0E00: jz      short loc_7A0E40
0x7A0E02: cmp     edi, [ebp+var_20]
0x7A0E05: jz      short loc_7A0E37
0x7A0E07: add     edi, 4
0x7A0E0A: lea     ebx, [ebx+0]
0x7A0E10: mov     eax, [edi]
0x7A0E12: cmp     eax, ecx
0x7A0E14: jz      short loc_7A0E21
0x7A0E16: push    eax
0x7A0E17: call    FormHeapFree
0x7A0E1C: add     esp, 4
0x7A0E1F: xor     ecx, ecx
0x7A0E21: mov     [edi], ecx
0x7A0E23: mov     [edi+4], ecx
0x7A0E26: mov     [edi+8], ecx
0x7A0E29: add     edi, 30h ; '0'
0x7A0E2C: lea     eax, [edi-4]
0x7A0E2F: cmp     eax, [ebp+var_20]
0x7A0E32: jnz     short loc_7A0E10
0x7A0E34: mov     edi, [ebp+var_24]
0x7A0E37: push    edi
0x7A0E38: call    FormHeapFree
0x7A0E3D: add     esp, 4
0x7A0E40: mov     eax, esi
0x7A0E42: mov     ecx, [ebp+var_C]
0x7A0E45: mov     large fs:0, ecx
0x7A0E4C: pop     ecx
0x7A0E4D: pop     edi
0x7A0E4E: pop     esi
0x7A0E4F: pop     ebx
0x7A0E50: mov     esp, ebp
0x7A0E52: pop     ebp
0x7A0E53: retn
