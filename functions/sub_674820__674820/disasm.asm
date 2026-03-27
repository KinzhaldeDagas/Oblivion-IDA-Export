0x674820: mov     edx, [esp+arg_0]
0x674824: test    edx, edx
0x674826: jz      short locret_674841
0x674828: add     ecx, 60h ; '`'
0x67482B: mov     eax, ecx
0x67482D: jz      short loc_67483B
0x67482F: nop
0x674830: cmp     [eax], edx
0x674832: jz      short locret_674841
0x674834: mov     eax, [eax+4]
0x674837: test    eax, eax
0x674839: jnz     short loc_674830
0x67483B: push    edx
0x67483C: call    BSSimpleList_PushFront
0x674841: retn    8
