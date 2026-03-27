0xA260C0: push    offset flt_B161A0
0xA260C5: mov     ecx, offset dword_B07CFC
0xA260CA: call    BSSimpleList_Remove
0xA260CF: mov     eax, off_B161A4; "fDefaultMusicVolume:Audio"
0xA260D4: test    eax, eax
0xA260D6: jz      short locret_A260E4
0xA260D8: cmp     byte ptr [eax], 53h ; 'S'
0xA260DB: jnz     short locret_A260E4
0xA260DD: push    eax
0xA260DE: call    FormHeapFree
0xA260E3: pop     ecx
0xA260E4: retn
