0x469700: cmp     ecx, edx
0x469702: jnb     short loc_469711
0x469704: mov     eax, [eax+4]
0x469707: add     ecx, 1
0x46970A: test    eax, eax
0x46970C: jnz     short TESContainer_RemoveNthEntry___ContentLookupLoop
0x46970E: retn    4
0x469711: test    eax, eax
0x469713: jz      short TESContainer_RemoveNthEntry___Done
0x469715: mov     ecx, [eax+4]
0x469718: test    ecx, ecx
0x46971A: push    esi
0x46971B: mov     esi, [eax]
0x46971D: jz      short loc_469734
0x46971F: mov     edx, [ecx+4]
0x469722: mov     [eax+4], edx
0x469725: mov     edx, [ecx]
0x469727: push    ecx
0x469728: mov     [eax], edx
0x46972A: call    FormHeapFree
0x46972F: add     esp, 4
0x469732: jmp     short loc_46973A
0x469734: mov     dword ptr [eax], 0
0x46973A: test    esi, esi
0x46973C: jz      short TESContainer_RemoveNthEntry___Done_
0x46973E: push    esi
0x46973F: call    FormHeapFree
0x469744: add     esp, 4
