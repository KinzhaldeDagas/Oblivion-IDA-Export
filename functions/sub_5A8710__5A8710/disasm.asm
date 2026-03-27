0x5A8710: push    ecx; a3
0x5A8711: cmp     dword ptr ds:0B3B350h, 0
0x5A8718: jz      loc_5A899B
0x5A871E: cmp     dword ptr ds:0B3B354h, 0
0x5A8725: jz      loc_5A899B
0x5A872B: call    sub_578FE0
0x5A8730: cmp     eax, 414h
0x5A8735: push    ecx
0x5A8736: mov     ecx, ds:0B3B350h; this
0x5A873C: jnz     short loc_5A8767
0x5A873E: fld1
0x5A8740: fstp    [esp+8+a2]; a3
0x5A8743: push    0FA1h; a2
0x5A8748: call    Tile_SetFloat
0x5A874D: fld1
0x5A874F: push    ecx
0x5A8750: fstp    [esp+8+a2]; a3
0x5A8753: mov     ecx, ds:0B3B354h; this
0x5A8759: push    0FA1h; a2
0x5A875E: call    Tile_SetFloat
0x5A8763: fld1
0x5A8765: jmp     short loc_5A87AA
0x5A8767: xor     eax, eax
0x5A8769: cmp     ds:0B13210h, al
0x5A876F: setnz   al
0x5A8772: add     eax, 1
0x5A8775: mov     [esp+8+var_4], eax; a3
0x5A8779: fild    [esp+8+var_4]
0x5A877D: fstp    [esp+8+a2]; a3
0x5A8780: push    0FA1h; a2
0x5A8785: call    Tile_SetFloat
0x5A878A: fld     dword ptr ds:0A379B4h
0x5A8790: push    ecx
0x5A8791: mov     ecx, ds:0B3B354h; this
0x5A8797: fstp    [esp+8+a2]; a3
0x5A879A: push    0FA1h; a2
0x5A879F: call    Tile_SetFloat
0x5A87A4: fld     dword ptr ds:0A379B4h
0x5A87AA: push    ecx
0x5A87AB: mov     ecx, ds:0B3B358h; this
0x5A87B1: fstp    [esp+8+a2]; a3
0x5A87B4: push    0FA1h; a2
0x5A87B9: call    Tile_SetFloat
0x5A87BE: mov     ecx, ds:0B3B350h
0x5A87C4: push    0FB0h
0x5A87C9: call    sub_5894A0
0x5A87CE: fcomp   qword ptr ds:0A3DDD8h
0x5A87D4: fnstsw  ax
0x5A87D6: test    ah, 44h
0x5A87D9: jp      short loc_5A87DF
0x5A87DB: mov     cl, 1
0x5A87DD: jmp     short loc_5A87E1
0x5A87DF: xor     cl, cl
0x5A87E1: mov     eax, [esp+4+arg_0]
0x5A87E5: cmp     eax, 2
0x5A87E8: jnz     short loc_5A87EE
0x5A87EA: mov     al, cl
0x5A87EC: jmp     short loc_5A87F3
0x5A87EE: test    eax, eax
0x5A87F0: setnle  al
0x5A87F3: test    cl, cl
0x5A87F5: jnz     loc_5A88D5
0x5A87FB: test    al, al
0x5A87FD: jz      loc_5A899B
0x5A8803: mov     ecx, ds:0B333C4h
0x5A8809: cmp     byte ptr [ecx+5C0h], 0
0x5A8810: jnz     loc_5A899B
0x5A8816: call    Actor_IsSneaking
0x5A881B: fld     dword ptr ds:0B140C4h
0x5A8821: mov     ecx, ds:0B3B354h
0x5A8827: sub     esp, 8
0x5A882A: test    al, al
0x5A882C: fstp    [esp+0Ch+a2]; float
0x5A8830: jz      short loc_5A8862
0x5A8832: fld     dword ptr ds:0B140B8h
0x5A8838: fstp    [esp+0Ch+var_C]; float
0x5A883B: push    0FB6h
0x5A8840: call    Tile_GetFloat
0x5A8845: push    ecx
0x5A8846: mov     ecx, ds:0B3B354h; int
0x5A884C: fstp    [esp+10h+var_10]; float
0x5A884F: push    0FB6h; int
0x5A8854: call    sub_589980
0x5A8859: mov     byte ptr ds:0B3B361h, 1
0x5A8860: jmp     short loc_5A888C
0x5A8862: fldz
0x5A8864: fstp    [esp+0Ch+var_C]; float
0x5A8867: push    0FB6h
0x5A886C: call    Tile_GetFloat
0x5A8871: push    ecx
0x5A8872: mov     ecx, ds:0B3B354h; int
0x5A8878: fstp    [esp+10h+var_10]; float
0x5A887B: push    0FB6h; int
0x5A8880: call    sub_589980
0x5A8885: mov     byte ptr ds:0B3B361h, 0
0x5A888C: cmp     byte ptr ds:0B13210h, 0
0x5A8893: jz      loc_5A899B
0x5A8899: fld     dword ptr ds:0B140BCh
0x5A889F: mov     ecx, ds:0B3B350h
0x5A88A5: sub     esp, 8
0x5A88A8: fstp    [esp+0Ch+a2]; float
0x5A88AC: fld     dword ptr ds:0A40098h
0x5A88B2: fstp    [esp+0Ch+var_C]; float
0x5A88B5: push    0FB0h
0x5A88BA: call    Tile_GetFloat
0x5A88BF: push    ecx
0x5A88C0: mov     ecx, ds:0B3B350h; int
0x5A88C6: fstp    [esp+10h+var_10]; float
0x5A88C9: push    0FB0h; int
0x5A88CE: call    sub_589980
0x5A88D3: pop     ecx
0x5A88D4: retn
0x5A88D5: test    al, al
0x5A88D7: jnz     loc_5A899B
0x5A88DD: cmp     ds:0B13210h, al
0x5A88E3: jz      short loc_5A891B
0x5A88E5: fld     dword ptr ds:0B140BCh
0x5A88EB: mov     ecx, ds:0B3B350h
0x5A88F1: sub     esp, 8
0x5A88F4: fstp    [esp+0Ch+a2]; float
0x5A88F8: fldz
0x5A88FA: fstp    [esp+0Ch+var_C]; float
0x5A88FD: push    0FB0h
0x5A8902: call    Tile_GetFloat
0x5A8907: push    ecx
0x5A8908: mov     ecx, ds:0B3B350h; int
0x5A890E: fstp    [esp+10h+var_10]; float
0x5A8911: push    0FB0h; int
0x5A8916: call    sub_589980
0x5A891B: fld     dword ptr ds:0B140C4h
0x5A8921: mov     ecx, ds:0B3B354h
0x5A8927: sub     esp, 8
0x5A892A: fstp    [esp+0Ch+a2]; float
0x5A892E: fldz
0x5A8930: fstp    [esp+0Ch+var_C]; float
0x5A8933: push    0FB6h
0x5A8938: call    Tile_GetFloat
0x5A893D: push    ecx
0x5A893E: mov     ecx, ds:0B3B354h; int
0x5A8944: fstp    [esp+10h+var_10]; float
0x5A8947: push    0FB6h; int
0x5A894C: call    sub_589980
0x5A8951: mov     ecx, ds:0B3B358h
0x5A8957: test    ecx, ecx
0x5A8959: mov     byte ptr ds:0B3B361h, 1
0x5A8960: jz      short loc_5A899B
0x5A8962: cmp     byte ptr ds:0B14E90h, 0
0x5A8969: jnz     short loc_5A899B
0x5A896B: fld     dword ptr ds:0B140C0h
0x5A8971: sub     esp, 8
0x5A8974: fstp    [esp+0Ch+a2]; float
0x5A8978: fldz
0x5A897A: fstp    [esp+0Ch+var_C]; float
0x5A897D: push    0FB6h
0x5A8982: call    Tile_GetFloat
0x5A8987: push    ecx
0x5A8988: mov     ecx, ds:0B3B358h; int
0x5A898E: fstp    [esp+10h+var_10]; float
0x5A8991: push    0FB6h; int
0x5A8996: call    sub_589980
0x5A899B: pop     ecx
0x5A899C: retn
