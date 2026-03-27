0xA16A90: push    offset dword_B02D28
0xA16A95: mov     ecx, offset dword_B07CFC
0xA16A9A: call    BSSimpleList_Remove
0xA16A9F: mov     eax, off_B02D2C; "bUseThreadedTempEffects:General"
0xA16AA4: test    eax, eax
0xA16AA6: jz      short locret_A16AB4
0xA16AA8: cmp     byte ptr [eax], 53h ; 'S'
0xA16AAB: jnz     short locret_A16AB4
0xA16AAD: push    eax
0xA16AAE: call    FormHeapFree
0xA16AB3: pop     ecx
0xA16AB4: retn
