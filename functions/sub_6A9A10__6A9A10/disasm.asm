0x6A9A10: sub     esp, 0Ch
0x6A9A13: push    esi
0x6A9A14: push    edi
0x6A9A15: mov     edi, ecx
0x6A9A17: mov     edx, [edi+300h]
0x6A9A1D: mov     ecx, [edx+4]
0x6A9A20: xor     eax, eax
0x6A9A22: test    ecx, ecx
0x6A9A24: mov     [esp+14h+var_C], 0
0x6A9A2C: jbe     short loc_6A9A42
0x6A9A2E: mov     esi, [edx+8]
0x6A9A31: mov     edx, esi
0x6A9A33: cmp     dword ptr [edx], 0
0x6A9A36: jnz     short loc_6A9A88
0x6A9A38: add     eax, 1
0x6A9A3B: add     edx, 4
0x6A9A3E: cmp     eax, ecx
0x6A9A40: jb      short loc_6A9A33
0x6A9A42: xor     eax, eax
0x6A9A44: test    eax, eax
0x6A9A46: mov     [esp+14h+var_8], eax
0x6A9A4A: jz      short loc_6A9A99
0x6A9A4C: lea     esp, [esp+0]
0x6A9A50: lea     eax, [esp+14h+var_C]
0x6A9A54: push    eax
0x6A9A55: lea     ecx, [esp+18h+var_4]
0x6A9A59: push    ecx
0x6A9A5A: mov     ecx, [edi+300h]
0x6A9A60: lea     edx, [esp+1Ch+var_8]
0x6A9A64: push    edx
0x6A9A65: call    sub_452600
0x6A9A6A: mov     ecx, [esp+14h+var_C]
0x6A9A6E: mov     eax, [ecx]
0x6A9A70: test    al, 10h
0x6A9A72: jz      short loc_6A9A92
0x6A9A74: or      eax, 200h
0x6A9A79: test    al, 1
0x6A9A7B: mov     [ecx], eax
0x6A9A7D: jz      short loc_6A9A8D
0x6A9A7F: push    1
0x6A9A81: call    sub_6B7130
0x6A9A86: jmp     short loc_6A9A92
0x6A9A88: mov     eax, [esi+eax*4]
0x6A9A8B: jmp     short loc_6A9A44
0x6A9A8D: call    sub_6B6AA0
0x6A9A92: cmp     [esp+14h+var_8], 0
0x6A9A97: jnz     short loc_6A9A50
0x6A9A99: pop     edi
0x6A9A9A: pop     esi
0x6A9A9B: add     esp, 0Ch
0x6A9A9E: retn
