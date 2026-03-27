0x6C61E0: push    ebx
0x6C61E1: push    esi
0x6C61E2: mov     ebx, ecx
0x6C61E4: mov     esi, [ebx+34h]
0x6C61E7: push    edi
0x6C61E8: mov     edi, [esp+0Ch+arg_0]
0x6C61EC: cmp     esi, edi
0x6C61EE: jz      short loc_6C6221
0x6C61F0: test    esi, esi
0x6C61F2: jz      short loc_6C6210
0x6C61F4: lea     eax, [esi+4]
0x6C61F7: push    eax; lpAddend
0x6C61F8: call    dword ptr ds:0A2807Ch
0x6C61FE: test    eax, eax
0x6C6200: jnz     short loc_6C6210
0x6C6202: test    esi, esi
0x6C6204: jz      short loc_6C6210
0x6C6206: mov     edx, [esi]
0x6C6208: mov     eax, [edx]
0x6C620A: push    1
0x6C620C: mov     ecx, esi
0x6C620E: call    eax
0x6C6210: test    edi, edi
0x6C6212: mov     [ebx+34h], edi
0x6C6215: jz      short loc_6C6221
0x6C6217: add     edi, 4
0x6C621A: push    edi; lpAddend
0x6C621B: call    dword ptr ds:0A28078h
0x6C6221: pop     edi
0x6C6222: pop     esi
0x6C6223: pop     ebx
0x6C6224: retn    4
