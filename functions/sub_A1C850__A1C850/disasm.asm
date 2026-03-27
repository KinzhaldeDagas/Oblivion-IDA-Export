0xA1C850: push    offset off_B11A6C; "Bip01 Spine1"
0xA1C855: mov     ecx, offset unk_B11D4C
0xA1C85A: call    BSSimpleList_Remove
0xA1C85F: mov     eax, off_B11A70; "sHitStart:HIT"
0xA1C864: test    eax, eax
0xA1C866: jz      short locret_A1C874
0xA1C868: cmp     byte ptr [eax], 53h ; 'S'
0xA1C86B: jnz     short locret_A1C874
0xA1C86D: push    eax
0xA1C86E: call    FormHeapFree
0xA1C873: pop     ecx
0xA1C874: retn
