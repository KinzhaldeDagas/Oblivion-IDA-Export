0xA234F0: push    offset unk_B12104
0xA234F5: mov     ecx, offset dword_B07CFC
0xA234FA: call    BSSimpleList_Remove
0xA234FF: mov     eax, off_B12108; "bDebugFaceGenCriticalSection:Debug"
0xA23504: test    eax, eax
0xA23506: jz      short locret_A23514
0xA23508: cmp     byte ptr [eax], 53h ; 'S'
0xA2350B: jnz     short locret_A23514
0xA2350D: push    eax
0xA2350E: call    FormHeapFree
0xA23513: pop     ecx
0xA23514: retn
