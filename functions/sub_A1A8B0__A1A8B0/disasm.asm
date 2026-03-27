0xA1A8B0: push    offset SettingLODFadeOutMultActors
0xA1A8B5: mov     ecx, offset dword_B07CFC
0xA1A8BA: call    BSSimpleList_Remove
0xA1A8BF: mov     eax, off_B07630; "fLODFadeOutMultActors:LOD"
0xA1A8C4: test    eax, eax
0xA1A8C6: jz      short locret_A1A8D4
0xA1A8C8: cmp     byte ptr [eax], 53h ; 'S'
0xA1A8CB: jnz     short locret_A1A8D4
0xA1A8CD: push    eax
0xA1A8CE: call    FormHeapFree
0xA1A8D3: pop     ecx
0xA1A8D4: retn
