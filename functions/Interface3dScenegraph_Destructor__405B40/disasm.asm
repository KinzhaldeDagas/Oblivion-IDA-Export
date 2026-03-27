0x405B40: push    esi
0x405B41: mov     esi, g_Interface3DScenegraph
0x405B47: test    esi, esi
0x405B49: jz      short loc_405B71
0x405B4B: lea     eax, [esi+4]
0x405B4E: push    eax; lpAddend
0x405B4F: call    ds:InterlockedDecrement
0x405B55: test    eax, eax
0x405B57: jnz     short loc_405B67
0x405B59: test    esi, esi
0x405B5B: jz      short loc_405B67
0x405B5D: mov     edx, [esi]
0x405B5F: mov     eax, [edx]
0x405B61: push    1
0x405B63: mov     ecx, esi
0x405B65: call    eax
0x405B67: mov     g_Interface3DScenegraph, 0
0x405B71: pop     esi
0x405B72: retn
