0x5D5790: sub     esp, 14h
0x5D5793: cmp     [esp+14h+arg_0], 3
0x5D5798: push    esi; a3
0x5D5799: mov     esi, ecx
0x5D579B: jnz     loc_5D5923
0x5D57A1: push    edi
0x5D57A2: push    1; arg1
0x5D57A4: push    0; canCreate
0x5D57A6: call    InterfaceManager_GetSingleton
0x5D57AB: mov     ecx, [esi+2Ch]
0x5D57AE: add     esp, 8
0x5D57B1: push    0FB0h
0x5D57B6: mov     edi, eax
0x5D57B8: call    Tile_GetFloat
0x5D57BD: fstp    [esp+1Ch+var_10]
0x5D57C1: mov     ecx, [esi+2Ch]
0x5D57C4: push    0FAFh
0x5D57C9: call    Tile_GetFloat
0x5D57CE: fstp    [esp+1Ch+a3]; a3
0x5D57D2: call    sub_57D7F0
0x5D57D7: fstp    [esp+1Ch+var_8]
0x5D57DB: call    sub_57D7F0
0x5D57E0: fmul    qword ptr ds:0A2FAA0h
0x5D57E6: fadd    dword ptr [edi+28h]
0x5D57E9: fsubr   [esp+1Ch+var_8]
0x5D57ED: call    Double_To_SInt32
0x5D57F2: mov     ecx, [esi+2Ch]
0x5D57F5: mov     [esp+1Ch+arg_0], eax
0x5D57F9: fild    [esp+1Ch+arg_0]
0x5D57FD: fstp    [esp+1Ch+arg_0]
0x5D5801: call    sub_588CF0
0x5D5806: fsubr   [esp+1Ch+arg_0]
0x5D580A: mov     ecx, [esi+2Ch]
0x5D580D: push    0FCAh
0x5D5812: fstp    [esp+20h+var_8]
0x5D5816: call    Tile_GetFloat
0x5D581B: fdivr   [esp+1Ch+var_8]
0x5D581F: pop     edi
0x5D5820: fstp    [esp+18h+arg_0]
0x5D5824: fld1
0x5D5826: fld     [esp+18h+arg_0]
0x5D582A: fcom    st(1)
0x5D582C: fnstsw  ax
0x5D582E: fldz
0x5D5830: test    ah, 5
0x5D5833: jnp     short loc_5D583F
0x5D5835: fstp    st
0x5D5837: fstp    st
0x5D5839: fstp    [esp+18h+arg_0]
0x5D583D: jmp     short loc_5D5852
0x5D583F: fstp    st(2)
0x5D5841: fcomp   st(1)
0x5D5843: fnstsw  ax
0x5D5845: test    ah, 41h
0x5D5848: jz      short loc_5D5850
0x5D584A: fstp    [esp+18h+arg_0]
0x5D584E: jmp     short loc_5D5852
0x5D5850: fstp    st
0x5D5852: fld     [esp+18h+var_10]
0x5D5856: fsub    [esp+18h+a3]
0x5D585A: fmul    [esp+18h+arg_0]
0x5D585E: fst     [esp+18h+arg_0]
0x5D5862: fld     [esp+18h+arg_0]
0x5D5866: fst     [esp+18h+arg_0]
0x5D586A: fld     [esp+18h+arg_0]
0x5D586E: fld     st
0x5D5870: call    Double_To_SInt32
0x5D5875: mov     [esp+18h+arg_0], eax
0x5D5879: fild    [esp+18h+arg_0]
0x5D587D: fstp    [esp+18h+arg_0]
0x5D5881: fld     [esp+18h+arg_0]
0x5D5885: fld     st
0x5D5887: fsubp   st(2), st
0x5D5889: fxch    st(1)
0x5D588B: fcomp   qword ptr ds:0A2FC68h
0x5D5891: fnstsw  ax
0x5D5893: test    ah, 1
0x5D5896: jz      short loc_5D589E
0x5D5898: fsub    qword ptr ds:0A2F928h
0x5D589E: fstp    [esp+18h+arg_0]
0x5D58A2: push    ecx
0x5D58A3: fld     [esp+1Ch+arg_0]
0x5D58A7: fsubp   st(2), st
0x5D58A9: fxch    st(1)
0x5D58AB: fcomp   qword ptr ds:0A2FAA0h
0x5D58B1: fnstsw  ax
0x5D58B3: fstp    [esp+1Ch+a2]; float
0x5D58B6: test    ah, 41h
0x5D58B9: jp      short loc_5D58C6
0x5D58BB: call    FloatFloor
0x5D58C0: fstp    qword ptr [esp+1Ch+var_10]
0x5D58C4: jmp     short loc_5D58D9
0x5D58C6: call    FloatFloor
0x5D58CB: fadd    qword ptr ds:0A2F928h
0x5D58D1: fadd    [esp+1Ch+a3]
0x5D58D5: fstp    qword ptr [esp+1Ch+var_10]; a3
0x5D58D9: fld     dword ptr ds:0A6B1F0h
0x5D58DF: add     esp, 4
0x5D58E2: push    ecx
0x5D58E3: mov     ecx, [esi+2Ch]; this
0x5D58E6: fstp    [esp+1Ch+a2]; a3
0x5D58E9: push    0FB3h; a2
0x5D58EE: call    Tile_SetFloat
0x5D58F3: fld     qword ptr [esp+18h+var_10]
0x5D58F7: fstp    [esp+18h+arg_0]
0x5D58FB: push    ecx
0x5D58FC: fld     [esp+1Ch+arg_0]
0x5D5900: mov     ecx, [esi+2Ch]; this
0x5D5903: fstp    [esp+1Ch+a2]; a3
0x5D5906: push    0FB3h; a2
0x5D590B: call    Tile_SetFloat
0x5D5910: fldz
0x5D5912: push    ecx
0x5D5913: fstp    [esp+1Ch+a2]; a3
0x5D5916: mov     ecx, [esi+2Ch]; this
0x5D5919: push    0FB3h; a2
0x5D591E: call    Tile_SetFloat
0x5D5923: pop     esi
0x5D5924: add     esp, 14h
0x5D5927: retn    8
