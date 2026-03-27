0x718E20: push    ebx
0x718E21: mov     ebx, dword ptr [esp+4+ArgList]
0x718E25: push    esi
0x718E26: mov     eax, ebx
0x718E28: push    edi
0x718E29: lea     edx, [eax+1]
0x718E2C: lea     esp, [esp+0]
0x718E30: mov     cl, [eax]
0x718E32: add     eax, 1
0x718E35: test    cl, cl
0x718E37: jnz     short loc_718E30
0x718E39: sub     eax, edx
0x718E3B: lea     esi, [eax+16h]
0x718E3E: push    esi; Size
0x718E3F: call    FormHeapAlloc
0x718E44: mov     edi, eax
0x718E46: mov     eax, [esp+10h+arg_4]
0x718E4A: add     esp, 4
0x718E4D: cmp     eax, 3; switch 4 cases
0x718E50: ja      short def_718E52
0x718E52: jmp     ds:jpt_718E52[eax*4]; switch jump
0x718E59: push    ebx; jumptable 00718E52 case 0
0x718E5A: push    offset aSDraw_ccw_or_b; "%s = DRAW_CCW_OR_BOTH"
0x718E5F: push    esi; SizeInBytes
0x718E60: push    edi; DstBuf
0x718E61: call    sub_6C5D40
0x718E66: add     esp, 10h
0x718E69: mov     eax, edi
0x718E6B: pop     edi
0x718E6C: pop     esi
0x718E6D: pop     ebx
0x718E6E: retn
0x718E6F: push    ebx; jumptable 00718E52 case 1
0x718E70: push    offset aSDraw_ccw; "%s = DRAW_CCW"
0x718E75: push    esi; SizeInBytes
0x718E76: push    edi; DstBuf
0x718E77: call    sub_6C5D40
0x718E7C: add     esp, 10h
0x718E7F: mov     eax, edi
0x718E81: pop     edi
0x718E82: pop     esi
0x718E83: pop     ebx
0x718E84: retn
0x718E85: push    ebx; jumptable 00718E52 case 2
0x718E86: push    offset aSDraw_cw; "%s = DRAW_CW"
0x718E8B: push    esi; SizeInBytes
0x718E8C: push    edi; DstBuf
0x718E8D: call    sub_6C5D40
0x718E92: add     esp, 10h
0x718E95: mov     eax, edi
0x718E97: pop     edi
0x718E98: pop     esi
0x718E99: pop     ebx
0x718E9A: retn
0x718E9B: push    ebx; jumptable 00718E52 case 3
0x718E9C: push    offset aSDraw_both; "%s = DRAW_BOTH"
0x718EA1: push    esi; SizeInBytes
0x718EA2: push    edi; DstBuf
0x718EA3: call    sub_6C5D40
0x718EA8: add     esp, 10h
