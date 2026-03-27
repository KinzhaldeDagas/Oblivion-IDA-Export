0xA1C580: push    offset flt_B114A4
0xA1C585: mov     ecx, offset dword_B07CFC
0xA1C58A: call    BSSimpleList_Remove
0xA1C58F: mov     eax, off_B114A8; "fLandFriction:Landscape"
0xA1C594: test    eax, eax
0xA1C596: jz      short locret_A1C5A4
0xA1C598: cmp     byte ptr [eax], 53h ; 'S'
0xA1C59B: jnz     short locret_A1C5A4
0xA1C59D: push    eax
0xA1C59E: call    FormHeapFree
0xA1C5A3: pop     ecx
0xA1C5A4: retn
