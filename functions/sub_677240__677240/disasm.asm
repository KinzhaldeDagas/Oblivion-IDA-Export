0x677240: push    ebx
0x677241: push    esi
0x677242: push    edi
0x677243: lea     edi, [ecx+28h]
0x677246: mov     ebx, 6
0x67724B: jmp     short loc_677250
0x67724D: align 10h
0x677250: mov     esi, [edi]
0x677252: test    esi, esi
0x677254: jz      short loc_67726F
0x677256: cmp     dword ptr [esi+4], 0
0x67725A: jnz     short loc_677261
0x67725C: cmp     dword ptr [esi], 0
0x67725F: jz      short loc_67726F
0x677261: mov     ecx, [esi]
0x677263: call    sub_6071A0
0x677268: mov     esi, [esi+4]
0x67726B: test    esi, esi
0x67726D: jnz     short loc_677256
0x67726F: add     edi, 4
0x677272: sub     ebx, 1
0x677275: jnz     short loc_677250
0x677277: pop     edi
0x677278: pop     esi
0x677279: pop     ebx
0x67727A: retn
