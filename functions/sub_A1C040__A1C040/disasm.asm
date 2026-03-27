0xA1C040: push    offset bCheckOffsetOnLoad
0xA1C045: mov     ecx, offset dword_B07CFC
0xA1C04A: call    BSSimpleList_Remove
0xA1C04F: mov     eax, off_B09DBC; "bCheckCellOffsetsOnInit:General"
0xA1C054: test    eax, eax
0xA1C056: jz      short locret_A1C064
0xA1C058: cmp     byte ptr [eax], 53h ; 'S'
0xA1C05B: jnz     short locret_A1C064
0xA1C05D: push    eax
0xA1C05E: call    FormHeapFree
0xA1C063: pop     ecx
0xA1C064: retn
