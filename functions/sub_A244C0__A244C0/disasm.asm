0xA244C0: push    offset byte_B13228
0xA244C5: mov     ecx, offset dword_B07CFC
0xA244CA: call    BSSimpleList_Remove
0xA244CF: mov     eax, off_B1322C; "bSaveOnTravel:GamePlay"
0xA244D4: test    eax, eax
0xA244D6: jz      short locret_A244E4
0xA244D8: cmp     byte ptr [eax], 53h ; 'S'
0xA244DB: jnz     short locret_A244E4
0xA244DD: push    eax
0xA244DE: call    FormHeapFree
0xA244E3: pop     ecx
0xA244E4: retn
