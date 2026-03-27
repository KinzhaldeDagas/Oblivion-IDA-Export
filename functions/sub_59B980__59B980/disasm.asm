0x59B980: push    ebx
0x59B981: mov     bl, 3
0x59B983: mov     eax, [ecx+5Ch]
0x59B986: test    eax, eax
0x59B988: jnz     short loc_59B993
0x59B98A: mov     dword ptr [ecx+5Ch], 2
0x59B991: jmp     short loc_59B999
0x59B993: add     eax, 0FFFFFFFFh
0x59B996: mov     [ecx+5Ch], eax
0x59B999: mov     eax, ds:0B33398h
0x59B99E: mov     edx, [eax+20h]
0x59B9A1: mov     eax, [ecx+5Ch]
0x59B9A4: sub     eax, 0
0x59B9A7: jz      short loc_59B9C2
0x59B9A9: sub     eax, 1
0x59B9AC: jz      short loc_59B9BB
0x59B9AE: sub     eax, 1
0x59B9B1: jnz     short loc_59B9CE
0x59B9B3: mov     eax, [edx+18F0h]
0x59B9B9: jmp     short loc_59B9CA
0x59B9BB: xor     eax, eax
0x59B9BD: cmp     [edx+2Ch], eax
0x59B9C0: jmp     short loc_59B9C7
0x59B9C2: xor     eax, eax
0x59B9C4: cmp     [edx+28h], eax
0x59B9C7: setnz   al
0x59B9CA: test    eax, eax
0x59B9CC: jnz     short loc_59B9D3
0x59B9CE: add     bl, 0FFh
0x59B9D1: jnz     short loc_59B983
0x59B9D3: xor     cl, cl
0x59B9D5: cmp     cl, bl
0x59B9D7: sbb     eax, eax
0x59B9D9: neg     eax
0x59B9DB: pop     ebx
0x59B9DC: retn
