0x5AC440: mov     eax, [esp+arg_0]
0x5AC444: sub     esp, 8
0x5AC447: cmp     eax, 0Ch
0x5AC44A: push    esi; a3
0x5AC44B: mov     esi, ecx
0x5AC44D: jnz     loc_5AC50A
0x5AC453: push    edi; a3
0x5AC454: push    1; arg1
0x5AC456: push    0; canCreate
0x5AC458: call    InterfaceManager_GetSingleton
0x5AC45D: add     esp, 8
0x5AC460: mov     edi, eax
0x5AC462: call    sub_57D7F0
0x5AC467: fstp    qword ptr [esp+10h+a3]
0x5AC46B: call    sub_57D7F0
0x5AC470: fmul    qword ptr ds:0A2FAA0h
0x5AC476: fadd    dword ptr [edi+28h]
0x5AC479: fsubr   qword ptr [esp+10h+a3]
0x5AC47D: call    Double_To_SInt32
0x5AC482: fld     dword ptr [esi+48h]
0x5AC485: mov     ecx, [esi+30h]
0x5AC488: mov     [esp+10h+arg_0], eax
0x5AC48C: fiadd   [esp+10h+arg_0]
0x5AC490: fstp    qword ptr [esp+10h+a3]
0x5AC494: call    sub_588CF0
0x5AC499: fsubr   qword ptr [esp+10h+a3]
0x5AC49D: mov     ecx, [esi+34h]
0x5AC4A0: push    0FB6h
0x5AC4A5: fstp    qword ptr [esp+14h+a3]; a3
0x5AC4A9: call    Tile_GetFloat
0x5AC4AE: fdivr   qword ptr [esp+10h+a3]
0x5AC4B2: push    ecx
0x5AC4B3: mov     ecx, [esi+34h]; this
0x5AC4B6: fstp    [esp+14h+arg_0]
0x5AC4BA: fld     dword ptr ds:0A6B1F0h
0x5AC4C0: fstp    [esp+14h+a2]; a3
0x5AC4C3: push    0FB7h; a2
0x5AC4C8: call    Tile_SetFloat
0x5AC4CD: fld     [esp+10h+arg_0]
0x5AC4D1: call    Double_To_SInt32
0x5AC4D6: mov     [esp+10h+arg_0], eax
0x5AC4DA: fild    [esp+10h+arg_0]
0x5AC4DE: push    ecx
0x5AC4DF: mov     ecx, [esi+34h]; this
0x5AC4E2: fstp    [esp+14h+a2]; a3
0x5AC4E5: push    0FB7h; a2
0x5AC4EA: call    Tile_SetFloat
0x5AC4EF: fldz
0x5AC4F1: push    ecx
0x5AC4F2: fstp    [esp+14h+a2]; a3
0x5AC4F5: mov     ecx, [esi+34h]; this
0x5AC4F8: push    0FB7h; a2
0x5AC4FD: call    Tile_SetFloat
0x5AC502: pop     edi
0x5AC503: pop     esi
0x5AC504: add     esp, 8
0x5AC507: retn    8
0x5AC50A: cmp     eax, 3E9h
0x5AC50F: jl      short loc_5AC53F
0x5AC511: cmp     byte ptr ds:0B3B3D9h, 0
0x5AC518: jz      short loc_5AC53F
0x5AC51A: push    1; arg1
0x5AC51C: push    0; canCreate
0x5AC51E: call    InterfaceManager_GetSingleton
0x5AC523: fld1
0x5AC525: fcomp   dword ptr [eax+3Ch]
0x5AC528: add     esp, 8
0x5AC52B: fnstsw  ax
0x5AC52D: test    ah, 5
0x5AC530: jp      short loc_5AC53F
0x5AC532: mov     eax, [esp+0Ch+arg_4]
0x5AC536: push    eax
0x5AC537: call    sub_5AB980
0x5AC53C: add     esp, 4
0x5AC53F: pop     esi
0x5AC540: add     esp, 8
0x5AC543: retn    8
