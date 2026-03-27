0xA169A0: push    offset off_B02D00
0xA169A5: mov     ecx, offset dword_B07CFC
0xA169AA: call    BSSimpleList_Remove
0xA169AF: mov     eax, off_B02D04; "sStartingCellY:General"
0xA169B4: test    eax, eax
0xA169B6: jz      short locret_A169C4
0xA169B8: cmp     byte ptr [eax], 53h ; 'S'
0xA169BB: jnz     short locret_A169C4
0xA169BD: push    eax
0xA169BE: call    FormHeapFree
0xA169C3: pop     ecx
0xA169C4: retn
