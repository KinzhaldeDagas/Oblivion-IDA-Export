0x780EC0: push    ebx
0x780EC1: mov     ebx, [esp+4+Src]
0x780EC5: push    ebp
0x780EC6: mov     ebp, ecx
0x780EC8: mov     eax, [ebp+30h]
0x780ECB: cmp     eax, ebx
0x780ECD: jz      short loc_780F0E
0x780ECF: push    eax
0x780ED0: call    FormHeapFree
0x780ED5: add     esp, 4
0x780ED8: test    ebx, ebx
0x780EDA: jz      short loc_780F0E
0x780EDC: cmp     byte ptr [ebx], 0
0x780EDF: jz      short loc_780F0E
0x780EE1: mov     eax, ebx
0x780EE3: lea     edx, [eax+1]
0x780EE6: mov     cl, [eax]
0x780EE8: add     eax, 1
0x780EEB: test    cl, cl
0x780EED: jnz     short loc_780EE6
0x780EEF: push    esi
0x780EF0: sub     eax, edx
0x780EF2: lea     esi, [eax+1]
0x780EF5: push    edi
0x780EF6: push    esi; Size
0x780EF7: call    FormHeapAlloc
0x780EFC: push    ebx; Src
0x780EFD: mov     edi, eax
0x780EFF: push    esi; SizeInBytes
0x780F00: push    edi; Dst
0x780F01: call    _strcpy_s
0x780F06: add     esp, 10h
0x780F09: mov     [ebp+30h], edi
0x780F0C: pop     edi
0x780F0D: pop     esi
0x780F0E: pop     ebp
0x780F0F: pop     ebx
0x780F10: retn    4
