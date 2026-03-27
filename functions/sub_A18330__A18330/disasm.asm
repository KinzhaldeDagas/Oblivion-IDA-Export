0xA18330: push    offset unk_B055C4
0xA18335: mov     ecx, offset dword_B07CFC
0xA1833A: call    BSSimpleList_Remove
0xA1833F: mov     eax, off_B055C8; "bKeepPluginWhenMerging:General"
0xA18344: test    eax, eax
0xA18346: jz      short locret_A18354
0xA18348: cmp     byte ptr [eax], 53h ; 'S'
0xA1834B: jnz     short locret_A18354
0xA1834D: push    eax
0xA1834E: call    FormHeapFree
0xA18353: pop     ecx
0xA18354: retn
