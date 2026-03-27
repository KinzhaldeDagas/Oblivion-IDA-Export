0x90A7B0: push    esi
0x90A7B1: mov     esi, ecx
0x90A7B3: mov     ecx, [esi+0Ch]
0x90A7B6: mov     eax, [ecx]
0x90A7B8: call    dword ptr [eax+18h]
0x90A7BB: mov     ecx, [esi+10h]
0x90A7BE: test    ecx, ecx
0x90A7C0: jz      short loc_90A7CE
0x90A7C2: mov     edx, [ecx]
0x90A7C4: call    dword ptr [edx+18h]
0x90A7C7: mov     dword ptr [esi+10h], 0
0x90A7CE: mov     eax, [esi]
0x90A7D0: push    1
0x90A7D2: mov     ecx, esi
0x90A7D4: call    dword ptr [eax]
0x90A7D6: pop     esi
0x90A7D7: retn
