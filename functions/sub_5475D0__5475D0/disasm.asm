0x5475D0: sub     esp, 8
0x5475D3: mov     eax, [esp+8+arg_4]
0x5475D7: mov     ecx, [esp+8+arg_0]
0x5475DB: push    ebx
0x5475DC: push    eax
0x5475DD: push    ecx
0x5475DE: xor     bl, bl
0x5475E0: call    Calc_LuckModifiedSkill
0x5475E5: fstp    [esp+14h+var_8]
0x5475E9: fld     [esp+14h+arg_8]
0x5475ED: add     esp, 4
0x5475F0: fstp    [esp+10h+var_10]; float
0x5475F3: call    Calc_FatigueFactor
0x5475F8: fmul    [esp+10h+var_8]
0x5475FC: add     esp, 4
0x5475FF: fstp    dword ptr [esp+0Ch+var_8]
0x547603: fild    [esp+0Ch+arg_C]
0x547607: fmul    dword ptr ds:0B36F98h
0x54760D: fadd    dword ptr ds:0B36F90h
0x547613: fstp    [esp+0Ch+arg_C]
0x547617: fld     [esp+0Ch+arg_C]
0x54761B: fld     dword ptr ds:0B36F88h
0x547621: fmul    dword ptr [esp+0Ch+var_8]
0x547625: fadd    dword ptr ds:0B36F80h
0x54762B: fstp    [esp+0Ch+arg_C]
0x54762F: fdiv    [esp+0Ch+arg_C]
0x547633: fstp    [esp+0Ch+arg_C]
0x547637: fld     [esp+0Ch+arg_C]
0x54763B: fld     dword ptr ds:0B36FA0h
0x547641: fcom    st(1)
0x547643: fnstsw  ax
0x547645: fstp    st(1)
0x547647: test    ah, 41h
0x54764A: jp      short loc_547652
0x54764C: fstp    [esp+0Ch+arg_C]
0x547650: jmp     short loc_547654
0x547652: fstp    st
0x547654: fld     [esp+0Ch+arg_C]
0x547658: push    0; Seed
0x54765A: fstp    [esp+10h+var_8]
0x54765E: call    GetRandomLargeInteger?
0x547663: cdq
0x547664: mov     ecx, 64h ; 'd'
0x547669: idiv    ecx
0x54766B: add     esp, 4
0x54766E: mov     [esp+0Ch+arg_C], edx
0x547672: fild    [esp+0Ch+arg_C]
0x547676: fdiv    qword ptr ds:0A309F0h
0x54767C: fcomp   [esp+0Ch+var_8]
0x547680: fnstsw  ax
0x547682: mov     al, 1
0x547684: test    ah, 41h
0x547687: jnp     short loc_54768B
0x547689: mov     al, bl
0x54768B: pop     ebx
0x54768C: add     esp, 8
0x54768F: retn
