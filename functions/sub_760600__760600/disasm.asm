0x760600: push    ecx
0x760601: push    ebx
0x760602: push    ebp
0x760603: push    esi
0x760604: push    0Ch; Size
0x760606: mov     esi, ecx
0x760608: call    FormHeapAlloc
0x76060D: xor     ebp, ebp
0x76060F: add     esp, 4
0x760612: cmp     eax, ebp
0x760614: jz      short loc_76062A
0x760616: mov     ecx, [esp+10h+arg_0]
0x76061A: push    ecx
0x76061B: mov     ecx, eax
0x76061D: call    sub_760400
0x760622: mov     ecx, eax
0x760624: mov     [esp+10h+var_4], ecx
0x760628: jmp     short loc_760630
0x76062A: mov     [esp+10h+var_4], ebp
0x76062E: mov     ecx, ebp
0x760630: xor     ebx, ebx
0x760632: cmp     [esp+10h+arg_0], ebp
0x760636: jbe     short loc_760687
0x760638: push    edi
0x760639: lea     esp, [esp+0]
0x760640: cmp     ebx, [ecx+4]
0x760643: jb      short loc_760649
0x760645: xor     edi, edi
0x760647: jmp     short loc_76064D
0x760649: mov     edi, [ecx]
0x76064B: add     edi, ebp
0x76064D: mov     eax, [esi+4]
0x760650: cmp     [esi+8], eax
0x760653: jnz     short loc_76066E
0x760655: test    eax, eax
0x760657: jbe     short loc_76065D
0x760659: add     eax, eax
0x76065B: jmp     short loc_760662
0x76065D: mov     eax, 1
0x760662: push    eax
0x760663: mov     ecx, esi
0x760665: call    sub_6E8CA0
0x76066A: mov     ecx, [esp+14h+var_4]
0x76066E: mov     edx, [esi+8]
0x760671: mov     eax, [esi]
0x760673: mov     [eax+edx*4], edi
0x760676: add     dword ptr [esi+8], 1
0x76067A: add     ebx, 1
0x76067D: add     ebp, 64h ; 'd'
0x760680: cmp     ebx, [esp+14h+arg_0]
0x760684: jb      short loc_760640
0x760686: pop     edi
0x760687: mov     edx, [esi+14h]
0x76068A: mov     [ecx+8], edx
0x76068D: mov     [esi+14h], ecx
0x760690: pop     esi
0x760691: pop     ebp
0x760692: pop     ebx
0x760693: pop     ecx
0x760694: retn    4
