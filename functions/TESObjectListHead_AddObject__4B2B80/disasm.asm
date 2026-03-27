0x4B2B80: mov     edx, [ecx+8]
0x4B2B83: test    edx, edx
0x4B2B85: mov     eax, [esp+arg_0]
0x4B2B89: mov     [eax+1Ch], edx
0x4B2B8C: jz      short loc_4B2BA5
0x4B2B8E: push    esi
0x4B2B8F: mov     esi, [edx+20h]
0x4B2B92: mov     [eax+20h], esi
0x4B2B95: mov     esi, [edx+20h]
0x4B2B98: test    esi, esi
0x4B2B9A: jz      short loc_4B2B9F
0x4B2B9C: mov     [esi+1Ch], eax
0x4B2B9F: mov     [edx+20h], eax
0x4B2BA2: pop     esi
0x4B2BA3: jmp     short loc_4B2BAC
0x4B2BA5: mov     dword ptr [eax+20h], 0
0x4B2BAC: cmp     dword ptr [eax+20h], 0
0x4B2BB0: jnz     short loc_4B2BB5
0x4B2BB2: mov     [ecx+8], eax
0x4B2BB5: cmp     dword ptr [eax+1Ch], 0
0x4B2BB9: jnz     short loc_4B2BBE
0x4B2BBB: mov     [ecx+4], eax
0x4B2BBE: add     dword ptr [ecx], 1
0x4B2BC1: mov     [eax+18h], ecx
0x4B2BC4: retn    4
