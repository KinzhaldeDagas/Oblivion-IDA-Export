0xA26400: push    offset dword_B16284
0xA26405: mov     ecx, offset dword_B07CFC
0xA2640A: call    BSSimpleList_Remove
0xA2640F: mov     eax, off_B16288; "fSkinLargeMassMin:Audio"
0xA26414: test    eax, eax
0xA26416: jz      short locret_A26424
0xA26418: cmp     byte ptr [eax], 53h ; 'S'
0xA2641B: jnz     short locret_A26424
0xA2641D: push    eax
0xA2641E: call    FormHeapFree
0xA26423: pop     ecx
0xA26424: retn
