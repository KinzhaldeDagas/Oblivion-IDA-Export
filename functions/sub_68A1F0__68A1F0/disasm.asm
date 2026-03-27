0x68A1F0: push    esi
0x68A1F1: push    edi
0x68A1F2: lea     esi, [ecx+4]
0x68A1F5: xor     edi, edi
0x68A1F7: test    esi, esi
0x68A1F9: jz      short loc_68A23C
0x68A1FB: jmp     short loc_68A200
0x68A1FD: align 10h
0x68A200: cmp     dword ptr [esi+4], 0
0x68A204: jnz     short loc_68A20B
0x68A206: cmp     dword ptr [esi], 0
0x68A209: jz      short loc_68A23C
0x68A20B: mov     ecx, [esi]
0x68A20D: call    sub_68B0F0
0x68A212: test    eax, eax
0x68A214: jz      short loc_68A235
0x68A216: mov     ecx, eax; this
0x68A218: call    GetTeleportExtraData
0x68A21D: test    eax, eax
0x68A21F: jz      short loc_68A235
0x68A221: mov     ecx, eax
0x68A223: call    sub_42B410
0x68A228: test    eax, eax
0x68A22A: jz      short loc_68A235
0x68A22C: mov     ecx, eax
0x68A22E: call    sub_4D8AF0
0x68A233: mov     edi, eax
0x68A235: mov     esi, [esi+4]
0x68A238: test    esi, esi
0x68A23A: jnz     short loc_68A200
0x68A23C: mov     eax, edi
0x68A23E: pop     edi
0x68A23F: pop     esi
0x68A240: retn
