0x598710: mov     eax, ds:0B33398h
0x598715: push    esi; a3
0x598716: push    1; a3
0x598718: mov     esi, ecx
0x59871A: mov     ecx, [eax+20h]; this
0x59871D: push    5; a2
0x59871F: call    InputGlobals__QueryControlState
0x598724: test    eax, eax
0x598726: mov     eax, ds:0B33398h
0x59872B: jz      short loc_598739
0x59872D: mov     ecx, [eax+20h]
0x598730: cmp     byte ptr [ecx+1B83h], 1Ch
0x598737: jnz     short loc_59875B
0x598739: mov     ecx, [eax+20h]; this
0x59873C: push    1; a3
0x59873E: push    0Fh; a2
0x598740: call    InputGlobals__QueryControlState
0x598745: test    eax, eax
0x598747: jz      short loc_59877A
0x598749: mov     edx, ds:0B33398h
0x59874F: mov     eax, [edx+20h]
0x598752: cmp     byte ptr [eax+1B8Dh], 1Ch
0x598759: jz      short loc_59877A
0x59875B: push    3F0h
0x598760: call    InterfaceManager_MenuModeHasFocus
0x598765: add     esp, 4
0x598768: test    al, al
0x59876A: jz      short loc_59877A
0x59876C: call    sub_579BC0
0x598771: test    al, al
0x598773: jnz     short loc_59877A
0x598775: call    sub_5982A0
0x59877A: cmp     byte ptr [esi+61h], 0
0x59877E: jz      short loc_59879F
0x598780: cmp     byte ptr [esi+64h], 0
0x598784: jz      short loc_59879F
0x598786: fld     dword ptr ds:0A379B4h
0x59878C: push    ecx
0x59878D: mov     ecx, [esi+4]; this
0x598790: fstp    [esp+8+a2]; a3
0x598793: push    0FC7h; a2
0x598798: call    Tile_SetFloat
0x59879D: pop     esi
0x59879E: retn
0x59879F: fld1
0x5987A1: push    ecx
0x5987A2: mov     ecx, [esi+4]; this
0x5987A5: fstp    [esp+8+a2]; a3
0x5987A8: push    0FC7h; a2
0x5987AD: call    Tile_SetFloat
0x5987B2: pop     esi
0x5987B3: retn
