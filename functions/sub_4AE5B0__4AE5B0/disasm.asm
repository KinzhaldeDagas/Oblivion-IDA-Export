0x4AE5B0: mov     edx, ecx
0x4AE5B2: mov     ecx, [esp+arg_0]
0x4AE5B6: xor     al, al
0x4AE5B8: cmp     ecx, 20h ; ' '
0x4AE5BB: jnb     short locret_4AE5CD
0x4AE5BD: push    esi
0x4AE5BE: mov     esi, 1
0x4AE5C3: shl     esi, cl
0x4AE5C5: test    [edx+58h], esi
0x4AE5C8: pop     esi
0x4AE5C9: jz      short locret_4AE5CD
0x4AE5CB: mov     al, 1
0x4AE5CD: retn    4
