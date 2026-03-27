0x94B880: test    [esp+arg_0], 1
0x94B885: push    esi
0x94B886: mov     esi, ecx
0x94B888: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x94B88E: jz      short loc_94B8A3
0x94B890: movzx   edx, word ptr [esi+4]
0x94B894: mov     ecx, ds:0BA7D98h
0x94B89A: mov     eax, [ecx]
0x94B89C: push    32h ; '2'
0x94B89E: push    edx
0x94B89F: push    esi
0x94B8A0: call    dword ptr [eax+14h]
0x94B8A3: mov     eax, esi
0x94B8A5: pop     esi
0x94B8A6: retn    4
