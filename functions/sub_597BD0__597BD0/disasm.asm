0x597BD0: sub     esp, 8
0x597BD3: cmp     [esp+8+arg_0], 0Ch
0x597BD8: push    esi; a3
0x597BD9: mov     esi, ecx
0x597BDB: jnz     loc_597C91
0x597BE1: push    edi; a3
0x597BE2: push    1; arg1
0x597BE4: push    0; canCreate
0x597BE6: call    InterfaceManager_GetSingleton
0x597BEB: add     esp, 8
0x597BEE: mov     edi, eax
0x597BF0: call    sub_57D7F0
0x597BF5: fstp    qword ptr [esp+10h+a3]
0x597BF9: call    sub_57D7F0
0x597BFE: fmul    qword ptr ds:0A2FAA0h
0x597C04: fadd    dword ptr [edi+28h]
0x597C07: fsubr   qword ptr [esp+10h+a3]
0x597C0B: call    Double_To_SInt32
0x597C10: fld     dword ptr [esi+50h]
0x597C13: mov     ecx, [esi+28h]
0x597C16: mov     [esp+10h+arg_0], eax
0x597C1A: fiadd   [esp+10h+arg_0]
0x597C1E: fstp    qword ptr [esp+10h+a3]
0x597C22: call    sub_588CF0
0x597C27: fsubr   qword ptr [esp+10h+a3]
0x597C2B: mov     ecx, [esi+2Ch]
0x597C2E: push    0FB6h
0x597C33: fstp    qword ptr [esp+14h+a3]; a3
0x597C37: call    Tile_GetFloat
0x597C3C: fdivr   qword ptr [esp+10h+a3]
0x597C40: push    ecx
0x597C41: mov     ecx, [esi+2Ch]; this
0x597C44: fstp    [esp+14h+arg_0]
0x597C48: fld     dword ptr ds:0A6B1F0h
0x597C4E: fstp    [esp+14h+a2]; a3
0x597C51: push    0FB7h; a2
0x597C56: call    Tile_SetFloat
0x597C5B: fld     [esp+10h+arg_0]
0x597C5F: call    Double_To_SInt32
0x597C64: mov     [esp+10h+arg_0], eax
0x597C68: fild    [esp+10h+arg_0]
0x597C6C: push    ecx
0x597C6D: mov     ecx, [esi+2Ch]; this
0x597C70: fstp    [esp+14h+a2]; a3
0x597C73: push    0FB7h; a2
0x597C78: call    Tile_SetFloat
0x597C7D: fldz
0x597C7F: push    ecx
0x597C80: fstp    [esp+14h+a2]; a3
0x597C83: mov     ecx, [esi+2Ch]; this
0x597C86: push    0FB7h; a2
0x597C8B: call    Tile_SetFloat
0x597C90: pop     edi
0x597C91: pop     esi
0x597C92: add     esp, 8
0x597C95: retn    8
