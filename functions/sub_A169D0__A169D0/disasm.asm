0xA169D0: push    offset dword_B02D08
0xA169D5: mov     ecx, offset dword_B07CFC
0xA169DA: call    BSSimpleList_Remove
0xA169DF: mov     eax, off_B02D0C; "bRunVTuneTest:General"
0xA169E4: test    eax, eax
0xA169E6: jz      short locret_A169F4
0xA169E8: cmp     byte ptr [eax], 53h ; 'S'
0xA169EB: jnz     short locret_A169F4
0xA169ED: push    eax
0xA169EE: call    FormHeapFree
0xA169F3: pop     ecx
0xA169F4: retn
