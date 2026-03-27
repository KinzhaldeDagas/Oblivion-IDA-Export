0xA25980: push    offset off_B14EB8; "\\\\vault\\TES4\\LevelData\\"
0xA25985: mov     ecx, offset dword_B07CFC
0xA2598A: call    BSSimpleList_Remove
0xA2598F: mov     eax, off_B14EBC; "sTrackLevelUpPath:GamePlay"
0xA25994: test    eax, eax
0xA25996: jz      short locret_A259A4
0xA25998: cmp     byte ptr [eax], 53h ; 'S'
0xA2599B: jnz     short locret_A259A4
0xA2599D: push    eax
0xA2599E: call    FormHeapFree
0xA259A3: pop     ecx
0xA259A4: retn
