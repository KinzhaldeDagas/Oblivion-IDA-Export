0xA1C0A0: push    offset flt_B09E28
0xA1C0A5: mov     ecx, offset dword_B07CFC
0xA1C0AA: call    BSSimpleList_Remove
0xA1C0AF: mov     eax, off_B09E2C; "fQuestScriptDelayTime:MAIN"
0xA1C0B4: test    eax, eax
0xA1C0B6: jz      short locret_A1C0C4
0xA1C0B8: cmp     byte ptr [eax], 53h ; 'S'
0xA1C0BB: jnz     short locret_A1C0C4
0xA1C0BD: push    eax
0xA1C0BE: call    FormHeapFree
0xA1C0C3: pop     ecx
0xA1C0C4: retn
