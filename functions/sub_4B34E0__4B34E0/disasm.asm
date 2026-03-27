0x4B34E0: push    ebx
0x4B34E1: push    ebp
0x4B34E2: push    esi
0x4B34E3: mov     ebx, 1
0x4B34E8: test    ds:0B35AD8h, bl
0x4B34EE: push    edi
0x4B34EF: mov     esi, ecx
0x4B34F1: jnz     short loc_4B3510
0x4B34F3: or      ds:0B35AD8h, ebx
0x4B34F9: push    offset sub_A1B600; void (__cdecl *)()
0x4B34FE: mov     dword ptr ds:0B35AD4h, 0
0x4B3508: call    _atexit
0x4B350D: add     esp, 4
0x4B3510: movzx   ecx, word ptr [esi+0Ah]
0x4B3514: mov     eax, [esp+10h+arg_0]
0x4B3518: cmp     eax, ecx
0x4B351A: mov     ebp, [esp+10h+arg_4]
0x4B351E: jb      short loc_4B3538
0x4B3520: lea     edx, [eax+1]
0x4B3523: mov     [esi+0Ah], dx
0x4B3527: mov     ecx, [ebp+0]
0x4B352A: cmp     ecx, ds:0B35AD4h
0x4B3530: jz      short loc_4B355C
0x4B3532: add     [esi+0Ch], bx
0x4B3536: jmp     short loc_4B355C
0x4B3538: mov     ecx, ds:0B35AD4h
0x4B353E: cmp     [ebp+0], ecx
0x4B3541: mov     edx, [esi+4]
0x4B3544: jz      short loc_4B3551
0x4B3546: cmp     [edx+eax*4], ecx
0x4B3549: jnz     short loc_4B355C
0x4B354B: add     [esi+0Ch], bx
0x4B354F: jmp     short loc_4B355C
0x4B3551: cmp     [edx+eax*4], ecx
0x4B3554: jz      short loc_4B355C
0x4B3556: add     word ptr [esi+0Ch], 0FFFFh
0x4B355C: mov     ecx, [esi+4]
0x4B355F: mov     esi, [ecx+eax*4]
0x4B3562: cmp     esi, [ebp+0]
0x4B3565: lea     edi, [ecx+eax*4]
0x4B3568: jz      short loc_4B359C
0x4B356A: test    esi, esi
0x4B356C: jz      short loc_4B3589
0x4B356E: lea     edx, [esi+4]
0x4B3571: push    edx; lpAddend
0x4B3572: call    dword ptr ds:0A2807Ch
0x4B3578: test    eax, eax
0x4B357A: jnz     short loc_4B3589
0x4B357C: test    esi, esi
0x4B357E: jz      short loc_4B3589
0x4B3580: mov     eax, [esi]
0x4B3582: mov     edx, [eax]
0x4B3584: push    ebx
0x4B3585: mov     ecx, esi
0x4B3587: call    edx
0x4B3589: mov     eax, [ebp+0]
0x4B358C: test    eax, eax
0x4B358E: mov     [edi], eax
0x4B3590: jz      short loc_4B359C
0x4B3592: add     eax, 4
0x4B3595: push    eax; lpAddend
0x4B3596: call    dword ptr ds:0A28078h
0x4B359C: pop     edi
0x4B359D: pop     esi
0x4B359E: pop     ebp
0x4B359F: pop     ebx
0x4B35A0: retn    8
