0x994E29: push    ebp
0x994E2A: mov     ebp, esp
0x994E2C: sub     esp, 24h
0x994E2F: mov     eax, ___security_cookie
0x994E34: xor     eax, ebp
0x994E36: mov     [ebp+var_4], eax
0x994E39: mov     eax, [ebp+arg_14]
0x994E3C: mov     ecx, [ebp+arg_4]
0x994E3F: push    ebx
0x994E40: push    esi
0x994E41: mov     esi, [ebp+arg_0]
0x994E44: push    edi
0x994E45: push    eax
0x994E46: xor     edi, edi
0x994E48: push    edi
0x994E49: push    edi
0x994E4A: push    edi
0x994E4B: push    edi
0x994E4C: push    ecx
0x994E4D: lea     eax, [ebp+var_24]
0x994E50: push    eax
0x994E51: lea     eax, [ebp+var_10]
0x994E54: push    eax
0x994E55: mov     [ebp+var_20], ecx
0x994E58: xor     ebx, ebx
0x994E5A: call    ___strgtold12_l
0x994E5F: add     esp, 20h
0x994E62: test    al, 4
0x994E64: mov     [ebp+var_14], eax
0x994E67: jz      short loc_994E76
0x994E69: mov     ebx, 200h
0x994E6E: mov     [ebp+var_1C], edi
0x994E71: mov     [ebp+var_18], edi
0x994E74: jmp     short loc_994EA6
0x994E76: lea     eax, [ebp+var_1C]
0x994E79: push    eax
0x994E7A: lea     eax, [ebp+var_10]
0x994E7D: push    eax
0x994E7E: call    sub_99F12B
0x994E83: test    byte ptr [ebp+var_14], 2
0x994E87: pop     ecx
0x994E88: pop     ecx
0x994E89: jnz     short loc_994E90
0x994E8B: cmp     eax, 1
0x994E8E: jnz     short loc_994E95
0x994E90: mov     ebx, 80h ; '€'
0x994E95: test    byte ptr [ebp+var_14], 1
0x994E99: jnz     short loc_994EA0
0x994E9B: cmp     eax, 2
0x994E9E: jnz     short loc_994EA6
0x994EA0: or      ebx, 100h
0x994EA6: mov     eax, [ebp+var_24]
0x994EA9: sub     eax, [ebp+var_20]
0x994EAC: mov     ecx, [ebp+var_4]
0x994EAF: mov     [esi+4], eax
0x994EB2: mov     eax, [ebp+var_1C]
0x994EB5: mov     [esi+10h], eax
0x994EB8: mov     eax, [ebp+var_18]
0x994EBB: mov     [esi+14h], eax
0x994EBE: pop     edi
0x994EBF: mov     [esi], ebx
0x994EC1: mov     eax, esi
0x994EC3: pop     esi
0x994EC4: xor     ecx, ebp
0x994EC6: pop     ebx
0x994EC7: call    @__security_check_cookie@4
0x994ECC: leave
0x994ECD: retn
