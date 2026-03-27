0x9A2570: sub     esp, 108h
0x9A2576: mov     eax, ___security_cookie
0x9A257B: xor     eax, esp
0x9A257D: mov     [esp+108h+var_4], eax
0x9A2584: mov     ecx, [esp+108h+arg_8]
0x9A258B: mov     eax, [esp+108h+Src]
0x9A2592: push    ebx
0x9A2593: mov     ebx, [esp+10Ch+arg_4]
0x9A259A: push    ecx; int
0x9A259B: push    104h; SizeInBytes
0x9A25A0: lea     ecx, [esp+114h+Str1]
0x9A25A4: push    ecx; char *
0x9A25A5: push    eax; Src
0x9A25A6: call    sub_9A2480
0x9A25AB: add     esp, 10h
0x9A25AE: test    al, al
0x9A25B0: jnz     short loc_9A25C8
0x9A25B2: pop     ebx
0x9A25B3: mov     ecx, [esp+108h+var_4]
0x9A25BA: xor     ecx, esp
0x9A25BC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9A25C1: add     esp, 108h
0x9A25C7: retn
0x9A25C8: push    esi
0x9A25C9: xor     esi, esi
0x9A25CB: cmp     dword_B3245C, esi
0x9A25D1: push    edi
0x9A25D2: jbe     short loc_9A2603
0x9A25D4: mov     edi, offset unk_B32460
0x9A25D9: lea     esp, [esp+0]
0x9A25E0: mov     edx, [edi+4]
0x9A25E3: push    edx; Str2
0x9A25E4: lea     eax, [esp+118h+Str1]
0x9A25E8: push    eax; Str1
0x9A25E9: call    __strcmp
0x9A25EE: add     esp, 8
0x9A25F1: test    eax, eax
0x9A25F3: jz      short loc_9A261D
0x9A25F5: add     esi, 1
0x9A25F8: add     edi, 8
0x9A25FB: cmp     esi, dword_B3245C
0x9A2601: jb      short loc_9A25E0
0x9A2603: pop     edi
0x9A2604: pop     esi
0x9A2605: xor     al, al
0x9A2607: pop     ebx
0x9A2608: mov     ecx, [esp+108h+var_4]
0x9A260F: xor     ecx, esp
0x9A2611: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9A2616: add     esp, 108h
0x9A261C: retn
0x9A261D: mov     ecx, [edi]
0x9A261F: pop     edi
0x9A2620: mov     [ebx], ecx
0x9A2622: mov     ecx, [esp+110h+var_4]
0x9A2629: pop     esi
0x9A262A: pop     ebx
0x9A262B: xor     ecx, esp
0x9A262D: mov     al, 1
0x9A262F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9A2634: add     esp, 108h
0x9A263A: retn
