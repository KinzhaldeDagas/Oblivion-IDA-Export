0x703B20: push    ebx
0x703B21: mov     ebx, dword ptr [esp+4+ArgList]
0x703B25: push    esi
0x703B26: mov     eax, ebx
0x703B28: push    edi
0x703B29: lea     edx, [eax+1]
0x703B2C: lea     esp, [esp+0]
0x703B30: mov     cl, [eax]
0x703B32: add     eax, 1
0x703B35: test    cl, cl
0x703B37: jnz     short loc_703B30
0x703B39: sub     eax, edx
0x703B3B: lea     esi, [eax+1Eh]
0x703B3E: push    esi; Size
0x703B3F: call    FormHeapAlloc
0x703B44: mov     edi, eax
0x703B46: mov     eax, [esp+10h+arg_4]
0x703B4A: add     esp, 4
0x703B4D: cmp     eax, 5; switch 6 cases
0x703B50: ja      def_703B56
0x703B56: jmp     ds:jpt_703B56[eax*4]; switch jump
0x703B5D: push    ebx; jumptable 00703B56 case 0
0x703B5E: push    offset aSFilter_neares; "%s = FILTER_NEAREST"
0x703B63: push    esi; SizeInBytes
0x703B64: push    edi; DstBuf
0x703B65: call    sub_6C5D40
0x703B6A: add     esp, 10h
0x703B6D: mov     eax, edi
0x703B6F: pop     edi
0x703B70: pop     esi
0x703B71: pop     ebx
0x703B72: retn
0x703B73: push    ebx; jumptable 00703B56 case 1
0x703B74: push    offset aSFilter_bilerp; "%s = FILTER_BILERP"
0x703B79: push    esi; SizeInBytes
0x703B7A: push    edi; DstBuf
0x703B7B: call    sub_6C5D40
0x703B80: add     esp, 10h
0x703B83: mov     eax, edi
0x703B85: pop     edi
0x703B86: pop     esi
0x703B87: pop     ebx
0x703B88: retn
0x703B89: push    ebx; jumptable 00703B56 case 2
0x703B8A: push    offset aSFilter_triler; "%s = FILTER_TRILERP"
0x703B8F: push    esi; SizeInBytes
0x703B90: push    edi; DstBuf
0x703B91: call    sub_6C5D40
0x703B96: add     esp, 10h
0x703B99: mov     eax, edi
0x703B9B: pop     edi
0x703B9C: pop     esi
0x703B9D: pop     ebx
0x703B9E: retn
0x703B9F: push    ebx; jumptable 00703B56 case 3
0x703BA0: push    offset aSFilter_near_0; "%s = FILTER_NEAREST_MIPNEAREST"
0x703BA5: push    esi; SizeInBytes
0x703BA6: push    edi; DstBuf
0x703BA7: call    sub_6C5D40
0x703BAC: add     esp, 10h
0x703BAF: mov     eax, edi
0x703BB1: pop     edi
0x703BB2: pop     esi
0x703BB3: pop     ebx
0x703BB4: retn
0x703BB5: push    ebx; jumptable 00703B56 case 4
0x703BB6: push    offset aSFilter_near_1; "%s = FILTER_NEAREST_MIPLERP"
0x703BBB: push    esi; SizeInBytes
0x703BBC: push    edi; DstBuf
0x703BBD: call    sub_6C5D40
0x703BC2: add     esp, 10h
0x703BC5: mov     eax, edi
0x703BC7: pop     edi
0x703BC8: pop     esi
0x703BC9: pop     ebx
0x703BCA: retn
0x703BCB: push    ebx; jumptable 00703B56 case 5
0x703BCC: push    offset aSFilter_bile_0; "%s = FILTER_BILERP_MIPNEAREST"
0x703BD1: push    esi; SizeInBytes
0x703BD2: push    edi; DstBuf
0x703BD3: call    sub_6C5D40
0x703BD8: add     esp, 10h
