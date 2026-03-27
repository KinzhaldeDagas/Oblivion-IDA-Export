0x8BACC0: push    ebx
0x8BACC1: mov     ebx, ecx
0x8BACC3: mov     ecx, [ebx]
0x8BACC5: cmp     word ptr [ecx+4], 0
0x8BACCA: push    esi
0x8BACCB: push    edi
0x8BACCC: jz      short loc_8BACDF
0x8BACCE: dec     word ptr [ecx+6]
0x8BACD2: cmp     word ptr [ecx+6], 0
0x8BACD7: jnz     short loc_8BACDF
0x8BACD9: mov     eax, [ecx]
0x8BACDB: push    1
0x8BACDD: call    dword ptr [eax]
0x8BACDF: mov     ecx, ebx
0x8BACE1: call    sub_8BABF0
0x8BACE6: lea     esi, [ebx+114h]
0x8BACEC: mov     edi, 6
0x8BACF1: sub     esi, 28h ; '('
0x8BACF4: mov     ecx, esi
0x8BACF6: call    sub_8F5890
0x8BACFB: dec     edi
0x8BACFC: jnz     short loc_8BACF1
0x8BACFE: pop     edi
0x8BACFF: pop     esi
0x8BAD00: lea     ecx, [ebx+0Ch]
0x8BAD03: pop     ebx
0x8BAD04: jmp     sub_8F5890
