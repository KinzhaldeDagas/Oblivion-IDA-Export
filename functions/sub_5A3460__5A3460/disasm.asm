0x5A3460: sub     esp, 8
0x5A3463: cmp     [esp+8+arg_0], 2
0x5A3468: push    esi; a3
0x5A3469: mov     esi, ecx
0x5A346B: jnz     loc_5A352A
0x5A3471: push    edi; a3
0x5A3472: push    1; arg1
0x5A3474: push    0; canCreate
0x5A3476: call    InterfaceManager_GetSingleton
0x5A347B: add     esp, 8
0x5A347E: mov     edi, eax
0x5A3480: call    sub_57D7A0
0x5A3485: fmul    qword ptr ds:0A2FAA0h
0x5A348B: fadd    dword ptr [edi+20h]
0x5A348E: call    Double_To_SInt32
0x5A3493: mov     ecx, [esi+28h]
0x5A3496: mov     [esp+10h+arg_0], eax
0x5A349A: fild    [esp+10h+arg_0]
0x5A349E: fstp    [esp+10h+arg_0]
0x5A34A2: call    sub_588C50
0x5A34A7: fsubr   [esp+10h+arg_0]
0x5A34AB: mov     ecx, [esi+2Ch]
0x5A34AE: push    0FB6h
0x5A34B3: fstp    qword ptr [esp+14h+a3]; a3
0x5A34B7: call    Tile_GetFloat
0x5A34BC: fdivr   qword ptr [esp+10h+a3]
0x5A34C0: mov     ecx, [esi+28h]
0x5A34C3: push    0FB1h
0x5A34C8: fstp    [esp+14h+arg_0]
0x5A34CC: call    Tile_GetFloat
0x5A34D1: sub     esp, 8
0x5A34D4: fstp    [esp+18h+a2]; float
0x5A34D8: fld     [esp+18h+arg_0]
0x5A34DC: fstp    [esp+18h+var_18]; float
0x5A34DF: call    Round_Float
0x5A34E4: mov     ecx, [esi+2Ch]; this
0x5A34E7: fstp    [esp+18h+arg_0]
0x5A34EB: fld     dword ptr ds:0A6B1F0h
0x5A34F1: add     esp, 4
0x5A34F4: fstp    [esp+14h+a2]; a3
0x5A34F7: push    0FB7h; a2
0x5A34FC: call    Tile_SetFloat
0x5A3501: fld     [esp+10h+arg_0]
0x5A3505: push    ecx
0x5A3506: mov     ecx, [esi+2Ch]; this
0x5A3509: fstp    [esp+14h+a2]; a3
0x5A350C: push    0FB7h; a2
0x5A3511: call    Tile_SetFloat
0x5A3516: fldz
0x5A3518: push    ecx
0x5A3519: fstp    [esp+14h+a2]; a3
0x5A351C: mov     ecx, [esi+2Ch]; this
0x5A351F: push    0FB7h; a2
0x5A3524: call    Tile_SetFloat
0x5A3529: pop     edi
0x5A352A: pop     esi
0x5A352B: add     esp, 8
0x5A352E: retn    8
