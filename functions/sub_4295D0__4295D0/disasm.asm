0x4295D0: mov     edx, ecx
0x4295D2: mov     ecx, [esp+arg_0]
0x4295D6: xor     al, al
0x4295D8: cmp     ecx, 1Eh
0x4295DB: jnb     short locret_4295ED
0x4295DD: push    esi
0x4295DE: mov     esi, 1
0x4295E3: shl     esi, cl
0x4295E5: test    [edx+0Ch], esi
0x4295E8: pop     esi
0x4295E9: jz      short locret_4295ED
0x4295EB: mov     al, 1
0x4295ED: retn    4
