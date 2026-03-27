0xA16BE0: push    offset bUseHardDriveCache
0xA16BE5: mov     ecx, offset dword_B07CFC
0xA16BEA: call    BSSimpleList_Remove
0xA16BEF: mov     eax, off_B02D64; "bUseHardDriveCache:General"
0xA16BF4: test    eax, eax
0xA16BF6: jz      short locret_A16C04
0xA16BF8: cmp     byte ptr [eax], 53h ; 'S'
0xA16BFB: jnz     short locret_A16C04
0xA16BFD: push    eax
0xA16BFE: call    FormHeapFree
0xA16C03: pop     ecx
0xA16C04: retn
