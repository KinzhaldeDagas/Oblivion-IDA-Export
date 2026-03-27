0x8A94B0: test    [esp+arg_0], 1
0x8A94B5: push    esi
0x8A94B6: mov     esi, ecx
0x8A94B8: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8A94BE: jz      short loc_8A94D3
0x8A94C0: movzx   edx, word ptr [esi+4]
0x8A94C4: mov     ecx, ds:0BA7D98h
0x8A94CA: mov     eax, [ecx]
0x8A94CC: push    12h
0x8A94CE: push    edx
0x8A94CF: push    esi
0x8A94D0: call    dword ptr [eax+14h]
0x8A94D3: mov     eax, esi
0x8A94D5: pop     esi
0x8A94D6: retn    4
