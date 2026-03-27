0xA1A2A0: push    offset byte_B07060
0xA1A2A5: mov     ecx, offset dword_B07CFC
0xA1A2AA: call    BSSimpleList_Remove
0xA1A2AF: mov     eax, off_B07064; "bUseWaterReflections:Water"
0xA1A2B4: test    eax, eax
0xA1A2B6: jz      short locret_A1A2C4
0xA1A2B8: cmp     byte ptr [eax], 53h ; 'S'
0xA1A2BB: jnz     short locret_A1A2C4
0xA1A2BD: push    eax
0xA1A2BE: call    FormHeapFree
0xA1A2C3: pop     ecx
0xA1A2C4: retn
