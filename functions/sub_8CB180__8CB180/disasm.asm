0x8CB180: push    ebx
0x8CB181: mov     ebx, large fs:2Ch
0x8CB188: push    esi
0x8CB189: mov     esi, ecx
0x8CB18B: mov     dword ptr [esi], offset off_A99B70
0x8CB191: mov     eax, [esi+2Ch]
0x8CB194: test    eax, eax
0x8CB196: push    edi
0x8CB197: mov     edi, ds:0BA9DE4h
0x8CB19D: js      short loc_8CB1C6
0x8CB19F: mov     ecx, [ebx+edi*4]
0x8CB1A2: mov     ecx, [ecx+19Ch]
0x8CB1A8: test    ecx, ecx
0x8CB1AA: jnz     short loc_8CB1B2
0x8CB1AC: mov     ecx, ds:0BA7D9Ch
0x8CB1B2: mov     edx, [esi+24h]
0x8CB1B5: and     eax, 3FFFFFFFh
0x8CB1BA: push    14h
0x8CB1BC: shl     eax, 2
0x8CB1BF: push    eax
0x8CB1C0: push    edx
0x8CB1C1: call    sub_8A75D0
0x8CB1C6: mov     eax, [esi+10h]
0x8CB1C9: test    eax, eax
0x8CB1CB: js      short loc_8CB1F4
0x8CB1CD: mov     ecx, [ebx+edi*4]
0x8CB1D0: mov     ecx, [ecx+19Ch]
0x8CB1D6: test    ecx, ecx
0x8CB1D8: jnz     short loc_8CB1E0
0x8CB1DA: mov     ecx, ds:0BA7D9Ch
0x8CB1E0: mov     edx, [esi+8]
0x8CB1E3: and     eax, 3FFFFFFFh
0x8CB1E8: push    14h
0x8CB1EA: shl     eax, 2
0x8CB1ED: push    eax
0x8CB1EE: push    edx
0x8CB1EF: call    sub_8A75D0
0x8CB1F4: pop     edi
0x8CB1F5: pop     esi
0x8CB1F6: pop     ebx
0x8CB1F7: retn
