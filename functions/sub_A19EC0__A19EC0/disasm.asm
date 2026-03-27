0xA19EC0: push    offset bBlendLandscapeValue
0xA19EC5: mov     ecx, offset dword_B07CFC
0xA19ECA: call    BSSimpleList_Remove
0xA19ECF: mov     eax, off_B06FA0; "bLandscapeBlend:Display"
0xA19ED4: test    eax, eax
0xA19ED6: jz      short locret_A19EE4
0xA19ED8: cmp     byte ptr [eax], 53h ; 'S'
0xA19EDB: jnz     short locret_A19EE4
0xA19EDD: push    eax
0xA19EDE: call    FormHeapFree
0xA19EE3: pop     ecx
0xA19EE4: retn
