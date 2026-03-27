0x563CC0: push    esi
0x563CC1: mov     esi, ecx
0x563CC3: mov     ecx, [esi+0DCh]
0x563CC9: test    ecx, ecx
0x563CCB: jz      short loc_563CF5
0x563CCD: cmp     dword ptr [esi+0E4h], 0
0x563CD4: jz      short loc_563CF5
0x563CD6: call    sub_560200
0x563CDB: mov     cx, [esp+4+arg_0]
0x563CE0: cmp     cx, ax
0x563CE3: jnb     short loc_563CF5
0x563CE5: movzx   eax, cx
0x563CE8: mov     ecx, [esi+0E4h]
0x563CEE: mov     eax, [ecx+eax*4]
0x563CF1: pop     esi
0x563CF2: retn    4
0x563CF5: xor     eax, eax
0x563CF7: pop     esi
0x563CF8: retn    4
