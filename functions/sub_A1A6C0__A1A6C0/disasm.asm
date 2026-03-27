0xA1A6C0: push    offset dword_B07280
0xA1A6C5: mov     ecx, offset dword_B07CFC
0xA1A6CA: call    BSSimpleList_Remove
0xA1A6CF: mov     eax, off_B07284; "iFadeNodeMinNearDistance:LOD"
0xA1A6D4: test    eax, eax
0xA1A6D6: jz      short locret_A1A6E4
0xA1A6D8: cmp     byte ptr [eax], 53h ; 'S'
0xA1A6DB: jnz     short locret_A1A6E4
0xA1A6DD: push    eax
0xA1A6DE: call    FormHeapFree
0xA1A6E3: pop     ecx
0xA1A6E4: retn
