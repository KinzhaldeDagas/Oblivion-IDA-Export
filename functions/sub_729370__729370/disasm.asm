0x729370: mov     eax, [esp+arg_8]
0x729374: push    ebp
0x729375: mov     ebp, ecx
0x729377: mov     ecx, [esp+4+arg_C]
0x72937B: cmp     ecx, eax
0x72937D: jle     loc_72943E
0x729383: push    ebx
0x729384: push    esi
0x729385: mov     esi, [esp+0Ch+arg_0]
0x729389: push    edi
0x72938A: jmp     short loc_729398
0x72938C: align 10h
0x729390: mov     ecx, [esp+10h+arg_C]
0x729394: mov     eax, [esp+10h+arg_8]
0x729398: push    ecx
0x729399: push    eax
0x72939A: lea     ebx, [eax-1]
0x72939D: mov     eax, [esp+18h+arg_4]
0x7293A1: push    eax
0x7293A2: lea     edi, [ecx+1]
0x7293A5: push    esi
0x7293A6: mov     ecx, ebp
0x7293A8: call    sub_728A00
0x7293AD: mov     [esp+10h+arg_0], eax
0x7293B1: mov     ecx, [esp+10h+arg_4]
0x7293B5: movzx   edx, word ptr [esi+edi*2-2]
0x7293BA: mov     eax, [esp+10h+arg_0]
0x7293BE: sub     edi, 1
0x7293C1: push    ecx
0x7293C2: push    edx
0x7293C3: push    eax
0x7293C4: mov     ecx, ebp
0x7293C6: call    sub_728440
0x7293CB: test    eax, eax
0x7293CD: jl      short loc_7293B1
0x7293CF: nop
0x7293D0: mov     ecx, [esp+10h+arg_4]
0x7293D4: mov     edx, [esp+10h+arg_0]
0x7293D8: movzx   eax, word ptr [esi+ebx*2+2]
0x7293DD: push    ecx
0x7293DE: add     ebx, 1
0x7293E1: push    edx
0x7293E2: push    eax
0x7293E3: mov     ecx, ebp
0x7293E5: call    sub_728440
0x7293EA: test    eax, eax
0x7293EC: jl      short loc_7293D0
0x7293EE: cmp     ebx, edi
0x7293F0: jge     short loc_729404
0x7293F2: movzx   eax, word ptr [esi+ebx*2]
0x7293F6: mov     cx, [esi+edi*2]
0x7293FA: mov     [esi+ebx*2], cx
0x7293FE: mov     [esi+edi*2], ax
0x729402: jmp     short loc_7293B1
0x729404: cmp     edi, [esp+10h+arg_C]
0x729408: jnz     short loc_729413
0x72940A: add     edi, 0FFFFFFFFh
0x72940D: mov     [esp+10h+arg_C], edi
0x729411: jmp     short loc_72942D
0x729413: mov     edx, [esp+10h+arg_8]
0x729417: mov     eax, [esp+10h+arg_4]
0x72941B: push    edi
0x72941C: push    edx
0x72941D: push    eax
0x72941E: push    esi
0x72941F: mov     ecx, ebp
0x729421: call    sub_729370
0x729426: add     edi, 1
0x729429: mov     [esp+10h+arg_8], edi
0x72942D: mov     ecx, [esp+10h+arg_8]
0x729431: cmp     [esp+10h+arg_C], ecx
0x729435: jg      loc_729390
0x72943B: pop     edi
0x72943C: pop     esi
0x72943D: pop     ebx
0x72943E: pop     ebp
0x72943F: retn    10h
