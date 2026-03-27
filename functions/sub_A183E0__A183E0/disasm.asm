0xA183E0: push    offset Global_DebugSaveBuffer
0xA183E5: mov     ecx, offset dword_B07CFC
0xA183EA: call    BSSimpleList_Remove
0xA183EF: mov     eax, off_B05BB0; "bDebugSaveBuffer:Debug"
0xA183F4: test    eax, eax
0xA183F6: jz      short locret_A18404
0xA183F8: cmp     byte ptr [eax], 53h ; 'S'
0xA183FB: jnz     short locret_A18404
0xA183FD: push    eax
0xA183FE: call    FormHeapFree
0xA18403: pop     ecx
0xA18404: retn
