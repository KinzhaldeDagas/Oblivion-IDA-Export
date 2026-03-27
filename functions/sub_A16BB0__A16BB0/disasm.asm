0xA16BB0: push    offset dword_B02D58
0xA16BB5: mov     ecx, offset dword_B07CFC
0xA16BBA: call    BSSimpleList_Remove
0xA16BBF: mov     eax, off_B02D5C; "iTake:CameraPath"
0xA16BC4: test    eax, eax
0xA16BC6: jz      short locret_A16BD4
0xA16BC8: cmp     byte ptr [eax], 53h ; 'S'
0xA16BCB: jnz     short locret_A16BD4
0xA16BCD: push    eax
0xA16BCE: call    FormHeapFree
0xA16BD3: pop     ecx
0xA16BD4: retn
