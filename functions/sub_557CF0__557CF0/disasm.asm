0x557CF0: push    ecx
0x557CF1: push    ebx
0x557CF2: push    esi
0x557CF3: mov     esi, ecx
0x557CF5: mov     eax, [esi+94h]
0x557CFB: lea     ebx, [esi+90h]
0x557D01: push    edi
0x557D02: xor     edi, edi
0x557D04: cmp     eax, edi
0x557D06: jz      short loc_557D24
0x557D08: mov     ecx, [esp+10h+var_4]
0x557D0C: mov     edx, [ebx+8]
0x557D0F: push    ecx
0x557D10: push    ebx
0x557D11: push    edx
0x557D12: push    eax
0x557D13: call    sub_5570D0
0x557D18: mov     eax, [ebx+4]
0x557D1B: push    eax
0x557D1C: call    FormHeapFree
0x557D21: add     esp, 14h
0x557D24: mov     [ebx+4], edi
0x557D27: mov     [ebx+8], edi
0x557D2A: mov     [ebx+0Ch], edi
0x557D2D: mov     eax, [esi+84h]
0x557D33: cmp     eax, edi
0x557D35: lea     ebx, [esi+80h]
0x557D3B: jz      short loc_557D59
0x557D3D: mov     ecx, [esp+10h+var_4]
0x557D41: mov     edx, [ebx+8]
0x557D44: push    ecx
0x557D45: push    ebx
0x557D46: push    edx
0x557D47: push    eax
0x557D48: call    sub_5573D0
0x557D4D: mov     eax, [ebx+4]
0x557D50: push    eax
0x557D51: call    FormHeapFree
0x557D56: add     esp, 14h
0x557D59: mov     [ebx+4], edi
0x557D5C: mov     [ebx+8], edi
0x557D5F: mov     [ebx+0Ch], edi
0x557D62: mov     eax, [esi+74h]
0x557D65: cmp     eax, edi
0x557D67: lea     ebx, [esi+70h]
0x557D6A: jz      short loc_557D88
0x557D6C: mov     ecx, [esp+10h+var_4]
0x557D70: mov     edx, [ebx+8]
0x557D73: push    ecx
0x557D74: push    ebx
0x557D75: push    edx
0x557D76: push    eax
0x557D77: call    sub_557080
0x557D7C: mov     eax, [ebx+4]
0x557D7F: push    eax
0x557D80: call    FormHeapFree
0x557D85: add     esp, 14h
0x557D88: mov     [ebx+4], edi
0x557D8B: mov     [ebx+8], edi
0x557D8E: mov     [ebx+0Ch], edi
0x557D91: mov     eax, [esi+64h]
0x557D94: cmp     eax, edi
0x557D96: lea     ebx, [esi+60h]
0x557D99: jz      short loc_557DB7
0x557D9B: mov     ecx, [esp+10h+var_4]
0x557D9F: mov     edx, [ebx+8]
0x557DA2: push    ecx
0x557DA3: push    ebx
0x557DA4: push    edx
0x557DA5: push    eax
0x557DA6: call    sub_557030
0x557DAB: mov     eax, [ebx+4]
0x557DAE: push    eax
0x557DAF: call    FormHeapFree
0x557DB4: add     esp, 14h
0x557DB7: mov     [ebx+4], edi
0x557DBA: mov     [ebx+8], edi
0x557DBD: mov     [ebx+0Ch], edi
0x557DC0: mov     eax, [esi+54h]
0x557DC3: cmp     eax, edi
0x557DC5: jz      short loc_557DD0
0x557DC7: push    eax
0x557DC8: call    FormHeapFree
0x557DCD: add     esp, 4
0x557DD0: mov     [esi+54h], edi
0x557DD3: mov     [esi+58h], edi
0x557DD6: mov     [esi+5Ch], edi
0x557DD9: mov     eax, [esi+44h]
0x557DDC: cmp     eax, edi
0x557DDE: jz      short loc_557DE9
0x557DE0: push    eax
0x557DE1: call    FormHeapFree
0x557DE6: add     esp, 4
0x557DE9: mov     [esi+44h], edi
0x557DEC: mov     [esi+48h], edi
0x557DEF: mov     [esi+4Ch], edi
0x557DF2: mov     eax, [esi+34h]
0x557DF5: cmp     eax, edi
0x557DF7: jz      short loc_557E02
0x557DF9: push    eax
0x557DFA: call    FormHeapFree
0x557DFF: add     esp, 4
0x557E02: mov     [esi+34h], edi
0x557E05: mov     [esi+38h], edi
0x557E08: mov     [esi+3Ch], edi
0x557E0B: mov     eax, [esi+24h]
0x557E0E: cmp     eax, edi
0x557E10: jz      short loc_557E1B
0x557E12: push    eax
0x557E13: call    FormHeapFree
0x557E18: add     esp, 4
0x557E1B: mov     [esi+24h], edi
0x557E1E: mov     [esi+28h], edi
0x557E21: mov     [esi+2Ch], edi
0x557E24: mov     eax, [esi+14h]
0x557E27: cmp     eax, edi
0x557E29: jz      short loc_557E34
0x557E2B: push    eax
0x557E2C: call    FormHeapFree
0x557E31: add     esp, 4
0x557E34: mov     [esi+14h], edi
0x557E37: mov     [esi+18h], edi
0x557E3A: mov     [esi+1Ch], edi
0x557E3D: mov     eax, [esi+4]
0x557E40: cmp     eax, edi
0x557E42: jz      short loc_557E4D
0x557E44: push    eax
0x557E45: call    FormHeapFree
0x557E4A: add     esp, 4
0x557E4D: mov     [esi+4], edi
0x557E50: mov     [esi+8], edi
0x557E53: mov     [esi+0Ch], edi
0x557E56: pop     edi
0x557E57: pop     esi
0x557E58: pop     ebx
0x557E59: pop     ecx
0x557E5A: retn
