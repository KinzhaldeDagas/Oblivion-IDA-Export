0x89D610: mov     eax, [esp+arg_4]
0x89D614: push    esi
0x89D615: push    edi
0x89D616: mov     edi, [esp+8+arg_0]
0x89D61A: push    eax
0x89D61B: push    edi
0x89D61C: mov     esi, ecx
0x89D61E: call    sub_700770
0x89D623: mov     edx, [esi]
0x89D625: mov     edx, [edx+74h]
0x89D628: lea     eax, [esp+8+arg_4]
0x89D62C: push    eax
0x89D62D: mov     ecx, esi
0x89D62F: call    edx
0x89D631: mov     edx, [edi]
0x89D633: push    eax
0x89D634: mov     eax, [edx+70h]
0x89D637: mov     ecx, edi
0x89D639: call    eax
0x89D63B: mov     edx, [esi]
0x89D63D: mov     eax, [edx+64h]
0x89D640: push    1
0x89D642: mov     ecx, esi
0x89D644: call    eax
0x89D646: pop     edi
0x89D647: pop     esi
0x89D648: retn    8
