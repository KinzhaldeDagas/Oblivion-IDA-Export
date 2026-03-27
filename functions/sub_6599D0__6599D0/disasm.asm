0x6599D0: push    ecx
0x6599D1: cmp     dword ptr [ecx+58h], 0
0x6599D5: jz      short loc_6599F3
0x6599D7: mov     ecx, [ecx+58h]
0x6599DA: mov     eax, [ecx]
0x6599DC: mov     edx, [eax+2Ch]
0x6599DF: call    edx
0x6599E1: test    eax, eax
0x6599E3: mov     [esp+4+var_4], eax
0x6599E6: fild    [esp+4+var_4]
0x6599E9: jge     short loc_6599F9
0x6599EB: fadd    dword ptr ds:0A2FC78h
0x6599F1: pop     ecx
0x6599F2: retn
0x6599F3: fld     dword ptr ds:0A30634h
0x6599F9: pop     ecx
0x6599FA: retn
