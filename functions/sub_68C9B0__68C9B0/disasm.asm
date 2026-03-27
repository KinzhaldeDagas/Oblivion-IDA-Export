0x68C9B0: mov     eax, [ecx]
0x68C9B2: push    eax
0x68C9B3: call    sub_68C0F0
0x68C9B8: sub     dword ptr ds:0B3C09Ch, 1
0x68C9BF: jnz     short locret_68C9F3
0x68C9C1: push    esi
0x68C9C2: mov     esi, ds:0B3C0A0h
0x68C9C8: test    esi, esi
0x68C9CA: jz      short loc_68C9F2
0x68C9CC: lea     ecx, [esi+4]
0x68C9CF: push    ecx; lpAddend
0x68C9D0: call    dword ptr ds:0A2807Ch
0x68C9D6: test    eax, eax
0x68C9D8: jnz     short loc_68C9E8
0x68C9DA: test    esi, esi
0x68C9DC: jz      short loc_68C9E8
0x68C9DE: mov     edx, [esi]
0x68C9E0: mov     eax, [edx]
0x68C9E2: push    1
0x68C9E4: mov     ecx, esi
0x68C9E6: call    eax
0x68C9E8: mov     dword ptr ds:0B3C0A0h, 0
0x68C9F2: pop     esi
0x68C9F3: retn
