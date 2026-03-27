0x6F7240: push    ebx
0x6F7241: mov     ebx, [esp+4+arg_0]
0x6F7245: push    esi
0x6F7246: mov     esi, [esp+8+arg_4]
0x6F724A: test    esi, esi
0x6F724C: push    edi
0x6F724D: mov     edi, ecx
0x6F724F: mov     dword ptr [edi], 0
0x6F7255: jz      short loc_6F7280
0x6F7257: test    ebx, ebx
0x6F7259: jz      short loc_6F7280
0x6F725B: mov     edx, [esi+18h]
0x6F725E: cmp     edx, 10h
0x6F7261: lea     eax, [esi+4]
0x6F7264: jb      short loc_6F726A
0x6F7266: mov     ecx, [eax]
0x6F7268: jmp     short loc_6F726C
0x6F726A: mov     ecx, eax
0x6F726C: cmp     ecx, ebx
0x6F726E: ja      short loc_6F7280
0x6F7270: cmp     edx, 10h
0x6F7273: jb      short loc_6F7277
0x6F7275: mov     eax, [eax]
0x6F7277: mov     ecx, [esi+14h]
0x6F727A: add     ecx, eax
0x6F727C: cmp     ebx, ecx
0x6F727E: jbe     short loc_6F7285
0x6F7280: call    __invalid_parameter_noinfo
0x6F7285: mov     [edi], esi
0x6F7287: mov     [edi+4], ebx
0x6F728A: mov     eax, edi
0x6F728C: pop     edi
0x6F728D: pop     esi
0x6F728E: pop     ebx
0x6F728F: retn    8
