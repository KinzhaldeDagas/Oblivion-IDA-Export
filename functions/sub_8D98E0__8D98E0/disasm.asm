0x8D98E0: push    esi
0x8D98E1: mov     esi, ecx
0x8D98E3: mov     ecx, [esi+10h]
0x8D98E6: test    ecx, ecx
0x8D98E8: mov     dword ptr [esi], offset off_A9A274
0x8D98EE: jz      short loc_8D98F5
0x8D98F0: call    sub_8BC730
0x8D98F5: mov     ecx, [esi+14h]
0x8D98F8: test    ecx, ecx
0x8D98FA: jz      short loc_8D9901
0x8D98FC: call    sub_8BC730
0x8D9901: mov     ecx, [esi+0Ch]
0x8D9904: test    ecx, ecx
0x8D9906: jz      short loc_8D9920
0x8D9908: cmp     word ptr [ecx+4], 0
0x8D990D: jz      short loc_8D9920
0x8D990F: dec     word ptr [ecx+6]
0x8D9913: cmp     word ptr [ecx+6], 0
0x8D9918: jnz     short loc_8D9920
0x8D991A: mov     eax, [ecx]
0x8D991C: push    1
0x8D991E: call    dword ptr [eax]
0x8D9920: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8D9926: pop     esi
0x8D9927: retn
