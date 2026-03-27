0xA18090: push    offset unk_B05554
0xA18095: mov     ecx, offset dword_B07CFC
0xA1809A: call    BSSimpleList_Remove
0xA1809F: mov     eax, off_B05558; "bDisableDuplicateReferenceCheck:General"
0xA180A4: test    eax, eax
0xA180A6: jz      short locret_A180B4
0xA180A8: cmp     byte ptr [eax], 53h ; 'S'
0xA180AB: jnz     short locret_A180B4
0xA180AD: push    eax
0xA180AE: call    FormHeapFree
0xA180B3: pop     ecx
0xA180B4: retn
