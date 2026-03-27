0xA1CA60: push    offset off_B11AC4; "Bip01 Head"
0xA1CA65: mov     ecx, offset unk_B11D4C
0xA1CA6A: call    BSSimpleList_Remove
0xA1CA6F: mov     eax, off_B11AC8; "sHitSpot:QUADHIT"
0xA1CA74: test    eax, eax
0xA1CA76: jz      short locret_A1CA84
0xA1CA78: cmp     byte ptr [eax], 53h ; 'S'
0xA1CA7B: jnz     short locret_A1CA84
0xA1CA7D: push    eax
0xA1CA7E: call    FormHeapFree
0xA1CA83: pop     ecx
0xA1CA84: retn
