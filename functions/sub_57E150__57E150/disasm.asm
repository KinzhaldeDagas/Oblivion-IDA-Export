0x57E150: cmp     dword ptr ds:0B333C4h, 0
0x57E157: push    edi; a3
0x57E158: mov     edi, ecx
0x57E15A: jz      loc_57E261
0x57E160: cmp     byte ptr [edi+94h], 0
0x57E167: jz      loc_57E261
0x57E16D: mov     eax, ds:0BA9DE4h
0x57E172: mov     ecx, large fs:2Ch
0x57E179: mov     edx, [ecx+eax*4]
0x57E17C: cmp     byte ptr [edx+184h], 0
0x57E183: jnz     loc_57E261
0x57E189: push    ebx; a3
0x57E18A: push    esi; a3
0x57E18B: mov     byte ptr ds:0B3B0A2h, 1
0x57E192: mov     bl, [edi+8]
0x57E195: push    0
0x57E197: call    sub_5AD980
0x57E19C: call    sub_57A440
0x57E1A1: push    0
0x57E1A3: mov     esi, eax
0x57E1A5: call    sub_5AD980
0x57E1AA: add     esp, 8
0x57E1AD: test    esi, esi
0x57E1AF: jz      short loc_57E1C3
0x57E1B1: fld1
0x57E1B3: push    ecx
0x57E1B4: fstp    [esp+10h+a2]; a3
0x57E1B7: mov     ecx, esi; this
0x57E1B9: push    0FA1h; a2
0x57E1BE: call    Tile_SetFloat
0x57E1C3: call    sub_57A2D0
0x57E1C8: push    0
0x57E1CA: mov     esi, eax
0x57E1CC: call    sub_5AD980
0x57E1D1: add     esp, 4
0x57E1D4: test    esi, esi
0x57E1D6: jz      short loc_57E1EA
0x57E1D8: fld1
0x57E1DA: push    ecx
0x57E1DB: fstp    [esp+10h+a2]; a3
0x57E1DE: mov     ecx, esi; this
0x57E1E0: push    0FA1h; a2
0x57E1E5: call    Tile_SetFloat
0x57E1EA: call    sub_57A180
0x57E1EF: push    0
0x57E1F1: mov     esi, eax
0x57E1F3: call    sub_5AD980
0x57E1F8: add     esp, 4
0x57E1FB: test    esi, esi
0x57E1FD: jz      short loc_57E211
0x57E1FF: fld1
0x57E201: push    ecx
0x57E202: fstp    [esp+10h+a2]; a3
0x57E205: mov     ecx, esi; this
0x57E207: push    0FA1h; a2
0x57E20C: call    Tile_SetFloat
0x57E211: call    sub_579F80
0x57E216: push    0
0x57E218: mov     esi, eax
0x57E21A: call    sub_5AD980
0x57E21F: add     esp, 4
0x57E222: test    esi, esi
0x57E224: jz      short loc_57E238
0x57E226: fld1
0x57E228: push    ecx
0x57E229: fstp    [esp+10h+a2]; a3
0x57E22C: mov     ecx, esi; this
0x57E22E: push    0FA1h; a2
0x57E233: call    Tile_SetFloat
0x57E238: call    sub_5C1290
0x57E23D: push    0
0x57E23F: call    sub_5AD980
0x57E244: mov     byte ptr ds:0B3B0A2h, 0
0x57E24B: push    0
0x57E24D: mov     [edi+8], bl
0x57E250: mov     byte ptr [edi+94h], 0
0x57E257: call    sub_5AD980
0x57E25C: add     esp, 8
0x57E25F: pop     esi
0x57E260: pop     ebx
0x57E261: pop     edi
0x57E262: retn
