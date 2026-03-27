0xA16EE0: push    offset lpText
0xA16EE5: mov     ecx, offset dword_B07CFC
0xA16EEA: call    BSSimpleList_Remove
0xA16EEF: mov     eax, off_B02DE4; "sCopyProtectionMessage:CopyProtectionSt"...
0xA16EF4: test    eax, eax
0xA16EF6: jz      short locret_A16F04
0xA16EF8: cmp     byte ptr [eax], 53h ; 'S'
0xA16EFB: jnz     short locret_A16F04
0xA16EFD: push    eax
0xA16EFE: call    FormHeapFree
0xA16F03: pop     ecx
0xA16F04: retn
