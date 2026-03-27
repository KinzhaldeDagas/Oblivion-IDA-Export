0x7A8CA0: push    ebx
0x7A8CA1: mov     ebx, [esp+4+arg_0]
0x7A8CA5: push    ebp
0x7A8CA6: push    esi
0x7A8CA7: mov     esi, [esp+0Ch+arg_4]
0x7A8CAB: push    edi
0x7A8CAC: mov     edi, [esp+10h+arg_8]
0x7A8CB0: cmp     esi, [esp+10h+arg_10]
0x7A8CB4: jnz     short loc_7A8CC0
0x7A8CB6: cmp     edi, [esp+10h+arg_14]
0x7A8CBA: jz      loc_7A8D85
0x7A8CC0: test    ebx, ebx
0x7A8CC2: jnz     short loc_7A8CC9
0x7A8CC4: call    __invalid_parameter_noinfo
0x7A8CC9: mov     eax, [esp+10h+arg_18]
0x7A8CCD: cmp     byte ptr [eax], 0
0x7A8CD0: jz      short loc_7A8D0E
0x7A8CD2: test    ebx, ebx
0x7A8CD4: jz      short loc_7A8CDA
0x7A8CD6: test    esi, esi
0x7A8CD8: jnz     short loc_7A8CDF
0x7A8CDA: call    __invalid_parameter_noinfo
0x7A8CDF: mov     ebp, [ebx+8]
0x7A8CE2: cmp     ebp, [ebx+0Ch]
0x7A8CE5: jbe     short loc_7A8CEC
0x7A8CE7: call    __invalid_parameter_noinfo
0x7A8CEC: mov     ecx, esi
0x7A8CEE: sub     ecx, ebp
0x7A8CF0: sar     ecx, 2
0x7A8CF3: shl     ecx, 5
0x7A8CF6: add     ecx, edi
0x7A8CF8: cmp     ecx, [ebx]
0x7A8CFA: jb      short loc_7A8D01
0x7A8CFC: call    __invalid_parameter_noinfo
0x7A8D01: mov     edx, 1
0x7A8D06: mov     ecx, edi
0x7A8D08: shl     edx, cl
0x7A8D0A: or      [esi], edx
0x7A8D0C: jmp     short loc_7A8D4A
0x7A8D0E: test    ebx, ebx
0x7A8D10: jz      short loc_7A8D16
0x7A8D12: test    esi, esi
0x7A8D14: jnz     short loc_7A8D1B
0x7A8D16: call    __invalid_parameter_noinfo
0x7A8D1B: mov     ebp, [ebx+8]
0x7A8D1E: cmp     ebp, [ebx+0Ch]
0x7A8D21: jbe     short loc_7A8D28
0x7A8D23: call    __invalid_parameter_noinfo
0x7A8D28: mov     eax, esi
0x7A8D2A: sub     eax, ebp
0x7A8D2C: sar     eax, 2
0x7A8D2F: shl     eax, 5
0x7A8D32: add     eax, edi
0x7A8D34: cmp     eax, [ebx]
0x7A8D36: jb      short loc_7A8D3D
0x7A8D38: call    __invalid_parameter_noinfo
0x7A8D3D: mov     edx, 1
0x7A8D42: mov     ecx, edi
0x7A8D44: shl     edx, cl
0x7A8D46: not     edx
0x7A8D48: and     [esi], edx
0x7A8D4A: mov     ebp, [ebx+8]
0x7A8D4D: cmp     ebp, [ebx+0Ch]
0x7A8D50: jbe     short loc_7A8D57
0x7A8D52: call    __invalid_parameter_noinfo
0x7A8D57: mov     eax, esi
0x7A8D59: sub     eax, ebp
0x7A8D5B: sar     eax, 2
0x7A8D5E: shl     eax, 5
0x7A8D61: lea     ecx, [eax+edi+1]
0x7A8D65: cmp     ecx, [ebx]
0x7A8D67: jbe     short loc_7A8D6E
0x7A8D69: call    __invalid_parameter_noinfo
0x7A8D6E: cmp     edi, 1Fh
0x7A8D71: jnb     short loc_7A8D7B
0x7A8D73: add     edi, 1
0x7A8D76: jmp     loc_7A8CB0
0x7A8D7B: xor     edi, edi
0x7A8D7D: add     esi, 4
0x7A8D80: jmp     loc_7A8CB0
0x7A8D85: pop     edi
0x7A8D86: pop     esi
0x7A8D87: pop     ebp
0x7A8D88: pop     ebx
0x7A8D89: retn
