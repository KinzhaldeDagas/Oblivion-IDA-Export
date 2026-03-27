0x9180D0: test    [esp+arg_0], 1
0x9180D5: push    esi
0x9180D6: mov     esi, ecx
0x9180D8: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x9180DE: jz      short loc_9180F3
0x9180E0: movzx   edx, word ptr [esi+4]
0x9180E4: mov     ecx, ds:0BA7D98h
0x9180EA: mov     eax, [ecx]
0x9180EC: push    17h
0x9180EE: push    edx
0x9180EF: push    esi
0x9180F0: call    dword ptr [eax+14h]
0x9180F3: mov     eax, esi
0x9180F5: pop     esi
0x9180F6: retn    4
