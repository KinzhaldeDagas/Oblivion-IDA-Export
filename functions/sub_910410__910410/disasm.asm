0x910410: push    esi
0x910411: push    edi
0x910412: mov     edi, [esp+8+arg_0]
0x910416: cmp     dword ptr [edi+4], 1
0x91041A: mov     esi, ecx
0x91041C: jnz     short loc_910429
0x91041E: mov     eax, [esp+8+arg_4]
0x910422: mov     ecx, [eax+4]
0x910425: test    ecx, ecx
0x910427: jz      short loc_910430
0x910429: pop     edi
0x91042A: xor     eax, eax
0x91042C: pop     esi
0x91042D: retn    8
0x910430: mov     ecx, ds:0BA7D98h
0x910436: mov     edx, [ecx]
0x910438: push    26h ; '&'
0x91043A: push    40h ; '@'
0x91043C: call    dword ptr [edx+10h]
0x91043F: mov     word ptr [eax+4], 40h ; '@'
0x910445: mov     ecx, [esi+34h]
0x910448: mov     edx, [esi+30h]
0x91044B: push    ecx; float
0x91044C: push    edx; float
0x91044D: mov     edx, [edi]
0x91044F: lea     ecx, [esi+20h]
0x910452: push    ecx; int
0x910453: mov     ecx, [edx]
0x910455: push    ecx; int
0x910456: mov     ecx, eax
0x910458: call    sub_8BE730
0x91045D: mov     dl, [esi+38h]
0x910460: mov     [eax+38h], dl
0x910463: mov     ecx, [esi+10h]
0x910466: pop     edi
0x910467: mov     [eax+10h], ecx
0x91046A: pop     esi
0x91046B: retn    8
