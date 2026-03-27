0x6E3540: push    ebx
0x6E3541: push    esi
0x6E3542: mov     esi, ecx
0x6E3544: mov     eax, [esi+0Ch]
0x6E3547: xor     ebx, ebx
0x6E3549: cmp     eax, ebx
0x6E354B: push    edi
0x6E354C: jz      short loc_6E355E
0x6E354E: mov     ecx, [esi+10h]
0x6E3551: mov     edx, ds:0B3D2C8h[ecx*4]
0x6E3558: push    eax
0x6E3559: call    edx ; dword_B3D2C8
0x6E355B: add     esp, 4
0x6E355E: mov     edi, [esp+0Ch+arg_0]
0x6E3562: cmp     edi, ebx
0x6E3564: jz      short loc_6E358E
0x6E3566: mov     ecx, [esp+0Ch+arg_4]
0x6E356A: cmp     ecx, ebx
0x6E356C: jz      short loc_6E358E
0x6E356E: mov     eax, [esp+0Ch+arg_8]
0x6E3572: cmp     eax, ebx
0x6E3574: jz      short loc_6E358E
0x6E3576: mov     dl, ds:byte_B3D3E8[eax]
0x6E357C: mov     [esi+0Ch], edi
0x6E357F: pop     edi
0x6E3580: mov     [esi+14h], dl
0x6E3583: mov     [esi+8], ecx
0x6E3586: mov     [esi+10h], eax
0x6E3589: pop     esi
0x6E358A: pop     ebx
0x6E358B: retn    0Ch
0x6E358E: pop     edi
0x6E358F: mov     [esi+8], ebx
0x6E3592: mov     [esi+0Ch], ebx
0x6E3595: mov     [esi+14h], bl
0x6E3598: mov     [esi+10h], ebx
0x6E359B: pop     esi
0x6E359C: pop     ebx
0x6E359D: retn    0Ch
