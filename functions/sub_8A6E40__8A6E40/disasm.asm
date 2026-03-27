0x8A6E40: push    ecx
0x8A6E41: mov     ecx, large fs:2Ch
0x8A6E48: mov     eax, ds:0BA9DE4h
0x8A6E4D: mov     eax, [ecx+eax*4]
0x8A6E50: mov     ecx, [eax+19Ch]
0x8A6E56: test    ecx, ecx
0x8A6E58: mov     [esp+4+var_4], eax
0x8A6E5B: jnz     short loc_8A6E63
0x8A6E5D: mov     ecx, ds:0BA7D9Ch
0x8A6E63: push    ebx
0x8A6E64: push    ebp
0x8A6E65: mov     ebp, [esp+0Ch+arg_4]
0x8A6E69: push    esi
0x8A6E6A: push    edi
0x8A6E6B: mov     edi, [esp+14h+arg_8]
0x8A6E6F: mov     edx, ebp
0x8A6E71: imul    edx, edi
0x8A6E74: push    14h
0x8A6E76: push    edx
0x8A6E77: call    sub_8A7560
0x8A6E7C: mov     esi, [esp+14h+arg_0]
0x8A6E80: mov     ecx, [esi]
0x8A6E82: mov     ebx, eax
0x8A6E84: mov     eax, [esi+4]
0x8A6E87: imul    eax, edi
0x8A6E8A: push    eax
0x8A6E8B: push    ecx
0x8A6E8C: push    ebx
0x8A6E8D: call    sub_8B1890
0x8A6E92: mov     eax, [esi+8]
0x8A6E95: add     esp, 0Ch
0x8A6E98: test    eax, eax
0x8A6E9A: js      short loc_8A6EC3
0x8A6E9C: mov     edx, [esp+14h+var_4]
0x8A6EA0: mov     ecx, [edx+19Ch]
0x8A6EA6: test    ecx, ecx
0x8A6EA8: jnz     short loc_8A6EB0
0x8A6EAA: mov     ecx, ds:0BA7D9Ch
0x8A6EB0: and     eax, 3FFFFFFFh
0x8A6EB5: imul    eax, edi
0x8A6EB8: push    14h
0x8A6EBA: push    eax
0x8A6EBB: mov     eax, [esi]
0x8A6EBD: push    eax
0x8A6EBE: call    sub_8A75D0
0x8A6EC3: mov     ecx, [esi+8]
0x8A6EC6: and     ecx, 40000000h
0x8A6ECC: or      ecx, ebp
0x8A6ECE: pop     edi
0x8A6ECF: mov     [esi], ebx
0x8A6ED1: mov     [esi+8], ecx
0x8A6ED4: pop     esi
0x8A6ED5: pop     ebp
0x8A6ED6: pop     ebx
0x8A6ED7: pop     ecx
0x8A6ED8: retn
