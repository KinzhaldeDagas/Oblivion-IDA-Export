0x46CBA0: push    esi
0x46CBA1: lea     esi, [ecx+4]
0x46CBA4: test    esi, esi
0x46CBA6: jz      short loc_46CBE2
0x46CBA8: mov     eax, [esi]
0x46CBAA: test    eax, eax
0x46CBAC: jz      short loc_46CBDB
0x46CBAE: push    eax
0x46CBAF: call    FormHeapFree
0x46CBB4: mov     eax, [esi+4]
0x46CBB7: add     esp, 4
0x46CBBA: test    eax, eax
0x46CBBC: jz      short loc_46CBD3
0x46CBBE: mov     ecx, [eax+4]
0x46CBC1: mov     [esi+4], ecx
0x46CBC4: mov     edx, [eax]
0x46CBC6: push    eax
0x46CBC7: mov     [esi], edx
0x46CBC9: call    FormHeapFree
0x46CBCE: add     esp, 4
0x46CBD1: jmp     short loc_46CBDE
0x46CBD3: mov     dword ptr [esi], 0
0x46CBD9: jmp     short loc_46CBDE
0x46CBDB: mov     esi, [esi+4]
0x46CBDE: test    esi, esi
0x46CBE0: jnz     short loc_46CBA8
0x46CBE2: pop     esi
0x46CBE3: retn
