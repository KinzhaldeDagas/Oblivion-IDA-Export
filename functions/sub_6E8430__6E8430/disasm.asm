0x6E8430: push    esi
0x6E8431: push    edi
0x6E8432: mov     edi, [esp+8+arg_0]
0x6E8436: push    edi
0x6E8437: mov     esi, ecx
0x6E8439: call    sub_6EC2E0
0x6E843E: test    al, al
0x6E8440: jnz     short loc_6E8449
0x6E8442: pop     edi
0x6E8443: xor     al, al
0x6E8445: pop     esi
0x6E8446: retn    4
0x6E8449: mov     al, [esi+0Ch]
0x6E844C: cmp     al, [edi+0Ch]
0x6E844F: jnz     short loc_6E8442
0x6E8451: mov     ecx, [esi+10h]
0x6E8454: test    ecx, ecx
0x6E8456: jz      short loc_6E8462
0x6E8458: cmp     dword ptr [edi+10h], 0
0x6E845C: jz      short loc_6E8442
0x6E845E: test    ecx, ecx
0x6E8460: jnz     short loc_6E846C
0x6E8462: cmp     dword ptr [edi+10h], 0
0x6E8466: jnz     short loc_6E8442
0x6E8468: test    ecx, ecx
0x6E846A: jz      short loc_6E847B
0x6E846C: mov     edi, [edi+10h]
0x6E846F: mov     edx, [ecx]
0x6E8471: mov     eax, [edx+2Ch]
0x6E8474: push    edi
0x6E8475: call    eax
0x6E8477: test    al, al
0x6E8479: jz      short loc_6E8442
0x6E847B: pop     edi
0x6E847C: mov     al, 1
0x6E847E: pop     esi
0x6E847F: retn    4
