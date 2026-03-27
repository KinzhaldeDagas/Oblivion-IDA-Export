0x926E10: test    [esp+arg_0], 1
0x926E15: push    esi
0x926E16: mov     esi, ecx
0x926E18: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x926E1E: jz      short loc_926E33
0x926E20: movzx   edx, word ptr [esi+4]
0x926E24: mov     ecx, ds:0BA7D98h
0x926E2A: mov     eax, [ecx]
0x926E2C: push    5
0x926E2E: push    edx
0x926E2F: push    esi
0x926E30: call    dword ptr [eax+14h]
0x926E33: mov     eax, esi
0x926E35: pop     esi
0x926E36: retn    4
