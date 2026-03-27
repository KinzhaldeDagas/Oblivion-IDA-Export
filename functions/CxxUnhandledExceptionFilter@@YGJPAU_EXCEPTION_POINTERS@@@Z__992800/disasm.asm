0x992800: push    edi
0x992801: mov     edi, [esp+4+ExceptionInfo]
0x992805: mov     eax, [edi]
0x992807: cmp     dword ptr [eax], 0E06D7363h
0x99280D: jnz     short ?__CxxUnhandledExceptionFilter@@YGJPAU_EXCEPTION_POINTERS@@@Z___$LN10_8
0x99280F: cmp     dword ptr [eax+10h], 3
0x992813: jnz     short ?__CxxUnhandledExceptionFilter@@YGJPAU_EXCEPTION_POINTERS@@@Z___$LN10_8
0x992815: mov     eax, [eax+14h]
0x992818: cmp     eax, 19930520h
0x99281D: jz      short loc_992834
0x99281F: cmp     eax, 19930521h
0x992824: jz      short loc_992834
0x992826: cmp     eax, 19930522h
0x99282B: jz      short loc_992834
0x99282D: cmp     eax, 1994000h
0x992832: jnz     short ?__CxxUnhandledExceptionFilter@@YGJPAU_EXCEPTION_POINTERS@@@Z___$LN10_8
0x992834: call    ?terminate@@YAXXZ
