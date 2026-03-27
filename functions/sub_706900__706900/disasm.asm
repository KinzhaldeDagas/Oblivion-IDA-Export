0x706900: push    esi
0x706901: push    edi
0x706902: mov     edi, [esp+8+arg_0]
0x706906: push    edi
0x706907: mov     esi, ecx
0x706909: call    sub_6D7E00
0x70690E: test    al, al
0x706910: jnz     short loc_706917
0x706912: pop     edi
0x706913: pop     esi
0x706914: retn    4
0x706917: mov     al, [edi+18h]
0x70691A: not     al
0x70691C: xor     al, [esi+18h]
0x70691F: pop     edi
0x706920: and     al, 1
0x706922: pop     esi
0x706923: retn    4
