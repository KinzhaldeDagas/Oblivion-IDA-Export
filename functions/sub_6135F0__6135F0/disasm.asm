0x6135F0: push    esi
0x6135F1: mov     esi, ecx
0x6135F3: mov     ecx, [esi+40h]
0x6135F6: xor     eax, eax
0x6135F8: test    ecx, ecx
0x6135FA: jz      short loc_61360D
0x6135FC: cmp     [ecx+4], eax
0x6135FF: jnz     short loc_613605
0x613601: cmp     [ecx], eax
0x613603: jz      short loc_61360D
0x613605: mov     eax, [ecx]
0x613607: test    eax, eax
0x613609: jz      short loc_61360F
0x61360B: mov     eax, [eax]
0x61360D: pop     esi
0x61360E: retn
0x61360F: mov     eax, [ecx+4]
0x613612: test    eax, eax
0x613614: jz      short loc_613631
0x613616: mov     edx, [eax+4]
0x613619: mov     [ecx+4], edx
0x61361C: mov     edx, [eax]
0x61361E: push    eax
0x61361F: mov     [ecx], edx
0x613621: call    FormHeapFree
0x613626: add     esp, 4
0x613629: mov     ecx, esi
0x61362B: pop     esi
0x61362C: jmp     sub_6135F0
0x613631: mov     dword ptr [ecx], 0
0x613637: mov     ecx, esi
0x613639: pop     esi
0x61363A: jmp     sub_6135F0
