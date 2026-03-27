0xA23690: push    offset byte_B12600
0xA23695: mov     ecx, offset dword_B07CFC
0xA2369A: call    BSSimpleList_Remove
0xA2369F: mov     eax, off_B12604; "fTreeForceLLA:SpeedTree"
0xA236A4: test    eax, eax
0xA236A6: jz      short locret_A236B4
0xA236A8: cmp     byte ptr [eax], 53h ; 'S'
0xA236AB: jnz     short locret_A236B4
0xA236AD: push    eax
0xA236AE: call    FormHeapFree
0xA236B3: pop     ecx
0xA236B4: retn
