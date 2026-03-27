0x862600: push    ebx
0x862601: mov     ebx, [esp+4+arg_4]
0x862605: push    ebp
0x862606: mov     ebp, [esp+8+arg_0]
0x86260A: cmp     ebx, [ebp+18h]
0x86260D: jnb     short loc_86264F
0x86260F: push    esi
0x862610: push    edi
0x862611: mov     eax, [ebp+24h]
0x862614: mov     edi, [eax+ebx*4]
0x862617: test    edi, edi
0x862619: jz      short loc_862645
0x86261B: mov     esi, [edi+4]
0x86261E: test    esi, esi
0x862620: jz      short loc_862645
0x862622: lea     ecx, [esi+4]
0x862625: push    ecx; lpAddend
0x862626: call    dword ptr ds:0A2807Ch
0x86262C: test    eax, eax
0x86262E: jnz     short loc_86263E
0x862630: test    esi, esi
0x862632: jz      short loc_86263E
0x862634: mov     edx, [esi]
0x862636: mov     eax, [edx]
0x862638: push    1
0x86263A: mov     ecx, esi
0x86263C: call    eax
0x86263E: mov     dword ptr [edi+4], 0
0x862645: add     ebx, 1
0x862648: cmp     ebx, [ebp+18h]
0x86264B: jb      short loc_862611
0x86264D: pop     edi
0x86264E: pop     esi
0x86264F: pop     ebp
0x862650: pop     ebx
0x862651: retn    8
