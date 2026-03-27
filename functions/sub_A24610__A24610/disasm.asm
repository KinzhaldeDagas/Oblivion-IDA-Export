0xA24610: push    offset dword_B135A0
0xA24615: mov     ecx, offset dword_B07CFC
0xA2461A: call    BSSimpleList_Remove
0xA2461F: mov     eax, off_B135A4; "fActivatePickSphereRadius:Interface"
0xA24624: test    eax, eax
0xA24626: jz      short locret_A24634
0xA24628: cmp     byte ptr [eax], 53h ; 'S'
0xA2462B: jnz     short locret_A24634
0xA2462D: push    eax
0xA2462E: call    FormHeapFree
0xA24633: pop     ecx
0xA24634: retn
