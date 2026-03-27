0x950D50: test    [esp+arg_0], 1
0x950D55: push    esi
0x950D56: mov     esi, ecx
0x950D58: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x950D5E: jz      short loc_950D73
0x950D60: movzx   edx, word ptr [esi+4]
0x950D64: mov     ecx, ds:0BA7D98h
0x950D6A: mov     eax, [ecx]
0x950D6C: push    24h ; '$'
0x950D6E: push    edx
0x950D6F: push    esi
0x950D70: call    dword ptr [eax+14h]
0x950D73: mov     eax, esi
0x950D75: pop     esi
0x950D76: retn    4
