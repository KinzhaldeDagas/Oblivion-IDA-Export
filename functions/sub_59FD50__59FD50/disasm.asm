0x59FD50: sub     esp, 8
0x59FD53: push    ebp
0x59FD54: push    edi; a3
0x59FD55: push    1; arg1
0x59FD57: push    0; canCreate
0x59FD59: mov     edi, ecx
0x59FD5B: call    InterfaceManager_GetSingleton
0x59FD60: mov     edx, [esp+18h+arg_0]
0x59FD64: add     esp, 8
0x59FD67: cmp     edx, 11h
0x59FD6A: mov     ebp, eax
0x59FD6C: jz      short loc_59FD7C
0x59FD6E: cmp     edx, 13h
0x59FD71: jz      short loc_59FD7C
0x59FD73: cmp     edx, 0Fh
0x59FD76: jnz     loc_59FE23
0x59FD7C: push    ebx; a3
0x59FD7D: push    esi; a3
0x59FD7E: push    edx
0x59FD7F: mov     ecx, edi
0x59FD81: call    sub_59FA20
0x59FD86: add     edx, 0FFFFFFFFh
0x59FD89: push    edx
0x59FD8A: mov     esi, eax
0x59FD8C: call    sub_59FA20
0x59FD91: mov     ebx, eax
0x59FD93: call    sub_57D7A0
0x59FD98: fmul    qword ptr ds:0A2FAA0h
0x59FD9E: fadd    dword ptr [ebp+20h]
0x59FDA1: call    Double_To_SInt32
0x59FDA6: mov     [esp+18h+arg_0], eax
0x59FDAA: fild    [esp+18h+arg_0]
0x59FDAE: mov     ecx, ebx
0x59FDB0: fstp    [esp+18h+arg_0]
0x59FDB4: call    sub_588C50
0x59FDB9: fsubr   [esp+18h+arg_0]
0x59FDBD: push    0FB6h
0x59FDC2: mov     ecx, esi
0x59FDC4: fsub    dword ptr [edi+74h]
0x59FDC7: fstp    [esp+1Ch+var_8]
0x59FDCB: call    Tile_GetFloat
0x59FDD0: fdivr   [esp+18h+var_8]
0x59FDD4: push    ecx
0x59FDD5: mov     ecx, esi; this
0x59FDD7: fstp    [esp+1Ch+arg_0]
0x59FDDB: fld     dword ptr ds:0A6B1F0h
0x59FDE1: fstp    [esp+1Ch+a2]; a3
0x59FDE4: push    0FB7h; a2
0x59FDE9: call    Tile_SetFloat
0x59FDEE: fld     [esp+18h+arg_0]
0x59FDF2: call    Double_To_SInt32
0x59FDF7: mov     [esp+18h+arg_0], eax
0x59FDFB: fild    [esp+18h+arg_0]
0x59FDFF: push    ecx
0x59FE00: mov     ecx, esi; this
0x59FE02: fstp    [esp+1Ch+a2]; a3
0x59FE05: push    0FB7h; a2
0x59FE0A: call    Tile_SetFloat
0x59FE0F: fldz
0x59FE11: push    ecx
0x59FE12: fstp    [esp+1Ch+a2]; a3
0x59FE15: push    0FB7h; a2
0x59FE1A: mov     ecx, esi; this
0x59FE1C: call    Tile_SetFloat
0x59FE21: pop     esi
0x59FE22: pop     ebx
0x59FE23: pop     edi
0x59FE24: pop     ebp
0x59FE25: add     esp, 8
0x59FE28: retn    8
