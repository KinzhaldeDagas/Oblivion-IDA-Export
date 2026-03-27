0xA24280: push    offset rDebugTextColor_Menu
0xA24285: mov     ecx, offset dword_B07CFC
0xA2428A: call    BSSimpleList_Remove
0xA2428F: mov     eax, off_B12DB0; "rDebugTextColor:Menu"
0xA24294: test    eax, eax
0xA24296: jz      short locret_A242A4
0xA24298: cmp     byte ptr [eax], 53h ; 'S'
0xA2429B: jnz     short locret_A242A4
0xA2429D: push    eax
0xA2429E: call    FormHeapFree
0xA242A3: pop     ecx
0xA242A4: retn
