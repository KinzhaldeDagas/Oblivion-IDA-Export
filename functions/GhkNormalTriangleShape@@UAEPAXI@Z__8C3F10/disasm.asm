0x8C3F10: test    byte ptr [esp+arg_0], 1
0x8C3F15: push    esi
0x8C3F16: mov     esi, ecx
0x8C3F18: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8C3F1E: jz      short loc_8C3F35
0x8C3F20: movzx   edx, word ptr [esi+4]
0x8C3F24: mov     ecx, ds:0BA7D98h
0x8C3F2A: mov     eax, [ecx]
0x8C3F2C: mov     eax, [eax+14h]
0x8C3F2F: push    24h ; '$'
0x8C3F31: push    edx
0x8C3F32: push    esi
0x8C3F33: call    eax
0x8C3F35: mov     eax, esi
0x8C3F37: pop     esi
0x8C3F38: retn    4
