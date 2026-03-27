0x9895F3: push    ebp
0x9895F4: mov     ebp, esp
0x9895F6: sub     esp, 14h
0x9895F9: mov     eax, ___security_cookie
0x9895FE: xor     eax, ebp
0x989600: mov     [ebp+var_4], eax
0x989603: push    ebx
0x989604: push    esi
0x989605: xor     ebx, ebx
0x989607: cmp     dword_BA9E08, ebx
0x98960D: push    edi
0x98960E: mov     esi, ecx
0x989610: jnz     short loc_98964A
0x989612: push    ebx; cchDest
0x989613: push    ebx; lpDestStr
0x989614: xor     edi, edi
0x989616: inc     edi
0x989617: push    edi; cchSrc
0x989618: push    offset SrcStr; lpSrcStr
0x98961D: push    100h; dwMapFlags
0x989622: push    ebx; Locale
0x989623: call    ds:LCMapStringW
0x989629: test    eax, eax
0x98962B: jz      short loc_989635
0x98962D: mov     dword_BA9E08, edi
0x989633: jmp     short loc_98964A
0x989635: call    ds:GetLastError
0x98963B: cmp     eax, 78h ; 'x'
0x98963E: jnz     short loc_98964A
0x989640: mov     dword_BA9E08, 2
0x98964A: cmp     [ebp+cchSrc], ebx
0x98964D: jle     short loc_989671
0x98964F: mov     ecx, [ebp+cchSrc]
0x989652: mov     eax, [ebp+arg_8]
0x989655: dec     ecx
0x989656: cmp     [eax], bl
0x989658: jz      short loc_989662
0x98965A: inc     eax
0x98965B: cmp     ecx, ebx
0x98965D: jnz     short loc_989655
0x98965F: or      ecx, 0FFFFFFFFh
0x989662: mov     eax, [ebp+cchSrc]
0x989665: sub     eax, ecx
0x989667: dec     eax
0x989668: cmp     eax, [ebp+cchSrc]
0x98966B: jge     short loc_98966E
0x98966D: inc     eax
0x98966E: mov     [ebp+cchSrc], eax
0x989671: mov     eax, dword_BA9E08
0x989676: cmp     eax, 2
0x989679: jz      loc_98982A
0x98967F: cmp     eax, ebx
