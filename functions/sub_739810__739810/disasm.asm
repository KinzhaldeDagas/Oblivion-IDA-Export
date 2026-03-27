0x739810: push    ebx
0x739811: push    ebp
0x739812: push    esi
0x739813: mov     ebx, 1
0x739818: test    ds:0B40164h, bl
0x73981E: push    edi
0x73981F: mov     esi, ecx
0x739821: jnz     short loc_739840
0x739823: or      ds:0B40164h, ebx
0x739829: push    offset sub_A26B60; void (__cdecl *)()
0x73982E: mov     dword ptr ds:0B40160h, 0
0x739838: call    _atexit
0x73983D: add     esp, 4
0x739840: movzx   ecx, word ptr [esi+0Ah]
0x739844: mov     eax, [esp+10h+arg_0]
0x739848: cmp     eax, ecx
0x73984A: mov     ebp, [esp+10h+arg_4]
0x73984E: jb      short loc_739868
0x739850: lea     edx, [eax+1]
0x739853: mov     [esi+0Ah], dx
0x739857: mov     ecx, [ebp+0]
0x73985A: cmp     ecx, ds:0B40160h
0x739860: jz      short loc_73988C
0x739862: add     [esi+0Ch], bx
0x739866: jmp     short loc_73988C
0x739868: mov     ecx, ds:0B40160h
0x73986E: cmp     [ebp+0], ecx
0x739871: mov     edx, [esi+4]
0x739874: jz      short loc_739881
0x739876: cmp     [edx+eax*4], ecx
0x739879: jnz     short loc_73988C
0x73987B: add     [esi+0Ch], bx
0x73987F: jmp     short loc_73988C
0x739881: cmp     [edx+eax*4], ecx
0x739884: jz      short loc_73988C
0x739886: add     word ptr [esi+0Ch], 0FFFFh
0x73988C: mov     ecx, [esi+4]
0x73988F: mov     esi, [ecx+eax*4]
0x739892: cmp     esi, [ebp+0]
0x739895: lea     edi, [ecx+eax*4]
0x739898: jz      short loc_7398CC
0x73989A: test    esi, esi
0x73989C: jz      short loc_7398B9
0x73989E: lea     edx, [esi+4]
0x7398A1: push    edx; lpAddend
0x7398A2: call    dword ptr ds:0A2807Ch
0x7398A8: test    eax, eax
0x7398AA: jnz     short loc_7398B9
0x7398AC: test    esi, esi
0x7398AE: jz      short loc_7398B9
0x7398B0: mov     eax, [esi]
0x7398B2: mov     edx, [eax]
0x7398B4: push    ebx
0x7398B5: mov     ecx, esi
0x7398B7: call    edx
0x7398B9: mov     eax, [ebp+0]
0x7398BC: test    eax, eax
0x7398BE: mov     [edi], eax
0x7398C0: jz      short loc_7398CC
0x7398C2: add     eax, 4
0x7398C5: push    eax; lpAddend
0x7398C6: call    dword ptr ds:0A28078h
0x7398CC: pop     edi
0x7398CD: pop     esi
0x7398CE: pop     ebp
0x7398CF: pop     ebx
0x7398D0: retn    8
