0x947890: push    esi
0x947891: mov     esi, ecx
0x947893: push    edi
0x947894: lea     edi, [esi+20h]
0x947897: mov     dword ptr [esi], offset off_AA2A04
0x94789D: mov     dword ptr [esi+8], offset off_AA29EC
0x9478A4: mov     dword ptr [edi], offset off_AA29B8
0x9478AA: mov     ecx, ds:0BA7DA0h
0x9478B0: push    edi
0x9478B1: call    sub_8A77D0
0x9478B6: test    [esp+8+arg_0], 1
0x9478BB: mov     dword ptr [edi], offset off_AA2984
0x9478C1: mov     dword ptr [esi+8], offset off_A9D1C0
0x9478C8: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x9478CE: jz      short loc_9478E3
0x9478D0: movzx   edx, word ptr [esi+4]
0x9478D4: mov     ecx, ds:0BA7D98h
0x9478DA: mov     eax, [ecx]
0x9478DC: push    32h ; '2'
0x9478DE: push    edx
0x9478DF: push    esi
0x9478E0: call    dword ptr [eax+14h]
0x9478E3: pop     edi
0x9478E4: mov     eax, esi
0x9478E6: pop     esi
0x9478E7: retn    4
