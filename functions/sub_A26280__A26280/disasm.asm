0xA26280: push    offset dword_B16244
0xA26285: mov     ecx, offset dword_B07CFC
0xA2628A: call    BSSimpleList_Remove
0xA2628F: mov     eax, off_B16248; "iCollisionSoundTimeDelta:Audio"
0xA26294: test    eax, eax
0xA26296: jz      short locret_A262A4
0xA26298: cmp     byte ptr [eax], 53h ; 'S'
0xA2629B: jnz     short locret_A262A4
0xA2629D: push    eax
0xA2629E: call    FormHeapFree
0xA262A3: pop     ecx
0xA262A4: retn
