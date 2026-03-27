0xA23780: push    offset flt_B12628
0xA23785: mov     ecx, offset dword_B07CFC
0xA2378A: call    BSSimpleList_Remove
0xA2378F: mov     eax, off_B1262C; "fTreeForceMaxBudAngle:SpeedTree"
0xA23794: test    eax, eax
0xA23796: jz      short locret_A237A4
0xA23798: cmp     byte ptr [eax], 53h ; 'S'
0xA2379B: jnz     short locret_A237A4
0xA2379D: push    eax
0xA2379E: call    FormHeapFree
0xA237A3: pop     ecx
0xA237A4: retn
