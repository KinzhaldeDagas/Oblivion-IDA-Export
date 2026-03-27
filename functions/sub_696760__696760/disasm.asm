0x696760: mov     eax, [esp+arg_0]
0x696764: push    esi
0x696765: push    eax
0x696766: mov     esi, ecx
0x696768: call    sub_69F740
0x69676D: mov     ecx, ds:0B33B00h
0x696773: mov     dl, [ecx+7Ch]
0x696776: add     ax, 8
0x69677A: cmp     dl, 30h ; '0'
0x69677D: movzx   eax, ax
0x696780: jb      short loc_696785
0x696782: add     eax, 20h ; ' '
0x696785: mov     ecx, [esi+84h]
0x69678B: add     eax, 6
0x69678E: test    ecx, ecx
0x696790: pop     esi
0x696791: jz      short loc_69679D
0x696793: mov     ecx, [ecx+1Ch]
0x696796: add     eax, 4
0x696799: test    ecx, ecx
0x69679B: jnz     short loc_696793
0x69679D: cmp     dl, 71h ; 'q'
0x6967A0: jb      short locret_6967A5
0x6967A2: add     eax, 4
0x6967A5: retn    4
