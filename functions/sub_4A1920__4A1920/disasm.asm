0x4A1920: push    ebx
0x4A1921: push    ebp
0x4A1922: mov     ebp, [esp+8+arg_0]
0x4A1926: push    esi
0x4A1927: mov     esi, ecx
0x4A1929: mov     ecx, [esi+0CCh]
0x4A192F: xor     bl, bl
0x4A1931: test    ecx, ecx
0x4A1933: jnz     short loc_4A1950
0x4A1935: cmp     dword ptr [esi+0C4h], 0
0x4A193C: jnz     short loc_4A1950
0x4A193E: cmp     dword ptr [esi+0C0h], 0
0x4A1945: jnz     short loc_4A1950
0x4A1947: cmp     dword ptr [esi+0C8h], 0
0x4A194E: jz      short loc_4A19BD
0x4A1950: mov     eax, [esi+0C0h]
0x4A1956: test    eax, eax
0x4A1958: push    edi
0x4A1959: lea     edi, [esi+0C0h]
0x4A195F: jge     short loc_4A196A
0x4A1961: cmp     dword ptr [esi+0C8h], 0
0x4A1968: jl      short loc_4A1990
0x4A196A: cmp     eax, 1
0x4A196D: jle     short loc_4A1978
0x4A196F: cmp     dword ptr [esi+0C8h], 1
0x4A1976: jg      short loc_4A1990
0x4A1978: mov     eax, [esi+0C4h]
0x4A197E: test    eax, eax
0x4A1980: jge     short loc_4A1986
0x4A1982: test    ecx, ecx
0x4A1984: jl      short loc_4A1990
0x4A1986: cmp     eax, 1
0x4A1989: jle     short loc_4A19BC
0x4A198B: cmp     ecx, 1
0x4A198E: jle     short loc_4A19BC
0x4A1990: mov     eax, [ebp+280h]
0x4A1996: mov     ecx, [eax]
0x4A1998: mov     edx, [ecx+0E4h]
0x4A199E: push    1
0x4A19A0: push    0AEh ; '®'
0x4A19A5: push    eax
0x4A19A6: call    edx
0x4A19A8: mov     eax, [ebp+280h]
0x4A19AE: mov     ecx, [eax]
0x4A19B0: mov     edx, [ecx+12Ch]
0x4A19B6: push    edi
0x4A19B7: push    eax
0x4A19B8: call    edx
0x4A19BA: mov     bl, 1
0x4A19BC: pop     edi
0x4A19BD: push    ebp
0x4A19BE: mov     ecx, esi
0x4A19C0: call    sub_717690
0x4A19C5: test    bl, bl
0x4A19C7: jz      short loc_4A19E1
0x4A19C9: mov     eax, [ebp+280h]
0x4A19CF: mov     ecx, [eax]
0x4A19D1: mov     edx, [ecx+0E4h]
0x4A19D7: push    0
0x4A19D9: push    0AEh ; '®'
0x4A19DE: push    eax
0x4A19DF: call    edx
0x4A19E1: pop     esi
0x4A19E2: pop     ebp
0x4A19E3: pop     ebx
0x4A19E4: retn    4
