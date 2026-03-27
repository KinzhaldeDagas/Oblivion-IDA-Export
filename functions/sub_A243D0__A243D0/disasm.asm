0xA243D0: push    offset byte_B13200
0xA243D5: mov     ecx, offset dword_B07CFC
0xA243DA: call    BSSimpleList_Remove
0xA243DF: mov     eax, off_B13204; "bDialogueSubtitles:GamePlay"
0xA243E4: test    eax, eax
0xA243E6: jz      short locret_A243F4
0xA243E8: cmp     byte ptr [eax], 53h ; 'S'
0xA243EB: jnz     short locret_A243F4
0xA243ED: push    eax
0xA243EE: call    FormHeapFree
0xA243F3: pop     ecx
0xA243F4: retn
