0xA16EB0: push    offset lpCaption
0xA16EB5: mov     ecx, offset dword_B07CFC
0xA16EBA: call    BSSimpleList_Remove
0xA16EBF: mov     eax, off_B02DDC; "sCopyProtectionTitle:CopyProtectionStri"...
0xA16EC4: test    eax, eax
0xA16EC6: jz      short locret_A16ED4
0xA16EC8: cmp     byte ptr [eax], 53h ; 'S'
0xA16ECB: jnz     short locret_A16ED4
0xA16ECD: push    eax
0xA16ECE: call    FormHeapFree
0xA16ED3: pop     ecx
0xA16ED4: retn
