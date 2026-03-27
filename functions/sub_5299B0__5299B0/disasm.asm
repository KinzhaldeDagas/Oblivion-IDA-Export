0x5299B0: push    ebx
0x5299B1: push    esi
0x5299B2: push    edi
0x5299B3: mov     edi, [esp+0Ch+arg_0]
0x5299B7: test    edi, edi
0x5299B9: lea     esi, [ecx+48h]
0x5299BC: jz      short loc_529A03
0x5299BE: test    esi, esi
0x5299C0: jz      short loc_5299F4
0x5299C2: mov     ebx, [esi]
0x5299C4: test    ebx, ebx
0x5299C6: jz      short loc_5299ED
0x5299C8: mov     eax, ds:0B333C4h
0x5299CD: push    0
0x5299CF: push    eax
0x5299D0: lea     ecx, [ebx+4]
0x5299D3: call    sub_56A950
0x5299D8: test    al, al
0x5299DA: jz      short loc_5299ED
0x5299DC: test    edi, edi
0x5299DE: jz      short loc_529A0B
0x5299E0: mov     eax, [edi]
0x5299E2: test    eax, eax
0x5299E4: jz      short loc_529A0B
0x5299E6: cmp     eax, ebx
0x5299E8: jnz     short loc_529A0B
0x5299EA: mov     edi, [edi+4]
0x5299ED: mov     esi, [esi+4]
0x5299F0: test    esi, esi
0x5299F2: jnz     short loc_5299C2
0x5299F4: test    edi, edi
0x5299F6: jz      short loc_529A03
0x5299F8: cmp     dword ptr [edi+4], 0
0x5299FC: jnz     short loc_529A0B
0x5299FE: cmp     dword ptr [edi], 0
0x529A01: jnz     short loc_529A0B
0x529A03: pop     edi
0x529A04: pop     esi
0x529A05: mov     al, 1
0x529A07: pop     ebx
0x529A08: retn    4
0x529A0B: pop     edi
0x529A0C: pop     esi
0x529A0D: xor     al, al
0x529A0F: pop     ebx
0x529A10: retn    4
