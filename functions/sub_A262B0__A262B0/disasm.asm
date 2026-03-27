0xA262B0: push    offset dword_B1624C
0xA262B5: mov     ecx, offset dword_B07CFC
0xA262BA: call    BSSimpleList_Remove
0xA262BF: mov     eax, off_B16250; "fWoodMediumMassMin:Audio"
0xA262C4: test    eax, eax
0xA262C6: jz      short locret_A262D4
0xA262C8: cmp     byte ptr [eax], 53h ; 'S'
0xA262CB: jnz     short locret_A262D4
0xA262CD: push    eax
0xA262CE: call    FormHeapFree
0xA262D3: pop     ecx
0xA262D4: retn
