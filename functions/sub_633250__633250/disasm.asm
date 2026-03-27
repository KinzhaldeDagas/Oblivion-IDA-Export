0x633250: push    ebx
0x633251: push    esi
0x633252: mov     esi, ecx
0x633254: mov     eax, [esi+2BCh]
0x63325A: xor     ebx, ebx
0x63325C: cmp     eax, ebx
0x63325E: jnz     short loc_63328E
0x633260: fld1
0x633262: fcom    dword ptr [esi+2C0h]
0x633268: fnstsw  ax
0x63326A: test    ah, 41h
0x63326D: jp      short loc_633278
0x63326F: pop     esi
0x633270: fstp    st
0x633272: xor     al, al
0x633274: pop     ebx
0x633275: retn    4
0x633278: mov     ecx, [esp+8+a1]; a1
0x63327C: fstp    dword ptr [esi+2C0h]
0x633282: call    sub_5EE1B0
0x633287: pop     esi
0x633288: xor     al, al
0x63328A: pop     ebx
0x63328B: retn    4
0x63328E: fld     dword ptr ds:0B33E9Ch
0x633294: push    edi
0x633295: mov     edi, [esp+0Ch+a1]
0x633299: cmp     edi, ds:0B333C4h
0x63329F: jnz     short loc_6332A9
0x6332A1: fdiv    dword ptr ds:0B367B0h
0x6332A7: jmp     short loc_6332AF
0x6332A9: fdiv    dword ptr ds:0B367A8h
0x6332AF: cmp     eax, 1
0x6332B2: fstp    [esp+0Ch+a1]
0x6332B6: jz      loc_633405
0x6332BC: cmp     eax, 3
0x6332BF: jz      loc_633405
0x6332C5: cmp     eax, 2
0x6332C8: jnz     short loc_63330A
0x6332CA: fld     dword ptr [esi+2C0h]
0x6332D0: fsub    [esp+0Ch+a1]
0x6332D4: fstp    [esp+0Ch+a1]
0x6332D8: fld     [esp+0Ch+a1]
0x6332DC: fst     dword ptr [esi+2C0h]
0x6332E2: fldz
0x6332E4: fcom    st(1)
0x6332E6: fnstsw  ax
0x6332E8: fstp    st(1)
0x6332EA: test    ah, 41h
0x6332ED: jnz     loc_633438
0x6332F3: fstp    dword ptr [esi+2C0h]
0x6332F9: mov     [esi+2C4h], ebx
0x6332FF: mov     [esi+2BCh], ebx
0x633305: jmp     loc_63343A
0x63330A: cmp     eax, 4
0x63330D: jnz     short loc_633388
0x63330F: fld     dword ptr [esi+2C0h]
0x633315: fsub    [esp+0Ch+a1]
0x633319: fstp    [esp+0Ch+a1]
0x63331D: fld     [esp+0Ch+a1]
0x633321: fst     dword ptr [esi+2C0h]
0x633327: fldz
0x633329: fcom    st(1)
0x63332B: fnstsw  ax
0x63332D: fstp    st(1)
0x63332F: test    ah, 41h
0x633332: jnz     loc_633438
0x633338: mov     ecx, [esi+2C4h]
0x63333E: fstp    dword ptr [esi+2C0h]
0x633344: cmp     ecx, ebx
0x633346: mov     [esi+2C4h], ebx
0x63334C: jz      short loc_633358
0x63334E: push    1
0x633350: push    ebx
0x633351: push    ebx
0x633352: push    edi
0x633353: call    ActivateRef
0x633358: cmp     edi, ds:0B333C4h
0x63335E: jz      short loc_633379
0x633360: mov     ecx, edi
0x633362: call    MobileObject_GetProcessLevel
0x633367: test    eax, eax
0x633369: jz      short loc_633379
0x63336B: pop     edi
0x63336C: mov     [esi+2BCh], ebx
0x633372: pop     esi
0x633373: mov     al, 1
0x633375: pop     ebx
0x633376: retn    4
0x633379: push    1; a3
0x63337B: push    edi; a2
0x63337C: mov     ecx, esi; this
0x63337E: call    sub_628630
0x633383: jmp     loc_63343A
0x633388: cmp     eax, 6
0x63338B: jnz     short loc_6333CC
0x63338D: fld     dword ptr [esi+2C0h]
0x633393: fsub    [esp+0Ch+a1]
0x633397: fstp    [esp+0Ch+a1]
0x63339B: fld     [esp+0Ch+a1]
0x63339F: fst     dword ptr [esi+2C0h]
0x6333A5: fldz
0x6333A7: fcom    st(1)
0x6333A9: fnstsw  ax
0x6333AB: fstp    st(1)
0x6333AD: test    ah, 41h
0x6333B0: jnz     loc_633438
0x6333B6: fstp    dword ptr [esi+2C0h]
0x6333BC: mov     eax, [edi]
0x6333BE: mov     edx, [eax+8Ch]
0x6333C4: push    1
0x6333C6: mov     ecx, edi
0x6333C8: call    edx
0x6333CA: jmp     short loc_63343A
0x6333CC: cmp     eax, 5
0x6333CF: jnz     short loc_63343A
0x6333D1: fld     dword ptr [esi+2C0h]
0x6333D7: fsub    [esp+0Ch+a1]
0x6333DB: fstp    [esp+0Ch+a1]
0x6333DF: fld     [esp+0Ch+a1]
0x6333E3: fst     dword ptr [esi+2C0h]
0x6333E9: fldz
0x6333EB: fcom    st(1)
0x6333ED: fnstsw  ax
0x6333EF: fstp    st(1)
0x6333F1: test    ah, 41h
0x6333F4: jnz     short loc_633438
0x6333F6: mov     ecx, edi
0x6333F8: fstp    dword ptr [esi+2C0h]
0x6333FE: call    sub_4E4690
0x633403: jmp     short loc_63343A
0x633405: fld     [esp+0Ch+a1]
0x633409: fadd    dword ptr [esi+2C0h]
0x63340F: fstp    [esp+0Ch+a1]
0x633413: fld     [esp+0Ch+a1]
0x633417: fst     dword ptr [esi+2C0h]
0x63341D: fld1
0x63341F: fcom    st(1)
0x633421: fnstsw  ax
0x633423: fstp    st(1)
0x633425: test    ah, 5
0x633428: jp      short loc_633438
0x63342A: fstp    dword ptr [esi+2C0h]
0x633430: mov     [esi+2BCh], ebx
0x633436: jmp     short loc_63343A
0x633438: fstp    st
0x63343A: mov     ecx, edi; a1
0x63343C: call    sub_5EE1B0
0x633441: mov     esi, [esi+2BCh]
0x633447: add     esi, 0FFFFFFFDh
0x63344A: pop     edi
0x63344B: cmp     esi, 3
0x63344E: pop     esi
0x63344F: setbe   al
0x633452: pop     ebx
0x633453: retn    4
