0xA26180: push    offset useSoundDebugInfo
0xA26185: mov     ecx, offset dword_B07CFC
0xA2618A: call    BSSimpleList_Remove
0xA2618F: mov     eax, off_B161C4; "bUseSoundDebugInfo:Audio"
0xA26194: test    eax, eax
0xA26196: jz      short locret_A261A4
0xA26198: cmp     byte ptr [eax], 53h ; 'S'
0xA2619B: jnz     short locret_A261A4
0xA2619D: push    eax
0xA2619E: call    FormHeapFree
0xA261A3: pop     ecx
0xA261A4: retn
