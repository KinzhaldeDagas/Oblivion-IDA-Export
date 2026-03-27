0x57D480: fld     dword ptr ds:0A3D8F0h
0x57D486: push    esi; a3
0x57D487: push    edi; a3
0x57D488: push    ecx
0x57D489: fstp    [esp+0Ch+a2]; float
0x57D48C: push    3; int
0x57D48E: mov     esi, ecx
0x57D490: call    sub_57B950
0x57D495: fld     dword ptr ds:0A31E2Ch
0x57D49B: add     esp, 4
0x57D49E: fstp    [esp+0Ch+a2]; float
0x57D4A1: push    3; int
0x57D4A3: call    sub_57B950
0x57D4A8: call    sub_5A6B00
0x57D4AD: push    1
0x57D4AF: push    1
0x57D4B1: mov     edi, eax
0x57D4B3: call    sub_5A6040
0x57D4B8: add     esp, 10h
0x57D4BB: test    edi, edi
0x57D4BD: jz      short loc_57D4D1
0x57D4BF: fld1
0x57D4C1: push    ecx
0x57D4C2: fstp    [esp+0Ch+a2]; a3
0x57D4C5: mov     ecx, edi; this
0x57D4C7: push    0FA1h; a2
0x57D4CC: call    Tile_SetFloat
0x57D4D1: fld     dword ptr ds:0A2FE7Ch
0x57D4D7: push    ecx
0x57D4D8: fstp    [esp+0Ch+a2]; float
0x57D4DB: push    3; int
0x57D4DD: call    sub_57B950
0x57D4E2: fld1
0x57D4E4: mov     eax, [esi+1Ch]
0x57D4E7: fstp    [esp+10h+a2]; a3
0x57D4EB: mov     eax, [eax+24h]
0x57D4EE: or      word ptr [eax+18h], 1
0x57D4F3: mov     ecx, [esi+1Ch]; this
0x57D4F6: add     esp, 4
0x57D4F9: push    0FA1h; a2
0x57D4FE: call    Tile_SetFloat
0x57D503: mov     ecx, [esi+1Ch]
0x57D506: call    sub_58E870
0x57D50B: fld     dword ptr ds:0A379B4h
0x57D511: push    ecx
0x57D512: mov     ecx, [esi+68h]; this
0x57D515: fstp    [esp+0Ch+a2]; a3
0x57D518: push    0FAEh; a2
0x57D51D: mov     byte ptr [esi+8], 1
0x57D521: call    Tile_SetFloat
0x57D526: pop     edi
0x57D527: pop     esi
0x57D528: retn
