0xA245E0: push    offset unk_B13598
0xA245E5: mov     ecx, offset dword_B07CFC
0xA245EA: call    BSSimpleList_Remove
0xA245EF: mov     eax, off_B1359C; "fXenonMenuDpadRepeatSpeed:Controls"
0xA245F4: test    eax, eax
0xA245F6: jz      short locret_A24604
0xA245F8: cmp     byte ptr [eax], 53h ; 'S'
0xA245FB: jnz     short locret_A24604
0xA245FD: push    eax
0xA245FE: call    FormHeapFree
0xA24603: pop     ecx
0xA24604: retn
