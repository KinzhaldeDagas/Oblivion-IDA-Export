0x431E10: push    ecx
0x431E11: mov     eax, [esp+4+arg_0]
0x431E15: push    ebx
0x431E16: push    ebp
0x431E17: mov     ebp, [esp+0Ch+arg_4]
0x431E1B: push    esi
0x431E1C: mov     esi, ecx
0x431E1E: lea     ecx, ds:0[eax*4]
0x431E25: push    edi
0x431E26: mov     [esp+14h+var_4], ecx
0x431E2A: lea     ebx, [ebx+0]
0x431E30: mov     edx, [esi]
0x431E32: mov     eax, [edx+0Ch]
0x431E35: add     eax, [esp+14h+var_4]
0x431E39: mov     [esi+10h], eax
0x431E3C: mov     ecx, eax
0x431E3E: mov     edx, [ecx]
0x431E40: mov     [esi+14h], edx
0x431E43: mov     eax, [esi+14h]
0x431E46: mov     ecx, [esi+8]
0x431E49: and     eax, 0FFFFFFFEh
0x431E4C: mov     [ecx], eax
0x431E4E: mov     eax, [esi+14h]
0x431E51: and     eax, 0FFFFFFFEh
0x431E54: mov     [esp+14h+arg_0], eax
0x431E58: mov     edx, [esp+14h+arg_0]
0x431E5C: mov     eax, [esi+10h]
0x431E5F: mov     eax, [eax]
0x431E61: and     edx, 0FFFFFFFEh
0x431E64: mov     [esp+14h+arg_0], edx
0x431E68: mov     ecx, [esp+14h+arg_0]
0x431E6C: cmp     eax, ecx
0x431E6E: jnz     short loc_431E30
0x431E70: mov     edx, [esi+14h]
0x431E73: test    edx, 0FFFFFFFEh
0x431E79: jz      loc_431F0A
0x431E7F: mov     edx, [ebp+4]
0x431E82: mov     ecx, [esi]
0x431E84: mov     eax, [ecx]
0x431E86: mov     eax, [eax+20h]
0x431E89: push    edx
0x431E8A: mov     edx, [ebp+0]
0x431E8D: push    edx
0x431E8E: call    eax
0x431E90: mov     eax, [esi+14h]
0x431E93: mov     ecx, [esi]
0x431E95: mov     edx, [ecx]
0x431E97: mov     edx, [edx+24h]
0x431E9A: and     eax, 0FFFFFFFEh
0x431E9D: mov     edi, [eax+4]
0x431EA0: mov     eax, [eax]
0x431EA2: push    edi
0x431EA3: push    eax
0x431EA4: call    edx
0x431EA6: mov     [ebp+0], eax
0x431EA9: mov     eax, [esp+14h+arg_8]
0x431EAD: mov     [ebp+4], edx
0x431EB0: mov     edi, [esi+14h]
0x431EB3: mov     ebx, [eax]
0x431EB5: and     edi, 0FFFFFFFEh
0x431EB8: add     edi, 8
0x431EBB: cmp     ebx, [edi]
0x431EBD: jz      short loc_431EF5
0x431EBF: test    ebx, ebx
0x431EC1: jz      short loc_431EDF
0x431EC3: lea     ecx, [ebx+8]
0x431EC6: push    ecx; lpAddend
0x431EC7: call    ds:InterlockedDecrement
0x431ECD: test    eax, eax
0x431ECF: jnz     short loc_431EDF
0x431ED1: test    ebx, ebx
0x431ED3: jz      short loc_431EDF
0x431ED5: mov     edx, [ebx]
0x431ED7: mov     eax, [edx]
0x431ED9: push    1
0x431EDB: mov     ecx, ebx
0x431EDD: call    eax
0x431EDF: mov     edi, [edi]
0x431EE1: test    edi, edi
0x431EE3: mov     ecx, [esp+14h+arg_8]
0x431EE7: mov     [ecx], edi
0x431EE9: jz      short loc_431EF5
0x431EEB: add     edi, 8
0x431EEE: push    edi; lpAddend
0x431EEF: call    ds:InterlockedIncrement
0x431EF5: mov     ecx, [esi+14h]
0x431EF8: and     ecx, 0FFFFFFFEh
0x431EFB: mov     edx, [ecx+0Ch]
0x431EFE: mov     al, 1
0x431F00: test    al, dl
0x431F02: jnz     loc_431E30
0x431F08: jmp     short loc_431F0C
0x431F0A: xor     al, al
0x431F0C: mov     ecx, [esi+4]
0x431F0F: mov     dword ptr [ecx], 0
0x431F15: mov     edx, [esi+8]
0x431F18: pop     edi
0x431F19: mov     dword ptr [edx], 0
0x431F1F: mov     ecx, [esi+0Ch]
0x431F22: pop     esi
0x431F23: pop     ebp
0x431F24: mov     dword ptr [ecx], 0
0x431F2A: pop     ebx
0x431F2B: pop     ecx
0x431F2C: retn    0Ch
