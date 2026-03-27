0x6E4640: push    ebx
0x6E4641: push    esi
0x6E4642: mov     esi, ecx
0x6E4644: mov     eax, [esi+0Ch]
0x6E4647: xor     ebx, ebx
0x6E4649: cmp     eax, ebx
0x6E464B: push    edi
0x6E464C: jz      short loc_6E465E
0x6E464E: mov     ecx, [esi+10h]
0x6E4651: mov     edx, ds:0B3D310h[ecx*4]
0x6E4658: push    eax
0x6E4659: call    edx ; dword_B3D310
0x6E465B: add     esp, 4
0x6E465E: mov     edi, [esp+0Ch+arg_0]
0x6E4662: cmp     edi, ebx
0x6E4664: jz      short loc_6E468A
0x6E4666: mov     ecx, [esp+0Ch+arg_4]
0x6E466A: cmp     ecx, ebx
0x6E466C: jz      short loc_6E468A
0x6E466E: mov     eax, [esp+0Ch+arg_8]
0x6E4672: mov     dl, ds:byte_B3D3FA[eax]
0x6E4678: mov     [esi+0Ch], edi
0x6E467B: pop     edi
0x6E467C: mov     [esi+14h], dl
0x6E467F: mov     [esi+8], ecx
0x6E4682: mov     [esi+10h], eax
0x6E4685: pop     esi
0x6E4686: pop     ebx
0x6E4687: retn    0Ch
0x6E468A: pop     edi
0x6E468B: mov     [esi+8], ebx
0x6E468E: mov     [esi+0Ch], ebx
0x6E4691: mov     [esi+10h], ebx
0x6E4694: mov     [esi+14h], bl
0x6E4697: pop     esi
0x6E4698: pop     ebx
0x6E4699: retn    0Ch
