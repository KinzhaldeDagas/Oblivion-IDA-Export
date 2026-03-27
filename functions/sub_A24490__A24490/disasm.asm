0xA24490: push    offset byte_B13220
0xA24495: mov     ecx, offset dword_B07CFC
0xA2449A: call    BSSimpleList_Remove
0xA2449F: mov     eax, off_B13224; "bSaveOnWait:GamePlay"
0xA244A4: test    eax, eax
0xA244A6: jz      short locret_A244B4
0xA244A8: cmp     byte ptr [eax], 53h ; 'S'
0xA244AB: jnz     short locret_A244B4
0xA244AD: push    eax
0xA244AE: call    FormHeapFree
0xA244B3: pop     ecx
0xA244B4: retn
