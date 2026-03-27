0x4BFC50: test    byte ptr [esp+arg_0], 1
0x4BFC55: push    esi
0x4BFC56: mov     esi, ecx
0x4BFC58: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x4BFC5E: jz      short loc_4BFC75
0x4BFC60: movzx   edx, word ptr [esi+4]
0x4BFC64: mov     ecx, ds:0BA7D98h
0x4BFC6A: mov     eax, [ecx]
0x4BFC6C: mov     eax, [eax+14h]
0x4BFC6F: push    12h
0x4BFC71: push    edx
0x4BFC72: push    esi
0x4BFC73: call    eax
0x4BFC75: mov     eax, esi
0x4BFC77: pop     esi
0x4BFC78: retn    4
