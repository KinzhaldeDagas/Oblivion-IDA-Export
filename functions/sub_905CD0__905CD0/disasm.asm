0x905CD0: push    esi
0x905CD1: mov     esi, ecx
0x905CD3: mov     eax, [esi+14h]
0x905CD6: test    eax, eax
0x905CD8: js      short loc_905D0E
0x905CDA: mov     ecx, ds:0BA9DE4h
0x905CE0: mov     edx, large fs:2Ch
0x905CE7: mov     ecx, [edx+ecx*4]
0x905CEA: mov     ecx, [ecx+19Ch]
0x905CF0: test    ecx, ecx
0x905CF2: jnz     short loc_905CFA
0x905CF4: mov     ecx, ds:0BA7D9Ch
0x905CFA: mov     edx, [esi+0Ch]
0x905CFD: and     eax, 3FFFFFFFh
0x905D02: push    14h
0x905D04: shl     eax, 3
0x905D07: push    eax
0x905D08: push    edx
0x905D09: call    sub_8A75D0
0x905D0E: test    [esp+4+arg_0], 1
0x905D13: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x905D19: jz      short loc_905D2E
0x905D1B: movzx   edx, word ptr [esi+4]
0x905D1F: mov     ecx, ds:0BA7D98h
0x905D25: mov     eax, [ecx]
0x905D27: push    1Ch
0x905D29: push    edx
0x905D2A: push    esi
0x905D2B: call    dword ptr [eax+14h]
0x905D2E: mov     eax, esi
0x905D30: pop     esi
0x905D31: retn    4
