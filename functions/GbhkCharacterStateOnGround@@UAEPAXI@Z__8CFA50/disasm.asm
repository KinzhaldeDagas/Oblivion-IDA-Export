0x8CFA50: test    byte ptr [esp+arg_0], 1
0x8CFA55: push    esi
0x8CFA56: mov     esi, ecx
0x8CFA58: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8CFA5E: jz      short loc_8CFA75
0x8CFA60: movzx   edx, word ptr [esi+4]
0x8CFA64: mov     ecx, ds:0BA7D98h
0x8CFA6A: mov     eax, [ecx]
0x8CFA6C: mov     eax, [eax+14h]
0x8CFA6F: push    31h ; '1'
0x8CFA71: push    edx
0x8CFA72: push    esi
0x8CFA73: call    eax
0x8CFA75: mov     eax, esi
0x8CFA77: pop     esi
0x8CFA78: retn    4
