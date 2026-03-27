0x8CB120: push    esi
0x8CB121: lea     esi, [ecx+68h]
0x8CB124: mov     ecx, [esi+4]
0x8CB127: xor     eax, eax
0x8CB129: test    ecx, ecx
0x8CB12B: push    edi
0x8CB12C: mov     edi, [esp+8+arg_0]
0x8CB130: jle     short loc_8CB146
0x8CB132: mov     edx, [esi]
0x8CB134: cmp     [edx], edi
0x8CB136: jz      short loc_8CB142
0x8CB138: inc     eax
0x8CB139: add     edx, 4
0x8CB13C: cmp     eax, ecx
0x8CB13E: jl      short loc_8CB134
0x8CB140: jmp     short loc_8CB146
0x8CB142: test    eax, eax
0x8CB144: jge     short loc_8CB16B
0x8CB146: mov     eax, [esi+8]
0x8CB149: mov     ecx, [esi+4]
0x8CB14C: and     eax, 3FFFFFFFh
0x8CB151: cmp     ecx, eax
0x8CB153: jnz     short loc_8CB160
0x8CB155: push    4
0x8CB157: push    esi
0x8CB158: call    sub_8A6EE0
0x8CB15D: add     esp, 8
0x8CB160: mov     ecx, [esi+4]
0x8CB163: mov     edx, [esi]
0x8CB165: mov     [edx+ecx*4], edi
0x8CB168: inc     dword ptr [esi+4]
0x8CB16B: pop     edi
0x8CB16C: pop     esi
0x8CB16D: retn    4
