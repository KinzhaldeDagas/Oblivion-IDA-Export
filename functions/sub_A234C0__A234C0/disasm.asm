0xA234C0: push    offset unk_B120FC
0xA234C5: mov     ecx, offset dword_B07CFC
0xA234CA: call    BSSimpleList_Remove
0xA234CF: mov     eax, off_B12100; "bDebugFaceGenMultithreading:Debug"
0xA234D4: test    eax, eax
0xA234D6: jz      short locret_A234E4
0xA234D8: cmp     byte ptr [eax], 53h ; 'S'
0xA234DB: jnz     short locret_A234E4
0xA234DD: push    eax
0xA234DE: call    FormHeapFree
0xA234E3: pop     ecx
0xA234E4: retn
