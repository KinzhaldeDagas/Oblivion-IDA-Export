0x66C580: mov     al, [esp+a1]
0x66C584: push    ebx
0x66C585: push    esi
0x66C586: mov     esi, ecx
0x66C588: cmp     [esi+588h], al
0x66C58E: setz    bl
0x66C591: test    al, al
0x66C593: setz    al
0x66C596: test    al, al
0x66C598: mov     [esi+588h], al
0x66C59E: jz      short loc_66C5BC
0x66C5A0: mov     eax, [esi]
0x66C5A2: mov     edx, [eax+198h]
0x66C5A8: push    0
0x66C5AA: call    edx
0x66C5AC: test    al, al
0x66C5AE: jz      short loc_66C5BC
0x66C5B0: fld     dword ptr ds:0B36B80h
0x66C5B6: fstp    dword ptr ds:0B3BB24h
0x66C5BC: cmp     byte ptr ds:0B3BB04h, 0
0x66C5C3: jnz     short loc_66C5F0
0x66C5C5: cmp     dword ptr [esi+5D0h], 0
0x66C5CC: jz      short loc_66C5F0
0x66C5CE: push    0
0x66C5D0: mov     ecx, esi
0x66C5D2: mov     byte ptr ds:0B14E4Dh, 1
0x66C5D9: call    sub_66B710
0x66C5DE: cmp     byte ptr [esi+588h], 0
0x66C5E5: mov     ecx, esi; a1
0x66C5E7: setz    al
0x66C5EA: push    eax; a3
0x66C5EB: call    ToggleBody
0x66C5F0: pop     esi
0x66C5F1: mov     al, bl
0x66C5F3: pop     ebx
0x66C5F4: retn    4
