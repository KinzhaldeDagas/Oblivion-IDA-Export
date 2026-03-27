0xA25FD0: push    offset bSoundEnabled_Audio
0xA25FD5: mov     ecx, offset dword_B07CFC
0xA25FDA: call    BSSimpleList_Remove
0xA25FDF: mov     eax, off_B1617C; "bSoundEnabled:Audio"
0xA25FE4: test    eax, eax
0xA25FE6: jz      short locret_A25FF4
0xA25FE8: cmp     byte ptr [eax], 53h ; 'S'
0xA25FEB: jnz     short locret_A25FF4
0xA25FED: push    eax
0xA25FEE: call    FormHeapFree
0xA25FF3: pop     ecx
0xA25FF4: retn
