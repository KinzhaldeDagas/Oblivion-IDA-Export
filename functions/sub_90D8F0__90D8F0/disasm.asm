0x90D8F0: test    [esp+arg_0], 1
0x90D8F5: push    esi
0x90D8F6: mov     esi, ecx
0x90D8F8: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x90D8FE: jz      short loc_90D913
0x90D900: movzx   edx, word ptr [esi+4]
0x90D904: mov     ecx, ds:0BA7D98h
0x90D90A: mov     eax, [ecx]
0x90D90C: push    17h
0x90D90E: push    edx
0x90D90F: push    esi
0x90D910: call    dword ptr [eax+14h]
0x90D913: mov     eax, esi
0x90D915: pop     esi
0x90D916: retn    4
