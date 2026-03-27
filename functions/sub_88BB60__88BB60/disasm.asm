0x88BB60: mov     eax, [esp+arg_0]
0x88BB64: test    eax, eax
0x88BB66: push    ebx
0x88BB67: mov     ebx, [esp+4+arg_4]
0x88BB6B: push    esi
0x88BB6C: push    edi
0x88BB6D: jz      short loc_88BB7B
0x88BB6F: mov     eax, [eax+8]
0x88BB72: test    eax, eax
0x88BB74: jz      short loc_88BB7B
0x88BB76: lea     edi, [eax+14h]
0x88BB79: jmp     short loc_88BB7D
0x88BB7B: xor     edi, edi
0x88BB7D: mov     eax, [ecx+74h]
0x88BB80: lea     esi, [ecx+6Ch]
0x88BB83: and     eax, 3FFFFFFFh
0x88BB88: cmp     [esi+4], eax
0x88BB8B: jnz     short loc_88BB98
0x88BB8D: push    8
0x88BB8F: push    esi
0x88BB90: call    sub_8A6EE0
0x88BB95: add     esp, 8
0x88BB98: mov     ecx, [esi+4]
0x88BB9B: mov     eax, [esi]
0x88BB9D: mov     [eax+ecx*8], edi
0x88BBA0: mov     [eax+ecx*8+4], ebx
0x88BBA4: add     dword ptr [esi+4], 1
0x88BBA8: pop     edi
0x88BBA9: pop     esi
0x88BBAA: pop     ebx
0x88BBAB: retn    8
