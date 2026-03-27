0xA1C5E0: push    offset useFuzzyPicking
0xA1C5E5: mov     ecx, offset dword_B07CFC
0xA1C5EA: call    BSSimpleList_Remove
0xA1C5EF: mov     eax, off_B1190C; "bUseFuzzyPicking:Interface"
0xA1C5F4: test    eax, eax
0xA1C5F6: jz      short locret_A1C604
0xA1C5F8: cmp     byte ptr [eax], 53h ; 'S'
0xA1C5FB: jnz     short locret_A1C604
0xA1C5FD: push    eax
0xA1C5FE: call    FormHeapFree
0xA1C603: pop     ecx
0xA1C604: retn
