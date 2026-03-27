0x588BD0: mov     eax, [ecx+18h]
0x588BD3: test    eax, eax
0x588BD5: push    esi
0x588BD6: jz      short loc_588BF6
0x588BD8: mov     esi, [esp+4+arg_0]
0x588BDC: lea     esp, [esp+0]
0x588BE0: mov     edx, [eax+8]
0x588BE3: lea     ecx, [eax+8]
0x588BE6: movzx   ecx, word ptr [edx+18h]
0x588BEA: cmp     ecx, esi
0x588BEC: mov     eax, [eax]
0x588BEE: jz      short loc_588BFC
0x588BF0: jg      short loc_588BF6
0x588BF2: test    eax, eax
0x588BF4: jnz     short loc_588BE0
0x588BF6: fldz
0x588BF8: pop     esi
0x588BF9: retn    4
0x588BFC: fld     dword ptr [edx+4]
0x588BFF: pop     esi
0x588C00: retn    4
