0xA26240: push    offset dword_B161E0
0xA26245: mov     ecx, offset dword_B07CFC
0xA2624A: call    BSSimpleList_Remove
0xA2624F: mov     eax, off_B161E4; "fDBVoiceAttenuationIn2D:Audio"
0xA26254: test    eax, eax
0xA26256: jz      short locret_A26264
0xA26258: cmp     byte ptr [eax], 53h ; 'S'
0xA2625B: jnz     short locret_A26264
0xA2625D: push    eax
0xA2625E: call    FormHeapFree
0xA26263: pop     ecx
0xA26264: retn
