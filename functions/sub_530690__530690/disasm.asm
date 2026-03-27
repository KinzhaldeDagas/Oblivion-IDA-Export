0x530690: push    esi
0x530691: lea     esi, [ecx+28h]
0x530694: test    esi, esi
0x530696: jz      short loc_5306C7
0x530698: mov     ecx, esi
0x53069A: call    BSSimpleList_IsEmpty
0x53069F: test    al, al
0x5306A1: jnz     short loc_5306C7
0x5306A3: mov     eax, [esi+4]
0x5306A6: test    eax, eax
0x5306A8: jz      short loc_5306BF
0x5306AA: mov     ecx, [eax+4]
0x5306AD: mov     [esi+4], ecx
0x5306B0: mov     edx, [eax]
0x5306B2: push    eax
0x5306B3: mov     [esi], edx
0x5306B5: call    FormHeapFree
0x5306BA: add     esp, 4
0x5306BD: jmp     short loc_530698
0x5306BF: mov     dword ptr [esi], 0
0x5306C5: jmp     short loc_530698
0x5306C7: pop     esi
0x5306C8: retn
