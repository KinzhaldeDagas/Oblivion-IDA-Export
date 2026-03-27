0x89D700: push    esi
0x89D701: mov     esi, ecx
0x89D703: cmp     dword ptr [esi+8], 0
0x89D707: jz      short loc_89D712
0x89D709: mov     eax, [esi]
0x89D70B: mov     edx, [eax+4Ch]
0x89D70E: push    0
0x89D710: call    edx
0x89D712: mov     eax, [esi]
0x89D714: mov     edx, [eax+64h]
0x89D717: push    1
0x89D719: mov     ecx, esi
0x89D71B: call    edx
0x89D71D: pop     esi
0x89D71E: retn
