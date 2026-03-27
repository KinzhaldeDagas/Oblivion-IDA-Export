0x89D910: test    ecx, ecx
0x89D912: mov     edx, [esp+arg_0]
0x89D916: jz      short loc_89D92C
0x89D918: mov     eax, [ecx+8]
0x89D91B: test    eax, eax
0x89D91D: jz      short loc_89D92C
0x89D91F: push    ebx
0x89D920: mov     bl, dl
0x89D922: neg     bl
0x89D924: sbb     ebx, ebx
0x89D926: and     ebx, ecx
0x89D928: mov     [eax+10h], ebx
0x89D92B: pop     ebx
0x89D92C: mov     [esp+arg_0], edx
0x89D930: jmp     sub_89D430
