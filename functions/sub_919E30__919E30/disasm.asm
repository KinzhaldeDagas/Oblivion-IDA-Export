0x919E30: push    ebx
0x919E31: push    esi
0x919E32: mov     esi, ecx
0x919E34: mov     eax, [esi+24h]
0x919E37: test    eax, eax
0x919E39: push    edi
0x919E3A: mov     dword ptr [esi], offset off_A9D370
0x919E40: mov     dword ptr [esi+8], offset off_A9D358
0x919E47: mov     dword ptr [esi+20h], offset off_A9D350
0x919E4E: mov     dword ptr [esi+28h], offset off_A9D33C
0x919E55: mov     dword ptr [esi+2Ch], offset off_A9D330
0x919E5C: jz      short loc_919E7D
0x919E5E: mov     ebx, [eax+60h]
0x919E61: xor     edi, edi
0x919E63: test    ebx, ebx
0x919E65: jle     short loc_919E7D
0x919E67: mov     eax, [esi+24h]
0x919E6A: mov     ecx, [eax+5Ch]
0x919E6D: mov     edx, [ecx+edi*4]
0x919E70: push    edx
0x919E71: mov     ecx, esi
0x919E73: call    sub_919C40
0x919E78: inc     edi
0x919E79: cmp     edi, ebx
0x919E7B: jl      short loc_919E67
0x919E7D: mov     ebx, [esi+40h]
0x919E80: test    ebx, ebx
0x919E82: jle     short loc_919E98
0x919E84: xor     edi, edi
0x919E86: mov     ecx, [esi+3Ch]
0x919E89: mov     eax, [ecx+edi]
0x919E8C: add     ecx, edi
0x919E8E: push    0
0x919E90: call    dword ptr [eax]
0x919E92: add     edi, 70h ; 'p'
0x919E95: dec     ebx
0x919E96: jnz     short loc_919E86
0x919E98: mov     eax, [esi+44h]
0x919E9B: test    eax, eax
0x919E9D: mov     edi, ds:0BA9DE4h
0x919EA3: mov     ebx, large fs:2Ch
0x919EAA: js      short loc_919ED3
0x919EAC: mov     ecx, [ebx+edi*4]
0x919EAF: mov     ecx, [ecx+19Ch]
0x919EB5: test    ecx, ecx
0x919EB7: jnz     short loc_919EBF
0x919EB9: mov     ecx, ds:0BA7D9Ch
0x919EBF: mov     edx, [esi+3Ch]
0x919EC2: and     eax, 3FFFFFFFh
0x919EC7: imul    eax, 70h ; 'p'
0x919ECA: push    14h
0x919ECC: push    eax
0x919ECD: push    edx
0x919ECE: call    sub_8A75D0
0x919ED3: mov     eax, [esi+38h]
0x919ED6: test    eax, eax
0x919ED8: js      short loc_919F01
0x919EDA: mov     ecx, [ebx+edi*4]
0x919EDD: mov     ecx, [ecx+19Ch]
0x919EE3: test    ecx, ecx
0x919EE5: jnz     short loc_919EED
0x919EE7: mov     ecx, ds:0BA7D9Ch
0x919EED: mov     edx, [esi+30h]
0x919EF0: and     eax, 3FFFFFFFh
0x919EF5: push    14h
0x919EF7: shl     eax, 2
0x919EFA: push    eax
0x919EFB: push    edx
0x919EFC: call    sub_8A75D0
0x919F01: mov     dword ptr [esi+2Ch], offset off_A9D2B4
0x919F08: pop     edi
0x919F09: mov     dword ptr [esi+28h], offset ??_7hkEntityListener@@6B@; const hkEntityListener::`vftable'
0x919F10: mov     ecx, esi
0x919F12: pop     esi
0x919F13: pop     ebx
0x919F14: jmp     sub_949180
