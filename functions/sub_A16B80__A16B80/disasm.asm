0xA16B80: push    offset off_B02D50; "TestCameraPath"
0xA16B85: mov     ecx, offset dword_B07CFC
0xA16B8A: call    BSSimpleList_Remove
0xA16B8F: mov     eax, off_B02D54; "sDirectoryName:CameraPath"
0xA16B94: test    eax, eax
0xA16B96: jz      short locret_A16BA4
0xA16B98: cmp     byte ptr [eax], 53h ; 'S'
0xA16B9B: jnz     short locret_A16BA4
0xA16B9D: push    eax
0xA16B9E: call    FormHeapFree
0xA16BA3: pop     ecx
0xA16BA4: retn
