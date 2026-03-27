0xA258F0: push    offset bAllowHavokGrabTheLiving
0xA258F5: mov     ecx, offset dword_B07CFC
0xA258FA: call    BSSimpleList_Remove
0xA258FF: mov     eax, off_B14EA4; "bAllowHavokGrabTheLiving:GamePlay"
0xA25904: test    eax, eax
0xA25906: jz      short locret_A25914
0xA25908: cmp     byte ptr [eax], 53h ; 'S'
0xA2590B: jnz     short locret_A25914
0xA2590D: push    eax
0xA2590E: call    FormHeapFree
0xA25913: pop     ecx
0xA25914: retn
