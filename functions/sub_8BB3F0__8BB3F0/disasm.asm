0x8BB3F0: test    [esp+arg_0], 1
0x8BB3F5: push    esi
0x8BB3F6: mov     esi, ecx
0x8BB3F8: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8BB3FE: jz      short loc_8BB413
0x8BB400: movzx   edx, word ptr [esi+4]
0x8BB404: mov     ecx, ds:0BA7D98h
0x8BB40A: mov     eax, [ecx]
0x8BB40C: push    15h
0x8BB40E: push    edx
0x8BB40F: push    esi
0x8BB410: call    dword ptr [eax+14h]
0x8BB413: mov     eax, esi
0x8BB415: pop     esi
0x8BB416: retn    4
