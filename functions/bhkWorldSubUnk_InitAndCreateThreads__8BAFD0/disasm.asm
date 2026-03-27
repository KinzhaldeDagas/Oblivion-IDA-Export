0x8BAFD0: push    esi
0x8BAFD1: mov     esi, ecx
0x8BAFD3: call    bhkWorldSubUnk__Init
0x8BAFD8: mov     eax, [esp+4+a2]
0x8BAFDC: cmp     word ptr [eax+4], 0
0x8BAFE1: jz      short loc_8BAFE7
0x8BAFE3: inc     word ptr [eax+6]
0x8BAFE7: mov     ecx, [esp+4+havokThreadNum]
0x8BAFEB: push    ecx; havokThreadNum
0x8BAFEC: push    eax; a2
0x8BAFED: mov     ecx, esi; this
0x8BAFEF: call    CreateHavokThreads
0x8BAFF4: mov     eax, esi
0x8BAFF6: pop     esi
0x8BAFF7: retn    8
