0x43A780: mov     eax, [esp+arg_4]
0x43A784: push    esi
0x43A785: mov     esi, ecx
0x43A787: mov     ecx, [esp+4+Comperand]
0x43A78B: push    eax; int
0x43A78C: push    ecx; Comperand
0x43A78D: mov     ecx, esi
0x43A78F: call    sub_43A260
0x43A794: test    al, al
0x43A796: jz      short loc_43A7B7
0x43A798: mov     edx, [esi+14h]
0x43A79B: and     edx, 0FFFFFFFEh
0x43A79E: mov     ecx, [edx+4]
0x43A7A1: mov     edx, [esp+4+arg_8]
0x43A7A5: mov     [edx], ecx
0x43A7A7: mov     ecx, [esi+14h]
0x43A7AA: and     ecx, 0FFFFFFFEh
0x43A7AD: mov     ecx, [ecx+8]
0x43A7B0: test    cl, 1
0x43A7B3: jz      short loc_43A7B7
0x43A7B5: xor     al, al
0x43A7B7: mov     edx, [esi+4]
0x43A7BA: mov     dword ptr [edx], 0
0x43A7C0: mov     ecx, [esi+8]
0x43A7C3: mov     dword ptr [ecx], 0
0x43A7C9: mov     edx, [esi+0Ch]
0x43A7CC: mov     dword ptr [edx], 0
0x43A7D2: pop     esi
0x43A7D3: retn    0Ch
