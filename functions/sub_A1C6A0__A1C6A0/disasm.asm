0xA1C6A0: push    offset fGetUpTime
0xA1C6A5: mov     ecx, offset unk_B11D4C
0xA1C6AA: call    BSSimpleList_Remove
0xA1C6AF: mov     eax, off_B11A28; "fGetUpTime:HIT"
0xA1C6B4: test    eax, eax
0xA1C6B6: jz      short locret_A1C6C4
0xA1C6B8: cmp     byte ptr [eax], 53h ; 'S'
0xA1C6BB: jnz     short locret_A1C6C4
0xA1C6BD: push    eax
0xA1C6BE: call    FormHeapFree
0xA1C6C3: pop     ecx
0xA1C6C4: retn
