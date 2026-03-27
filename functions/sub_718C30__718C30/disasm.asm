0x718C30: push    ebx
0x718C31: mov     ebx, dword ptr [esp+4+ArgList]
0x718C35: push    esi
0x718C36: mov     eax, ebx
0x718C38: push    edi
0x718C39: lea     edx, [eax+1]
0x718C3C: lea     esp, [esp+0]
0x718C40: mov     cl, [eax]
0x718C42: add     eax, 1
0x718C45: test    cl, cl
0x718C47: jnz     short loc_718C40
0x718C49: sub     eax, edx
0x718C4B: lea     esi, [eax+16h]
0x718C4E: push    esi; Size
0x718C4F: call    FormHeapAlloc
0x718C54: mov     edi, eax
0x718C56: mov     eax, [esp+10h+arg_4]
0x718C5A: add     esp, 4
0x718C5D: cmp     eax, 7; switch 8 cases
0x718C60: ja      def_718C66
0x718C66: jmp     ds:jpt_718C66[eax*4]; switch jump
0x718C6D: push    ebx; jumptable 00718C66 case 0
0x718C6E: push    offset aSTest_never; "%s = TEST_NEVER"
0x718C73: push    esi; SizeInBytes
0x718C74: push    edi; DstBuf
0x718C75: call    sub_6C5D40
0x718C7A: add     esp, 10h
0x718C7D: mov     eax, edi
0x718C7F: pop     edi
0x718C80: pop     esi
0x718C81: pop     ebx
0x718C82: retn
0x718C83: push    ebx; jumptable 00718C66 case 1
0x718C84: push    offset aSTest_less; "%s = TEST_LESS"
0x718C89: push    esi; SizeInBytes
0x718C8A: push    edi; DstBuf
0x718C8B: call    sub_6C5D40
0x718C90: add     esp, 10h
0x718C93: mov     eax, edi
0x718C95: pop     edi
0x718C96: pop     esi
0x718C97: pop     ebx
0x718C98: retn
0x718C99: push    ebx; jumptable 00718C66 case 2
0x718C9A: push    offset aSTest_equal; "%s = TEST_EQUAL"
0x718C9F: push    esi; SizeInBytes
0x718CA0: push    edi; DstBuf
0x718CA1: call    sub_6C5D40
0x718CA6: add     esp, 10h
0x718CA9: mov     eax, edi
0x718CAB: pop     edi
0x718CAC: pop     esi
0x718CAD: pop     ebx
0x718CAE: retn
0x718CAF: push    ebx; jumptable 00718C66 case 3
0x718CB0: push    offset aSTest_lessequa; "%s = TEST_LESSEQUAL"
0x718CB5: push    esi; SizeInBytes
0x718CB6: push    edi; DstBuf
0x718CB7: call    sub_6C5D40
0x718CBC: add     esp, 10h
0x718CBF: mov     eax, edi
0x718CC1: pop     edi
0x718CC2: pop     esi
0x718CC3: pop     ebx
0x718CC4: retn
0x718CC5: push    ebx; jumptable 00718C66 case 4
0x718CC6: push    offset aSTest_greater; "%s = TEST_GREATER"
0x718CCB: push    esi; SizeInBytes
0x718CCC: push    edi; DstBuf
0x718CCD: call    sub_6C5D40
0x718CD2: add     esp, 10h
0x718CD5: mov     eax, edi
0x718CD7: pop     edi
0x718CD8: pop     esi
0x718CD9: pop     ebx
0x718CDA: retn
0x718CDB: push    ebx; jumptable 00718C66 case 5
0x718CDC: push    offset aSTest_notequal; "%s = TEST_NOTEQUAL"
0x718CE1: push    esi; SizeInBytes
0x718CE2: push    edi; DstBuf
0x718CE3: call    sub_6C5D40
0x718CE8: add     esp, 10h
0x718CEB: mov     eax, edi
0x718CED: pop     edi
0x718CEE: pop     esi
0x718CEF: pop     ebx
0x718CF0: retn
0x718CF1: push    ebx; jumptable 00718C66 case 6
0x718CF2: push    offset aSTest_greatere; "%s = TEST_GREATEREQUAL"
0x718CF7: push    esi; SizeInBytes
0x718CF8: push    edi; DstBuf
0x718CF9: call    sub_6C5D40
0x718CFE: add     esp, 10h
0x718D01: mov     eax, edi
0x718D03: pop     edi
0x718D04: pop     esi
0x718D05: pop     ebx
0x718D06: retn
0x718D07: push    ebx; jumptable 00718C66 case 7
0x718D08: push    offset aSTest_always; "%s = TEST_ALWAYS"
0x718D0D: push    esi; SizeInBytes
0x718D0E: push    edi; DstBuf
0x718D0F: call    sub_6C5D40
0x718D14: add     esp, 10h
