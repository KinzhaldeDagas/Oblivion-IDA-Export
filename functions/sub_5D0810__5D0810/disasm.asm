0x5D0810: push    ebp
0x5D0811: mov     ebp, esp
0x5D0813: and     esp, 0FFFFFFF8h
0x5D0816: sub     esp, 10h
0x5D0819: cmp     [ebp+arg_0], 6
0x5D081D: push    esi; a3
0x5D081E: push    edi; a3
0x5D081F: mov     esi, ecx
0x5D0821: jnz     loc_5D0A0F
0x5D0827: push    1; arg1
0x5D0829: push    0; canCreate
0x5D082B: call    InterfaceManager_GetSingleton
0x5D0830: mov     ecx, [esi+38h]
0x5D0833: add     esp, 8
0x5D0836: push    0FB0h
0x5D083B: mov     edi, eax
0x5D083D: call    Tile_GetFloat
0x5D0842: fstp    [esp+18h+var_8]
0x5D0846: mov     ecx, [esi+38h]
0x5D0849: push    0FAFh
0x5D084E: call    Tile_GetFloat
0x5D0853: fstp    [esp+18h+var_4]
0x5D0857: call    sub_57D7F0
0x5D085C: fstp    qword ptr [esp+18h+a3]
0x5D0860: call    sub_57D7F0
0x5D0865: fmul    qword ptr ds:0A2FAA0h
0x5D086B: fadd    dword ptr [edi+28h]
0x5D086E: fsubr   qword ptr [esp+18h+a3]
0x5D0872: call    Double_To_SInt32
0x5D0877: mov     ecx, [esi+38h]
0x5D087A: mov     [esp+18h+a3], eax
0x5D087E: fild    [esp+18h+a3]
0x5D0882: fstp    [esp+18h+a3]
0x5D0886: call    sub_588CF0
0x5D088B: fsubr   [esp+18h+a3]
0x5D088F: mov     ecx, [esi+38h]
0x5D0892: push    0FCAh
0x5D0897: fstp    qword ptr [esp+1Ch+a3]
0x5D089B: call    Tile_GetFloat
0x5D08A0: fdivr   qword ptr [esp+18h+a3]
0x5D08A4: fcomp   qword ptr ds:0A2FC68h
0x5D08AA: fnstsw  ax
0x5D08AC: test    ah, 5
0x5D08AF: jnp     short loc_5D0911
0x5D08B1: call    sub_57D7F0
0x5D08B6: fstp    qword ptr [esp+18h+a3]
0x5D08BA: call    sub_57D7F0
0x5D08BF: fmul    qword ptr ds:0A2FAA0h
0x5D08C5: fadd    dword ptr [edi+28h]
0x5D08C8: fsubr   qword ptr [esp+18h+a3]
0x5D08CC: call    Double_To_SInt32
0x5D08D1: mov     ecx, [esi+38h]
0x5D08D4: mov     [esp+18h+a3], eax
0x5D08D8: fild    [esp+18h+a3]
0x5D08DC: fstp    [esp+18h+a3]
0x5D08E0: call    sub_588CF0
0x5D08E5: fsubr   [esp+18h+a3]
0x5D08E9: mov     ecx, [esi+38h]
0x5D08EC: push    0FCAh
0x5D08F1: fstp    qword ptr [esp+1Ch+a3]
0x5D08F5: call    Tile_GetFloat
0x5D08FA: fdivr   qword ptr [esp+18h+a3]
0x5D08FE: fld1
0x5D0900: fcom    st(1)
0x5D0902: fnstsw  ax
0x5D0904: fstp    st(1)
0x5D0906: test    ah, 41h
0x5D0909: jnz     loc_5D09A1
0x5D090F: fstp    st
0x5D0911: call    sub_57D7F0
0x5D0916: fstp    qword ptr [esp+18h+a3]
0x5D091A: call    sub_57D7F0
0x5D091F: fmul    qword ptr ds:0A2FAA0h
0x5D0925: fadd    dword ptr [edi+28h]
0x5D0928: fsubr   qword ptr [esp+18h+a3]
0x5D092C: call    Double_To_SInt32
0x5D0931: mov     ecx, [esi+38h]
0x5D0934: mov     [esp+18h+a3], eax
0x5D0938: fild    [esp+18h+a3]
0x5D093C: fstp    [esp+18h+a3]
0x5D0940: call    sub_588CF0
0x5D0945: fsubr   [esp+18h+a3]
0x5D0949: mov     ecx, [esi+38h]
0x5D094C: push    0FCAh
0x5D0951: fstp    qword ptr [esp+1Ch+a3]
0x5D0955: call    Tile_GetFloat
0x5D095A: fdivr   qword ptr [esp+18h+a3]
0x5D095E: fldz
0x5D0960: fcom    st(1)
0x5D0962: fnstsw  ax
0x5D0964: fstp    st(1)
0x5D0966: test    ah, 41h
0x5D0969: jz      short loc_5D09A1
0x5D096B: mov     ecx, edi
0x5D096D: fstp    st
0x5D096F: call    sub_593020
0x5D0974: mov     ecx, [esi+38h]
0x5D0977: mov     [esp+18h+a3], eax
0x5D097B: fild    [esp+18h+a3]
0x5D097F: fstp    qword ptr [esp+18h+a3]
0x5D0983: call    sub_588CF0
0x5D0988: fsubr   qword ptr [esp+18h+a3]
0x5D098C: mov     ecx, [esi+38h]
0x5D098F: push    0FCAh
0x5D0994: fstp    qword ptr [esp+1Ch+a3]
0x5D0998: call    Tile_GetFloat
0x5D099D: fdivr   qword ptr [esp+18h+a3]
0x5D09A1: push    ecx
0x5D09A2: fstp    qword ptr [esp+1Ch+a3]; a3
0x5D09A6: fld     dword ptr ds:0A6B1F0h
0x5D09AC: mov     ecx, [esi+38h]; this
0x5D09AF: fstp    [esp+1Ch+a2]; a3
0x5D09B2: push    0FB3h; a2
0x5D09B7: call    Tile_SetFloat
0x5D09BC: fld     [esp+18h+var_8]
0x5D09C0: fld     [esp+18h+var_4]
0x5D09C4: fld     st
0x5D09C6: fsubp   st(2), st
0x5D09C8: fxch    st(1)
0x5D09CA: fmul    qword ptr [esp+18h+a3]
0x5D09CE: faddp   st(1), st
0x5D09D0: fadd    qword ptr ds:0A2FAA0h
0x5D09D6: fstp    [esp+18h+var_4]
0x5D09DA: fld     [esp+18h+var_4]
0x5D09DE: call    Double_To_SInt32
0x5D09E3: mov     [esp+18h+var_4], eax
0x5D09E7: fild    [esp+18h+var_4]
0x5D09EB: push    ecx
0x5D09EC: mov     ecx, [esi+38h]; this
0x5D09EF: fstp    [esp+1Ch+a2]; a3
0x5D09F2: push    0FB3h; a2
0x5D09F7: call    Tile_SetFloat
0x5D09FC: fldz
0x5D09FE: push    ecx
0x5D09FF: fstp    [esp+1Ch+a2]; a3
0x5D0A02: mov     ecx, [esi+38h]; this
0x5D0A05: push    0FB3h; a2
0x5D0A0A: call    Tile_SetFloat
0x5D0A0F: pop     edi
0x5D0A10: pop     esi
0x5D0A11: mov     esp, ebp
0x5D0A13: pop     ebp
0x5D0A14: retn    8
