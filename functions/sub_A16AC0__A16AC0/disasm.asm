0xA16AC0: push    offset byte_B02D30
0xA16AC5: mov     ecx, offset dword_B07CFC
0xA16ACA: call    BSSimpleList_Remove
0xA16ACF: mov     eax, off_B02D34; "bDisplayBoundingVolumes:General"
0xA16AD4: test    eax, eax
0xA16AD6: jz      short locret_A16AE4
0xA16AD8: cmp     byte ptr [eax], 53h ; 'S'
0xA16ADB: jnz     short locret_A16AE4
0xA16ADD: push    eax
0xA16ADE: call    FormHeapFree
0xA16AE3: pop     ecx
0xA16AE4: retn
