0x945FB0: push    esi
0x945FB1: mov     esi, ecx
0x945FB3: mov     eax, [esi+20h]
0x945FB6: cmp     eax, 0FFFFFFFFh
0x945FB9: mov     dword ptr [esi], offset off_AA28FC
0x945FBF: jz      short loc_945FCE
0x945FC1: push    eax; s
0x945FC2: call    closesocket_0
0x945FC7: mov     dword ptr [esi+20h], 0FFFFFFFFh
0x945FCE: mov     eax, offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x945FD3: mov     [esi+14h], eax
0x945FD6: mov     [esi+8], eax
0x945FD9: mov     [esi], eax
0x945FDB: test    [esp+4+arg_0], 1
0x945FE0: jz      short loc_945FF5
0x945FE2: movzx   edx, word ptr [esi+4]
0x945FE6: mov     ecx, ds:0BA7D98h
0x945FEC: mov     eax, [ecx]
0x945FEE: push    12h
0x945FF0: push    edx
0x945FF1: push    esi
0x945FF2: call    dword ptr [eax+14h]
0x945FF5: mov     eax, esi
0x945FF7: pop     esi
0x945FF8: retn    4
