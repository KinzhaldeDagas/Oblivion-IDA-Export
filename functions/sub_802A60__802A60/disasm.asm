0x802A60: push    esi
0x802A61: movzx   esi, word ptr [ecx+0Eh]
0x802A65: sub     esi, 1
0x802A68: js      short loc_802A84
0x802A6A: push    edi
0x802A6B: mov     edi, [esp+8+arg_0]
0x802A6F: nop
0x802A70: mov     eax, [ecx+14h]
0x802A73: cmp     edi, [eax+esi*4]
0x802A76: jnz     short loc_802A7E
0x802A78: push    esi
0x802A79: call    sub_8029C0
0x802A7E: sub     esi, 1
0x802A81: jns     short loc_802A70
0x802A83: pop     edi
0x802A84: movzx   eax, word ptr [ecx+0Eh]
0x802A88: pop     esi
0x802A89: retn    4
