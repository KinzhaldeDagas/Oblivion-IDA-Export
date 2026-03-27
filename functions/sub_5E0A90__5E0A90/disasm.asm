0x5E0A90: xor     eax, eax
0x5E0A92: cmp     [ecx+58h], eax
0x5E0A95: jz      short locret_5E0AAE
0x5E0A97: mov     eax, [ecx+58h]
0x5E0A9A: mov     edx, [eax]
0x5E0A9C: push    esi
0x5E0A9D: mov     esi, [esp+4+arg_0]
0x5E0AA1: push    esi
0x5E0AA2: push    ecx
0x5E0AA3: mov     ecx, eax
0x5E0AA5: mov     eax, [edx+218h]
0x5E0AAB: call    eax
0x5E0AAD: pop     esi
0x5E0AAE: retn    4
