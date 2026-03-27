0xA16B20: push    offset off_B02D40; "Test\\CameraPath.nif"
0xA16B25: mov     ecx, offset dword_B07CFC
0xA16B2A: call    BSSimpleList_Remove
0xA16B2F: mov     eax, off_B02D44; "sNif:CameraPath"
0xA16B34: test    eax, eax
0xA16B36: jz      short locret_A16B44
0xA16B38: cmp     byte ptr [eax], 53h ; 'S'
0xA16B3B: jnz     short locret_A16B44
0xA16B3D: push    eax
0xA16B3E: call    FormHeapFree
0xA16B43: pop     ecx
0xA16B44: retn
