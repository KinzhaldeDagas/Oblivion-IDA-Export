0x801430: mov     eax, [esp+arg_0]
0x801434: sub     esp, 8
0x801437: test    eax, eax
0x801439: jz      loc_8014D8
0x80143F: mov     ecx, [eax+18h]
0x801442: push    ebp
0x801443: xor     ebp, ebp
0x801445: test    ecx, ecx
0x801447: mov     [esp+0Ch+var_4], ecx
0x80144B: jle     loc_8014D7
0x801451: push    ebx
0x801452: push    esi
0x801453: push    edi
0x801454: jmp     short loc_80145A
0x801456: mov     eax, [esp+18h+arg_0]
0x80145A: mov     eax, [eax+24h]
0x80145D: mov     edi, [eax+ebp*4]
0x801460: lea     ecx, [esp+18h+var_8]
0x801464: push    ecx
0x801465: mov     ecx, edi
0x801467: call    sub_75FB10
0x80146C: mov     edx, [eax]
0x80146E: cmp     edx, ds:0B43110h
0x801474: mov     eax, [esp+18h+var_8]
0x801478: setnz   bl
0x80147B: test    eax, eax
0x80147D: jz      short loc_80149D
0x80147F: mov     esi, eax
0x801481: add     eax, 4
0x801484: push    eax; lpAddend
0x801485: call    dword ptr ds:0A2807Ch
0x80148B: test    eax, eax
0x80148D: jnz     short loc_80149D
0x80148F: test    esi, esi
0x801491: jz      short loc_80149D
0x801493: mov     eax, [esi]
0x801495: mov     edx, [eax]
0x801497: push    1
0x801499: mov     ecx, esi
0x80149B: call    edx
0x80149D: test    bl, bl
0x80149F: jz      short loc_8014CB
0x8014A1: mov     esi, [edi+4]
0x8014A4: test    esi, esi
0x8014A6: jz      short loc_8014CB
0x8014A8: lea     eax, [esi+4]
0x8014AB: push    eax; lpAddend
0x8014AC: call    dword ptr ds:0A2807Ch
0x8014B2: test    eax, eax
0x8014B4: jnz     short loc_8014C4
0x8014B6: test    esi, esi
0x8014B8: jz      short loc_8014C4
0x8014BA: mov     edx, [esi]
0x8014BC: mov     eax, [edx]
0x8014BE: push    1
0x8014C0: mov     ecx, esi
0x8014C2: call    eax
0x8014C4: mov     dword ptr [edi+4], 0
0x8014CB: add     ebp, 1
0x8014CE: cmp     ebp, [esp+18h+var_4]
0x8014D2: jl      short loc_801456
0x8014D4: pop     edi
0x8014D5: pop     esi
0x8014D6: pop     ebx
0x8014D7: pop     ebp
0x8014D8: add     esp, 8
0x8014DB: retn    4
