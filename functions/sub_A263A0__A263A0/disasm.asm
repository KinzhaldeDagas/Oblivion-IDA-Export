0xA263A0: push    offset dword_B16274
0xA263A5: mov     ecx, offset dword_B07CFC
0xA263AA: call    BSSimpleList_Remove
0xA263AF: mov     eax, off_B16278; "fEarthLargeMassMin:Audio"
0xA263B4: test    eax, eax
0xA263B6: jz      short locret_A263C4
0xA263B8: cmp     byte ptr [eax], 53h ; 'S'
0xA263BB: jnz     short locret_A263C4
0xA263BD: push    eax
0xA263BE: call    FormHeapFree
0xA263C3: pop     ecx
0xA263C4: retn
