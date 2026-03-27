0x99F66D: push    ebp
0x99F66E: mov     ebp, esp
0x99F670: sub     esp, 2Ch
0x99F673: mov     eax, [ebp+arg_0]
0x99F676: movzx   ecx, word ptr [eax+0Ah]
0x99F67A: push    ebx
0x99F67B: mov     ebx, ecx
0x99F67D: and     ecx, 8000h
0x99F683: mov     [ebp+var_14], ecx
0x99F686: mov     ecx, [eax+6]
0x99F689: mov     [ebp+var_20], ecx
0x99F68C: mov     ecx, [eax+2]
0x99F68F: movzx   eax, word ptr [eax]
0x99F692: and     ebx, 7FFFh
0x99F698: sub     ebx, 3FFFh
0x99F69E: shl     eax, 10h
0x99F6A1: cmp     ebx, 0FFFFC001h
0x99F6A7: push    edi
0x99F6A8: mov     [ebp+var_1C], ecx
0x99F6AB: mov     [ebp+var_18], eax
0x99F6AE: jnz     short loc_99F6D7
0x99F6B0: xor     ebx, ebx
0x99F6B2: xor     eax, eax
0x99F6B4: cmp     [ebp+eax*4+var_20], ebx
0x99F6B8: jnz     short loc_99F6C7
0x99F6BA: inc     eax
0x99F6BB: cmp     eax, 3
0x99F6BE: jl      short loc_99F6B4
0x99F6C0: xor     eax, eax
0x99F6C2: jmp     loc_99FB6C
0x99F6C7: xor     eax, eax
0x99F6C9: lea     edi, [ebp+var_20]
0x99F6CC: stosd
0x99F6CD: stosd
0x99F6CE: push    2
0x99F6D0: stosd
0x99F6D1: pop     eax
0x99F6D2: jmp     loc_99FB6C
0x99F6D7: and     [ebp+arg_0], 0
0x99F6DB: push    esi
0x99F6DC: lea     esi, [ebp+var_20]
0x99F6DF: lea     edi, [ebp+var_2C]
0x99F6E2: movsd
0x99F6E3: movsd
0x99F6E4: movsd
0x99F6E5: mov     esi, dword_B3210C
0x99F6EB: dec     esi
0x99F6EC: lea     ecx, [esi+1]
0x99F6EF: mov     eax, ecx
0x99F6F1: cdq
0x99F6F2: and     edx, 1Fh
0x99F6F5: add     eax, edx
0x99F6F7: sar     eax, 5
0x99F6FA: mov     edx, ecx
0x99F6FC: and     edx, 8000001Fh
0x99F702: mov     [ebp+var_10], ebx
0x99F705: mov     [ebp+var_C], eax
0x99F708: jns     short loc_99F70F
0x99F70A: dec     edx
0x99F70B: or      edx, 0FFFFFFE0h
0x99F70E: inc     edx
0x99F70F: lea     edi, [ebp+eax*4+var_20]
0x99F713: push    1Fh
0x99F715: xor     eax, eax
0x99F717: pop     ecx
0x99F718: sub     ecx, edx
0x99F71A: inc     eax
0x99F71B: shl     eax, cl
0x99F71D: mov     [ebp+var_8], ecx
0x99F720: test    [edi], eax
0x99F722: jz      loc_99F7B5
0x99F728: mov     eax, [ebp+var_C]
0x99F72B: or      edx, 0FFFFFFFFh
0x99F72E: shl     edx, cl
0x99F730: not     edx
0x99F732: test    [ebp+eax*4+var_20], edx
0x99F736: jmp     short loc_99F73D
0x99F738: cmp     [ebp+eax*4+var_20], 0
0x99F73D: jnz     short loc_99F747
0x99F73F: inc     eax
0x99F740: cmp     eax, 3
0x99F743: jl      short loc_99F738
0x99F745: jmp     short loc_99F7B5
0x99F747: mov     eax, esi
0x99F749: cdq
0x99F74A: push    1Fh
0x99F74C: pop     ecx
0x99F74D: and     edx, ecx
0x99F74F: add     eax, edx
0x99F751: sar     eax, 5
0x99F754: and     esi, 8000001Fh
0x99F75A: jns     short loc_99F761
0x99F75C: dec     esi
0x99F75D: or      esi, 0FFFFFFE0h
0x99F760: inc     esi
0x99F761: and     [ebp+var_4], 0
0x99F765: sub     ecx, esi
0x99F767: xor     edx, edx
0x99F769: inc     edx
0x99F76A: shl     edx, cl
0x99F76C: lea     ecx, [ebp+eax*4+var_20]
0x99F770: mov     esi, [ecx]
0x99F772: add     esi, edx
0x99F774: mov     [ebp+arg_0], esi
0x99F777: mov     esi, [ecx]
0x99F779: cmp     [ebp+arg_0], esi
0x99F77C: jb      short loc_99F7A0
0x99F77E: cmp     [ebp+arg_0], edx
0x99F781: jmp     short loc_99F79E
0x99F783: test    ecx, ecx
0x99F785: jz      short loc_99F7B2
0x99F787: and     [ebp+var_4], 0
0x99F78B: lea     ecx, [ebp+eax*4+var_20]
0x99F78F: mov     edx, [ecx]
0x99F791: lea     esi, [edx+1]
0x99F794: cmp     esi, edx
0x99F796: mov     [ebp+arg_0], esi
0x99F799: jb      short loc_99F7A0
0x99F79B: cmp     esi, 1
0x99F79E: jnb     short loc_99F7A7
0x99F7A0: mov     [ebp+var_4], 1
0x99F7A7: dec     eax
0x99F7A8: mov     edx, [ebp+arg_0]
0x99F7AB: mov     [ecx], edx
0x99F7AD: mov     ecx, [ebp+var_4]
0x99F7B0: jns     short loc_99F783
0x99F7B2: mov     [ebp+arg_0], ecx
0x99F7B5: mov     ecx, [ebp+var_8]
0x99F7B8: or      eax, 0FFFFFFFFh
0x99F7BB: shl     eax, cl
0x99F7BD: and     [edi], eax
0x99F7BF: mov     eax, [ebp+var_C]
0x99F7C2: inc     eax
0x99F7C3: cmp     eax, 3
0x99F7C6: jge     short loc_99F7D5
0x99F7C8: push    3
0x99F7CA: pop     ecx
0x99F7CB: lea     edi, [ebp+eax*4+var_20]
0x99F7CF: sub     ecx, eax
0x99F7D1: xor     eax, eax
0x99F7D3: rep stosd
0x99F7D5: cmp     [ebp+arg_0], 0
0x99F7D9: jz      short loc_99F7DC
0x99F7DB: inc     ebx
0x99F7DC: mov     eax, dword_B32108
0x99F7E1: mov     ecx, eax
0x99F7E3: sub     ecx, dword_B3210C
0x99F7E9: cmp     ebx, ecx
0x99F7EB: jge     short loc_99F7FA
0x99F7ED: xor     eax, eax
0x99F7EF: lea     edi, [ebp+var_20]
0x99F7F2: stosd
0x99F7F3: stosd
0x99F7F4: stosd
0x99F7F5: jmp     loc_99FA07
0x99F7FA: cmp     ebx, eax
0x99F7FC: jg      loc_99FA11
0x99F802: sub     eax, [ebp+var_10]
0x99F805: lea     esi, [ebp+var_2C]
0x99F808: mov     ecx, eax
0x99F80A: lea     edi, [ebp+var_20]
0x99F80D: movsd
0x99F80E: cdq
0x99F80F: and     edx, 1Fh
0x99F812: add     eax, edx
0x99F814: movsd
0x99F815: mov     edx, ecx
0x99F817: sar     eax, 5
0x99F81A: and     edx, 8000001Fh
0x99F820: movsd
0x99F821: jns     short loc_99F828
0x99F823: dec     edx
0x99F824: or      edx, 0FFFFFFE0h
0x99F827: inc     edx
0x99F828: and     [ebp+var_C], 0
0x99F82C: and     [ebp+arg_0], 0
0x99F830: or      edi, 0FFFFFFFFh
0x99F833: mov     ecx, edx
0x99F835: shl     edi, cl
0x99F837: mov     [ebp+var_4], 20h ; ' '
0x99F83E: sub     [ebp+var_4], edx
0x99F841: not     edi
0x99F843: mov     ebx, [ebp+arg_0]
0x99F846: lea     ebx, [ebp+ebx*4+var_20]
0x99F84A: mov     esi, [ebx]
0x99F84C: mov     ecx, esi
0x99F84E: and     ecx, edi
0x99F850: mov     [ebp+var_10], ecx
0x99F853: mov     ecx, edx
0x99F855: shr     esi, cl
0x99F857: mov     ecx, [ebp+var_4]
0x99F85A: or      esi, [ebp+var_C]
0x99F85D: mov     [ebx], esi
0x99F85F: mov     esi, [ebp+var_10]
0x99F862: shl     esi, cl
0x99F864: inc     [ebp+arg_0]
0x99F867: cmp     [ebp+arg_0], 3
0x99F86B: mov     [ebp+var_C], esi
0x99F86E: jl      short loc_99F843
0x99F870: mov     esi, eax
0x99F872: push    2
0x99F874: shl     esi, 2
0x99F877: lea     ecx, [ebp+var_18]
0x99F87A: pop     edx
0x99F87B: sub     ecx, esi
0x99F87D: cmp     edx, eax
0x99F87F: jl      short loc_99F889
0x99F881: mov     esi, [ecx]
0x99F883: mov     [ebp+edx*4+var_20], esi
0x99F887: jmp     short loc_99F88E
0x99F889: and     [ebp+edx*4+var_20], 0
0x99F88E: dec     edx
0x99F88F: sub     ecx, 4
0x99F892: test    edx, edx
0x99F894: jge     short loc_99F87D
0x99F896: mov     esi, dword_B3210C
0x99F89C: dec     esi
0x99F89D: lea     ecx, [esi+1]
0x99F8A0: mov     eax, ecx
0x99F8A2: cdq
0x99F8A3: and     edx, 1Fh
0x99F8A6: add     eax, edx
0x99F8A8: sar     eax, 5
0x99F8AB: mov     edx, ecx
0x99F8AD: and     edx, 8000001Fh
0x99F8B3: mov     [ebp+var_C], eax
0x99F8B6: jns     short loc_99F8BD
0x99F8B8: dec     edx
0x99F8B9: or      edx, 0FFFFFFE0h
0x99F8BC: inc     edx
0x99F8BD: push    1Fh
0x99F8BF: pop     ecx
0x99F8C0: sub     ecx, edx
0x99F8C2: xor     edx, edx
0x99F8C4: inc     edx
0x99F8C5: shl     edx, cl
0x99F8C7: lea     ebx, [ebp+eax*4+var_20]
0x99F8CB: mov     [ebp+var_10], ecx
0x99F8CE: test    [ebx], edx
0x99F8D0: jz      loc_99F958
0x99F8D6: or      edx, 0FFFFFFFFh
0x99F8D9: shl     edx, cl
0x99F8DB: not     edx
0x99F8DD: test    [ebp+eax*4+var_20], edx
0x99F8E1: jmp     short loc_99F8E8
0x99F8E3: cmp     [ebp+eax*4+var_20], 0
0x99F8E8: jnz     short loc_99F8F2
0x99F8EA: inc     eax
0x99F8EB: cmp     eax, 3
0x99F8EE: jl      short loc_99F8E3
0x99F8F0: jmp     short loc_99F958
0x99F8F2: mov     eax, esi
0x99F8F4: cdq
0x99F8F5: push    1Fh
0x99F8F7: pop     ecx
0x99F8F8: and     edx, ecx
0x99F8FA: add     eax, edx
0x99F8FC: sar     eax, 5
0x99F8FF: and     esi, 8000001Fh
0x99F905: jns     short loc_99F90C
0x99F907: dec     esi
0x99F908: or      esi, 0FFFFFFE0h
0x99F90B: inc     esi
0x99F90C: and     [ebp+arg_0], 0
0x99F910: xor     edx, edx
0x99F912: sub     ecx, esi
0x99F914: inc     edx
0x99F915: shl     edx, cl
0x99F917: lea     ecx, [ebp+eax*4+var_20]
0x99F91B: mov     esi, [ecx]
0x99F91D: lea     edi, [esi+edx]
0x99F920: cmp     edi, esi
0x99F922: jb      short loc_99F928
0x99F924: cmp     edi, edx
0x99F926: jnb     short loc_99F92F
0x99F928: mov     [ebp+arg_0], 1
0x99F92F: mov     [ecx], edi
0x99F931: mov     ecx, [ebp+arg_0]
0x99F934: jmp     short loc_99F955
0x99F936: test    ecx, ecx
0x99F938: jz      short loc_99F958
0x99F93A: lea     ecx, [ebp+eax*4+var_20]
0x99F93E: mov     edx, [ecx]
0x99F940: lea     esi, [edx+1]
0x99F943: xor     edi, edi
0x99F945: cmp     esi, edx
0x99F947: jb      short loc_99F94E
0x99F949: cmp     esi, 1
0x99F94C: jnb     short loc_99F951
0x99F94E: xor     edi, edi
0x99F950: inc     edi
0x99F951: mov     [ecx], esi
0x99F953: mov     ecx, edi
0x99F955: dec     eax
0x99F956: jns     short loc_99F936
0x99F958: mov     ecx, [ebp+var_10]
0x99F95B: or      eax, 0FFFFFFFFh
0x99F95E: shl     eax, cl
0x99F960: and     [ebx], eax
0x99F962: mov     eax, [ebp+var_C]
0x99F965: inc     eax
0x99F966: cmp     eax, 3
0x99F969: jge     short loc_99F978
0x99F96B: push    3
0x99F96D: pop     ecx
0x99F96E: lea     edi, [ebp+eax*4+var_20]
0x99F972: sub     ecx, eax
0x99F974: xor     eax, eax
0x99F976: rep stosd
0x99F978: mov     ecx, dword_B32110
0x99F97E: inc     ecx
0x99F97F: mov     eax, ecx
0x99F981: cdq
0x99F982: and     edx, 1Fh
0x99F985: add     eax, edx
0x99F987: mov     edx, ecx
0x99F989: sar     eax, 5
0x99F98C: and     edx, 8000001Fh
0x99F992: jns     short loc_99F999
0x99F994: dec     edx
0x99F995: or      edx, 0FFFFFFE0h
0x99F998: inc     edx
0x99F999: and     [ebp+var_C], 0
0x99F99D: and     [ebp+arg_0], 0
0x99F9A1: or      edi, 0FFFFFFFFh
0x99F9A4: mov     ecx, edx
0x99F9A6: shl     edi, cl
0x99F9A8: mov     [ebp+var_4], 20h ; ' '
0x99F9AF: sub     [ebp+var_4], edx
0x99F9B2: not     edi
0x99F9B4: mov     ebx, [ebp+arg_0]
0x99F9B7: lea     ebx, [ebp+ebx*4+var_20]
0x99F9BB: mov     esi, [ebx]
0x99F9BD: mov     ecx, esi
0x99F9BF: and     ecx, edi
0x99F9C1: mov     [ebp+var_10], ecx
0x99F9C4: mov     ecx, edx
0x99F9C6: shr     esi, cl
0x99F9C8: mov     ecx, [ebp+var_4]
0x99F9CB: or      esi, [ebp+var_C]
0x99F9CE: mov     [ebx], esi
0x99F9D0: mov     esi, [ebp+var_10]
0x99F9D3: shl     esi, cl
0x99F9D5: inc     [ebp+arg_0]
0x99F9D8: cmp     [ebp+arg_0], 3
0x99F9DC: mov     [ebp+var_C], esi
0x99F9DF: jl      short loc_99F9B4
0x99F9E1: mov     esi, eax
0x99F9E3: push    2
0x99F9E5: shl     esi, 2
0x99F9E8: lea     ecx, [ebp+var_18]
0x99F9EB: pop     edx
0x99F9EC: sub     ecx, esi
0x99F9EE: cmp     edx, eax
0x99F9F0: jl      short loc_99F9FA
0x99F9F2: mov     esi, [ecx]
0x99F9F4: mov     [ebp+edx*4+var_20], esi
0x99F9F8: jmp     short loc_99F9FF
0x99F9FA: and     [ebp+edx*4+var_20], 0
0x99F9FF: dec     edx
0x99FA00: sub     ecx, 4
0x99FA03: test    edx, edx
0x99FA05: jge     short loc_99F9EE
0x99FA07: push    2
0x99FA09: xor     ebx, ebx
0x99FA0B: pop     eax
0x99FA0C: jmp     loc_99FB6B
0x99FA11: cmp     ebx, dword_B32104
0x99FA17: mov     ecx, dword_B32110
0x99FA1D: jl      loc_99FAD0
0x99FA23: xor     eax, eax
0x99FA25: lea     edi, [ebp+var_20]
0x99FA28: stosd
0x99FA29: stosd
0x99FA2A: stosd
0x99FA2B: or      [ebp+var_20], 80000000h
0x99FA32: mov     eax, ecx
0x99FA34: cdq
0x99FA35: and     edx, 1Fh
0x99FA38: add     eax, edx
0x99FA3A: mov     edx, ecx
0x99FA3C: sar     eax, 5
0x99FA3F: and     edx, 8000001Fh
0x99FA45: jns     short loc_99FA4C
0x99FA47: dec     edx
0x99FA48: or      edx, 0FFFFFFE0h
0x99FA4B: inc     edx
0x99FA4C: and     [ebp+var_C], 0
0x99FA50: and     [ebp+arg_0], 0
0x99FA54: or      edi, 0FFFFFFFFh
0x99FA57: mov     ecx, edx
0x99FA59: shl     edi, cl
0x99FA5B: mov     [ebp+var_4], 20h ; ' '
0x99FA62: sub     [ebp+var_4], edx
0x99FA65: not     edi
0x99FA67: mov     ebx, [ebp+arg_0]
0x99FA6A: lea     ebx, [ebp+ebx*4+var_20]
0x99FA6E: mov     esi, [ebx]
0x99FA70: mov     ecx, esi
0x99FA72: and     ecx, edi
0x99FA74: mov     [ebp+var_10], ecx
0x99FA77: mov     ecx, edx
0x99FA79: shr     esi, cl
0x99FA7B: mov     ecx, [ebp+var_4]
0x99FA7E: or      esi, [ebp+var_C]
0x99FA81: mov     [ebx], esi
0x99FA83: mov     esi, [ebp+var_10]
0x99FA86: shl     esi, cl
0x99FA88: inc     [ebp+arg_0]
0x99FA8B: cmp     [ebp+arg_0], 3
0x99FA8F: mov     [ebp+var_C], esi
0x99FA92: jl      short loc_99FA67
0x99FA94: mov     esi, eax
0x99FA96: push    2
0x99FA98: shl     esi, 2
0x99FA9B: lea     ecx, [ebp+var_18]
0x99FA9E: pop     edx
0x99FA9F: sub     ecx, esi
0x99FAA1: cmp     edx, eax
0x99FAA3: jl      short loc_99FAAD
0x99FAA5: mov     esi, [ecx]
0x99FAA7: mov     [ebp+edx*4+var_20], esi
0x99FAAB: jmp     short loc_99FAB2
0x99FAAD: and     [ebp+edx*4+var_20], 0
0x99FAB2: dec     edx
0x99FAB3: sub     ecx, 4
0x99FAB6: test    edx, edx
0x99FAB8: jge     short loc_99FAA1
0x99FABA: mov     eax, dword_B32104
0x99FABF: mov     ecx, dword_B32118
0x99FAC5: lea     ebx, [ecx+eax]
0x99FAC8: xor     eax, eax
0x99FACA: inc     eax
0x99FACB: jmp     loc_99FB6B
0x99FAD0: mov     eax, dword_B32118
0x99FAD5: and     [ebp+var_20], 7FFFFFFFh
0x99FADC: add     ebx, eax
0x99FADE: mov     eax, ecx
0x99FAE0: cdq
0x99FAE1: and     edx, 1Fh
0x99FAE4: add     eax, edx
0x99FAE6: mov     edx, ecx
0x99FAE8: sar     eax, 5
0x99FAEB: and     edx, 8000001Fh
0x99FAF1: jns     short loc_99FAF8
0x99FAF3: dec     edx
0x99FAF4: or      edx, 0FFFFFFE0h
0x99FAF7: inc     edx
0x99FAF8: and     [ebp+var_C], 0
0x99FAFC: and     [ebp+arg_0], 0
0x99FB00: or      esi, 0FFFFFFFFh
0x99FB03: mov     ecx, edx
0x99FB05: shl     esi, cl
0x99FB07: mov     [ebp+var_4], 20h ; ' '
0x99FB0E: sub     [ebp+var_4], edx
0x99FB11: not     esi
0x99FB13: mov     ecx, [ebp+arg_0]
0x99FB16: mov     edi, [ebp+ecx*4+var_20]
0x99FB1A: mov     ecx, edi
0x99FB1C: and     ecx, esi
0x99FB1E: mov     [ebp+var_10], ecx
0x99FB21: mov     ecx, edx
0x99FB23: shr     edi, cl
0x99FB25: mov     ecx, [ebp+arg_0]
0x99FB28: or      edi, [ebp+var_C]
0x99FB2B: mov     [ebp+ecx*4+var_20], edi
0x99FB2F: mov     edi, [ebp+var_10]
0x99FB32: mov     ecx, [ebp+var_4]
0x99FB35: shl     edi, cl
0x99FB37: inc     [ebp+arg_0]
0x99FB3A: cmp     [ebp+arg_0], 3
0x99FB3E: mov     [ebp+var_C], edi
0x99FB41: jl      short loc_99FB13
0x99FB43: mov     esi, eax
0x99FB45: push    2
0x99FB47: shl     esi, 2
0x99FB4A: lea     ecx, [ebp+var_18]
0x99FB4D: pop     edx
0x99FB4E: sub     ecx, esi
0x99FB50: cmp     edx, eax
0x99FB52: jl      short loc_99FB5C
0x99FB54: mov     esi, [ecx]
0x99FB56: mov     [ebp+edx*4+var_20], esi
0x99FB5A: jmp     short loc_99FB61
0x99FB5C: and     [ebp+edx*4+var_20], 0
0x99FB61: dec     edx
0x99FB62: sub     ecx, 4
0x99FB65: test    edx, edx
0x99FB67: jge     short loc_99FB50
0x99FB69: xor     eax, eax
0x99FB6B: pop     esi
0x99FB6C: push    1Fh
0x99FB6E: pop     ecx
0x99FB6F: sub     ecx, dword_B32110
0x99FB75: shl     ebx, cl
0x99FB77: mov     ecx, [ebp+var_14]
0x99FB7A: neg     ecx
0x99FB7C: sbb     ecx, ecx
0x99FB7E: and     ecx, 80000000h
0x99FB84: or      ebx, ecx
0x99FB86: mov     ecx, dword_B32114
0x99FB8C: or      ebx, [ebp+var_20]
0x99FB8F: cmp     ecx, 40h ; '@'
0x99FB92: jnz     short loc_99FBA1
0x99FB94: mov     ecx, [ebp+arg_4]
0x99FB97: mov     edx, [ebp+var_1C]
0x99FB9A: mov     [ecx+4], ebx
0x99FB9D: mov     [ecx], edx
0x99FB9F: jmp     short loc_99FBAB
0x99FBA1: cmp     ecx, 20h ; ' '
0x99FBA4: jnz     short loc_99FBAB
0x99FBA6: mov     ecx, [ebp+arg_4]
0x99FBA9: mov     [ecx], ebx
0x99FBAB: pop     edi
0x99FBAC: pop     ebx
0x99FBAD: leave
0x99FBAE: retn
