0x77D1D0: push    esi
0x77D1D1: mov     esi, ecx
0x77D1D3: mov     eax, [esi+10h]
0x77D1D6: test    eax, eax
0x77D1D8: jz      short loc_77D1E9
0x77D1DA: mov     ecx, [eax]
0x77D1DC: mov     edx, [ecx+8]
0x77D1DF: push    eax
0x77D1E0: call    edx
0x77D1E2: mov     dword ptr [esi+10h], 0
0x77D1E9: pop     esi
0x77D1EA: retn
