0xA1C9A0: push    offset off_B11AA4; "0.5, 0.7"
0xA1C9A5: mov     ecx, offset unk_B11D4C
0xA1C9AA: call    BSSimpleList_Remove
0xA1C9AF: mov     eax, off_B11AA8; "sSpine2:HIT"
0xA1C9B4: test    eax, eax
0xA1C9B6: jz      short locret_A1C9C4
0xA1C9B8: cmp     byte ptr [eax], 53h ; 'S'
0xA1C9BB: jnz     short locret_A1C9C4
0xA1C9BD: push    eax
0xA1C9BE: call    FormHeapFree
0xA1C9C3: pop     ecx
0xA1C9C4: retn
