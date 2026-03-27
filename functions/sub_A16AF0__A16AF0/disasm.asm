0xA16AF0: push    offset byte_B02D38
0xA16AF5: mov     ecx, offset dword_B07CFC
0xA16AFA: call    BSSimpleList_Remove
0xA16AFF: mov     eax, off_B02D3C; "bEnableBoundingVolumeOcclusion:General"
0xA16B04: test    eax, eax
0xA16B06: jz      short locret_A16B14
0xA16B08: cmp     byte ptr [eax], 53h ; 'S'
0xA16B0B: jnz     short locret_A16B14
0xA16B0D: push    eax
0xA16B0E: call    FormHeapFree
0xA16B13: pop     ecx
0xA16B14: retn
