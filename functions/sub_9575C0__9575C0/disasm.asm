0x9575C0: test    [esp+arg_0], 1
0x9575C5: push    esi
0x9575C6: mov     esi, ecx
0x9575C8: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x9575CE: jz      short loc_9575E3
0x9575D0: movzx   edx, word ptr [esi+4]
0x9575D4: mov     ecx, ds:0BA7D98h
0x9575DA: mov     eax, [ecx]
0x9575DC: push    1Bh
0x9575DE: push    edx
0x9575DF: push    esi
0x9575E0: call    dword ptr [eax+14h]
0x9575E3: mov     eax, esi
0x9575E5: pop     esi
0x9575E6: retn    4
