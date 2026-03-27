0x5331C0: push    ebx
0x5331C1: push    ebp
0x5331C2: push    esi
0x5331C3: mov     ebx, 1
0x5331C8: test    ds:0B36590h, bl
0x5331CE: push    edi
0x5331CF: mov     esi, ecx
0x5331D1: jnz     short loc_5331F0
0x5331D3: or      ds:0B36590h, ebx
0x5331D9: push    offset sub_A1C550; void (__cdecl *)()
0x5331DE: mov     dword ptr ds:0B3658Ch, 0
0x5331E8: call    _atexit
0x5331ED: add     esp, 4
0x5331F0: movzx   ecx, word ptr [esi+0Ah]
0x5331F4: mov     eax, [esp+10h+arg_0]
0x5331F8: cmp     eax, ecx
0x5331FA: mov     ebp, [esp+10h+arg_4]
0x5331FE: jb      short loc_533218
0x533200: lea     edx, [eax+1]
0x533203: mov     [esi+0Ah], dx
0x533207: mov     ecx, [ebp+0]
0x53320A: cmp     ecx, ds:0B3658Ch
0x533210: jz      short loc_53323C
0x533212: add     [esi+0Ch], bx
0x533216: jmp     short loc_53323C
0x533218: mov     ecx, ds:0B3658Ch
0x53321E: cmp     [ebp+0], ecx
0x533221: mov     edx, [esi+4]
0x533224: jz      short loc_533231
0x533226: cmp     [edx+eax*4], ecx
0x533229: jnz     short loc_53323C
0x53322B: add     [esi+0Ch], bx
0x53322F: jmp     short loc_53323C
0x533231: cmp     [edx+eax*4], ecx
0x533234: jz      short loc_53323C
0x533236: add     word ptr [esi+0Ch], 0FFFFh
0x53323C: mov     ecx, [esi+4]
0x53323F: mov     esi, [ecx+eax*4]
0x533242: cmp     esi, [ebp+0]
0x533245: lea     edi, [ecx+eax*4]
0x533248: jz      short loc_53327C
0x53324A: test    esi, esi
0x53324C: jz      short loc_533269
0x53324E: lea     edx, [esi+4]
0x533251: push    edx; lpAddend
0x533252: call    dword ptr ds:0A2807Ch
0x533258: test    eax, eax
0x53325A: jnz     short loc_533269
0x53325C: test    esi, esi
0x53325E: jz      short loc_533269
0x533260: mov     eax, [esi]
0x533262: mov     edx, [eax]
0x533264: push    ebx
0x533265: mov     ecx, esi
0x533267: call    edx
0x533269: mov     eax, [ebp+0]
0x53326C: test    eax, eax
0x53326E: mov     [edi], eax
0x533270: jz      short loc_53327C
0x533272: add     eax, 4
0x533275: push    eax; lpAddend
0x533276: call    dword ptr ds:0A28078h
0x53327C: pop     edi
0x53327D: pop     esi
0x53327E: pop     ebp
0x53327F: pop     ebx
0x533280: retn    8
