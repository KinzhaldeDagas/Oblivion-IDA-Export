0x6C4940: push    ebx
0x6C4941: push    ebp
0x6C4942: push    esi
0x6C4943: mov     ebx, 1
0x6C4948: test    ds:0B3CA98h, bl
0x6C494E: push    edi
0x6C494F: mov     esi, ecx
0x6C4951: jnz     short loc_6C4970
0x6C4953: or      ds:0B3CA98h, ebx
0x6C4959: push    offset sub_A267D0; void (__cdecl *)()
0x6C495E: mov     dword ptr ds:0B3CA94h, 0
0x6C4968: call    _atexit
0x6C496D: add     esp, 4
0x6C4970: movzx   ecx, word ptr [esi+0Ah]
0x6C4974: mov     eax, [esp+10h+arg_0]
0x6C4978: cmp     eax, ecx
0x6C497A: mov     ebp, [esp+10h+arg_4]
0x6C497E: jb      short loc_6C4998
0x6C4980: lea     edx, [eax+1]
0x6C4983: mov     [esi+0Ah], dx
0x6C4987: mov     ecx, [ebp+0]
0x6C498A: cmp     ecx, ds:0B3CA94h
0x6C4990: jz      short loc_6C49BC
0x6C4992: add     [esi+0Ch], bx
0x6C4996: jmp     short loc_6C49BC
0x6C4998: mov     ecx, ds:0B3CA94h
0x6C499E: cmp     [ebp+0], ecx
0x6C49A1: mov     edx, [esi+4]
0x6C49A4: jz      short loc_6C49B1
0x6C49A6: cmp     [edx+eax*4], ecx
0x6C49A9: jnz     short loc_6C49BC
0x6C49AB: add     [esi+0Ch], bx
0x6C49AF: jmp     short loc_6C49BC
0x6C49B1: cmp     [edx+eax*4], ecx
0x6C49B4: jz      short loc_6C49BC
0x6C49B6: add     word ptr [esi+0Ch], 0FFFFh
0x6C49BC: mov     ecx, [esi+4]
0x6C49BF: mov     esi, [ecx+eax*4]
0x6C49C2: cmp     esi, [ebp+0]
0x6C49C5: lea     edi, [ecx+eax*4]
0x6C49C8: jz      short loc_6C49FC
0x6C49CA: test    esi, esi
0x6C49CC: jz      short loc_6C49E9
0x6C49CE: lea     edx, [esi+4]
0x6C49D1: push    edx; lpAddend
0x6C49D2: call    dword ptr ds:0A2807Ch
0x6C49D8: test    eax, eax
0x6C49DA: jnz     short loc_6C49E9
0x6C49DC: test    esi, esi
0x6C49DE: jz      short loc_6C49E9
0x6C49E0: mov     eax, [esi]
0x6C49E2: mov     edx, [eax]
0x6C49E4: push    ebx
0x6C49E5: mov     ecx, esi
0x6C49E7: call    edx
0x6C49E9: mov     eax, [ebp+0]
0x6C49EC: test    eax, eax
0x6C49EE: mov     [edi], eax
0x6C49F0: jz      short loc_6C49FC
0x6C49F2: add     eax, 4
0x6C49F5: push    eax; lpAddend
0x6C49F6: call    dword ptr ds:0A28078h
0x6C49FC: pop     edi
0x6C49FD: pop     esi
0x6C49FE: pop     ebp
0x6C49FF: pop     ebx
0x6C4A00: retn    8
