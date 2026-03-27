0x7A9CF0: push    ecx
0x7A9CF1: push    ebx
0x7A9CF2: push    ebp
0x7A9CF3: push    esi
0x7A9CF4: push    edi
0x7A9CF5: mov     edi, ecx
0x7A9CF7: xor     ebx, ebx
0x7A9CF9: xor     esi, esi
0x7A9CFB: cmp     [edi+21E6h], bx
0x7A9D02: jbe     short loc_7A9D4D
0x7A9D04: mov     eax, [edi+21E8h]
0x7A9D0A: cmp     [eax+esi*4], ebx
0x7A9D0D: lea     eax, [eax+esi*4]
0x7A9D10: jz      short loc_7A9D3F
0x7A9D12: mov     eax, [eax]
0x7A9D14: mov     ecx, [eax]
0x7A9D16: push    1
0x7A9D18: push    4
0x7A9D1A: lea     edx, [esp+1Ch+var_4]
0x7A9D1E: push    edx
0x7A9D1F: push    eax
0x7A9D20: mov     eax, [ecx+1Ch]
0x7A9D23: call    eax
0x7A9D25: mov     ecx, [edi+21E8h]
0x7A9D2B: mov     eax, [ecx+esi*4]
0x7A9D2E: mov     edx, [eax]
0x7A9D30: push    eax
0x7A9D31: mov     eax, [edx+8]
0x7A9D34: call    eax
0x7A9D36: mov     ecx, [edi+21E8h]
0x7A9D3C: mov     [ecx+esi*4], ebx
0x7A9D3F: movzx   edx, word ptr [edi+21E6h]
0x7A9D46: add     esi, 1
0x7A9D49: cmp     esi, edx
0x7A9D4B: jl      short loc_7A9D04
0x7A9D4D: lea     esi, [edi+0C8h]
0x7A9D53: mov     ebp, 3
0x7A9D58: mov     eax, [esi]
0x7A9D5A: cmp     eax, ebx
0x7A9D5C: jz      short loc_7A9D7E
0x7A9D5E: mov     ecx, [eax]
0x7A9D60: push    1
0x7A9D62: push    4
0x7A9D64: lea     edx, [esp+1Ch+var_4]
0x7A9D68: push    edx
0x7A9D69: push    eax
0x7A9D6A: mov     eax, [ecx+1Ch]
0x7A9D6D: call    eax
0x7A9D6F: mov     eax, [esi]
0x7A9D71: mov     ecx, [eax]
0x7A9D73: mov     edx, [ecx+8]
0x7A9D76: push    eax
0x7A9D77: call    edx
0x7A9D79: mov     [esi], ebx
0x7A9D7B: mov     [esi+4], bl
0x7A9D7E: add     esi, 14h
0x7A9D81: sub     ebp, 1
0x7A9D84: jnz     short loc_7A9D58
0x7A9D86: cmp     [edi+2238h], ebx
0x7A9D8C: mov     ebp, [edi+2230h]
0x7A9D92: mov     [edi+0C0h], bl
0x7A9D98: jz      short loc_7A9DDB
0x7A9D9A: lea     ebx, [ebx+0]
0x7A9DA0: mov     esi, [ebp+8]
0x7A9DA3: cmp     esi, ebx
0x7A9DA5: lea     eax, [ebp+8]
0x7A9DA8: mov     ebp, [ebp+0]
0x7A9DAB: jz      short loc_7A9DD3
0x7A9DAD: mov     eax, [esi+14h]
0x7A9DB0: cmp     eax, ebx
0x7A9DB2: jz      short loc_7A9DD3
0x7A9DB4: mov     ecx, [eax]
0x7A9DB6: push    1
0x7A9DB8: push    4
0x7A9DBA: lea     edx, [esp+1Ch+var_4]
0x7A9DBE: push    edx
0x7A9DBF: push    eax
0x7A9DC0: mov     eax, [ecx+1Ch]
0x7A9DC3: call    eax
0x7A9DC5: mov     eax, [esi+14h]
0x7A9DC8: mov     ecx, [eax]
0x7A9DCA: mov     edx, [ecx+8]
0x7A9DCD: push    eax
0x7A9DCE: call    edx
0x7A9DD0: mov     [esi+14h], ebx
0x7A9DD3: cmp     [edi+2238h], ebx
0x7A9DD9: jnz     short loc_7A9DA0
0x7A9DDB: mov     eax, [edi+21E8h]
0x7A9DE1: push    eax
0x7A9DE2: mov     [edi+21E4h], bx
0x7A9DE9: mov     [edi+21E6h], bx
0x7A9DF0: call    FormHeapFree
0x7A9DF5: add     esp, 4
0x7A9DF8: mov     [edi+21E8h], ebx
0x7A9DFE: pop     edi
0x7A9DFF: pop     esi
0x7A9E00: pop     ebp
0x7A9E01: pop     ebx
0x7A9E02: pop     ecx
0x7A9E03: retn
