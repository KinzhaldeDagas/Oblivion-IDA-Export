0x680790: mov     eax, [esp+arg_0]
0x680794: push    ebx
0x680795: xor     bl, bl
0x680797: test    eax, eax
0x680799: jz      short loc_6807D7
0x68079B: cmp     [ecx+8], eax
0x68079E: push    esi
0x68079F: jnz     short loc_6807A6
0x6807A1: mov     esi, [ecx+4]
0x6807A4: jmp     short loc_6807AE
0x6807A6: cmp     [ecx+10h], eax
0x6807A9: jnz     short loc_6807DD
0x6807AB: mov     esi, [ecx+0Ch]
0x6807AE: test    esi, esi
0x6807B0: jz      short loc_6807DD
0x6807B2: mov     eax, [esi+8]
0x6807B5: shr     eax, 0Bh
0x6807B8: test    al, 1
0x6807BA: jz      short loc_6807C5
0x6807BC: call    sub_67F0E0
0x6807C1: test    al, al
0x6807C3: jz      short loc_6807DD
0x6807C5: mov     ecx, [esi+8]
0x6807C8: shr     ecx, 5
0x6807CB: test    cl, 1
0x6807CE: jnz     short loc_6807DD
0x6807D0: pop     esi
0x6807D1: mov     al, 1
0x6807D3: pop     ebx
0x6807D4: retn    4
0x6807D7: mov     al, bl
0x6807D9: pop     ebx
0x6807DA: retn    4
0x6807DD: pop     esi
0x6807DE: mov     al, bl
0x6807E0: pop     ebx
0x6807E1: retn    4
