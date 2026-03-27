0x5CEB70: push    ebp
0x5CEB71: mov     ebp, esp
0x5CEB73: and     esp, 0FFFFFFF8h
0x5CEB76: sub     esp, 10h
0x5CEB79: cmp     [ebp+arg_0], 5
0x5CEB7D: push    esi; a3
0x5CEB7E: push    edi; a3
0x5CEB7F: mov     esi, ecx
0x5CEB81: jnz     loc_5CED6F
0x5CEB87: push    1; arg1
0x5CEB89: push    0; canCreate
0x5CEB8B: call    InterfaceManager_GetSingleton
0x5CEB90: mov     ecx, [esi+30h]
0x5CEB93: add     esp, 8
0x5CEB96: push    0FB0h
0x5CEB9B: mov     edi, eax
0x5CEB9D: call    Tile_GetFloat
0x5CEBA2: fstp    [esp+18h+var_8]
0x5CEBA6: mov     ecx, [esi+30h]
0x5CEBA9: push    0FAFh
0x5CEBAE: call    Tile_GetFloat
0x5CEBB3: fstp    [esp+18h+var_4]
0x5CEBB7: call    sub_57D7F0
0x5CEBBC: fstp    qword ptr [esp+18h+a3]
0x5CEBC0: call    sub_57D7F0
0x5CEBC5: fmul    qword ptr ds:0A2FAA0h
0x5CEBCB: fadd    dword ptr [edi+28h]
0x5CEBCE: fsubr   qword ptr [esp+18h+a3]
0x5CEBD2: call    Double_To_SInt32
0x5CEBD7: mov     ecx, [esi+30h]
0x5CEBDA: mov     [esp+18h+a3], eax
0x5CEBDE: fild    [esp+18h+a3]
0x5CEBE2: fstp    [esp+18h+a3]
0x5CEBE6: call    sub_588CF0
0x5CEBEB: fsubr   [esp+18h+a3]
0x5CEBEF: mov     ecx, [esi+30h]
0x5CEBF2: push    0FCAh
0x5CEBF7: fstp    qword ptr [esp+1Ch+a3]
0x5CEBFB: call    Tile_GetFloat
0x5CEC00: fdivr   qword ptr [esp+18h+a3]
0x5CEC04: fcomp   qword ptr ds:0A2FC68h
0x5CEC0A: fnstsw  ax
0x5CEC0C: test    ah, 5
0x5CEC0F: jnp     short loc_5CEC71
0x5CEC11: call    sub_57D7F0
0x5CEC16: fstp    qword ptr [esp+18h+a3]
0x5CEC1A: call    sub_57D7F0
0x5CEC1F: fmul    qword ptr ds:0A2FAA0h
0x5CEC25: fadd    dword ptr [edi+28h]
0x5CEC28: fsubr   qword ptr [esp+18h+a3]
0x5CEC2C: call    Double_To_SInt32
0x5CEC31: mov     ecx, [esi+30h]
0x5CEC34: mov     [esp+18h+a3], eax
0x5CEC38: fild    [esp+18h+a3]
0x5CEC3C: fstp    [esp+18h+a3]
0x5CEC40: call    sub_588CF0
0x5CEC45: fsubr   [esp+18h+a3]
0x5CEC49: mov     ecx, [esi+30h]
0x5CEC4C: push    0FCAh
0x5CEC51: fstp    qword ptr [esp+1Ch+a3]
0x5CEC55: call    Tile_GetFloat
0x5CEC5A: fdivr   qword ptr [esp+18h+a3]
0x5CEC5E: fld1
0x5CEC60: fcom    st(1)
0x5CEC62: fnstsw  ax
0x5CEC64: fstp    st(1)
0x5CEC66: test    ah, 41h
0x5CEC69: jnz     loc_5CED01
0x5CEC6F: fstp    st
0x5CEC71: call    sub_57D7F0
0x5CEC76: fstp    qword ptr [esp+18h+a3]
0x5CEC7A: call    sub_57D7F0
0x5CEC7F: fmul    qword ptr ds:0A2FAA0h
0x5CEC85: fadd    dword ptr [edi+28h]
0x5CEC88: fsubr   qword ptr [esp+18h+a3]
0x5CEC8C: call    Double_To_SInt32
0x5CEC91: mov     ecx, [esi+30h]
0x5CEC94: mov     [esp+18h+a3], eax
0x5CEC98: fild    [esp+18h+a3]
0x5CEC9C: fstp    [esp+18h+a3]
0x5CECA0: call    sub_588CF0
0x5CECA5: fsubr   [esp+18h+a3]
0x5CECA9: mov     ecx, [esi+30h]
0x5CECAC: push    0FCAh
0x5CECB1: fstp    qword ptr [esp+1Ch+a3]
0x5CECB5: call    Tile_GetFloat
0x5CECBA: fdivr   qword ptr [esp+18h+a3]
0x5CECBE: fldz
0x5CECC0: fcom    st(1)
0x5CECC2: fnstsw  ax
0x5CECC4: fstp    st(1)
0x5CECC6: test    ah, 41h
0x5CECC9: jz      short loc_5CED01
0x5CECCB: mov     ecx, edi
0x5CECCD: fstp    st
0x5CECCF: call    sub_593020
0x5CECD4: mov     ecx, [esi+30h]
0x5CECD7: mov     [esp+18h+a3], eax
0x5CECDB: fild    [esp+18h+a3]
0x5CECDF: fstp    qword ptr [esp+18h+a3]
0x5CECE3: call    sub_588CF0
0x5CECE8: fsubr   qword ptr [esp+18h+a3]
0x5CECEC: mov     ecx, [esi+30h]
0x5CECEF: push    0FCAh
0x5CECF4: fstp    qword ptr [esp+1Ch+a3]
0x5CECF8: call    Tile_GetFloat
0x5CECFD: fdivr   qword ptr [esp+18h+a3]
0x5CED01: push    ecx
0x5CED02: fstp    qword ptr [esp+1Ch+a3]; a3
0x5CED06: fld     dword ptr ds:0A6906Ch
0x5CED0C: mov     ecx, [esi+30h]; this
0x5CED0F: fstp    [esp+1Ch+a2]; a3
0x5CED12: push    0FB7h; a2
0x5CED17: call    Tile_SetFloat
0x5CED1C: fld     [esp+18h+var_8]
0x5CED20: fld     [esp+18h+var_4]
0x5CED24: fld     st
0x5CED26: fsubp   st(2), st
0x5CED28: fxch    st(1)
0x5CED2A: fmul    qword ptr [esp+18h+a3]
0x5CED2E: faddp   st(1), st
0x5CED30: fadd    qword ptr ds:0A2FAA0h
0x5CED36: fstp    [esp+18h+var_4]
0x5CED3A: fld     [esp+18h+var_4]
0x5CED3E: call    Double_To_SInt32
0x5CED43: mov     [esp+18h+var_4], eax
0x5CED47: fild    [esp+18h+var_4]
0x5CED4B: push    ecx
0x5CED4C: mov     ecx, [esi+30h]; this
0x5CED4F: fstp    [esp+1Ch+a2]; a3
0x5CED52: push    0FB7h; a2
0x5CED57: call    Tile_SetFloat
0x5CED5C: fldz
0x5CED5E: push    ecx
0x5CED5F: fstp    [esp+1Ch+a2]; a3
0x5CED62: mov     ecx, [esi+30h]; this
0x5CED65: push    0FB7h; a2
0x5CED6A: call    Tile_SetFloat
0x5CED6F: pop     edi
0x5CED70: pop     esi
0x5CED71: mov     esp, ebp
0x5CED73: pop     ebp
0x5CED74: retn    8
