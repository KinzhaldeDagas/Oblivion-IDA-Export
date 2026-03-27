0x9A8A50: push    esi
0x9A8A51: push    edi; Src
0x9A8A52: push    38h ; '8'; Size
0x9A8A54: mov     edi, ecx
0x9A8A56: call    FormHeapAlloc
0x9A8A5B: add     esp, 4
0x9A8A5E: test    eax, eax
0x9A8A60: jz      short loc_9A8A6D
0x9A8A62: mov     ecx, eax; this
0x9A8A64: call    sub_9A84B0
0x9A8A69: mov     esi, eax
0x9A8A6B: jmp     short loc_9A8A6F
0x9A8A6D: xor     esi, esi
0x9A8A6F: mov     eax, [esp+8+Src]
0x9A8A73: push    eax; Src
0x9A8A74: mov     ecx, esi; this
0x9A8A76: call    NiD3DShaderConstantMapEntry__SetKeyStringCopy
0x9A8A7B: mov     ecx, [esp+8+arg_4]
0x9A8A7F: mov     edx, [esp+8+arg_8]
0x9A8A83: mov     eax, [esp+8+arg_C]
0x9A8A87: and     ecx, 0FFFFFFFh
0x9A8A8D: or      ecx, 50000000h
0x9A8A93: mov     [esi+14h], ecx
0x9A8A96: mov     ecx, [esp+8+arg_10]
0x9A8A9A: mov     [esi+18h], edx
0x9A8A9D: mov     edx, [esp+8+arg_14]
0x9A8AA1: mov     [esi+20h], ecx
0x9A8AA4: push    edx; Src
0x9A8AA5: mov     ecx, esi
0x9A8AA7: mov     [esi+1Ch], eax
0x9A8AAA: call    sub_9A85C0
0x9A8AAF: mov     eax, [edi]
0x9A8AB1: mov     edx, [eax+4Ch]
0x9A8AB4: push    esi
0x9A8AB5: mov     ecx, edi
0x9A8AB7: call    edx
0x9A8AB9: test    eax, eax
0x9A8ABB: mov     [edi+24h], eax
0x9A8ABE: jz      short loc_9A8ACD
0x9A8AC0: mov     eax, [esi]
0x9A8AC2: mov     edx, [eax]
0x9A8AC4: push    1
0x9A8AC6: mov     ecx, esi
0x9A8AC8: call    edx
0x9A8ACA: mov     eax, [edi+24h]
0x9A8ACD: pop     edi
0x9A8ACE: pop     esi
0x9A8ACF: retn    18h
