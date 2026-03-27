0xA26120: push    offset flt_B161B0
0xA26125: mov     ecx, offset dword_B07CFC
0xA2612A: call    BSSimpleList_Remove
0xA2612F: mov     eax, off_B161B4; "fDefaultVoiceVolume:Audio"
0xA26134: test    eax, eax
0xA26136: jz      short locret_A26144
0xA26138: cmp     byte ptr [eax], 53h ; 'S'
0xA2613B: jnz     short locret_A26144
0xA2613D: push    eax
0xA2613E: call    FormHeapFree
0xA26143: pop     ecx
0xA26144: retn
