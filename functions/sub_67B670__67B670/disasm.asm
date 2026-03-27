0x67B670: mov     ecx, [ecx]
0x67B672: mov     eax, ecx
0x67B674: test    eax, eax
0x67B676: jz      short locret_67B6A5
0x67B678: mov     edx, [esp+arg_0]
0x67B67C: push    esi
0x67B67D: lea     ecx, [ecx+0]
0x67B680: mov     esi, [eax]
0x67B682: test    esi, esi
0x67B684: jz      short loc_67B6A4
0x67B686: cmp     [esi], edx
0x67B688: jz      short loc_67B695
0x67B68A: mov     eax, [eax+4]
0x67B68D: test    eax, eax
0x67B68F: jnz     short loc_67B680
0x67B691: pop     esi
0x67B692: retn    4
0x67B695: push    esi
0x67B696: call    BSSimpleList_Remove
0x67B69B: push    esi
0x67B69C: call    FormHeapFree
0x67B6A1: add     esp, 4
0x67B6A4: pop     esi
0x67B6A5: retn    4
