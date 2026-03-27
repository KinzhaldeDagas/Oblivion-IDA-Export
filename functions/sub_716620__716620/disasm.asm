0x716620: push    esi
0x716621: mov     esi, [esp+4+arg_0]
0x716625: test    esi, esi
0x716627: jz      short loc_71668D
0x716629: push    ebx
0x71662A: mov     ebx, [esp+8+arg_4]
0x71662E: test    ebx, ebx
0x716630: jz      short loc_71668C
0x716632: mov     eax, [esi+8]
0x716635: test    eax, eax
0x716637: jz      short loc_716645
0x716639: mov     edx, [ebx]
0x71663B: push    0
0x71663D: push    eax
0x71663E: mov     eax, [edx+50h]
0x716641: mov     ecx, ebx
0x716643: call    eax
0x716645: mov     edx, [esi]
0x716647: mov     eax, [edx+8]
0x71664A: push    edi
0x71664B: mov     ecx, esi
0x71664D: call    eax
0x71664F: mov     edi, eax
0x716651: test    edi, edi
0x716653: jz      short loc_71668B
0x716655: movzx   eax, word ptr [edi+0B6h]
0x71665C: xor     esi, esi
0x71665E: test    eax, eax
0x716660: jbe     short loc_71668B
0x716662: cmp     eax, esi
0x716664: ja      short loc_71666A
0x716666: xor     eax, eax
0x716668: jmp     short loc_716673
0x71666A: mov     ecx, [edi+0B0h]
0x716670: mov     eax, [ecx+esi*4]
0x716673: push    ebx
0x716674: push    eax
0x716675: call    sub_716620
0x71667A: movzx   eax, word ptr [edi+0B6h]
0x716681: add     esi, 1
0x716684: add     esp, 8
0x716687: cmp     eax, esi
0x716689: ja      short loc_71666A
0x71668B: pop     edi
0x71668C: pop     ebx
0x71668D: pop     esi
0x71668E: retn
