0xA1C820: push    offset off_B11A64; "Bip01 Spine2"
0xA1C825: mov     ecx, offset unk_B11D4C
0xA1C82A: call    BSSimpleList_Remove
0xA1C82F: mov     eax, off_B11A68; "sHitSpot:HIT"
0xA1C834: test    eax, eax
0xA1C836: jz      short locret_A1C844
0xA1C838: cmp     byte ptr [eax], 53h ; 'S'
0xA1C83B: jnz     short locret_A1C844
0xA1C83D: push    eax
0xA1C83E: call    FormHeapFree
0xA1C843: pop     ecx
0xA1C844: retn
