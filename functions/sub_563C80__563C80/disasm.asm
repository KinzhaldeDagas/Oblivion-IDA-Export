0x563C80: push    esi
0x563C81: mov     esi, ecx
0x563C83: mov     ecx, [esi+0DCh]
0x563C89: test    ecx, ecx
0x563C8B: jz      short loc_563CB5
0x563C8D: cmp     dword ptr [esi+0E0h], 0
0x563C94: jz      short loc_563CB5
0x563C96: call    sub_5601E0
0x563C9B: mov     cx, [esp+4+arg_0]
0x563CA0: cmp     cx, ax
0x563CA3: jnb     short loc_563CB5
0x563CA5: movzx   eax, cx
0x563CA8: mov     ecx, [esi+0E0h]
0x563CAE: mov     eax, [ecx+eax*4]
0x563CB1: pop     esi
0x563CB2: retn    4
0x563CB5: xor     eax, eax
0x563CB7: pop     esi
0x563CB8: retn    4
