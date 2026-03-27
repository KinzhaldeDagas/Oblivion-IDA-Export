0x88D560: mov     al, [esp+arg_0]
0x88D564: cmp     al, [ecx+68h]
0x88D567: jz      short locret_88D59D
0x88D569: push    esi
0x88D56A: mov     esi, [ecx+8]
0x88D56D: test    esi, esi
0x88D56F: mov     [ecx+68h], al
0x88D572: jz      short loc_88D59C
0x88D574: cmp     byte ptr [esi+0FDh], 0
0x88D57B: jnz     short loc_88D59C
0x88D57D: test    al, al
0x88D57F: mov     eax, [esi]
0x88D581: mov     ecx, esi
0x88D583: jz      short loc_88D58E
0x88D585: mov     edx, [eax+3Ch]
0x88D588: call    edx
0x88D58A: pop     esi
0x88D58B: retn    4
0x88D58E: mov     edx, [eax+30h]
0x88D591: call    edx
0x88D593: mov     eax, [esi]
0x88D595: mov     edx, [eax+38h]
0x88D598: mov     ecx, esi
0x88D59A: call    edx
0x88D59C: pop     esi
0x88D59D: retn    4
