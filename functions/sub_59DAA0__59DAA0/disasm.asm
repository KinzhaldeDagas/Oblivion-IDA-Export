0x59DAA0: sub     esp, 8
0x59DAA3: cmp     [esp+8+arg_0], 0Fh
0x59DAA8: push    esi; a3
0x59DAA9: mov     esi, ecx
0x59DAAB: jnz     loc_59DB5E
0x59DAB1: push    edi; a3
0x59DAB2: push    1; arg1
0x59DAB4: push    0; canCreate
0x59DAB6: call    InterfaceManager_GetSingleton
0x59DABB: add     esp, 8
0x59DABE: mov     edi, eax
0x59DAC0: call    sub_57D7F0
0x59DAC5: fstp    qword ptr [esp+10h+a3]
0x59DAC9: call    sub_57D7F0
0x59DACE: fmul    qword ptr ds:0A2FAA0h
0x59DAD4: fadd    dword ptr [edi+28h]
0x59DAD7: fsubr   qword ptr [esp+10h+a3]
0x59DADB: call    Double_To_SInt32
0x59DAE0: mov     ecx, [esi+44h]
0x59DAE3: mov     [esp+10h+arg_0], eax
0x59DAE7: fild    [esp+10h+arg_0]
0x59DAEB: fstp    [esp+10h+arg_0]
0x59DAEF: call    sub_588CF0
0x59DAF4: fsubr   [esp+10h+arg_0]
0x59DAF8: mov     ecx, [esi+48h]
0x59DAFB: push    0FB6h
0x59DB00: fstp    qword ptr [esp+14h+a3]; a3
0x59DB04: call    Tile_GetFloat
0x59DB09: fdivr   qword ptr [esp+10h+a3]
0x59DB0D: push    ecx
0x59DB0E: mov     ecx, [esi+48h]; this
0x59DB11: fstp    [esp+14h+arg_0]
0x59DB15: fld     dword ptr ds:0A6B1F0h
0x59DB1B: fstp    [esp+14h+a2]; a3
0x59DB1E: push    0FB7h; a2
0x59DB23: call    Tile_SetFloat
0x59DB28: fld     [esp+10h+arg_0]
0x59DB2C: call    Double_To_SInt32
0x59DB31: mov     [esp+10h+arg_0], eax
0x59DB35: fild    [esp+10h+arg_0]
0x59DB39: push    ecx
0x59DB3A: mov     ecx, [esi+48h]; this
0x59DB3D: fstp    [esp+14h+a2]; a3
0x59DB40: push    0FB7h; a2
0x59DB45: call    Tile_SetFloat
0x59DB4A: fldz
0x59DB4C: push    ecx
0x59DB4D: fstp    [esp+14h+a2]; a3
0x59DB50: mov     ecx, [esi+48h]; this
0x59DB53: push    0FB7h; a2
0x59DB58: call    Tile_SetFloat
0x59DB5D: pop     edi
0x59DB5E: pop     esi
0x59DB5F: add     esp, 8
0x59DB62: retn    8
