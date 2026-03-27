0x7F2B30: mov     eax, [esp+arg_0]
0x7F2B34: push    esi
0x7F2B35: mov     esi, [ecx+14Ch]
0x7F2B3B: cdq
0x7F2B3C: idiv    esi
0x7F2B3E: push    edi
0x7F2B3F: sub     [ecx+88h], edx
0x7F2B45: cmp     byte ptr [ecx+180h], 0
0x7F2B4C: mov     edi, [ecx+88h]
0x7F2B52: jz      short loc_7F2B6E
0x7F2B54: test    edi, edi
0x7F2B56: jge     short loc_7F2B65
0x7F2B58: add     [ecx+84h], esi
0x7F2B5E: mov     byte ptr [ecx+180h], 0
0x7F2B65: cmp     byte ptr [ecx+180h], 0
0x7F2B6C: jnz     short loc_7F2B89
0x7F2B6E: mov     eax, [ecx+84h]
0x7F2B74: sub     [ecx+190h], edx
0x7F2B7A: cmp     edi, eax
0x7F2B7C: jg      short loc_7F2B8F
0x7F2B7E: pop     edi
0x7F2B7F: mov     [ecx+88h], eax
0x7F2B85: pop     esi
0x7F2B86: retn    4
0x7F2B89: sub     [ecx+190h], edx
0x7F2B8F: pop     edi
0x7F2B90: pop     esi
0x7F2B91: retn    4
