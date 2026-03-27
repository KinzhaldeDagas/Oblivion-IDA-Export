0xA16F70: push    offset unk_B02DF8
0xA16F75: mov     ecx, offset dword_B07CFC
0xA16F7A: call    BSSimpleList_Remove
0xA16F7F: mov     eax, off_B02DFC; "bUseBackgroundFileLoader:BackgroundLoad"
0xA16F84: test    eax, eax
0xA16F86: jz      short locret_A16F94
0xA16F88: cmp     byte ptr [eax], 53h ; 'S'
0xA16F8B: jnz     short locret_A16F94
0xA16F8D: push    eax
0xA16F8E: call    FormHeapFree
0xA16F93: pop     ecx
0xA16F94: retn
