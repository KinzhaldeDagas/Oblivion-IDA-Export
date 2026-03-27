0x953580: test    [esp+arg_0], 1
0x953585: push    esi
0x953586: mov     esi, ecx
0x953588: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x95358E: jz      short loc_9535A3
0x953590: movzx   edx, word ptr [esi+4]
0x953594: mov     ecx, ds:0BA7D98h
0x95359A: mov     eax, [ecx]
0x95359C: push    12h
0x95359E: push    edx
0x95359F: push    esi
0x9535A0: call    dword ptr [eax+14h]
0x9535A3: mov     eax, esi
0x9535A5: pop     esi
0x9535A6: retn    4
