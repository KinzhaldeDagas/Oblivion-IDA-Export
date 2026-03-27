0x4FCC90: push    esi
0x4FCC91: lea     esi, [ecx+50h]
0x4FCC94: test    esi, esi
0x4FCC96: jz      short loc_4FCCD2
0x4FCC98: mov     ecx, esi
0x4FCC9A: call    BSSimpleList_IsEmpty
0x4FCC9F: test    al, al
0x4FCCA1: jnz     short loc_4FCCD2
0x4FCCA3: mov     eax, [esi]
0x4FCCA5: push    eax
0x4FCCA6: call    FormHeapFree
0x4FCCAB: mov     eax, [esi+4]
0x4FCCAE: add     esp, 4
0x4FCCB1: test    eax, eax
0x4FCCB3: jz      short loc_4FCCCA
0x4FCCB5: mov     ecx, [eax+4]
0x4FCCB8: mov     [esi+4], ecx
0x4FCCBB: mov     edx, [eax]
0x4FCCBD: push    eax
0x4FCCBE: mov     [esi], edx
0x4FCCC0: call    FormHeapFree
0x4FCCC5: add     esp, 4
0x4FCCC8: jmp     short loc_4FCC98
0x4FCCCA: mov     dword ptr [esi], 0
0x4FCCD0: jmp     short loc_4FCC98
0x4FCCD2: pop     esi
0x4FCCD3: retn
