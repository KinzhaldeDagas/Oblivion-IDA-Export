0xA188C0: push    offset flt_B06AB0
0xA188C5: mov     ecx, offset dword_B07CFC
0xA188CA: call    BSSimpleList_Remove
0xA188CF: mov     eax, off_B06AB4; "fFadeDistance:DistantLOD"
0xA188D4: test    eax, eax
0xA188D6: jz      short locret_A188E4
0xA188D8: cmp     byte ptr [eax], 53h ; 'S'
0xA188DB: jnz     short locret_A188E4
0xA188DD: push    eax
0xA188DE: call    FormHeapFree
0xA188E3: pop     ecx
0xA188E4: retn
