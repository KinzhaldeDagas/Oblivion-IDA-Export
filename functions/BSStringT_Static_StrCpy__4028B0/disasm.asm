0x4028B0: mov     eax, [esp+arg_0]
0x4028B4: mov     ecx, [esp+arg_4]
0x4028B8: push    esi
0x4028B9: mov     esi, eax
0x4028BB: sub     esi, ecx
0x4028BD: lea     ecx, [ecx+0]
0x4028C0: mov     dl, [ecx]
0x4028C2: mov     [esi+ecx], dl
0x4028C5: add     ecx, 1
0x4028C8: test    dl, dl
0x4028CA: jnz     short loc_4028C0
0x4028CC: pop     esi
0x4028CD: retn
