0x8A1E50: push    esi
0x8A1E51: push    edi
0x8A1E52: mov     edi, ecx
0x8A1E54: test    edi, edi
0x8A1E56: jz      short loc_8A1E6B
0x8A1E58: mov     eax, [edi+8]
0x8A1E5B: test    eax, eax
0x8A1E5D: jz      short loc_8A1E6B
0x8A1E5F: mov     eax, [eax+0Ch]
0x8A1E62: test    eax, eax
0x8A1E64: jz      short loc_8A1E6B
0x8A1E66: mov     ecx, [eax+8]
0x8A1E69: jmp     short loc_8A1E6D
0x8A1E6B: xor     ecx, ecx
0x8A1E6D: test    ecx, ecx
0x8A1E6F: mov     esi, [esp+8+arg_0]
0x8A1E73: jz      short loc_8A1E7D
0x8A1E75: mov     eax, [ecx]
0x8A1E77: mov     edx, [eax+24h]
0x8A1E7A: push    esi
0x8A1E7B: call    edx
0x8A1E7D: push    esi
0x8A1E7E: mov     ecx, edi
0x8A1E80: call    sub_6EC2C0
0x8A1E85: pop     edi
0x8A1E86: pop     esi
0x8A1E87: retn    4
