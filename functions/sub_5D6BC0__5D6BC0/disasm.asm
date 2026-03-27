0x5D6BC0: sub     esp, 8
0x5D6BC3: cmp     [esp+8+arg_0], 4
0x5D6BC8: push    esi; a3
0x5D6BC9: mov     esi, ecx
0x5D6BCB: jnz     loc_5D6C7E
0x5D6BD1: cmp     byte ptr ds:0B3B728h, 0
0x5D6BD8: jnz     loc_5D6C7E
0x5D6BDE: push    edi; a3
0x5D6BDF: push    1; arg1
0x5D6BE1: push    0; canCreate
0x5D6BE3: call    InterfaceManager_GetSingleton
0x5D6BE8: add     esp, 8
0x5D6BEB: mov     edi, eax
0x5D6BED: call    sub_57D7A0
0x5D6BF2: fmul    qword ptr ds:0A2FAA0h
0x5D6BF8: fadd    dword ptr [edi+20h]
0x5D6BFB: call    Double_To_SInt32
0x5D6C00: mov     ecx, [esi+28h]
0x5D6C03: mov     [esp+10h+arg_0], eax
0x5D6C07: fild    [esp+10h+arg_0]
0x5D6C0B: fstp    [esp+10h+arg_0]
0x5D6C0F: call    sub_588C50
0x5D6C14: fsubr   [esp+10h+arg_0]
0x5D6C18: mov     ecx, [esi+2Ch]
0x5D6C1B: push    0FB6h
0x5D6C20: fstp    qword ptr [esp+14h+a3]; a3
0x5D6C24: call    Tile_GetFloat
0x5D6C29: fdivr   qword ptr [esp+10h+a3]
0x5D6C2D: push    ecx
0x5D6C2E: mov     ecx, [esi+2Ch]; this
0x5D6C31: fstp    [esp+14h+arg_0]
0x5D6C35: fld     dword ptr ds:0A6B1F0h
0x5D6C3B: fstp    [esp+14h+a2]; a3
0x5D6C3E: push    0FB7h; a2
0x5D6C43: call    Tile_SetFloat
0x5D6C48: fld     [esp+10h+arg_0]
0x5D6C4C: call    Double_To_SInt32
0x5D6C51: mov     [esp+10h+arg_0], eax
0x5D6C55: fild    [esp+10h+arg_0]
0x5D6C59: push    ecx
0x5D6C5A: mov     ecx, [esi+2Ch]; this
0x5D6C5D: fstp    [esp+14h+a2]; a3
0x5D6C60: push    0FB7h; a2
0x5D6C65: call    Tile_SetFloat
0x5D6C6A: fldz
0x5D6C6C: push    ecx
0x5D6C6D: fstp    [esp+14h+a2]; a3
0x5D6C70: mov     ecx, [esi+2Ch]; this
0x5D6C73: push    0FB7h; a2
0x5D6C78: call    Tile_SetFloat
0x5D6C7D: pop     edi
0x5D6C7E: pop     esi
0x5D6C7F: add     esp, 8
0x5D6C82: retn    8
