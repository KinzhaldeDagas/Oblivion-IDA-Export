0x718400: push    ebx
0x718401: mov     ebx, dword ptr [esp+4+ArgList]
0x718405: push    esi
0x718406: mov     eax, ebx
0x718408: push    edi
0x718409: lea     edx, [eax+1]
0x71840C: lea     esp, [esp+0]
0x718410: mov     cl, [eax]
0x718412: add     eax, 1
0x718415: test    cl, cl
0x718417: jnz     short loc_718410
0x718419: sub     eax, edx
0x71841B: lea     esi, [eax+16h]
0x71841E: push    esi; Size
0x71841F: call    FormHeapAlloc
0x718424: mov     edi, eax
0x718426: mov     eax, [esp+10h+arg_4]
0x71842A: add     esp, 4
0x71842D: cmp     eax, 7; switch 8 cases
0x718430: ja      def_718436
0x718436: jmp     ds:jpt_718436[eax*4]; switch jump
0x71843D: push    ebx; jumptable 00718436 case 0
0x71843E: push    offset aSTest_always; "%s = TEST_ALWAYS"
0x718443: push    esi; SizeInBytes
0x718444: push    edi; DstBuf
0x718445: call    sub_6C5D40
0x71844A: add     esp, 10h
0x71844D: mov     eax, edi
0x71844F: pop     edi
0x718450: pop     esi
0x718451: pop     ebx
0x718452: retn
0x718453: push    ebx; jumptable 00718436 case 1
0x718454: push    offset aSTest_less; "%s = TEST_LESS"
0x718459: push    esi; SizeInBytes
0x71845A: push    edi; DstBuf
0x71845B: call    sub_6C5D40
0x718460: add     esp, 10h
0x718463: mov     eax, edi
0x718465: pop     edi
0x718466: pop     esi
0x718467: pop     ebx
0x718468: retn
0x718469: push    ebx; jumptable 00718436 case 2
0x71846A: push    offset aSTest_equal; "%s = TEST_EQUAL"
0x71846F: push    esi; SizeInBytes
0x718470: push    edi; DstBuf
0x718471: call    sub_6C5D40
0x718476: add     esp, 10h
0x718479: mov     eax, edi
0x71847B: pop     edi
0x71847C: pop     esi
0x71847D: pop     ebx
0x71847E: retn
0x71847F: push    ebx; jumptable 00718436 case 3
0x718480: push    offset aSTest_lessequa; "%s = TEST_LESSEQUAL"
0x718485: push    esi; SizeInBytes
0x718486: push    edi; DstBuf
0x718487: call    sub_6C5D40
0x71848C: add     esp, 10h
0x71848F: mov     eax, edi
0x718491: pop     edi
0x718492: pop     esi
0x718493: pop     ebx
0x718494: retn
0x718495: push    ebx; jumptable 00718436 case 4
0x718496: push    offset aSTest_greater; "%s = TEST_GREATER"
0x71849B: push    esi; SizeInBytes
0x71849C: push    edi; DstBuf
0x71849D: call    sub_6C5D40
0x7184A2: add     esp, 10h
0x7184A5: mov     eax, edi
0x7184A7: pop     edi
0x7184A8: pop     esi
0x7184A9: pop     ebx
0x7184AA: retn
0x7184AB: push    ebx; jumptable 00718436 case 5
0x7184AC: push    offset aSTest_notequal; "%s = TEST_NOTEQUAL"
0x7184B1: push    esi; SizeInBytes
0x7184B2: push    edi; DstBuf
0x7184B3: call    sub_6C5D40
0x7184B8: add     esp, 10h
0x7184BB: mov     eax, edi
0x7184BD: pop     edi
0x7184BE: pop     esi
0x7184BF: pop     ebx
0x7184C0: retn
0x7184C1: push    ebx; jumptable 00718436 case 6
0x7184C2: push    offset aSTest_greatere; "%s = TEST_GREATEREQUAL"
0x7184C7: push    esi; SizeInBytes
0x7184C8: push    edi; DstBuf
0x7184C9: call    sub_6C5D40
0x7184CE: add     esp, 10h
0x7184D1: mov     eax, edi
0x7184D3: pop     edi
0x7184D4: pop     esi
0x7184D5: pop     ebx
0x7184D6: retn
0x7184D7: push    ebx; jumptable 00718436 case 7
0x7184D8: push    offset aSTest_never; "%s = TEST_NEVER"
0x7184DD: push    esi; SizeInBytes
0x7184DE: push    edi; DstBuf
0x7184DF: call    sub_6C5D40
0x7184E4: add     esp, 10h
