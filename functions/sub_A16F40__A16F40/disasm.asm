0xA16F40: push    offset off_B02DF0; "Insert the Oblivion Disc."
0xA16F45: mov     ecx, offset dword_B07CFC
0xA16F4A: call    BSSimpleList_Remove
0xA16F4F: mov     eax, off_B02DF4; "sCopyProtectionMessage2:CopyProtectionS"...
0xA16F54: test    eax, eax
0xA16F56: jz      short locret_A16F64
0xA16F58: cmp     byte ptr [eax], 53h ; 'S'
0xA16F5B: jnz     short locret_A16F64
0xA16F5D: push    eax
0xA16F5E: call    FormHeapFree
0xA16F63: pop     ecx
0xA16F64: retn
