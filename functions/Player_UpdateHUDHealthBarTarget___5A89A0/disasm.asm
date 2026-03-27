0x5A89A0: sub     esp, 10h
0x5A89A3: cmp     byte ptr ds:0B14E90h, 0
0x5A89AA: jnz     loc_5A8B17
0x5A89B0: push    esi
0x5A89B1: mov     esi, [esp+14h+arg_0]
0x5A89B5: test    esi, esi
0x5A89B7: jz      short loc_5A89CF
0x5A89B9: mov     eax, [esi]
0x5A89BB: mov     edx, [eax+198h]
0x5A89C1: push    0
0x5A89C3: mov     ecx, esi
0x5A89C5: call    edx
0x5A89C7: test    al, al
0x5A89C9: jnz     loc_5A8B16
0x5A89CF: cmp     ds:0B3B364h, esi
0x5A89D5: jz      loc_5A8B0A
0x5A89DB: test    esi, esi
0x5A89DD: mov     ds:0B3B364h, esi
0x5A89E3: jz      loc_5A8B0A
0x5A89E9: push    0; a2
0x5A89EB: mov     ecx, esi; this
0x5A89ED: call    Actor_GetActorBaseForm
0x5A89F2: mov     edx, [eax]
0x5A89F4: mov     ecx, eax
0x5A89F6: mov     eax, [edx+128h]
0x5A89FC: push    8
0x5A89FE: call    eax
0x5A8A00: mov     ecx, ds:0B3B364h
0x5A8A06: mov     edx, [ecx]
0x5A8A08: mov     [esp+14h+var_10], eax
0x5A8A0C: fild    [esp+14h+var_10]
0x5A8A10: mov     eax, [edx+284h]
0x5A8A16: push    8
0x5A8A18: fstp    [esp+18h+var_C]
0x5A8A1C: call    eax
0x5A8A1E: mov     ecx, ds:0B3B358h
0x5A8A24: push    0; int
0x5A8A26: push    offset ??_R0?AVTile3D@@@8; struct TypeDescriptor *
0x5A8A2B: mov     [esp+1Ch+var_10], eax
0x5A8A2F: fild    [esp+1Ch+var_10]
0x5A8A33: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5A8A38: push    0; int
0x5A8A3A: push    ecx; void *
0x5A8A3B: fstp    [esp+28h+var_8]
0x5A8A3F: call    OblivionDynamicCast
0x5A8A44: mov     esi, eax
0x5A8A46: mov     eax, [esi+44h]
0x5A8A49: add     esp, 14h
0x5A8A4C: test    eax, eax
0x5A8A4E: jnz     short loc_5A8A73
0x5A8A50: mov     ecx, ds:0B3B358h
0x5A8A56: push    0FECh
0x5A8A5B: call    sub_588C10
0x5A8A60: push    eax
0x5A8A61: mov     ecx, esi
0x5A8A63: call    sub_590740
0x5A8A68: mov     eax, [esi+44h]
0x5A8A6B: test    eax, eax
0x5A8A6D: jz      loc_5A8B16
0x5A8A73: fld     dword ptr [eax+30h]
0x5A8A76: fstp    [esp+14h+var_4]
0x5A8A7A: fldz
0x5A8A7C: fst     [esp+14h+var_10]
0x5A8A80: fld     [esp+14h+var_C]
0x5A8A84: fcom    st(1)
0x5A8A86: fnstsw  ax
0x5A8A88: fstp    st(1)
0x5A8A8A: test    ah, 41h
0x5A8A8D: jnz     short loc_5A8A99
0x5A8A8F: fdivr   [esp+14h+var_8]
0x5A8A93: fstp    [esp+14h+var_10]
0x5A8A97: jmp     short loc_5A8A9B
0x5A8A99: fstp    st
0x5A8A9B: fld     [esp+14h+var_4]
0x5A8A9F: fld     st
0x5A8AA1: fld     [esp+14h+var_10]
0x5A8AA5: fmul    st, st(1)
0x5A8AA7: fsubp   st(1), st
0x5A8AA9: fstp    [esp+14h+var_10]
0x5A8AAD: fld     [esp+14h+var_10]
0x5A8AB1: fcomp   st(1)
0x5A8AB3: fnstsw  ax
0x5A8AB5: test    ah, 41h
0x5A8AB8: jnz     short loc_5A8AC0
0x5A8ABA: fstp    [esp+14h+var_10]
0x5A8ABE: jmp     short loc_5A8AC2
0x5A8AC0: fstp    st
0x5A8AC2: mov     ecx, ds:0B3B358h
0x5A8AC8: fld     [esp+14h+var_10]
0x5A8ACC: fstp    dword ptr [ecx+58h]
0x5A8ACF: sub     esp, 8
0x5A8AD2: fld     dword ptr ds:0B140C0h
0x5A8AD8: fstp    [esp+1Ch+var_18]; float
0x5A8ADC: fld     dword ptr ds:0A40098h
0x5A8AE2: fstp    [esp+1Ch+var_1C]; float
0x5A8AE5: push    0FB6h
0x5A8AEA: call    Tile_GetFloat
0x5A8AEF: push    ecx
0x5A8AF0: mov     ecx, ds:0B3B358h; int
0x5A8AF6: fstp    [esp+20h+var_20]; float
0x5A8AF9: push    0FB6h; int
0x5A8AFE: call    sub_589980
0x5A8B03: mov     byte ptr ds:0B3B362h, 1
0x5A8B0A: fld     dword ptr ds:0B37120h
0x5A8B10: fstp    dword ptr ds:0B3B35Ch
0x5A8B16: pop     esi
0x5A8B17: add     esp, 10h
0x5A8B1A: retn
