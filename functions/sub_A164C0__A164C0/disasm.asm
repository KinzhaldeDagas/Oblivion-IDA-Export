0xA164C0: push    offset dword_B02C44
0xA164C5: mov     ecx, offset dword_B07CFC
0xA164CA: call    BSSimpleList_Remove
0xA164CF: mov     eax, off_B02C48; "iLanguage:Controls"
0xA164D4: test    eax, eax
0xA164D6: jz      short locret_A164E4
0xA164D8: cmp     byte ptr [eax], 53h ; 'S'
0xA164DB: jnz     short locret_A164E4
0xA164DD: push    eax
0xA164DE: call    FormHeapFree
0xA164E3: pop     ecx
0xA164E4: retn
