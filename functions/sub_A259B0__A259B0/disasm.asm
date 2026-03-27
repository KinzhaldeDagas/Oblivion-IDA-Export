0xA259B0: push    offset fCameraCasterSize
0xA259B5: mov     ecx, offset dword_B07CFC
0xA259BA: call    BSSimpleList_Remove
0xA259BF: mov     eax, off_B14EC4; "fCameraCasterSize:HAVOK"
0xA259C4: test    eax, eax
0xA259C6: jz      short locret_A259D4
0xA259C8: cmp     byte ptr [eax], 53h ; 'S'
0xA259CB: jnz     short locret_A259D4
0xA259CD: push    eax
0xA259CE: call    FormHeapFree
0xA259D3: pop     ecx
0xA259D4: retn
