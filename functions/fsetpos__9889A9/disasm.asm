0x9889A9: push    esi
0x9889AA: xor     esi, esi
0x9889AC: cmp     [esp+4+File], esi
0x9889B0: jnz     short loc_9889CF
0x9889B2: call    __errno
0x9889B7: push    esi
0x9889B8: push    esi
0x9889B9: push    esi
0x9889BA: push    esi
0x9889BB: push    esi
0x9889BC: mov     dword ptr [eax], 16h
0x9889C2: call    __invalid_parameter
0x9889C7: add     esp, 14h
0x9889CA: or      eax, 0FFFFFFFFh
0x9889CD: pop     esi
0x9889CE: retn
0x9889CF: mov     eax, [esp+4+Pos]
0x9889D3: cmp     eax, esi
0x9889D5: jz      short loc_9889B2
0x9889D7: push    esi; Origin
0x9889D8: push    dword ptr [eax+4]
0x9889DB: push    dword ptr [eax]; Offset
0x9889DD: push    [esp+10h+File]; File
0x9889E1: call    __fseeki64
0x9889E6: add     esp, 10h
0x9889E9: pop     esi
0x9889EA: retn
