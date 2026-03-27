0x8D8420: test    [esp+arg_0], 1
0x8D8425: push    esi
0x8D8426: mov     esi, ecx
0x8D8428: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8D842E: jz      short loc_8D8443
0x8D8430: movzx   edx, word ptr [esi+4]
0x8D8434: mov     ecx, ds:0BA7D98h
0x8D843A: mov     eax, [ecx]
0x8D843C: push    1Eh
0x8D843E: push    edx
0x8D843F: push    esi
0x8D8440: call    dword ptr [eax+14h]
0x8D8443: mov     eax, esi
0x8D8445: pop     esi
0x8D8446: retn    4
