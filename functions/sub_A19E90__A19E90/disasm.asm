0xA19E90: push    offset OB_INI_bFullBrightLighting_Display_010201A0
0xA19E95: mov     ecx, offset dword_B07CFC
0xA19E9A: call    BSSimpleList_Remove
0xA19E9F: mov     eax, off_B06F98; "bFullBrightLighting:Display"
0xA19EA4: test    eax, eax
0xA19EA6: jz      short locret_A19EB4
0xA19EA8: cmp     byte ptr [eax], 53h ; 'S'
0xA19EAB: jnz     short locret_A19EB4
0xA19EAD: push    eax
0xA19EAE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA19EB3: pop     ecx
0xA19EB4: retn
