0x5E0FB0: push    ebx
0x5E0FB1: push    ebp
0x5E0FB2: push    esi
0x5E0FB3: push    edi
0x5E0FB4: mov     esi, ecx
0x5E0FB6: call    sub_4A98C0
0x5E0FBB: mov     ebp, [esp+10h+arg_0]
0x5E0FBF: xor     edi, edi
0x5E0FC1: cmp     ebp, eax
0x5E0FC3: mov     eax, [esi]
0x5E0FC5: mov     edx, [eax+170h]
0x5E0FCB: mov     ecx, esi
0x5E0FCD: jnz     short loc_5E0FFE
0x5E0FCF: call    edx
0x5E0FD1: mov     ebx, eax
0x5E0FD3: test    ebx, ebx
0x5E0FD5: jz      short loc_5E0FE9
0x5E0FD7: mov     eax, [esi]
0x5E0FD9: mov     edx, [eax+190h]
0x5E0FDF: mov     ecx, esi
0x5E0FE1: call    edx
0x5E0FE3: test    al, al
0x5E0FE5: jz      short loc_5E0FE9
0x5E0FE7: mov     edi, ebx
0x5E0FE9: mov     eax, [edi]
0x5E0FEB: mov     edx, [eax+124h]
0x5E0FF1: push    0
0x5E0FF3: mov     ecx, edi
0x5E0FF5: call    edx
0x5E0FF7: pop     edi
0x5E0FF8: pop     esi
0x5E0FF9: pop     ebp
0x5E0FFA: pop     ebx
0x5E0FFB: retn    4
0x5E0FFE: call    edx
0x5E1000: mov     ebx, eax
0x5E1002: test    ebx, ebx
0x5E1004: jz      short loc_5E1018
0x5E1006: mov     eax, [esi]
0x5E1008: mov     edx, [eax+190h]
0x5E100E: mov     ecx, esi
0x5E1010: call    edx
0x5E1012: test    al, al
0x5E1014: jz      short loc_5E1018
0x5E1016: mov     edi, ebx
0x5E1018: mov     eax, [edi]
0x5E101A: mov     edx, [eax+124h]
0x5E1020: push    ebp
0x5E1021: mov     ecx, edi
0x5E1023: call    edx
0x5E1025: pop     edi
0x5E1026: pop     esi
0x5E1027: pop     ebp
0x5E1028: pop     ebx
0x5E1029: retn    4
