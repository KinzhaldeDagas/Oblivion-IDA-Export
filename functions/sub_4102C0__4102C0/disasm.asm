0x4102C0: push    ebx
0x4102C1: push    esi
0x4102C2: mov     esi, ecx
0x4102C4: mov     eax, [esi]
0x4102C6: xor     ebx, ebx
0x4102C8: cmp     eax, ebx
0x4102CA: jz      short loc_4102D3
0x4102CC: push    eax
0x4102CD: call    ds:_BinkClose@4; BinkClose(x)
0x4102D3: mov     eax, [esi+8]
0x4102D6: cmp     eax, ebx
0x4102D8: jz      short loc_4102E3
0x4102DA: push    eax
0x4102DB: call    sub_410110
0x4102E0: add     esp, 4
0x4102E3: fld1
0x4102E5: mov     [esi], ebx
0x4102E7: fstp    dword ptr [esi+14h]
0x4102EA: mov     [esi+4], ebx
0x4102ED: fldz
0x4102EF: mov     [esi+8], ebx
0x4102F2: fst     dword ptr [esi+18h]
0x4102F5: mov     [esi+0Ch], ebx
0x4102F8: mov     [esi+10h], ebx
0x4102FB: fstp    dword ptr [esi+1Ch]
0x4102FE: mov     [esi+20h], ebx
0x410301: mov     [esi+24h], bl
0x410304: pop     esi
0x410305: pop     ebx
0x410306: retn
