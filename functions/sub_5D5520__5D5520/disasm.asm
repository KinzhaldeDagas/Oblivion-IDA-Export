0x5D5520: sub     esp, 108h
0x5D5526: mov     eax, ds:0B30AACh
0x5D552B: xor     eax, esp
0x5D552D: mov     [esp+108h+var_4], eax
0x5D5534: push    esi; a3
0x5D5535: mov     esi, ecx
0x5D5537: cmp     dword ptr [esi+2Ch], 0
0x5D553B: jz      loc_5D55D0
0x5D5541: fld     dword ptr ds:0A379B4h
0x5D5547: push    ecx
0x5D5548: mov     ecx, [esi+68h]; this
0x5D554B: fstp    [esp+110h+a2]; a3
0x5D554E: push    0FA1h; a2
0x5D5553: call    Tile_SetFloat
0x5D5558: mov     eax, ds:0B333C4h
0x5D555D: mov     ecx, [esi+2Ch]
0x5D5560: push    eax
0x5D5561: call    sub_4851B0
0x5D5566: push    eax
0x5D5567: push    offset aIcons; "Icons"
0x5D556C: lea     ecx, [esp+114h+var_108]
0x5D5570: push    offset aSS_2; "%s\\%s"
0x5D5575: push    ecx
0x5D5576: call    __sprintf
0x5D557B: mov     ecx, [esi+2Ch]
0x5D557E: add     esp, 10h
0x5D5581: call    sub_488DF0
0x5D5586: mov     ecx, [esi+5Ch]
0x5D5589: push    eax
0x5D558A: push    0FAEh
0x5D558F: call    Tile_SetString
0x5D5594: mov     ecx, [esi+5Ch]
0x5D5597: lea     edx, [esp+10Ch+var_108]
0x5D559B: push    edx
0x5D559C: push    0FAFh
0x5D55A1: call    Tile_SetString
0x5D55A6: mov     ecx, [esi+68h]
0x5D55A9: lea     eax, [esp+10Ch+var_108]
0x5D55AD: push    eax
0x5D55AE: push    0FE6h
0x5D55B3: call    Tile_SetString
0x5D55B8: mov     ecx, [esi+5Ch]
0x5D55BB: push    0; float
0x5D55BD: call    sub_58FBA0
0x5D55C2: mov     ecx, esi
0x5D55C4: call    sub_5D4BE0
0x5D55C9: mov     ecx, esi
0x5D55CB: call    sub_5D47B0
0x5D55D0: mov     ecx, [esi+74h]
0x5D55D3: call    sub_57D2F0
0x5D55D8: test    al, al
0x5D55DA: jz      short loc_5D55FA
0x5D55DC: mov     ecx, [esi+74h]
0x5D55DF: call    sub_57DDE0
0x5D55E4: mov     ecx, [esi+74h]
0x5D55E7: call    sub_580120
0x5D55EC: mov     ecx, [esi+30h]
0x5D55EF: push    eax
0x5D55F0: push    0FDEh
0x5D55F5: call    Tile_SetString
0x5D55FA: mov     ecx, [esp+10Ch+var_4]
0x5D5601: pop     esi
0x5D5602: xor     ecx, esp
0x5D5604: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5D5609: add     esp, 108h
0x5D560F: retn
