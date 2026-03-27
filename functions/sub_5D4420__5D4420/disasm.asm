0x5D4420: mov     eax, [esp+arg_0]
0x5D4424: sub     esp, 14h
0x5D4427: sub     eax, 0Ah
0x5D442A: push    esi; a3
0x5D442B: jz      short loc_5D443B
0x5D442D: sub     eax, 1
0x5D4430: jnz     loc_5D45B9
0x5D4436: mov     esi, [ecx+4Ch]
0x5D4439: jmp     short loc_5D443E
0x5D443B: mov     esi, [ecx+44h]
0x5D443E: push    edi
0x5D443F: push    1; arg1
0x5D4441: push    0; canCreate
0x5D4443: call    InterfaceManager_GetSingleton
0x5D4448: add     esp, 8
0x5D444B: push    0FB0h
0x5D4450: mov     ecx, esi
0x5D4452: mov     edi, eax
0x5D4454: call    Tile_GetFloat
0x5D4459: fstp    [esp+1Ch+var_10]
0x5D445D: push    0FAFh
0x5D4462: mov     ecx, esi
0x5D4464: call    Tile_GetFloat
0x5D4469: fstp    [esp+1Ch+a3]; a3
0x5D446D: call    sub_57D7F0
0x5D4472: fstp    [esp+1Ch+var_8]
0x5D4476: call    sub_57D7F0
0x5D447B: fmul    qword ptr ds:0A2FAA0h
0x5D4481: fadd    dword ptr [edi+28h]
0x5D4484: fsubr   [esp+1Ch+var_8]
0x5D4488: call    Double_To_SInt32
0x5D448D: mov     [esp+1Ch+arg_0], eax
0x5D4491: fild    [esp+1Ch+arg_0]
0x5D4495: mov     ecx, esi
0x5D4497: fstp    [esp+1Ch+arg_0]
0x5D449B: call    sub_588CF0
0x5D44A0: fsubr   [esp+1Ch+arg_0]
0x5D44A4: push    0FCAh
0x5D44A9: mov     ecx, esi
0x5D44AB: fstp    [esp+20h+var_8]
0x5D44AF: call    Tile_GetFloat
0x5D44B4: fdivr   [esp+1Ch+var_8]
0x5D44B8: pop     edi
0x5D44B9: fstp    [esp+18h+arg_0]
0x5D44BD: fld1
0x5D44BF: fld     [esp+18h+arg_0]
0x5D44C3: fcom    st(1)
0x5D44C5: fnstsw  ax
0x5D44C7: fldz
0x5D44C9: test    ah, 5
0x5D44CC: jnp     short loc_5D44D8
0x5D44CE: fstp    st
0x5D44D0: fstp    st
0x5D44D2: fstp    [esp+18h+arg_0]
0x5D44D6: jmp     short loc_5D44EB
0x5D44D8: fstp    st(2)
0x5D44DA: fcomp   st(1)
0x5D44DC: fnstsw  ax
0x5D44DE: test    ah, 41h
0x5D44E1: jz      short loc_5D44E9
0x5D44E3: fstp    [esp+18h+arg_0]
0x5D44E7: jmp     short loc_5D44EB
0x5D44E9: fstp    st
0x5D44EB: fld     [esp+18h+var_10]
0x5D44EF: fsub    [esp+18h+a3]
0x5D44F3: fmul    [esp+18h+arg_0]
0x5D44F7: fst     [esp+18h+arg_0]
0x5D44FB: fld     [esp+18h+arg_0]
0x5D44FF: fst     [esp+18h+arg_0]
0x5D4503: fld     [esp+18h+arg_0]
0x5D4507: fld     st
0x5D4509: call    Double_To_SInt32
0x5D450E: mov     [esp+18h+arg_0], eax
0x5D4512: fild    [esp+18h+arg_0]
0x5D4516: fstp    [esp+18h+arg_0]
0x5D451A: fld     [esp+18h+arg_0]
0x5D451E: fld     st
0x5D4520: fsubp   st(2), st
0x5D4522: fxch    st(1)
0x5D4524: fcomp   qword ptr ds:0A2FC68h
0x5D452A: fnstsw  ax
0x5D452C: test    ah, 1
0x5D452F: jz      short loc_5D4537
0x5D4531: fsub    qword ptr ds:0A2F928h
0x5D4537: fstp    [esp+18h+arg_0]
0x5D453B: push    ecx
0x5D453C: fld     [esp+1Ch+arg_0]
0x5D4540: fsubp   st(2), st
0x5D4542: fxch    st(1)
0x5D4544: fcomp   qword ptr ds:0A2FAA0h
0x5D454A: fnstsw  ax
0x5D454C: fstp    [esp+1Ch+a2]; float
0x5D454F: test    ah, 41h
0x5D4552: jp      short loc_5D455F
0x5D4554: call    FloatFloor
0x5D4559: fstp    qword ptr [esp+1Ch+var_10]
0x5D455D: jmp     short loc_5D4572
0x5D455F: call    FloatFloor
0x5D4564: fadd    qword ptr ds:0A2F928h
0x5D456A: fadd    [esp+1Ch+a3]
0x5D456E: fstp    qword ptr [esp+1Ch+var_10]; a3
0x5D4572: fld     dword ptr ds:0A6B1F0h
0x5D4578: add     esp, 4
0x5D457B: push    ecx
0x5D457C: fstp    [esp+1Ch+a2]; a3
0x5D457F: push    0FB3h; a2
0x5D4584: mov     ecx, esi; this
0x5D4586: call    Tile_SetFloat
0x5D458B: fld     qword ptr [esp+18h+var_10]
0x5D458F: fstp    [esp+18h+arg_0]
0x5D4593: push    ecx
0x5D4594: fld     [esp+1Ch+arg_0]
0x5D4598: mov     ecx, esi; this
0x5D459A: fstp    [esp+1Ch+a2]; a3
0x5D459D: push    0FB3h; a2
0x5D45A2: call    Tile_SetFloat
0x5D45A7: fldz
0x5D45A9: push    ecx
0x5D45AA: fstp    [esp+1Ch+a2]; a3
0x5D45AD: push    0FB3h; a2
0x5D45B2: mov     ecx, esi; this
0x5D45B4: call    Tile_SetFloat
0x5D45B9: pop     esi
0x5D45BA: add     esp, 14h
0x5D45BD: retn    8
