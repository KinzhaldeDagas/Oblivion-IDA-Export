0x8B1770: mov     eax, [esp+arg_0]
0x8B1774: push    ebx
0x8B1775: push    esi
0x8B1776: mov     esi, [esp+8+arg_4]
0x8B177A: lea     ebx, [ebx+0]
0x8B1780: mov     dl, [eax]
0x8B1782: mov     bl, [esi]
0x8B1784: mov     cl, dl
0x8B1786: cmp     dl, bl
0x8B1788: jnz     short loc_8B17A9
0x8B178A: test    cl, cl
0x8B178C: jz      short loc_8B17A4
0x8B178E: mov     dl, [eax+1]
0x8B1791: mov     bl, [esi+1]
0x8B1794: mov     cl, dl
0x8B1796: cmp     dl, bl
0x8B1798: jnz     short loc_8B17A9
0x8B179A: add     eax, 2
0x8B179D: add     esi, 2
0x8B17A0: test    cl, cl
0x8B17A2: jnz     short loc_8B1780
0x8B17A4: pop     esi
0x8B17A5: xor     eax, eax
0x8B17A7: pop     ebx
0x8B17A8: retn
0x8B17A9: sbb     eax, eax
0x8B17AB: pop     esi
0x8B17AC: sbb     eax, 0FFFFFFFFh
0x8B17AF: pop     ebx
0x8B17B0: retn
