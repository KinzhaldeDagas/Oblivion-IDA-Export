0xA25890: push    offset bHealthBarShowing_Gameplay
0xA25895: mov     ecx, offset dword_B07CFC
0xA2589A: call    BSSimpleList_Remove
0xA2589F: mov     eax, off_B14E94; "bHealthBarShowing:GamePlay"
0xA258A4: test    eax, eax
0xA258A6: jz      short locret_A258B4
0xA258A8: cmp     byte ptr [eax], 53h ; 'S'
0xA258AB: jnz     short locret_A258B4
0xA258AD: push    eax
0xA258AE: call    FormHeapFree
0xA258B3: pop     ecx
0xA258B4: retn
