0x551D40: push    ebx
0x551D41: push    ebp
0x551D42: push    esi
0x551D43: mov     ebp, ecx
0x551D45: lea     esi, [ebp+8]
0x551D48: push    edi
0x551D49: mov     edi, [esi+4]
0x551D4C: cmp     edi, [esi+8]
0x551D4F: jbe     short loc_551D56
0x551D51: call    __invalid_parameter_noinfo
0x551D56: mov     ebx, [esi+8]
0x551D59: cmp     [esi+4], ebx
0x551D5C: jbe     short loc_551D63
0x551D5E: call    __invalid_parameter_noinfo
0x551D63: cmp     esi, esi
0x551D65: jz      short loc_551D6C
0x551D67: call    __invalid_parameter_noinfo
0x551D6C: cmp     edi, ebx
0x551D6E: jz      short loc_551D91
0x551D70: cmp     edi, [esi+8]
0x551D73: jb      short loc_551D7A
0x551D75: call    __invalid_parameter_noinfo
0x551D7A: fld     dword ptr [edi]
0x551D7C: fmul    [esp+10h+arg_0]
0x551D80: fstp    dword ptr [edi]
0x551D82: cmp     edi, [esi+8]
0x551D85: jb      short loc_551D8C
0x551D87: call    __invalid_parameter_noinfo
0x551D8C: add     edi, 4
0x551D8F: jmp     short loc_551D56
0x551D91: pop     edi
0x551D92: pop     esi
0x551D93: mov     eax, ebp
0x551D95: pop     ebp
0x551D96: pop     ebx
0x551D97: retn    4
