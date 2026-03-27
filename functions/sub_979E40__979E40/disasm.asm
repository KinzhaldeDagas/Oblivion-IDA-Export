0x979E40: push    esi
0x979E41: push    edi
0x979E42: mov     edi, [esp+8+arg_14]
0x979E46: mov     esi, ecx
0x979E48: cmp     edi, [esi+88h]
0x979E4E: jz      short loc_979E66
0x979E50: mov     eax, [esp+8+arg_10]
0x979E54: add     eax, 64h ; 'd'
0x979E57: push    eax
0x979E58: lea     ecx, [esi+4]
0x979E5B: call    sub_97AEC0
0x979E60: mov     [esi+88h], edi
0x979E66: mov     ecx, [esp+8+arg_4]
0x979E6A: mov     edx, [esp+8+arg_0]
0x979E6E: push    ecx
0x979E6F: push    edx
0x979E70: lea     ecx, [esi+4]
0x979E73: call    sub_9803B0
0x979E78: test    eax, eax
0x979E7A: jnz     short loc_979E81
0x979E7C: pop     edi
0x979E7D: pop     esi
0x979E7E: retn    18h
0x979E81: mov     ecx, [esi+80h]
0x979E87: test    ecx, ecx
0x979E89: push    ebx
0x979E8A: mov     ebx, [esp+0Ch+arg_C]
0x979E8E: push    ebp
0x979E8F: mov     ebp, [esp+10h+arg_8]
0x979E93: jz      short loc_979EB3
0x979E95: mov     edx, [esp+10h+arg_10]
0x979E99: mov     eax, [ecx]
0x979E9B: mov     eax, [eax+10h]
0x979E9E: push    edi
0x979E9F: push    edx
0x979EA0: mov     edx, [esp+18h+arg_4]
0x979EA4: push    ebx
0x979EA5: push    ebp
0x979EA6: push    edx
0x979EA7: mov     edx, [esp+24h+arg_0]
0x979EAB: push    edx
0x979EAC: call    eax
0x979EAE: cmp     eax, 1
0x979EB1: jge     short loc_979EDD
0x979EB3: mov     ecx, [esi+84h]
0x979EB9: test    ecx, ecx
0x979EBB: jz      short loc_979EDB
0x979EBD: mov     eax, [esp+10h+arg_10]
0x979EC1: mov     edx, [ecx]
0x979EC3: mov     edx, [edx+10h]
0x979EC6: push    edi
0x979EC7: push    eax
0x979EC8: mov     eax, [esp+18h+arg_4]
0x979ECC: push    ebx
0x979ECD: push    ebp
0x979ECE: push    eax
0x979ECF: mov     eax, [esp+24h+arg_0]
0x979ED3: push    eax
0x979ED4: call    edx
0x979ED6: cmp     eax, 1
0x979ED9: jge     short loc_979EDD
0x979EDB: xor     eax, eax
0x979EDD: pop     ebp
0x979EDE: pop     ebx
0x979EDF: pop     edi
0x979EE0: pop     esi
0x979EE1: retn    18h
