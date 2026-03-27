0x595940: sub     esp, 8
0x595943: push    ebx; a3
0x595944: push    edi; a3
0x595945: mov     edi, [esp+10h+arg_0]
0x595949: cmp     edi, 2
0x59594C: mov     ebx, ecx
0x59594E: jz      short loc_595968
0x595950: cmp     edi, 4
0x595953: jz      short loc_595968
0x595955: cmp     edi, 6
0x595958: jz      short loc_595968
0x59595A: cmp     edi, 8
0x59595D: jz      short loc_595968
0x59595F: cmp     edi, 0Ah
0x595962: jnz     loc_595A14
0x595968: push    esi; a3
0x595969: push    1; arg1
0x59596B: push    0; canCreate
0x59596D: call    InterfaceManager_GetSingleton
0x595972: add     esp, 8
0x595975: add     edi, 0FFFFFFFFh
0x595978: push    edi
0x595979: mov     ecx, ebx
0x59597B: mov     esi, eax
0x59597D: call    sub_595240
0x595982: mov     edi, eax
0x595984: call    sub_57D7A0
0x595989: fmul    qword ptr ds:0A2FAA0h
0x59598F: fadd    dword ptr [esi+20h]
0x595992: call    Double_To_SInt32
0x595997: mov     [esp+14h+arg_0], eax
0x59599B: fild    [esp+14h+arg_0]
0x59599F: mov     ecx, edi
0x5959A1: fstp    [esp+14h+arg_0]
0x5959A5: call    sub_588C50
0x5959AA: fsubr   [esp+14h+arg_0]
0x5959AE: mov     esi, [esp+14h+arg_4]
0x5959B2: push    0FB6h
0x5959B7: mov     ecx, esi
0x5959B9: fstp    [esp+18h+var_8]
0x5959BD: call    Tile_GetFloat
0x5959C2: fdivr   [esp+14h+var_8]
0x5959C6: push    ecx
0x5959C7: mov     ecx, esi; this
0x5959C9: fstp    [esp+18h+arg_0]
0x5959CD: fld     dword ptr ds:0A6B1F0h
0x5959D3: fstp    [esp+18h+a2]; a3
0x5959D6: push    0FB7h; a2
0x5959DB: call    Tile_SetFloat
0x5959E0: fld     [esp+14h+arg_0]
0x5959E4: call    Double_To_SInt32
0x5959E9: mov     [esp+14h+arg_0], eax
0x5959ED: fild    [esp+14h+arg_0]
0x5959F1: push    ecx
0x5959F2: mov     ecx, esi; this
0x5959F4: fstp    [esp+18h+a2]; a3
0x5959F7: push    0FB7h; a2
0x5959FC: call    Tile_SetFloat
0x595A01: fldz
0x595A03: push    ecx
0x595A04: fstp    [esp+18h+a2]; a3
0x595A07: push    0FB7h; a2
0x595A0C: mov     ecx, esi; this
0x595A0E: call    Tile_SetFloat
0x595A13: pop     esi
0x595A14: pop     edi
0x595A15: pop     ebx
0x595A16: add     esp, 8
0x595A19: retn    8
