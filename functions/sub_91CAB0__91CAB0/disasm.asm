0x91CAB0: push    esi
0x91CAB1: mov     esi, ecx
0x91CAB3: mov     eax, [esi+24h]
0x91CAB6: test    eax, eax
0x91CAB8: mov     dword ptr [esi], offset off_A9D6B0
0x91CABE: mov     dword ptr [esi+8], offset off_A9D698
0x91CAC5: mov     dword ptr [esi+20h], offset off_A9D350
0x91CACC: mov     dword ptr [esi+28h], offset off_A9D684
0x91CAD3: mov     dword ptr [esi+2Ch], offset off_A9D678
0x91CADA: jz      short loc_91CB03
0x91CADC: mov     ecx, [eax+60h]
0x91CADF: push    edi
0x91CAE0: xor     edi, edi
0x91CAE2: test    ecx, ecx
0x91CAE4: jle     short loc_91CB02
0x91CAE6: mov     eax, [esi+24h]
0x91CAE9: mov     ecx, [eax+5Ch]
0x91CAEC: mov     edx, [ecx+edi*4]
0x91CAEF: push    edx
0x91CAF0: mov     ecx, esi
0x91CAF2: call    sub_919C40
0x91CAF7: mov     eax, [esi+24h]
0x91CAFA: mov     ecx, [eax+60h]
0x91CAFD: inc     edi
0x91CAFE: cmp     edi, ecx
0x91CB00: jl      short loc_91CAE6
0x91CB02: pop     edi
0x91CB03: mov     eax, [esi+38h]
0x91CB06: test    eax, eax
0x91CB08: js      short loc_91CB3E
0x91CB0A: mov     ecx, ds:0BA9DE4h
0x91CB10: mov     edx, large fs:2Ch
0x91CB17: mov     ecx, [edx+ecx*4]
0x91CB1A: mov     ecx, [ecx+19Ch]
0x91CB20: test    ecx, ecx
0x91CB22: jnz     short loc_91CB2A
0x91CB24: mov     ecx, ds:0BA7D9Ch
0x91CB2A: mov     edx, [esi+30h]
0x91CB2D: and     eax, 3FFFFFFFh
0x91CB32: push    14h
0x91CB34: shl     eax, 2
0x91CB37: push    eax
0x91CB38: push    edx
0x91CB39: call    sub_8A75D0
0x91CB3E: mov     dword ptr [esi+2Ch], offset off_A9D2B4
0x91CB45: mov     dword ptr [esi+28h], offset ??_7hkEntityListener@@6B@; const hkEntityListener::`vftable'
0x91CB4C: mov     ecx, esi
0x91CB4E: pop     esi
0x91CB4F: jmp     sub_949180
