0x788B10: push    ebp
0x788B11: mov     ebp, [esp+4+arg_4]
0x788B15: test    ebp, ebp
0x788B17: push    esi
0x788B18: push    edi
0x788B19: mov     edi, ecx
0x788B1B: jz      short loc_788B23
0x788B1D: cmp     ebp, [esp+0Ch+arg_C]
0x788B21: jz      short loc_788B28
0x788B23: call    __invalid_parameter_noinfo
0x788B28: mov     esi, [esp+0Ch+Dst]
0x788B2C: mov     ecx, [esp+0Ch+Src]
0x788B30: cmp     esi, ecx
0x788B32: jz      short loc_788B51
0x788B34: mov     eax, [edi+8]
0x788B37: sub     eax, ecx
0x788B39: test    eax, eax
0x788B3B: push    ebx; MaxCount
0x788B3C: lea     ebx, [eax+esi]
0x788B3F: jle     short loc_788B4D
0x788B41: push    eax; Src
0x788B42: push    ecx; Src
0x788B43: push    eax; DstSize
0x788B44: push    esi; Dst
0x788B45: call    _memmove_s
0x788B4A: add     esp, 10h
0x788B4D: mov     [edi+8], ebx
0x788B50: pop     ebx
0x788B51: mov     eax, [esp+0Ch+arg_0]
0x788B55: pop     edi
0x788B56: mov     [eax+4], esi
0x788B59: pop     esi
0x788B5A: mov     [eax], ebp
0x788B5C: pop     ebp
0x788B5D: retn    14h
