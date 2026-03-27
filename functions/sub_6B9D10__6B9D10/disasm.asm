0x6B9D10: push    0FFFFFFFFh
0x6B9D12: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x6B9D17: mov     eax, large fs:0
0x6B9D1D: push    eax
0x6B9D1E: push    ecx
0x6B9D1F: push    ebx
0x6B9D20: push    ebp
0x6B9D21: push    esi
0x6B9D22: push    edi
0x6B9D23: mov     eax, ds:0B30AACh
0x6B9D28: xor     eax, esp
0x6B9D2A: push    eax
0x6B9D2B: lea     eax, [esp+24h+var_C]
0x6B9D2F: mov     large fs:0, eax
0x6B9D35: mov     ebx, ecx
0x6B9D37: mov     ecx, [esp+24h+arg_0]
0x6B9D3B: mov     eax, [ecx+38h]
0x6B9D3E: add     [ebx+24h], eax
0x6B9D41: xor     ebp, ebp
0x6B9D43: cmp     [ecx+30h], ebp
0x6B9D46: jbe     loc_6B9DF1
0x6B9D4C: jmp     short loc_6B9D52
0x6B9D4E: align 10h
0x6B9D50: mov     ecx, eax
0x6B9D52: test    ebp, ebp
0x6B9D54: mov     eax, [ecx+28h]
0x6B9D57: jbe     short loc_6B9D6F
0x6B9D59: mov     ecx, ebp
0x6B9D5B: jmp     short loc_6B9D60
0x6B9D5D: align 10h
0x6B9D60: test    eax, eax
0x6B9D62: jz      short loc_6B9D68
0x6B9D64: mov     eax, [eax]
0x6B9D66: jmp     short loc_6B9D6A
0x6B9D68: xor     eax, eax
0x6B9D6A: sub     ecx, 1
0x6B9D6D: jnz     short loc_6B9D60
0x6B9D6F: mov     edi, [eax+8]
0x6B9D72: mov     eax, [edi+0Ch]
0x6B9D75: push    eax
0x6B9D76: mov     ecx, ebx
0x6B9D78: call    sub_6B96F0
0x6B9D7D: cmp     eax, 0FFFFFFFFh
0x6B9D80: jnz     short loc_6B9DC0
0x6B9D82: push    28h ; '('; Size
0x6B9D84: call    FormHeapAlloc
0x6B9D89: add     esp, 4
0x6B9D8C: mov     [esp+24h+var_10], eax
0x6B9D90: test    eax, eax
0x6B9D92: mov     [esp+24h+var_4], 0
0x6B9D9A: jz      short loc_6B9DAA
0x6B9D9C: mov     ecx, [edi+0Ch]
0x6B9D9F: push    ebx
0x6B9DA0: push    ecx
0x6B9DA1: mov     ecx, eax
0x6B9DA3: call    sub_6B9BD0
0x6B9DA8: jmp     short loc_6B9DAC
0x6B9DAA: xor     eax, eax
0x6B9DAC: push    eax
0x6B9DAD: mov     ecx, ebx
0x6B9DAF: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6B9DB7: mov     esi, eax
0x6B9DB9: call    sub_6B9B40
0x6B9DBE: jmp     short loc_6B9DD9
0x6B9DC0: test    eax, eax
0x6B9DC2: mov     ecx, [ebx+14h]
0x6B9DC5: jbe     short loc_6B9DD6
0x6B9DC7: test    ecx, ecx
0x6B9DC9: jz      short loc_6B9DCF
0x6B9DCB: mov     ecx, [ecx]
0x6B9DCD: jmp     short loc_6B9DD1
0x6B9DCF: xor     ecx, ecx
0x6B9DD1: sub     eax, 1
0x6B9DD4: jnz     short loc_6B9DC7
0x6B9DD6: mov     esi, [ecx+8]
0x6B9DD9: push    edi
0x6B9DDA: mov     ecx, esi
0x6B9DDC: call    sub_6B9D10
0x6B9DE1: mov     eax, [esp+24h+arg_0]
0x6B9DE5: add     ebp, 1
0x6B9DE8: cmp     ebp, [eax+30h]
0x6B9DEB: jb      loc_6B9D50
0x6B9DF1: mov     ecx, [esp+24h+var_C]
0x6B9DF5: mov     large fs:0, ecx
0x6B9DFC: pop     ecx
0x6B9DFD: pop     edi
0x6B9DFE: pop     esi
0x6B9DFF: pop     ebp
0x6B9E00: pop     ebx
0x6B9E01: add     esp, 10h
0x6B9E04: retn    4
