0x812630: push    esi
0x812631: movzx   esi, word ptr [ecx+0Eh]
0x812635: sub     esi, 1
0x812638: js      short loc_812654
0x81263A: push    edi
0x81263B: mov     edi, [esp+8+arg_0]
0x81263F: nop
0x812640: mov     eax, [ecx+14h]
0x812643: cmp     edi, [eax+esi*4]
0x812646: jnz     short loc_81264E
0x812648: push    esi
0x812649: call    sub_812570
0x81264E: sub     esi, 1
0x812651: jns     short loc_812640
0x812653: pop     edi
0x812654: movzx   eax, word ptr [ecx+0Eh]
0x812658: pop     esi
0x812659: retn    4
