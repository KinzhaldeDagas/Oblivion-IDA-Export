0x4DB9A0: push    ebx
0x4DB9A1: push    esi
0x4DB9A2: mov     esi, ecx
0x4DB9A4: mov     eax, [esi]
0x4DB9A6: mov     edx, [eax+170h]
0x4DB9AC: xor     bl, bl
0x4DB9AE: call    edx
0x4DB9B0: cmp     byte ptr [eax+4], 20h ; ' '
0x4DB9B4: jnz     short loc_4DB9C6
0x4DB9B6: mov     ecx, esi
0x4DB9B8: call    sub_4D73F0
0x4DB9BD: cmp     eax, 0FFFFFFFFh
0x4DB9C0: pop     esi
0x4DB9C1: setnz   al
0x4DB9C4: pop     ebx
0x4DB9C5: retn
0x4DB9C6: pop     esi
0x4DB9C7: mov     al, bl
0x4DB9C9: pop     ebx
0x4DB9CA: retn
