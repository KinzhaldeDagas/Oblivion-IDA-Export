0xA16FD0: push    offset bShowMenuTextureUse
0xA16FD5: mov     ecx, offset dword_B07CFC
0xA16FDA: call    BSSimpleList_Remove
0xA16FDF: mov     eax, off_B02E18; "bShowMenuTextureUse:Display"
0xA16FE4: test    eax, eax
0xA16FE6: jz      short locret_A16FF4
0xA16FE8: cmp     byte ptr [eax], 53h ; 'S'
0xA16FEB: jnz     short locret_A16FF4
0xA16FED: push    eax
0xA16FEE: call    FormHeapFree
0xA16FF3: pop     ecx
0xA16FF4: retn
