0x5CE570: push    ecx
0x5CE571: push    esi
0x5CE572: push    0
0x5CE574: push    3E9h
0x5CE579: mov     esi, ecx
0x5CE57B: call    sub_5790E0
0x5CE580: add     esp, 8
0x5CE583: test    al, al
0x5CE585: jnz     short loc_5CE5AD
0x5CE587: mov     ecx, [esi+4]
0x5CE58A: push    0FA1h
0x5CE58F: call    Tile_GetFloat
0x5CE594: fcomp   dword ptr ds:0A2F948h
0x5CE59A: fnstsw  ax
0x5CE59C: test    ah, 44h
0x5CE59F: jp      short loc_5CE5AD
0x5CE5A1: push    0; char
0x5CE5A3: mov     ecx, esi; int
0x5CE5A5: call    EnableMenu
0x5CE5AA: pop     esi
0x5CE5AB: pop     ecx
0x5CE5AC: retn
0x5CE5AD: cmp     byte ptr [esi+8D0h], 0
0x5CE5B4: jnz     short loc_5CE611
0x5CE5B6: cmp     byte ptr ds:0B3B5D8h, 0
0x5CE5BD: jnz     short loc_5CE611
0x5CE5BF: mov     ecx, ds:0B333C4h
0x5CE5C5: mov     eax, [ecx]
0x5CE5C7: mov     edx, [eax+164h]
0x5CE5CD: push    edi
0x5CE5CE: call    edx
0x5CE5D0: mov     edi, eax
0x5CE5D2: test    edi, edi
0x5CE5D4: jz      short loc_5CE610
0x5CE5D6: fld1
0x5CE5D8: mov     ecx, ds:0B333C4h
0x5CE5DE: sub     esp, 8
0x5CE5E1: fst     [esp+14h+var_10]; int
0x5CE5E5: fstp    [esp+14h+a2]; float
0x5CE5E8: call    Actor_ProcessAction
0x5CE5ED: fld     dword ptr ds:0A30634h
0x5CE5F3: mov     eax, ds:0B333C4h
0x5CE5F8: sub     esp, 8
0x5CE5FB: fstp    [esp+14h+var_10]; float
0x5CE5FF: mov     ecx, edi; this
0x5CE601: fld     dword ptr ds:0B33E9Ch
0x5CE607: fstp    [esp+14h+a2]; float
0x5CE60A: push    eax; int
0x5CE60B: call    sub_476D10
0x5CE610: pop     edi
0x5CE611: mov     ecx, esi
0x5CE613: call    sub_5CDEF0
0x5CE618: fldz
0x5CE61A: push    ecx
0x5CE61B: fstp    [esp+0Ch+var_C]; a2
0x5CE61E: mov     ecx, ds:0B333C4h; this
0x5CE624: call    sub_603CA0
0x5CE629: fld     dword ptr [esi+8A0h]
0x5CE62F: fdiv    qword ptr ds:0A3F3F0h
0x5CE635: sub     esp, 8
0x5CE638: mov     ecx, esi
0x5CE63A: fstp    [esp+10h+var_4]
0x5CE63E: fld     [esp+10h+var_4]
0x5CE642: fstp    [esp+10h+var_C]; float
0x5CE646: fld1
0x5CE648: fstp    [esp+10h+var_10]; int
0x5CE64B: call    Menu_UPdateCamera???
0x5CE650: mov     ecx, [esi+8ECh]
0x5CE656: call    sub_57D2F0
0x5CE65B: test    al, al
0x5CE65D: jz      loc_5CE5AA
0x5CE663: mov     ecx, [esi+8ECh]
0x5CE669: call    sub_57DDE0
0x5CE66E: mov     ecx, esi
0x5CE670: pop     esi
0x5CE671: add     esp, 4
0x5CE674: jmp     sub_5C30C0
