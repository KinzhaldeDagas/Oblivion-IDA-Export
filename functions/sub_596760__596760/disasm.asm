0x596760: sub     esp, 14h
0x596763: cmp     [esp+14h+arg_0], 3
0x596768: push    esi; a3
0x596769: mov     esi, ecx
0x59676B: jnz     loc_5968F3
0x596771: push    edi
0x596772: push    1; arg1
0x596774: push    0; canCreate
0x596776: call    InterfaceManager_GetSingleton
0x59677B: mov     ecx, [esi+2Ch]
0x59677E: add     esp, 8
0x596781: push    0FB0h
0x596786: mov     edi, eax
0x596788: call    Tile_GetFloat
0x59678D: fstp    [esp+1Ch+var_10]
0x596791: mov     ecx, [esi+2Ch]
0x596794: push    0FAFh
0x596799: call    Tile_GetFloat
0x59679E: fstp    [esp+1Ch+a3]; a3
0x5967A2: call    sub_57D7F0
0x5967A7: fstp    [esp+1Ch+var_8]
0x5967AB: call    sub_57D7F0
0x5967B0: fmul    qword ptr ds:0A2FAA0h
0x5967B6: fadd    dword ptr [edi+28h]
0x5967B9: fsubr   [esp+1Ch+var_8]
0x5967BD: call    Double_To_SInt32
0x5967C2: mov     ecx, [esi+2Ch]
0x5967C5: mov     [esp+1Ch+arg_0], eax
0x5967C9: fild    [esp+1Ch+arg_0]
0x5967CD: fstp    [esp+1Ch+arg_0]
0x5967D1: call    sub_588CF0
0x5967D6: fsubr   [esp+1Ch+arg_0]
0x5967DA: mov     ecx, [esi+2Ch]
0x5967DD: push    0FCAh
0x5967E2: fstp    [esp+20h+var_8]
0x5967E6: call    Tile_GetFloat
0x5967EB: fdivr   [esp+1Ch+var_8]
0x5967EF: pop     edi
0x5967F0: fstp    [esp+18h+arg_0]
0x5967F4: fld1
0x5967F6: fld     [esp+18h+arg_0]
0x5967FA: fcom    st(1)
0x5967FC: fnstsw  ax
0x5967FE: fldz
0x596800: test    ah, 5
0x596803: jnp     short loc_59680F
0x596805: fstp    st
0x596807: fstp    st
0x596809: fstp    [esp+18h+arg_0]
0x59680D: jmp     short loc_596822
0x59680F: fstp    st(2)
0x596811: fcomp   st(1)
0x596813: fnstsw  ax
0x596815: test    ah, 41h
0x596818: jz      short loc_596820
0x59681A: fstp    [esp+18h+arg_0]
0x59681E: jmp     short loc_596822
0x596820: fstp    st
0x596822: fld     [esp+18h+var_10]
0x596826: fsub    [esp+18h+a3]
0x59682A: fmul    [esp+18h+arg_0]
0x59682E: fst     [esp+18h+arg_0]
0x596832: fld     [esp+18h+arg_0]
0x596836: fst     [esp+18h+arg_0]
0x59683A: fld     [esp+18h+arg_0]
0x59683E: fld     st
0x596840: call    Double_To_SInt32
0x596845: mov     [esp+18h+arg_0], eax
0x596849: fild    [esp+18h+arg_0]
0x59684D: fstp    [esp+18h+arg_0]
0x596851: fld     [esp+18h+arg_0]
0x596855: fld     st
0x596857: fsubp   st(2), st
0x596859: fxch    st(1)
0x59685B: fcomp   qword ptr ds:0A2FC68h
0x596861: fnstsw  ax
0x596863: test    ah, 1
0x596866: jz      short loc_59686E
0x596868: fsub    qword ptr ds:0A2F928h
0x59686E: fstp    [esp+18h+arg_0]
0x596872: push    ecx
0x596873: fld     [esp+1Ch+arg_0]
0x596877: fsubp   st(2), st
0x596879: fxch    st(1)
0x59687B: fcomp   qword ptr ds:0A2FAA0h
0x596881: fnstsw  ax
0x596883: fstp    [esp+1Ch+a2]; float
0x596886: test    ah, 41h
0x596889: jp      short loc_596896
0x59688B: call    FloatFloor
0x596890: fstp    qword ptr [esp+1Ch+var_10]
0x596894: jmp     short loc_5968A9
0x596896: call    FloatFloor
0x59689B: fadd    qword ptr ds:0A2F928h
0x5968A1: fadd    [esp+1Ch+a3]
0x5968A5: fstp    qword ptr [esp+1Ch+var_10]; a3
0x5968A9: fld     dword ptr ds:0A6B1F0h
0x5968AF: add     esp, 4
0x5968B2: push    ecx
0x5968B3: mov     ecx, [esi+2Ch]; this
0x5968B6: fstp    [esp+1Ch+a2]; a3
0x5968B9: push    0FB7h; a2
0x5968BE: call    Tile_SetFloat
0x5968C3: fld     qword ptr [esp+18h+var_10]
0x5968C7: fstp    [esp+18h+arg_0]
0x5968CB: push    ecx
0x5968CC: fld     [esp+1Ch+arg_0]
0x5968D0: mov     ecx, [esi+2Ch]; this
0x5968D3: fstp    [esp+1Ch+a2]; a3
0x5968D6: push    0FB7h; a2
0x5968DB: call    Tile_SetFloat
0x5968E0: fldz
0x5968E2: push    ecx
0x5968E3: fstp    [esp+1Ch+a2]; a3
0x5968E6: mov     ecx, [esi+2Ch]; this
0x5968E9: push    0FB7h; a2
0x5968EE: call    Tile_SetFloat
0x5968F3: pop     esi
0x5968F4: add     esp, 14h
0x5968F7: retn    8
