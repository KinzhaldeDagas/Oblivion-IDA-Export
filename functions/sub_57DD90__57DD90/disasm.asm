0x57DD90: cmp     byte ptr [ecx], 0
0x57DD93: jnz     short loc_57DDD1
0x57DD95: push    ebx
0x57DD96: mov     bl, [esp+4+arg_0]
0x57DD9A: test    bl, bl
0x57DD9C: jz      short loc_57DDCB
0x57DD9E: movzx   eax, word ptr [ecx+1Ch]
0x57DDA2: cmp     ax, 0FFFFh
0x57DDA6: jnz     short loc_57DDC5
0x57DDA8: mov     eax, [ecx+18h]
0x57DDAB: push    esi
0x57DDAC: lea     esi, [eax+1]
0x57DDAF: nop
0x57DDB0: mov     dl, [eax]
0x57DDB2: add     eax, 1
0x57DDB5: test    dl, dl
0x57DDB7: jnz     short loc_57DDB0
0x57DDB9: sub     eax, esi
0x57DDBB: pop     esi
0x57DDBC: mov     [ecx], bl
0x57DDBE: mov     [ecx+4], eax
0x57DDC1: pop     ebx
0x57DDC2: retn    4
0x57DDC5: movzx   eax, ax
0x57DDC8: mov     [ecx+4], eax
0x57DDCB: mov     [ecx], bl
0x57DDCD: pop     ebx
0x57DDCE: retn    4
0x57DDD1: mov     al, [esp+arg_0]
0x57DDD5: mov     [ecx], al
0x57DDD7: retn    4
