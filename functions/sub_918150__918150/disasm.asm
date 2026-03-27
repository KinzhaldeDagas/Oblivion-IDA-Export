0x918150: mov     eax, offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x918155: push    esi
0x918156: mov     esi, ecx
0x918158: mov     [esi+14h], eax
0x91815B: mov     [esi+8], eax
0x91815E: mov     [esi], eax
0x918160: test    [esp+4+arg_0], 1
0x918165: jz      short loc_91817A
0x918167: movzx   edx, word ptr [esi+4]
0x91816B: mov     ecx, ds:0BA7D98h
0x918171: mov     eax, [ecx]
0x918173: push    12h
0x918175: push    edx
0x918176: push    esi
0x918177: call    dword ptr [eax+14h]
0x91817A: mov     eax, esi
0x91817C: pop     esi
0x91817D: retn    4
