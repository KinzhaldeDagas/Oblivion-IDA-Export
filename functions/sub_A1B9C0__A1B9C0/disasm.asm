0xA1B9C0: push    offset dword_B08B84
0xA1B9C5: mov     ecx, offset dword_B07CFC
0xA1B9CA: call    BSSimpleList_Remove
0xA1B9CF: mov     eax, off_B08B88; "iLandBorder1B:Landscape"
0xA1B9D4: test    eax, eax
0xA1B9D6: jz      short locret_A1B9E4
0xA1B9D8: cmp     byte ptr [eax], 53h ; 'S'
0xA1B9DB: jnz     short locret_A1B9E4
0xA1B9DD: push    eax
0xA1B9DE: call    FormHeapFree
0xA1B9E3: pop     ecx
0xA1B9E4: retn
