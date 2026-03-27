0x718D40: push    ebx
0x718D41: mov     ebx, dword ptr [esp+4+ArgList]
0x718D45: push    esi
0x718D46: mov     eax, ebx
0x718D48: push    edi
0x718D49: lea     edx, [eax+1]
0x718D4C: lea     esp, [esp+0]
0x718D50: mov     cl, [eax]
0x718D52: add     eax, 1
0x718D55: test    cl, cl
0x718D57: jnz     short loc_718D50
0x718D59: sub     eax, edx
0x718D5B: lea     esi, [eax+16h]
0x718D5E: push    esi; Size
0x718D5F: call    FormHeapAlloc
0x718D64: mov     edi, eax
0x718D66: mov     eax, [esp+10h+arg_4]
0x718D6A: add     esp, 4
0x718D6D: cmp     eax, 5; switch 6 cases
0x718D70: ja      def_718D76
0x718D76: jmp     ds:jpt_718D76[eax*4]; switch jump
0x718D7D: push    ebx; jumptable 00718D76 case 0
0x718D7E: push    offset aSAction_keep; "%s = ACTION_KEEP"
0x718D83: push    esi; SizeInBytes
0x718D84: push    edi; DstBuf
0x718D85: call    sub_6C5D40
0x718D8A: add     esp, 10h
0x718D8D: mov     eax, edi
0x718D8F: pop     edi
0x718D90: pop     esi
0x718D91: pop     ebx
0x718D92: retn
0x718D93: push    ebx; jumptable 00718D76 case 1
0x718D94: push    offset aSAction_zero; "%s = ACTION_ZERO"
0x718D99: push    esi; SizeInBytes
0x718D9A: push    edi; DstBuf
0x718D9B: call    sub_6C5D40
0x718DA0: add     esp, 10h
0x718DA3: mov     eax, edi
0x718DA5: pop     edi
0x718DA6: pop     esi
0x718DA7: pop     ebx
0x718DA8: retn
0x718DA9: push    ebx; jumptable 00718D76 case 2
0x718DAA: push    offset aSAction_replac; "%s = ACTION_REPLACE"
0x718DAF: push    esi; SizeInBytes
0x718DB0: push    edi; DstBuf
0x718DB1: call    sub_6C5D40
0x718DB6: add     esp, 10h
0x718DB9: mov     eax, edi
0x718DBB: pop     edi
0x718DBC: pop     esi
0x718DBD: pop     ebx
0x718DBE: retn
0x718DBF: push    ebx; jumptable 00718D76 case 3
0x718DC0: push    offset aSAction_increm; "%s = ACTION_INCREMENT"
0x718DC5: push    esi; SizeInBytes
0x718DC6: push    edi; DstBuf
0x718DC7: call    sub_6C5D40
0x718DCC: add     esp, 10h
0x718DCF: mov     eax, edi
0x718DD1: pop     edi
0x718DD2: pop     esi
0x718DD3: pop     ebx
0x718DD4: retn
0x718DD5: push    ebx; jumptable 00718D76 case 4
0x718DD6: push    offset aSAction_decrem; "%s = ACTION_DECREMENT"
0x718DDB: push    esi; SizeInBytes
0x718DDC: push    edi; DstBuf
0x718DDD: call    sub_6C5D40
0x718DE2: add     esp, 10h
0x718DE5: mov     eax, edi
0x718DE7: pop     edi
0x718DE8: pop     esi
0x718DE9: pop     ebx
0x718DEA: retn
0x718DEB: push    ebx; jumptable 00718D76 case 5
0x718DEC: push    offset aSAction_invert; "%s = ACTION_INVERT"
0x718DF1: push    esi; SizeInBytes
0x718DF2: push    edi; DstBuf
0x718DF3: call    sub_6C5D40
0x718DF8: add     esp, 10h
