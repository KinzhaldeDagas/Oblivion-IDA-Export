0x6E4AE0: movzx   eax, [esp+arg_4]
0x6E4AE5: sub     eax, 0
0x6E4AE8: jz      short loc_6E4B08
0x6E4AEA: sub     eax, 1
0x6E4AED: jz      short loc_6E4AFE
0x6E4AEF: sub     eax, 1
0x6E4AF2: jnz     short locret_6E4B0F
0x6E4AF4: mov     eax, [esp+arg_0]
0x6E4AF8: mov     [ecx+44h], eax
0x6E4AFB: retn    8
0x6E4AFE: mov     edx, [esp+arg_0]
0x6E4B02: mov     [ecx+40h], edx
0x6E4B05: retn    8
0x6E4B08: mov     eax, [esp+arg_0]
0x6E4B0C: mov     [ecx+3Ch], eax
0x6E4B0F: retn    8
