0xA16FA0: push    offset iDebugText
0xA16FA5: mov     ecx, offset dword_B07CFC
0xA16FAA: call    BSSimpleList_Remove
0xA16FAF: mov     eax, off_B02E10; "iDebugText:Display"
0xA16FB4: test    eax, eax
0xA16FB6: jz      short locret_A16FC4
0xA16FB8: cmp     byte ptr [eax], 53h ; 'S'
0xA16FBB: jnz     short locret_A16FC4
0xA16FBD: push    eax
0xA16FBE: call    FormHeapFree
0xA16FC3: pop     ecx
0xA16FC4: retn
