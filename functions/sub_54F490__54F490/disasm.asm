0x54F490: push    ebx
0x54F491: mov     ebx, [esp+4+arg_4]
0x54F495: push    edi
0x54F496: mov     edi, [esp+8+Str2]
0x54F49A: test    edi, edi
0x54F49C: mov     dword ptr [ebx], 0FFFFFFFFh
0x54F4A2: jnz     short loc_54F4AA
0x54F4A4: pop     edi
0x54F4A5: or      eax, 0FFFFFFFFh
0x54F4A8: pop     ebx
0x54F4A9: retn
0x54F4AA: push    esi
0x54F4AB: xor     esi, esi
0x54F4AD: lea     ecx, [ecx+0]
0x54F4B0: mov     eax, ds:0B11FF0h[esi*4]
0x54F4B7: test    eax, eax
0x54F4B9: jz      short loc_54F4CD
0x54F4BB: push    edi; Str2
0x54F4BC: push    eax; Str1
0x54F4BD: call    __strcmp
0x54F4C2: add     esp, 8
0x54F4C5: test    eax, eax
0x54F4C7: jz      loc_54F558
0x54F4CD: add     esi, 1
0x54F4D0: cmp     esi, 0Dh
0x54F4D3: jl      short loc_54F4B0
0x54F4D5: xor     esi, esi
0x54F4D7: jmp     short loc_54F4E0
0x54F4D9: align 10h
0x54F4E0: mov     eax, ds:0B12028h[esi*4]
0x54F4E7: test    eax, eax
0x54F4E9: jz      short loc_54F4F9
0x54F4EB: push    edi; Str2
0x54F4EC: push    eax; Str1
0x54F4ED: call    __strcmp
0x54F4F2: add     esp, 8
0x54F4F5: test    eax, eax
0x54F4F7: jz      short loc_54F564
0x54F4F9: add     esi, 1
0x54F4FC: cmp     esi, 11h
0x54F4FF: jl      short loc_54F4E0
0x54F501: xor     esi, esi
0x54F503: mov     eax, ds:0B12070h[esi*4]
0x54F50A: test    eax, eax
0x54F50C: jz      short loc_54F51C
0x54F50E: push    edi; Str2
0x54F50F: push    eax; Str1
0x54F510: call    __strcmp
0x54F515: add     esp, 8
0x54F518: test    eax, eax
0x54F51A: jz      short loc_54F570
0x54F51C: add     esi, 1
0x54F51F: cmp     esi, 10h
0x54F522: jl      short loc_54F503
0x54F524: xor     esi, esi
0x54F526: jmp     short loc_54F530
0x54F528: align 10h
0x54F530: mov     eax, ds:0B12024h[esi*4]
0x54F537: test    eax, eax
0x54F539: jz      short loc_54F549
0x54F53B: push    edi; Str2
0x54F53C: push    eax; Str1
0x54F53D: call    __strcmp
0x54F542: add     esp, 8
0x54F545: test    eax, eax
0x54F547: jz      short loc_54F57C
0x54F549: add     esi, 1
0x54F54C: cmp     esi, 1
0x54F54F: jl      short loc_54F530
0x54F551: pop     esi
0x54F552: pop     edi
0x54F553: or      eax, 0FFFFFFFFh
0x54F556: pop     ebx
0x54F557: retn
0x54F558: mov     eax, esi
0x54F55A: pop     esi
0x54F55B: pop     edi
0x54F55C: mov     dword ptr [ebx], 1
0x54F562: pop     ebx
0x54F563: retn
0x54F564: mov     eax, esi
0x54F566: pop     esi
0x54F567: pop     edi
0x54F568: mov     dword ptr [ebx], 2
0x54F56E: pop     ebx
0x54F56F: retn
0x54F570: mov     eax, esi
0x54F572: pop     esi
0x54F573: pop     edi
0x54F574: mov     dword ptr [ebx], 0
0x54F57A: pop     ebx
0x54F57B: retn
0x54F57C: mov     eax, esi
0x54F57E: pop     esi
0x54F57F: pop     edi
0x54F580: mov     dword ptr [ebx], 3
0x54F586: pop     ebx
0x54F587: retn
