0x6B3200: mov     eax, [ecx+0Ch]
0x6B3203: sub     eax, 1
0x6B3206: cmp     [ecx+10h], eax
0x6B3209: push    esi
0x6B320A: jnb     short loc_6B3237
0x6B320C: mov     esi, [ecx+8]
0x6B320F: nop
0x6B3210: mov     eax, [ecx+10h]
0x6B3213: cmp     byte ptr [esi+eax], 0FFh
0x6B3217: jnz     short loc_6B3227
0x6B3219: mov     dl, [esi+eax+1]
0x6B321D: cmp     dl, 0FBh ; 'û'
0x6B3220: jz      short loc_6B323B
0x6B3222: cmp     dl, 0FAh ; 'ú'
0x6B3225: jz      short loc_6B323B
0x6B3227: add     eax, 1
0x6B322A: mov     [ecx+10h], eax
0x6B322D: mov     edx, [ecx+0Ch]
0x6B3230: sub     edx, 1
0x6B3233: cmp     eax, edx
0x6B3235: jb      short loc_6B3210
0x6B3237: xor     al, al
0x6B3239: pop     esi
0x6B323A: retn
0x6B323B: mov     al, 1
0x6B323D: pop     esi
0x6B323E: retn
