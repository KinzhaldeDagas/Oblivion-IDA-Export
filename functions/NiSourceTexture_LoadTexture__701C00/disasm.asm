0x701C00: push    esi
0x701C01: mov     esi, ecx
0x701C03: mov     ecx, ds:0B3F928h
0x701C09: test    ecx, ecx
0x701C0B: jnz     short loc_701C11
0x701C0D: xor     al, al
0x701C0F: pop     esi
0x701C10: retn
0x701C11: cmp     dword ptr [esi+24h], 0
0x701C15: jnz     short loc_701C44
0x701C17: mov     eax, [ecx]
0x701C19: mov     edx, [eax+104h]
0x701C1F: push    esi
0x701C20: call    edx
0x701C22: test    al, al
0x701C24: jz      short loc_701C0D
0x701C26: cmp     byte ptr ds:0B3F958h, 0
0x701C2D: jz      short loc_701C44
0x701C2F: cmp     dword ptr [esi+24h], 0
0x701C33: jz      short loc_701C44
0x701C35: cmp     byte ptr [esi+40h], 0
0x701C39: jz      short loc_701C44
0x701C3B: mov     eax, [esi]
0x701C3D: mov     edx, [eax+58h]
0x701C40: mov     ecx, esi
0x701C42: call    edx
0x701C44: mov     al, 1
0x701C46: pop     esi
0x701C47: retn
