0x8F57E0: push    esi
0x8F57E1: mov     esi, ecx
0x8F57E3: mov     ecx, [esi+18h]
0x8F57E6: test    ecx, ecx
0x8F57E8: mov     dword ptr [esi], offset off_A9B370
0x8F57EE: jz      short loc_8F57FC
0x8F57F0: call    sub_8BC730
0x8F57F5: mov     dword ptr [esi+18h], 0
0x8F57FC: test    [esp+4+arg_0], 1
0x8F5801: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8F5807: jz      short loc_8F581C
0x8F5809: movzx   edx, word ptr [esi+4]
0x8F580D: mov     ecx, ds:0BA7D98h
0x8F5813: mov     eax, [ecx]
0x8F5815: push    26h ; '&'
0x8F5817: push    edx
0x8F5818: push    esi
0x8F5819: call    dword ptr [eax+14h]
0x8F581C: mov     eax, esi
0x8F581E: pop     esi
0x8F581F: retn    4
