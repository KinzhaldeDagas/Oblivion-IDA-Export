0x6F95E0: push    ebx
0x6F95E1: push    ebp
0x6F95E2: push    esi
0x6F95E3: mov     ebx, 1
0x6F95E8: test    ds:0B3F388h, bl
0x6F95EE: push    edi
0x6F95EF: mov     esi, ecx
0x6F95F1: jnz     short loc_6F9610
0x6F95F3: or      ds:0B3F388h, ebx
0x6F95F9: push    offset sub_A268D0; void (__cdecl *)()
0x6F95FE: mov     dword ptr ds:0B3F384h, 0
0x6F9608: call    _atexit
0x6F960D: add     esp, 4
0x6F9610: movzx   ecx, word ptr [esi+0Ah]
0x6F9614: mov     eax, [esp+10h+arg_0]
0x6F9618: cmp     eax, ecx
0x6F961A: mov     ebp, [esp+10h+arg_4]
0x6F961E: jb      short loc_6F9638
0x6F9620: lea     edx, [eax+1]
0x6F9623: mov     [esi+0Ah], dx
0x6F9627: mov     ecx, [ebp+0]
0x6F962A: cmp     ecx, ds:0B3F384h
0x6F9630: jz      short loc_6F965C
0x6F9632: add     [esi+0Ch], bx
0x6F9636: jmp     short loc_6F965C
0x6F9638: mov     ecx, ds:0B3F384h
0x6F963E: cmp     [ebp+0], ecx
0x6F9641: mov     edx, [esi+4]
0x6F9644: jz      short loc_6F9651
0x6F9646: cmp     [edx+eax*4], ecx
0x6F9649: jnz     short loc_6F965C
0x6F964B: add     [esi+0Ch], bx
0x6F964F: jmp     short loc_6F965C
0x6F9651: cmp     [edx+eax*4], ecx
0x6F9654: jz      short loc_6F965C
0x6F9656: add     word ptr [esi+0Ch], 0FFFFh
0x6F965C: mov     ecx, [esi+4]
0x6F965F: mov     esi, [ecx+eax*4]
0x6F9662: cmp     esi, [ebp+0]
0x6F9665: lea     edi, [ecx+eax*4]
0x6F9668: jz      short loc_6F969C
0x6F966A: test    esi, esi
0x6F966C: jz      short loc_6F9689
0x6F966E: lea     edx, [esi+4]
0x6F9671: push    edx; lpAddend
0x6F9672: call    dword ptr ds:0A2807Ch
0x6F9678: test    eax, eax
0x6F967A: jnz     short loc_6F9689
0x6F967C: test    esi, esi
0x6F967E: jz      short loc_6F9689
0x6F9680: mov     eax, [esi]
0x6F9682: mov     edx, [eax]
0x6F9684: push    ebx
0x6F9685: mov     ecx, esi
0x6F9687: call    edx
0x6F9689: mov     eax, [ebp+0]
0x6F968C: test    eax, eax
0x6F968E: mov     [edi], eax
0x6F9690: jz      short loc_6F969C
0x6F9692: add     eax, 4
0x6F9695: push    eax; lpAddend
0x6F9696: call    dword ptr ds:0A28078h
0x6F969C: pop     edi
0x6F969D: pop     esi
0x6F969E: pop     ebp
0x6F969F: pop     ebx
0x6F96A0: retn    8
