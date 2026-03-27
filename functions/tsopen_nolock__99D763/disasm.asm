0x99D763: push    ebp
0x99D764: mov     ebp, esp
0x99D766: sub     esp, 28h
0x99D769: push    ebx
0x99D76A: push    esi
0x99D76B: xor     ebx, ebx
0x99D76D: test    byte ptr [ebp+arg_8], 80h
0x99D771: push    edi
0x99D772: push    10h
0x99D774: mov     esi, eax
0x99D776: mov     [ebp+var_14], ebx
0x99D779: mov     [ebp+var_18], ebx
0x99D77C: mov     [ebp+var_2], bl
0x99D77F: mov     [ebp+SecurityAttributes.nLength], 0Ch
0x99D786: mov     [ebp+SecurityAttributes.lpSecurityDescriptor], ebx
0x99D789: pop     edi
0x99D78A: jz      short loc_99D795
0x99D78C: mov     [ebp+SecurityAttributes.bInheritHandle], ebx
0x99D78F: mov     [ebp+var_1], 10h
0x99D793: jmp     short loc_99D79F
0x99D795: mov     [ebp+SecurityAttributes.bInheritHandle], 1
0x99D79C: mov     [ebp+var_1], bl
0x99D79F: lea     eax, [ebp+var_14]
0x99D7A2: push    eax
0x99D7A3: call    sub_9A0B2A
0x99D7A8: test    eax, eax
0x99D7AA: pop     ecx
0x99D7AB: jz      short loc_99D7BA
0x99D7AD: push    ebx
0x99D7AE: push    ebx
0x99D7AF: push    ebx
0x99D7B0: push    ebx
0x99D7B1: push    ebx
0x99D7B2: call    __invoke_watson
0x99D7B7: add     esp, 14h
0x99D7BA: lea     eax, [ebp+var_18]
0x99D7BD: push    eax
0x99D7BE: call    sub_981BF8
0x99D7C3: test    eax, eax
0x99D7C5: pop     ecx
0x99D7C6: jz      short loc_99D7D5
0x99D7C8: push    ebx
0x99D7C9: push    ebx
0x99D7CA: push    ebx
0x99D7CB: push    ebx
0x99D7CC: push    ebx
0x99D7CD: call    __invoke_watson
0x99D7D2: add     esp, 14h
0x99D7D5: mov     eax, 8000h
0x99D7DA: test    [ebp+arg_8], eax
0x99D7DD: jnz     short loc_99D7F1
0x99D7DF: test    [ebp+arg_8], 74000h
0x99D7E6: jnz     short loc_99D7ED
0x99D7E8: cmp     [ebp+var_14], eax
0x99D7EB: jz      short loc_99D7F1
0x99D7ED: or      [ebp+var_1], 80h
0x99D7F1: mov     eax, [ebp+arg_8]
0x99D7F4: push    3
0x99D7F6: pop     edx
0x99D7F7: and     eax, edx
0x99D7F9: sub     eax, ebx
0x99D7FB: mov     ecx, 80000000h
0x99D800: jz      short loc_99D840
0x99D802: dec     eax
0x99D803: jz      short loc_99D837
0x99D805: dec     eax
0x99D806: jz      short loc_99D82E
0x99D808: call    ___doserrno
0x99D80D: mov     [eax], ebx
0x99D80F: or      dword ptr [esi], 0FFFFFFFFh
0x99D812: call    __errno
0x99D817: push    16h
0x99D819: pop     esi
0x99D81A: push    ebx
0x99D81B: push    ebx
0x99D81C: push    ebx
0x99D81D: push    ebx
0x99D81E: push    ebx
0x99D81F: mov     [eax], esi
0x99D821: call    __invalid_parameter
0x99D826: add     esp, 14h
0x99D829: jmp     loc_99DCBD
0x99D82E: mov     [ebp+dwDesiredAccess], 0C0000000h
0x99D835: jmp     short loc_99D843
0x99D837: mov     [ebp+dwDesiredAccess], 40000000h
0x99D83E: jmp     short loc_99D843
0x99D840: mov     [ebp+dwDesiredAccess], ecx
0x99D843: mov     eax, [ebp+arg_C]
0x99D846: sub     eax, edi
0x99D848: jz      short loc_99D87F
0x99D84A: sub     eax, edi
0x99D84C: jz      short loc_99D876
0x99D84E: sub     eax, edi
0x99D850: jz      short loc_99D86D
0x99D852: sub     eax, edi
0x99D854: jz      short loc_99D868
0x99D856: sub     eax, 40h ; '@'
0x99D859: jnz     short loc_99D808
0x99D85B: xor     eax, eax
0x99D85D: cmp     [ebp+dwDesiredAccess], ecx
0x99D860: setz    al
0x99D863: mov     [ebp+dwShareMode], eax
0x99D866: jmp     short loc_99D882
0x99D868: mov     [ebp+dwShareMode], edx
0x99D86B: jmp     short loc_99D882
0x99D86D: mov     [ebp+dwShareMode], 2
0x99D874: jmp     short loc_99D882
0x99D876: mov     [ebp+dwShareMode], 1
0x99D87D: jmp     short loc_99D882
0x99D87F: mov     [ebp+dwShareMode], ebx
0x99D882: mov     eax, [ebp+arg_8]
0x99D885: mov     edx, 700h
0x99D88A: and     eax, edx
0x99D88C: mov     ecx, 400h
0x99D891: cmp     eax, ecx
0x99D893: jg      short loc_99D8D3
0x99D895: jz      short loc_99D8CA
0x99D897: cmp     eax, ebx
0x99D899: jz      short loc_99D8CA
0x99D89B: cmp     eax, 100h
0x99D8A0: jz      short loc_99D8C1
0x99D8A2: cmp     eax, 200h
0x99D8A7: jz      loc_99D945
0x99D8AD: cmp     eax, 300h
0x99D8B2: jnz     loc_99D808
0x99D8B8: mov     [ebp+dwCreationDisposition], 2
0x99D8BF: jmp     short loc_99D8F0
0x99D8C1: mov     [ebp+dwCreationDisposition], 4
0x99D8C8: jmp     short loc_99D8F0
0x99D8CA: mov     [ebp+dwCreationDisposition], 3
0x99D8D1: jmp     short loc_99D8F0
0x99D8D3: cmp     eax, 500h
0x99D8D8: jz      short loc_99D8E9
0x99D8DA: cmp     eax, 600h
0x99D8DF: jz      short loc_99D945
0x99D8E1: cmp     eax, edx
0x99D8E3: jnz     loc_99D808
0x99D8E9: mov     [ebp+dwCreationDisposition], 1
0x99D8F0: mov     ecx, [ebp+arg_8]
0x99D8F3: mov     eax, 100h
0x99D8F8: test    eax, ecx
0x99D8FA: mov     edi, 80h ; '€'
0x99D8FF: jz      short loc_99D913
0x99D901: mov     edx, dword_BA9D90
0x99D907: not     edx
0x99D909: and     edx, [ebp+arg_10]
0x99D90C: test    dl, dl
0x99D90E: js      short loc_99D913
0x99D910: xor     edi, edi
0x99D912: inc     edi
0x99D913: test    cl, 40h
0x99D916: jz      short loc_99D92F
0x99D918: or      [ebp+dwDesiredAccess], 10000h
0x99D91F: or      edi, 4000000h
0x99D925: cmp     [ebp+var_18], 2
0x99D929: jnz     short loc_99D92F
0x99D92B: or      [ebp+dwShareMode], 4
0x99D92F: test    cx, 1000h
0x99D934: jz      short loc_99D938
0x99D936: or      edi, eax
0x99D938: test    cl, 20h
0x99D93B: jz      short loc_99D94E
0x99D93D: or      edi, 8000000h
0x99D943: jmp     short loc_99D959
0x99D945: mov     [ebp+dwCreationDisposition], 5
0x99D94C: jmp     short loc_99D8F0
0x99D94E: test    cl, 10h
0x99D951: jz      short loc_99D959
0x99D953: or      edi, 10000000h
0x99D959: call    __alloc_osfhnd
0x99D95E: cmp     eax, 0FFFFFFFFh
0x99D961: mov     [esi], eax
0x99D963: jnz     short loc_99D97C
0x99D965: call    ___doserrno
0x99D96A: mov     [eax], ebx
0x99D96C: or      dword ptr [esi], 0FFFFFFFFh
0x99D96F: call    __errno
0x99D974: mov     dword ptr [eax], 18h
0x99D97A: jmp     short loc_99D9CC
0x99D97C: mov     eax, [ebp+arg_0]
0x99D97F: push    ebx; hTemplateFile
0x99D980: push    edi; dwFlagsAndAttributes
0x99D981: push    [ebp+dwCreationDisposition]; dwCreationDisposition
0x99D984: mov     dword ptr [eax], 1
0x99D98A: lea     eax, [ebp+SecurityAttributes]
0x99D98D: push    eax; lpSecurityAttributes
0x99D98E: push    [ebp+dwShareMode]; dwShareMode
0x99D991: push    [ebp+dwDesiredAccess]; dwDesiredAccess
0x99D994: push    [ebp+lpFileName]; lpFileName
0x99D997: call    ds:CreateFileA
0x99D99D: mov     edi, eax
0x99D99F: cmp     edi, 0FFFFFFFFh
0x99D9A2: jnz     short loc_99D9D8
0x99D9A4: mov     esi, [esi]
0x99D9A6: mov     eax, esi
0x99D9A8: and     esi, 1Fh
0x99D9AB: imul    esi, 28h ; '('
0x99D9AE: sar     eax, 5
0x99D9B1: mov     eax, dword_BAAAC0[eax*4]
0x99D9B8: lea     eax, [eax+esi+4]
0x99D9BC: and     byte ptr [eax], 0FEh
0x99D9BF: call    ds:GetLastError
0x99D9C5: push    eax
0x99D9C6: call    __dosmaperr
0x99D9CB: pop     ecx
0x99D9CC: call    __errno
0x99D9D1: mov     eax, [eax]
0x99D9D3: jmp     __tsopen_nolock___$exit$28157
0x99D9D8: push    edi; hFile
0x99D9D9: call    ds:GetFileType
0x99D9DF: cmp     eax, ebx
0x99D9E1: jnz     short loc_99DA07
0x99D9E3: mov     esi, [esi]
0x99D9E5: mov     eax, esi
0x99D9E7: and     esi, 1Fh
0x99D9EA: imul    esi, 28h ; '('
0x99D9ED: sar     eax, 5
0x99D9F0: mov     eax, dword_BAAAC0[eax*4]
0x99D9F7: lea     eax, [eax+esi+4]
0x99D9FB: and     byte ptr [eax], 0FEh
0x99D9FE: push    edi; hObject
0x99D9FF: call    ds:CloseHandle
0x99DA05: jmp     short loc_99D9BF
0x99DA07: cmp     eax, 2
0x99DA0A: jnz     short loc_99DA12
0x99DA0C: or      [ebp+var_1], 40h
0x99DA10: jmp     short loc_99DA1B
0x99DA12: cmp     eax, 3
0x99DA15: jnz     short loc_99DA1B
0x99DA17: or      [ebp+var_1], 8
0x99DA1B: push    edi; hHandle
0x99DA1C: push    dword ptr [esi]; int
0x99DA1E: call    __set_osfhnd
0x99DA23: mov     eax, [esi]
0x99DA25: mov     edx, eax
0x99DA27: and     eax, 1Fh
0x99DA2A: imul    eax, 28h ; '('
0x99DA2D: sar     edx, 5
0x99DA30: mov     edx, dword_BAAAC0[edx*4]
0x99DA37: pop     ecx
0x99DA38: pop     ecx
0x99DA39: mov     cl, [ebp+var_1]
0x99DA3C: or      cl, 1
0x99DA3F: mov     [edx+eax+4], cl
0x99DA43: mov     eax, [esi]
0x99DA45: mov     edx, eax
0x99DA47: and     eax, 1Fh
0x99DA4A: imul    eax, 28h ; '('
0x99DA4D: sar     edx, 5
0x99DA50: mov     edx, dword_BAAAC0[edx*4]
0x99DA57: lea     eax, [edx+eax+24h]
0x99DA5B: and     byte ptr [eax], 80h
0x99DA5E: mov     byte ptr [ebp+WideCharStr+1], cl
0x99DA61: and     byte ptr [ebp+WideCharStr+1], 48h
0x99DA65: mov     [ebp+var_1], cl
0x99DA68: jnz     loc_99DAEE
0x99DA6E: test    cl, 80h
0x99DA71: jz      loc_99DD28
0x99DA77: test    byte ptr [ebp+arg_8], 2
0x99DA7B: jz      short loc_99DAEE
0x99DA7D: push    2; dwMoveMethod
0x99DA7F: or      edi, 0FFFFFFFFh
0x99DA82: push    edi; lDistanceToMove
0x99DA83: push    dword ptr [esi]; int
0x99DA85: call    __lseek_nolock
0x99DA8A: add     esp, 0Ch
0x99DA8D: cmp     eax, edi
0x99DA8F: mov     [ebp+dwShareMode], eax
0x99DA92: jnz     short loc_99DAAD
0x99DA94: call    ___doserrno
0x99DA99: cmp     dword ptr [eax], 83h ; 'ƒ'
0x99DA9F: jz      short loc_99DAEE
0x99DAA1: push    dword ptr [esi]
0x99DAA3: call    __close_nolock
0x99DAA8: jmp     loc_99D9CB
0x99DAAD: push    1; nNumberOfBytesToRead
0x99DAAF: lea     eax, [ebp+WideCharStr]
0x99DAB2: push    eax; lpWideCharStr
0x99DAB3: push    dword ptr [esi]; int
0x99DAB5: mov     byte ptr [ebp+WideCharStr], bl
0x99DAB8: call    __read_nolock
0x99DABD: add     esp, 0Ch
0x99DAC0: test    eax, eax
0x99DAC2: jnz     short loc_99DADE
0x99DAC4: cmp     byte ptr [ebp+WideCharStr], 1Ah
0x99DAC8: jnz     short loc_99DADE
0x99DACA: mov     eax, [ebp+dwShareMode]
0x99DACD: cdq
0x99DACE: push    edx
0x99DACF: push    eax
0x99DAD0: push    dword ptr [esi]
0x99DAD2: call    __chsize_nolock
0x99DAD7: add     esp, 0Ch
0x99DADA: cmp     eax, edi
0x99DADC: jz      short loc_99DAA1
0x99DADE: push    ebx; dwMoveMethod
0x99DADF: push    ebx; lDistanceToMove
0x99DAE0: push    dword ptr [esi]; int
0x99DAE2: call    __lseek_nolock
0x99DAE7: add     esp, 0Ch
0x99DAEA: cmp     eax, edi
0x99DAEC: jz      short loc_99DAA1
0x99DAEE: test    [ebp+var_1], 80h
0x99DAF2: jz      loc_99DD28
0x99DAF8: mov     ecx, 74000h
0x99DAFD: test    [ebp+arg_8], ecx
0x99DB00: mov     edi, 4000h
0x99DB05: jnz     short loc_99DB16
0x99DB07: mov     eax, [ebp+var_14]
0x99DB0A: and     eax, ecx
0x99DB0C: jnz     short loc_99DB13
0x99DB0E: or      [ebp+arg_8], edi
0x99DB11: jmp     short loc_99DB16
0x99DB13: or      [ebp+arg_8], eax
0x99DB16: mov     eax, [ebp+arg_8]
0x99DB19: and     eax, ecx
0x99DB1B: cmp     eax, edi
0x99DB1D: jz      short loc_99DB63
0x99DB1F: cmp     eax, 10000h
0x99DB24: jz      short loc_99DB4F
0x99DB26: cmp     eax, 14000h
0x99DB2B: jz      short loc_99DB4F
0x99DB2D: cmp     eax, 20000h
0x99DB32: jz      short loc_99DB5D
0x99DB34: cmp     eax, 24000h
0x99DB39: jz      short loc_99DB5D
0x99DB3B: cmp     eax, 40000h
0x99DB40: jz      short loc_99DB49
0x99DB42: cmp     eax, 44000h
0x99DB47: jnz     short loc_99DB66
0x99DB49: mov     [ebp+var_2], 1
0x99DB4D: jmp     short loc_99DB66
0x99DB4F: mov     ecx, [ebp+arg_8]
0x99DB52: mov     eax, 301h
0x99DB57: and     ecx, eax
0x99DB59: cmp     ecx, eax
0x99DB5B: jnz     short loc_99DB66
0x99DB5D: mov     [ebp+var_2], 2
0x99DB61: jmp     short loc_99DB66
0x99DB63: mov     [ebp+var_2], bl
0x99DB66: test    [ebp+arg_8], 70000h
0x99DB6D: jz      loc_99DD28
0x99DB73: test    [ebp+var_1], 40h
0x99DB77: mov     [ebp+dwShareMode], ebx
0x99DB7A: jnz     loc_99DD28
0x99DB80: mov     eax, [ebp+dwDesiredAccess]
0x99DB83: mov     ecx, 0C0000000h
0x99DB88: and     eax, ecx
0x99DB8A: cmp     eax, 40000000h
0x99DB8F: jz      loc_99DC4C
0x99DB95: cmp     eax, 80000000h
0x99DB9A: jz      short loc_99DC13
0x99DB9C: cmp     eax, ecx
0x99DB9E: jnz     loc_99DD28
0x99DBA4: mov     eax, [ebp+dwCreationDisposition]
0x99DBA7: cmp     eax, ebx
0x99DBA9: jbe     loc_99DD28
0x99DBAF: cmp     eax, 2
0x99DBB2: jbe     short loc_99DBC2
0x99DBB4: cmp     eax, 4
0x99DBB7: jbe     short loc_99DBE9
0x99DBB9: cmp     eax, 5
0x99DBBC: jnz     loc_99DD28
0x99DBC2: movsx   eax, [ebp+var_2]
0x99DBC6: xor     edi, edi
0x99DBC8: dec     eax
0x99DBC9: jz      loc_99DCF5
0x99DBCF: dec     eax
0x99DBD0: jnz     loc_99DD28
0x99DBD6: mov     [ebp+dwShareMode], 0FEFFh
0x99DBDD: mov     [ebp+dwCreationDisposition], 2
0x99DBE4: jmp     loc_99DD03
0x99DBE9: push    2; dwMoveMethod
0x99DBEB: push    ebx; int
0x99DBEC: push    ebx; int
0x99DBED: push    dword ptr [esi]; int
0x99DBEF: call    __lseeki64_nolock
0x99DBF4: add     esp, 10h
0x99DBF7: or      eax, edx
0x99DBF9: jz      short loc_99DBC2
0x99DBFB: push    ebx; dwMoveMethod
0x99DBFC: push    ebx; int
0x99DBFD: push    ebx; int
0x99DBFE: push    dword ptr [esi]; int
0x99DC00: call    __lseeki64_nolock
0x99DC05: and     eax, edx
0x99DC07: add     esp, 10h
0x99DC0A: cmp     eax, 0FFFFFFFFh
0x99DC0D: jz      loc_99DAA1
0x99DC13: push    3; nNumberOfBytesToRead
0x99DC15: lea     eax, [ebp+dwShareMode]
0x99DC18: push    eax; lpWideCharStr
0x99DC19: push    dword ptr [esi]; int
0x99DC1B: call    __read_nolock
0x99DC20: add     esp, 0Ch
0x99DC23: cmp     eax, 0FFFFFFFFh
0x99DC26: jz      loc_99DAA1
0x99DC2C: cmp     eax, 2
0x99DC2F: jz      short loc_99DC9C
0x99DC31: cmp     eax, 3
0x99DC34: jnz     loc_99DCE7
0x99DC3A: cmp     [ebp+dwShareMode], 0BFBBEFh
0x99DC41: jnz     short loc_99DC9C
0x99DC43: mov     [ebp+var_2], 1
0x99DC47: jmp     loc_99DD28
0x99DC4C: mov     eax, [ebp+dwCreationDisposition]
0x99DC4F: cmp     eax, ebx
0x99DC51: jbe     loc_99DD28
0x99DC57: cmp     eax, 2
0x99DC5A: jbe     loc_99DBC2
0x99DC60: cmp     eax, 4
0x99DC63: ja      loc_99DBB9
0x99DC69: push    2; dwMoveMethod
0x99DC6B: push    ebx; int
0x99DC6C: push    ebx; int
0x99DC6D: push    dword ptr [esi]; int
0x99DC6F: call    __lseeki64_nolock
0x99DC74: add     esp, 10h
0x99DC77: or      eax, edx
0x99DC79: jz      loc_99DBC2
0x99DC7F: push    ebx; dwMoveMethod
0x99DC80: push    ebx; int
0x99DC81: push    ebx; int
0x99DC82: push    dword ptr [esi]; int
0x99DC84: call    __lseeki64_nolock
0x99DC89: add     esp, 10h
0x99DC8C: and     eax, edx
0x99DC8E: cmp     eax, 0FFFFFFFFh
0x99DC91: jnz     loc_99DD28
0x99DC97: jmp     loc_99DAA1
0x99DC9C: mov     eax, [ebp+dwShareMode]
0x99DC9F: and     eax, 0FFFFh
0x99DCA4: cmp     eax, 0FFFEh
0x99DCA9: jnz     short loc_99DCC4
0x99DCAB: push    dword ptr [esi]
0x99DCAD: call    __close_nolock
0x99DCB2: pop     ecx
0x99DCB3: call    __errno
0x99DCB8: push    16h
0x99DCBA: pop     esi
0x99DCBB: mov     [eax], esi
0x99DCBD: mov     eax, esi
0x99DCBF: jmp     __tsopen_nolock___$exit$28157
0x99DCC4: cmp     eax, 0FEFFh
0x99DCC9: jnz     short loc_99DCE7
0x99DCCB: push    ebx; dwMoveMethod
0x99DCCC: push    2; lDistanceToMove
0x99DCCE: push    dword ptr [esi]; int
0x99DCD0: call    __lseek_nolock
0x99DCD5: add     esp, 0Ch
0x99DCD8: cmp     eax, 0FFFFFFFFh
0x99DCDB: jz      loc_99DAA1
0x99DCE1: mov     [ebp+var_2], 2
0x99DCE5: jmp     short loc_99DD28
0x99DCE7: push    ebx; dwMoveMethod
0x99DCE8: push    ebx; lDistanceToMove
0x99DCE9: push    dword ptr [esi]; int
0x99DCEB: call    __lseek_nolock
0x99DCF0: add     esp, 0Ch
0x99DCF3: jmp     short loc_99DC8E
0x99DCF5: mov     [ebp+dwShareMode], 0BFBBEFh
0x99DCFC: mov     [ebp+dwCreationDisposition], 3
0x99DD03: mov     eax, [ebp+dwCreationDisposition]
0x99DD06: sub     eax, edi
0x99DD08: push    eax; unsigned int
0x99DD09: lea     eax, [ebp+edi+dwShareMode]
0x99DD0D: push    eax; void *
0x99DD0E: push    dword ptr [esi]; int
0x99DD10: call    __write
0x99DD15: add     esp, 0Ch
0x99DD18: cmp     eax, 0FFFFFFFFh
0x99DD1B: jz      loc_99DAA1
0x99DD21: add     edi, eax
0x99DD23: cmp     [ebp+dwCreationDisposition], edi
0x99DD26: jg      short loc_99DD03
0x99DD28: mov     eax, [esi]
0x99DD2A: mov     ecx, eax
0x99DD2C: and     eax, 1Fh
0x99DD2F: imul    eax, 28h ; '('
0x99DD32: sar     ecx, 5
0x99DD35: mov     ecx, dword_BAAAC0[ecx*4]
0x99DD3C: lea     eax, [ecx+eax+24h]
0x99DD40: mov     cl, [eax]
0x99DD42: xor     cl, [ebp+var_2]
0x99DD45: and     cl, 7Fh
0x99DD48: xor     [eax], cl
0x99DD4A: mov     eax, [esi]
0x99DD4C: mov     ecx, eax
0x99DD4E: and     eax, 1Fh
0x99DD51: imul    eax, 28h ; '('
0x99DD54: sar     ecx, 5
0x99DD57: mov     ecx, dword_BAAAC0[ecx*4]
0x99DD5E: lea     eax, [ecx+eax+24h]
0x99DD62: mov     ecx, [ebp+arg_8]
0x99DD65: mov     dl, [eax]
0x99DD67: shr     ecx, 10h
0x99DD6A: shl     cl, 7
0x99DD6D: and     dl, 7Fh
0x99DD70: or      cl, dl
0x99DD72: cmp     byte ptr [ebp+WideCharStr+1], bl
0x99DD75: mov     [eax], cl
0x99DD77: jnz     short loc_99DD9A
0x99DD79: test    byte ptr [ebp+arg_8], 8
0x99DD7D: jz      short loc_99DD9A
0x99DD7F: mov     esi, [esi]
0x99DD81: mov     eax, esi
0x99DD83: and     esi, 1Fh
0x99DD86: imul    esi, 28h ; '('
0x99DD89: sar     eax, 5
0x99DD8C: mov     eax, dword_BAAAC0[eax*4]
0x99DD93: lea     eax, [eax+esi+4]
0x99DD97: or      byte ptr [eax], 20h
0x99DD9A: mov     eax, ebx
