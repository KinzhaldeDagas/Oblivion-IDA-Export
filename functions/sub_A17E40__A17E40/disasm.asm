0xA17E40: push    offset iUpdateType
0xA17E45: mov     ecx, offset dword_B07CFC
0xA17E4A: call    BSSimpleList_Remove
0xA17E4F: mov     eax, off_B05210; "iUpdateType:HAVOK"
0xA17E54: test    eax, eax
0xA17E56: jz      short locret_A17E64
0xA17E58: cmp     byte ptr [eax], 53h ; 'S'
0xA17E5B: jnz     short locret_A17E64
0xA17E5D: push    eax
0xA17E5E: call    FormHeapFree
0xA17E63: pop     ecx
0xA17E64: retn
