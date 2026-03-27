0x948510: test    [esp+arg_0], 1
0x948515: push    esi
0x948516: mov     esi, ecx
0x948518: mov     dword ptr [esi+8], offset off_AA2B10
0x94851F: mov     dword ptr [esi+8], offset off_AA2984
0x948526: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x94852C: jz      short loc_948541
0x94852E: movzx   edx, word ptr [esi+4]
0x948532: mov     ecx, ds:0BA7D98h
0x948538: mov     eax, [ecx]
0x94853A: push    32h ; '2'
0x94853C: push    edx
0x94853D: push    esi
0x94853E: call    dword ptr [eax+14h]
0x948541: mov     eax, esi
0x948543: pop     esi
0x948544: retn    4
