0xA16F10: push    offset lpDefault
0xA16F15: mov     ecx, offset dword_B07CFC
0xA16F1A: call    BSSimpleList_Remove
0xA16F1F: mov     eax, off_B02DEC; "sCopyProtectionTitle2:CopyProtectionStr"...
0xA16F24: test    eax, eax
0xA16F26: jz      short locret_A16F34
0xA16F28: cmp     byte ptr [eax], 53h ; 'S'
0xA16F2B: jnz     short locret_A16F34
0xA16F2D: push    eax
0xA16F2E: call    FormHeapFree
0xA16F33: pop     ecx
0xA16F34: retn
