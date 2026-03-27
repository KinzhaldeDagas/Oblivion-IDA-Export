0x61FC30: sub     esp, 0Ch
0x61FC33: push    esi
0x61FC34: mov     esi, ecx
0x61FC36: mov     eax, [esi+6Ch]
0x61FC39: cmp     eax, 7
0x61FC3C: jz      short loc_61FC65
0x61FC3E: mov     ecx, [esi+70h]
0x61FC41: cmp     ecx, 7
0x61FC44: jz      short loc_61FC65
0x61FC46: cmp     ecx, 0Ch
0x61FC49: jz      short loc_61FC65
0x61FC4B: cmp     eax, 8
0x61FC4E: jz      short loc_61FC65
0x61FC50: cmp     eax, 0Eh
0x61FC53: jz      short loc_61FC65
0x61FC55: cmp     eax, 0Ch
0x61FC58: jz      short loc_61FC65
0x61FC5A: cmp     eax, 4
0x61FC5D: jnz     short loc_61FC70
0x61FC5F: cmp     dword ptr [esi+74h], 0
0x61FC63: jz      short loc_61FC70
0x61FC65: mov     ecx, esi
0x61FC67: pop     esi
0x61FC68: add     esp, 0Ch
0x61FC6B: jmp     loc_615050
0x61FC70: mov     ecx, esi
0x61FC72: call    sub_6135F0
0x61FC77: test    eax, eax
0x61FC79: jz      short loc_61FC65
0x61FC7B: mov     eax, [esi+1A8h]
0x61FC81: cmp     eax, ds:0B372F0h
0x61FC87: jl      short loc_61FC65
0x61FC89: cmp     byte ptr [esi+17Dh], 0
0x61FC90: jz      short loc_61FC9D
0x61FC92: mov     ecx, esi
0x61FC94: pop     esi
0x61FC95: add     esp, 0Ch
0x61FC98: jmp     sub_61FAD0
0x61FC9D: mov     ecx, [esi+180h]
0x61FCA3: push    ebx
0x61FCA4: push    edi
0x61FCA5: mov     edi, [esi+3Ch]
0x61FCA8: push    ecx
0x61FCA9: lea     edx, [esp+1Ch+var_4]
0x61FCAD: push    edx
0x61FCAE: mov     ecx, esi
0x61FCB0: call    sub_6135F0
0x61FCB5: push    eax
0x61FCB6: push    edi
0x61FCB7: call    sub_61DDF0
0x61FCBC: fstp    [esp+28h+var_8]
0x61FCC0: mov     ecx, [esi+3Ch]
0x61FCC3: mov     eax, [ecx]
0x61FCC5: mov     edx, [eax+164h]
0x61FCCB: add     esp, 10h
0x61FCCE: push    3
0x61FCD0: call    edx
0x61FCD2: mov     ecx, eax
0x61FCD4: call    ActorAnimData_GetAnimGroupFromField8Value
0x61FCD9: push    eax
0x61FCDA: call    sub_51AC80
0x61FCDF: mov     ecx, [esi+3Ch]
0x61FCE2: mov     [esp+1Ch+var_9], al
0x61FCE6: mov     eax, [ecx]
0x61FCE8: mov     edx, [eax+164h]
0x61FCEE: add     esp, 4
0x61FCF1: push    3
0x61FCF3: call    edx
0x61FCF5: mov     ecx, eax
0x61FCF7: call    ActorAnimData_GetAnimGroupFromField8Value
0x61FCFC: push    eax
0x61FCFD: call    sub_51ACC0
0x61FD02: mov     bl, al
0x61FD04: mov     eax, [esi+6Ch]
0x61FD07: add     esp, 4
0x61FD0A: cmp     eax, 1
0x61FD0D: jz      loc_61FE16
0x61FD13: test    eax, eax
0x61FD15: jz      loc_61FE16
0x61FD1B: cmp     dword ptr [esi+70h], 6
0x61FD1F: jz      loc_61FE16
0x61FD25: mov     ecx, [esi+3Ch]
0x61FD28: call    sub_5E05B0
0x61FD2D: test    al, al
0x61FD2F: jnz     short loc_61FD39
0x61FD31: test    bl, bl
0x61FD33: jz      loc_61FE16
0x61FD39: mov     ecx, offset unk_B36DA0
0x61FD3E: call    GameSetting_GetSafeFloatPointer
0x61FD43: fld     [esp+18h+var_8]
0x61FD47: fld     qword ptr ds:0A30DC8h
0x61FD4D: fmul    st, st(1)
0x61FD4F: fstp    [esp+18h+var_4]
0x61FD53: fld     [esp+18h+var_4]
0x61FD57: fabs
0x61FD59: fstp    [esp+18h+var_4]
0x61FD5D: fld     [esp+18h+var_4]
0x61FD61: fld     dword ptr [eax]
0x61FD63: fcompp
0x61FD65: fnstsw  ax
0x61FD67: test    ah, 41h
0x61FD6A: jp      short loc_61FD9D
0x61FD6C: mov     eax, [esi+70h]
0x61FD6F: push    eax
0x61FD70: call    sub_612690
0x61FD75: add     esp, 4
0x61FD78: test    al, al
0x61FD7A: jnz     short loc_61FD9D
0x61FD7C: cmp     [esp+18h+var_9], al
0x61FD80: jnz     short loc_61FD9D
0x61FD82: mov     ecx, esi
0x61FD84: call    sub_612CD0
0x61FD89: test    al, al
0x61FD8B: jnz     short loc_61FD9D
0x61FD8D: pop     edi
0x61FD8E: fstp    st
0x61FD90: pop     ebx
0x61FD91: mov     byte ptr [esi+17Dh], 1
0x61FD98: pop     esi
0x61FD99: add     esp, 0Ch
0x61FD9C: retn
0x61FD9D: mov     ecx, [esi+70h]
0x61FDA0: push    ecx
0x61FDA1: call    sub_612690
0x61FDA6: add     esp, 4
0x61FDA9: test    al, al
0x61FDAB: jz      short loc_61FDF4
0x61FDAD: fabs
0x61FDAF: fstp    [esp+18h+var_4]
0x61FDB3: fld     [esp+18h+var_4]
0x61FDB7: fcomp   dword ptr ds:0A2FAA8h
0x61FDBD: fnstsw  ax
0x61FDBF: test    ah, 41h
0x61FDC2: jnz     short loc_61FDF6
0x61FDC4: mov     esi, [esi+3Ch]
0x61FDC7: mov     edi, [esi]
0x61FDC9: mov     edx, [edi+1E0h]
0x61FDCF: mov     ecx, esi
0x61FDD1: call    edx
0x61FDD3: fadd    [esp+18h+var_8]
0x61FDD7: mov     eax, [edi+1E8h]
0x61FDDD: push    ecx
0x61FDDE: fstp    [esp+1Ch+var_4]
0x61FDE2: mov     ecx, esi
0x61FDE4: fld     [esp+1Ch+var_4]
0x61FDE8: fstp    [esp+1Ch+var_1C]
0x61FDEB: call    eax
0x61FDED: pop     edi
0x61FDEE: pop     ebx
0x61FDEF: pop     esi
0x61FDF0: add     esp, 0Ch
0x61FDF3: retn
0x61FDF4: fstp    st
0x61FDF6: mov     ebx, [esi+3Ch]
0x61FDF9: mov     edi, [ebx]
0x61FDFB: mov     ecx, esi
0x61FDFD: add     edi, 1E4h
0x61FE03: call    sub_6135F0
0x61FE08: mov     edx, [edi]
0x61FE0A: push    eax
0x61FE0B: mov     ecx, ebx
0x61FE0D: call    edx
0x61FE0F: pop     edi
0x61FE10: pop     ebx
0x61FE11: pop     esi
0x61FE12: add     esp, 0Ch
0x61FE15: retn
0x61FE16: mov     eax, [esi+70h]
0x61FE19: push    eax
0x61FE1A: call    sub_612690
0x61FE1F: add     esp, 4
0x61FE22: test    al, al
0x61FE24: jz      short loc_61FE56
0x61FE26: mov     esi, [esi+3Ch]
0x61FE29: mov     edi, [esi]
0x61FE2B: mov     edx, [edi+1E0h]
0x61FE31: mov     ecx, esi
0x61FE33: call    edx
0x61FE35: fadd    [esp+18h+var_8]
0x61FE39: mov     eax, [edi+1E8h]
0x61FE3F: push    ecx
0x61FE40: fstp    [esp+1Ch+var_4]
0x61FE44: mov     ecx, esi
0x61FE46: fld     [esp+1Ch+var_4]
0x61FE4A: fstp    [esp+1Ch+var_1C]
0x61FE4D: call    eax
0x61FE4F: pop     edi
0x61FE50: pop     ebx
0x61FE51: pop     esi
0x61FE52: add     esp, 0Ch
0x61FE55: retn
0x61FE56: fld     [esp+18h+var_8]
0x61FE5A: fmul    qword ptr ds:0A30DC8h
0x61FE60: fstp    [esp+18h+var_4]
0x61FE64: fld     [esp+18h+var_4]
0x61FE68: fabs
0x61FE6A: fstp    [esp+18h+var_4]
0x61FE6E: fld     [esp+18h+var_4]
0x61FE72: fcomp   dword ptr ds:0A31C80h
0x61FE78: fnstsw  ax
0x61FE7A: test    ah, 1
0x61FE7D: jnz     short loc_61FE86
0x61FE7F: mov     byte ptr [esi+17Dh], 1
0x61FE86: pop     edi
0x61FE87: pop     ebx
0x61FE88: pop     esi
0x61FE89: add     esp, 0Ch
0x61FE8C: retn
