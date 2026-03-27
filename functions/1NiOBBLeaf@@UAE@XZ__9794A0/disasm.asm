0x9794A0: push    esi
0x9794A1: mov     esi, ecx
0x9794A3: mov     ecx, [esi+80h]
0x9794A9: test    ecx, ecx
0x9794AB: mov     dword ptr [esi], offset ??_7NiOBBNode@@6B@; const NiOBBNode::`vftable'
0x9794B1: jz      short loc_9794CD
0x9794B3: mov     eax, [ecx]
0x9794B5: mov     edx, [eax]
0x9794B7: push    1
0x9794B9: call    edx
0x9794BB: mov     ecx, [esi+84h]
0x9794C1: test    ecx, ecx
0x9794C3: jz      short loc_9794CD
0x9794C5: mov     eax, [ecx]
0x9794C7: mov     edx, [eax]
0x9794C9: push    1
0x9794CB: call    edx
0x9794CD: pop     esi
0x9794CE: retn
