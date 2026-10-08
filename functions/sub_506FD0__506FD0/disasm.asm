0x506FD0: cmp     byte ptr ds:0B125E8h, 0; SpeedTree leaves-enabled query: byte_B125E8 && singleton +0x20 && singleton +0x21.
0x506FD7: jz      short loc_506FFF
0x506FD9: push    1; createIfMissing
0x506FDB: call    BSTreeManager_GetInstance; Returns SpeedTree singleton dword_B39E04, creating it on demand when caller passes true.
0x506FE0: add     esp, 4
0x506FE3: cmp     byte ptr [eax+20h], 0
0x506FE7: jz      short loc_506FFF
0x506FE9: push    1; createIfMissing
0x506FEB: call    BSTreeManager_GetInstance; Returns SpeedTree singleton dword_B39E04, creating it on demand when caller passes true.
0x506FF0: add     esp, 4
0x506FF3: cmp     byte ptr [eax+21h], 0
0x506FF7: jz      short loc_506FFF
0x506FF9: mov     eax, 1
0x506FFE: retn
0x506FFF: xor     eax, eax
0x507001: retn
