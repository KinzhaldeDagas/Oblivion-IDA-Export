0xA24580: push    offset aS_7
0xA24585: mov     ecx, offset dword_B07CFC
0xA2458A: call    BSSimpleList_Remove
0xA2458F: mov     eax, off_B1358C; "iXenonMenuStickDeadZone:Controls"
0xA24594: test    eax, eax
0xA24596: jz      short locret_A245A4
0xA24598: cmp     byte ptr [eax], 53h ; 'S'
0xA2459B: jnz     short locret_A245A4
0xA2459D: push    eax
0xA2459E: call    FormHeapFree
0xA245A3: pop     ecx
0xA245A4: retn
