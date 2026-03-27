0x943030: push    esi
0x943031: mov     esi, ecx
0x943033: lea     ecx, [esi+8]
0x943036: call    sub_8B0E60
0x94303B: test    [esp+4+arg_0], 1
0x943040: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x943046: jz      short loc_94305B
0x943048: movzx   edx, word ptr [esi+4]
0x94304C: mov     ecx, ds:0BA7D98h
0x943052: mov     eax, [ecx]
0x943054: push    12h
0x943056: push    edx
0x943057: push    esi
0x943058: call    dword ptr [eax+14h]
0x94305B: mov     eax, esi
0x94305D: pop     esi
0x94305E: retn    4
