0x720480: push    esi
0x720481: push    edi
0x720482: mov     edi, [esp+8+arg_0]
0x720486: push    edi
0x720487: mov     esi, ecx
0x720489: call    sub_7022D0
0x72048E: test    al, al
0x720490: jz      short loc_7204B9
0x720492: mov     eax, [esi+18h]
0x720495: cmp     eax, [edi+18h]
0x720498: jnz     short loc_7204B9
0x72049A: mov     ecx, [esi+20h]
0x72049D: cmp     ecx, [edi+20h]
0x7204A0: jnz     short loc_7204B9
0x7204A2: mov     edx, [esi+1Ch]
0x7204A5: cmp     edx, [edi+1Ch]
0x7204A8: jnz     short loc_7204B9
0x7204AA: mov     al, [esi+40h]
0x7204AD: cmp     al, [edi+40h]
0x7204B0: jnz     short loc_7204B9
0x7204B2: pop     edi
0x7204B3: mov     al, 1
0x7204B5: pop     esi
0x7204B6: retn    4
0x7204B9: pop     edi
0x7204BA: xor     al, al
0x7204BC: pop     esi
0x7204BD: retn    4
