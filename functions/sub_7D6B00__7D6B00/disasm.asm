0x7D6B00: push    esi
0x7D6B01: mov     esi, ecx
0x7D6B03: cmp     dword ptr [esi+200h], 1
0x7D6B0A: jz      short loc_7D6B15
0x7D6B0C: cmp     dword ptr [esi+204h], 1
0x7D6B13: jnz     short loc_7D6B1E
0x7D6B15: cmp     byte ptr [esi+20Ch], 1
0x7D6B1C: jz      short loc_7D6B22
0x7D6B1E: xor     al, al
0x7D6B20: pop     esi
0x7D6B21: retn
0x7D6B22: mov     eax, [esi]
0x7D6B24: mov     edx, [eax+14Ch]
0x7D6B2A: call    edx
0x7D6B2C: test    al, al
0x7D6B2E: jz      short loc_7D6B1E
0x7D6B30: cmp     dword ptr [esi+0FCh], 1
0x7D6B37: jnz     short loc_7D6B45
0x7D6B39: mov     eax, [esi]
0x7D6B3B: mov     edx, [eax+12Ch]
0x7D6B41: mov     ecx, esi
0x7D6B43: call    edx
0x7D6B45: add     dword ptr [esi+0FCh], 0FFFFFFFFh
0x7D6B4C: lea     eax, [esi+80h]
0x7D6B52: jnz     short loc_7D6B5B
0x7D6B54: mov     dword ptr [eax+78h], 0
0x7D6B5B: push    eax; lpCriticalSection
0x7D6B5C: call    dword ptr ds:0A28074h
0x7D6B62: mov     byte ptr [esi+20Ch], 0
0x7D6B69: mov     al, 1
0x7D6B6B: pop     esi
0x7D6B6C: retn
