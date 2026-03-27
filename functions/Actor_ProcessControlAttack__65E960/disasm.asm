0x65E960: sub     esp, 10h
0x65E963: push    ebx
0x65E964: push    ebp
0x65E965: push    esi
0x65E966: push    edi
0x65E967: mov     esi, ecx
0x65E969: mov     edi, 0FFh
0x65E96E: call    TESObjectREFR_GetAnimData
0x65E973: mov     ecx, ds:0B33398h
0x65E979: mov     ebx, [ecx+20h]
0x65E97C: mov     ecx, [esi+58h]
0x65E97F: mov     edx, [ecx]
0x65E981: mov     ebp, eax
0x65E983: mov     eax, [esi+5CCh]
0x65E989: mov     [esp+20h+var_C], eax
0x65E98D: mov     eax, [edx+138h]
0x65E993: mov     [esp+20h+var_4], ebx
0x65E997: mov     [esp+20h+var_D], 0
0x65E99C: call    eax
0x65E99E: test    al, al
0x65E9A0: jz      short loc_65E9EC
0x65E9A2: cmp     byte ptr ds:0B3BB04h, 0
0x65E9A9: jz      short loc_65E9EC
0x65E9AB: mov     ecx, esi
0x65E9AD: call    Actor_GetCurrentAction
0x65E9B2: cmp     eax, 5
0x65E9B5: jz      short loc_65E9EC
0x65E9B7: push    0; a3
0x65E9B9: push    4; a2
0x65E9BB: mov     ecx, ebx; this
0x65E9BD: call    InputGlobals__QueryControlState
0x65E9C2: test    eax, eax
0x65E9C4: jnz     short loc_65E9DF
0x65E9C6: push    1; a3
0x65E9C8: push    4; a2
0x65E9CA: mov     ecx, ebx; this
0x65E9CC: call    InputGlobals__QueryControlState
0x65E9D1: test    eax, eax
0x65E9D3: jnz     short loc_65E9DF
0x65E9D5: pop     edi
0x65E9D6: pop     esi
0x65E9D7: pop     ebp
0x65E9D8: xor     al, al
0x65E9DA: pop     ebx
0x65E9DB: add     esp, 10h
0x65E9DE: retn
0x65E9DF: mov     al, ds:0B3BB05h
0x65E9E4: pop     edi
0x65E9E5: pop     esi
0x65E9E6: pop     ebp
0x65E9E7: pop     ebx
0x65E9E8: add     esp, 10h
0x65E9EB: retn
0x65E9EC: cmp     dword ptr ds:0B3BAF4h, 0
0x65E9F3: jz      loc_65EB57
0x65E9F9: push    3
0x65E9FB: mov     ecx, ebp
0x65E9FD: call    ActorAnimData_GetAnimGroupFromField8Value
0x65EA02: push    eax
0x65EA03: call    sub_51AC80
0x65EA08: add     esp, 4
0x65EA0B: test    al, al
0x65EA0D: jz      loc_65EADE
0x65EA13: push    3
0x65EA15: mov     ecx, ebp
0x65EA17: call    ActorAnimData_GetAnimGroupFromField8Value
0x65EA1C: push    eax
0x65EA1D: call    sub_51ACC0
0x65EA22: add     esp, 4
0x65EA25: test    al, al
0x65EA27: jnz     loc_65EF38
0x65EA2D: mov     ecx, [esi+58h]
0x65EA30: mov     edx, [ecx]
0x65EA32: mov     eax, [edx+138h]
0x65EA38: call    eax
0x65EA3A: test    al, al
0x65EA3C: push    3
0x65EA3E: mov     ecx, ebp
0x65EA40: jz      short loc_65EA92
0x65EA42: call    ActorAnimData_GetSomethingFromField8Value
0x65EA47: cmp     eax, 3
0x65EA4A: jnz     loc_65EF38
0x65EA50: mov     ecx, esi
0x65EA52: call    Actor_GetCurrentAction
0x65EA57: cmp     eax, 5
0x65EA5A: jnz     short loc_65EA6E
0x65EA5C: push    3
0x65EA5E: mov     ecx, ebp
0x65EA60: call    ActorAnimData_GetSomethingFromField8Value
0x65EA65: cmp     eax, 3
0x65EA68: jle     loc_65EF38
0x65EA6E: fldz
0x65EA70: mov     ecx, offset flt_B370B0
0x65EA75: fstp    dword ptr [esi+640h]
0x65EA7B: mov     edi, 13h
0x65EA80: call    GameSetting_GetSafeFloatPointer
0x65EA85: fld     dword ptr [eax]
0x65EA87: fstp    dword ptr ds:0B3BAFCh
0x65EA8D: jmp     loc_65EC36
0x65EA92: call    ActorAnimData_GetSomethingFromField8Value
0x65EA97: cmp     eax, 2
0x65EA9A: jnz     loc_65EF38
0x65EAA0: mov     eax, ds:0B3BAF4h
0x65EAA5: sub     eax, 1
0x65EAA8: jz      short loc_65EABD
0x65EAAA: sub     eax, 1
0x65EAAD: jnz     loc_65EF38
0x65EAB3: mov     edi, 16h
0x65EAB8: jmp     loc_65EC36
0x65EABD: push    0; int
0x65EABF: push    offset off_A70EA4; Str2
0x65EAC4: push    3; MaxCount
0x65EAC6: mov     ecx, ebp
0x65EAC8: call    sub_472720
0x65EACD: mov     edi, eax
0x65EACF: sub     edi, 0FFFFFFFFh
0x65EAD2: neg     edi
0x65EAD4: sbb     edi, edi
0x65EAD6: add     edi, 15h
0x65EAD9: jmp     loc_65EC36
0x65EADE: mov     ecx, [esi+58h]
0x65EAE1: mov     edx, [ecx]
0x65EAE3: mov     eax, [edx+138h]
0x65EAE9: call    eax
0x65EAEB: test    al, al
0x65EAED: jz      short loc_65EB17
0x65EAEF: mov     ecx, esi
0x65EAF1: call    Actor_GetCurrentAction
0x65EAF6: cmp     eax, 5
0x65EAF9: jnz     short loc_65EB0D
0x65EAFB: push    3
0x65EAFD: mov     ecx, ebp
0x65EAFF: call    ActorAnimData_GetSomethingFromField8Value
0x65EB04: cmp     eax, 3
0x65EB07: jle     loc_65EF38
0x65EB0D: mov     edi, 13h
0x65EB12: jmp     loc_65EC36
0x65EB17: mov     eax, ds:0B3BAF4h
0x65EB1C: sub     eax, 1
0x65EB1F: jz      short loc_65EB34
0x65EB21: sub     eax, 1
0x65EB24: jnz     loc_65EF38
0x65EB2A: mov     edi, 16h
0x65EB2F: jmp     loc_65EC36
0x65EB34: mov     ecx, ds:0B241C4h
0x65EB3A: push    0; int
0x65EB3C: push    ecx; Str2
0x65EB3D: push    0; MaxCount
0x65EB3F: mov     ecx, ebp
0x65EB41: call    sub_4727E0
0x65EB46: xor     edx, edx
0x65EB48: cmp     al, 6Ch ; 'l'
0x65EB4A: setnz   dl
0x65EB4D: add     edx, 14h
0x65EB50: mov     edi, edx
0x65EB52: jmp     loc_65EC36
0x65EB57: push    1; a3
0x65EB59: push    4; a2
0x65EB5B: mov     ecx, ebx; this
0x65EB5D: call    InputGlobals__QueryControlState
0x65EB62: test    eax, eax
0x65EB64: jz      loc_65ECF4
0x65EB6A: cmp     byte ptr ds:0B3BAEBh, 0
0x65EB71: jnz     loc_65ECF4
0x65EB77: mov     ecx, [esi+58h]
0x65EB7A: mov     eax, [ecx]
0x65EB7C: mov     edx, [eax+304h]
0x65EB82: call    edx
0x65EB84: test    al, al
0x65EB86: jnz     short loc_65EB96
0x65EB88: push    1
0x65EB8A: mov     ecx, esi
0x65EB8C: call    sub_5E6D70
0x65EB91: jmp     loc_65EC1D
0x65EB96: mov     ecx, [esi+58h]
0x65EB99: mov     eax, [ecx]
0x65EB9B: mov     edx, [eax+138h]
0x65EBA1: call    edx
0x65EBA3: test    al, al
0x65EBA5: jz      short loc_65EBEE
0x65EBA7: mov     ecx, esi
0x65EBA9: call    Actor_GetCurrentAction
0x65EBAE: cmp     eax, 4
0x65EBB1: jz      short loc_65EBBF
0x65EBB3: mov     ecx, esi
0x65EBB5: call    Actor_GetCurrentAction
0x65EBBA: cmp     eax, 5
0x65EBBD: jnz     short loc_65EBCD
0x65EBBF: push    3
0x65EBC1: mov     ecx, ebp
0x65EBC3: call    ActorAnimData_GetSomethingFromField8Value
0x65EBC8: cmp     eax, 3
0x65EBCB: jle     short loc_65EC1D
0x65EBCD: fldz
0x65EBCF: mov     ecx, offset flt_B370B0
0x65EBD4: fstp    dword ptr [esi+640h]
0x65EBDA: mov     edi, 13h
0x65EBDF: call    GameSetting_GetSafeFloatPointer
0x65EBE4: fld     dword ptr [eax]
0x65EBE6: fstp    dword ptr ds:0B3BAFCh
0x65EBEC: jmp     short loc_65EC1D
0x65EBEE: push    3
0x65EBF0: mov     ecx, ebp
0x65EBF2: call    ActorAnimData_GetAnimGroupFromField8Value
0x65EBF7: push    eax
0x65EBF8: call    sub_51AC80
0x65EBFD: add     esp, 4
0x65EC00: test    al, al
0x65EC02: jz      loc_65ECD2
0x65EC08: mov     ecx, esi
0x65EC0A: call    Actor_IsSneaking
0x65EC0F: test    al, al
0x65EC11: jnz     short loc_65EC1D
0x65EC13: mov     dword ptr ds:0B3BAF4h, 1
0x65EC1D: fldz
0x65EC1F: fstp    dword ptr ds:0B3BAF8h
0x65EC25: mov     [esp+20h+var_D], 1
0x65EC2A: cmp     edi, 0FFh
0x65EC30: jz      loc_65EF38
0x65EC36: mov     ecx, esi
0x65EC38: call    Actor_GetCurrentAction
0x65EC3D: cmp     eax, 6
0x65EC40: jnz     short loc_65EC4B
0x65EC42: push    0; float
0x65EC44: mov     ecx, esi
0x65EC46: call    sub_5F4AE0
0x65EC4B: mov     ecx, esi
0x65EC4D: call    Actor_IsSneaking
0x65EC52: test    al, al
0x65EC54: jz      short loc_65EC96
0x65EC56: mov     ecx, [esi+58h]
0x65EC59: mov     edx, [ecx]
0x65EC5B: mov     eax, [edx+13Ch]
0x65EC61: call    eax
0x65EC63: test    al, al
0x65EC65: jnz     short loc_65EC96
0x65EC67: mov     ecx, [esi+58h]
0x65EC6A: mov     edx, [ecx]
0x65EC6C: mov     eax, [edx+138h]
0x65EC72: call    eax
0x65EC74: test    al, al
0x65EC76: jnz     short loc_65EC96
0x65EC78: mov     ecx, esi
0x65EC7A: call    Actor_IsSwimming
0x65EC7F: test    al, al
0x65EC81: jnz     short loc_65EC96
0x65EC83: push    1Ah
0x65EC85: mov     ecx, esi
0x65EC87: call    Actor_GetSkillMasteryLevel
0x65EC8C: cmp     eax, 1
0x65EC8F: jle     short loc_65EC96
0x65EC91: mov     edi, 16h
0x65EC96: xor     bl, bl
0x65EC98: cmp     edi, 16h
0x65EC9B: jnz     loc_65EEEF
0x65ECA1: mov     ecx, esi
0x65ECA3: call    Actor_IsSneaking
0x65ECA8: test    al, al
0x65ECAA: jnz     loc_65EEC6
0x65ECB0: mov     ecx, [esi+58h]
0x65ECB3: mov     edx, [ecx]
0x65ECB5: mov     eax, [edx+2C0h]
0x65ECBB: call    eax
0x65ECBD: movzx   eax, ax
0x65ECC0: test    al, 1
0x65ECC2: jz      loc_65EEA7
0x65ECC8: mov     edi, 17h
0x65ECCD: jmp     loc_65EEC6
0x65ECD2: mov     eax, ds:0B241C4h
0x65ECD7: push    0; int
0x65ECD9: push    eax; Str2
0x65ECDA: push    0; MaxCount
0x65ECDC: mov     ecx, ebp
0x65ECDE: call    sub_4727E0
0x65ECE3: xor     ecx, ecx
0x65ECE5: cmp     al, 6Ch ; 'l'
0x65ECE7: setnz   cl
0x65ECEA: add     ecx, 14h
0x65ECED: mov     edi, ecx
0x65ECEF: jmp     loc_65EC1D
0x65ECF4: push    0; a3
0x65ECF6: push    4; a2
0x65ECF8: mov     ecx, ebx; this
0x65ECFA: call    InputGlobals__QueryControlState
0x65ECFF: test    eax, eax
0x65ED01: jz      loc_65EF38
0x65ED07: mov     ecx, [esi+58h]
0x65ED0A: mov     edx, [ecx]
0x65ED0C: mov     eax, [edx+304h]
0x65ED12: call    eax
0x65ED14: test    al, al
0x65ED16: jz      loc_65EF38
0x65ED1C: cmp     byte ptr ds:0B3BAEBh, 0
0x65ED23: jnz     loc_65EF38
0x65ED29: mov     ecx, [esi+58h]
0x65ED2C: mov     edx, [ecx]
0x65ED2E: mov     eax, [edx+138h]
0x65ED34: call    eax
0x65ED36: test    al, al
0x65ED38: jz      short loc_65ED9F
0x65ED3A: mov     ecx, esi
0x65ED3C: call    Actor_GetCurrentAction
0x65ED41: cmp     eax, 4
0x65ED44: jz      short loc_65ED52
0x65ED46: mov     ecx, esi
0x65ED48: call    Actor_GetCurrentAction
0x65ED4D: cmp     eax, 5
0x65ED50: jnz     short loc_65ED60
0x65ED52: push    3
0x65ED54: mov     ecx, ebp
0x65ED56: call    ActorAnimData_GetSomethingFromField8Value
0x65ED5B: cmp     eax, 3
0x65ED5E: jle     short loc_65ED7B
0x65ED60: fldz
0x65ED62: mov     ecx, offset flt_B370B0
0x65ED67: fstp    dword ptr [esi+640h]
0x65ED6D: mov     edi, 13h
0x65ED72: call    GameSetting_GetSafeFloatPointer
0x65ED77: fld     dword ptr [eax]
0x65ED79: jmp     short loc_65ED99
0x65ED7B: fld     dword ptr [esi+640h]
0x65ED81: fadd    dword ptr ds:0B33E9Ch
0x65ED87: fstp    dword ptr [esi+640h]
0x65ED8D: fld     dword ptr ds:0B33E9Ch
0x65ED93: fadd    dword ptr ds:0B3BAFCh
0x65ED99: fstp    dword ptr ds:0B3BAFCh
0x65ED9F: mov     edx, [esi]
0x65EDA1: mov     eax, [edx+25Ch]
0x65EDA7: mov     ecx, esi
0x65EDA9: call    eax
0x65EDAB: test    al, al
0x65EDAD: jnz     loc_65EC2A
0x65EDB3: push    3
0x65EDB5: mov     ecx, ebp
0x65EDB7: call    ActorAnimData_GetAnimGroupFromField8Value
0x65EDBC: push    eax
0x65EDBD: call    sub_51ACC0
0x65EDC2: add     esp, 4
0x65EDC5: test    al, al
0x65EDC7: jnz     short loc_65EE06
0x65EDC9: cmp     dword ptr ds:0B3BAF4h, 2
0x65EDD0: jz      short loc_65EE06
0x65EDD2: mov     ecx, [esi+58h]
0x65EDD5: mov     edx, [ecx]
0x65EDD7: mov     eax, [edx+138h]
0x65EDDD: call    eax
0x65EDDF: test    al, al
0x65EDE1: jnz     short loc_65EE06
0x65EDE3: mov     ecx, [esi+58h]
0x65EDE6: mov     edx, [ecx]
0x65EDE8: mov     eax, [edx+13Ch]
0x65EDEE: call    eax
0x65EDF0: test    al, al
0x65EDF2: jnz     short loc_65EE06
0x65EDF4: fld     dword ptr ds:0B33E9Ch
0x65EDFA: fadd    dword ptr ds:0B3BAF8h
0x65EE00: fstp    dword ptr ds:0B3BAF8h
0x65EE06: mov     ecx, offset unk_B36B48
0x65EE0B: call    GameSetting_GetSafeFloatPointer
0x65EE10: fld     dword ptr ds:0B3BAF8h
0x65EE16: fld     dword ptr [eax]
0x65EE18: fcompp
0x65EE1A: fnstsw  ax
0x65EE1C: test    ah, 5
0x65EE1F: jp      loc_65EC25
0x65EE25: mov     ecx, esi
0x65EE27: call    Actor_IsSwimming
0x65EE2C: test    al, al
0x65EE2E: jnz     loc_65EC13
0x65EE34: push    1Ah
0x65EE36: mov     ecx, esi
0x65EE38: call    Actor_GetSkillMasteryLevel
0x65EE3D: cmp     eax, 1
0x65EE40: jg      short loc_65EE51
0x65EE42: mov     ecx, esi
0x65EE44: call    sub_5EC180
0x65EE49: test    al, al
0x65EE4B: jnz     loc_65EC13
0x65EE51: push    3
0x65EE53: mov     ecx, ebp
0x65EE55: call    ActorAnimData_GetAnimGroupFromField8Value
0x65EE5A: push    eax
0x65EE5B: call    sub_51AC80
0x65EE60: add     esp, 4
0x65EE63: test    al, al
0x65EE65: jz      short loc_65EE9D
0x65EE67: push    3
0x65EE69: mov     ecx, ebp
0x65EE6B: call    sub_4706E0
0x65EE70: fld     dword ptr [eax+48h]
0x65EE73: fadd    dword ptr [ebp+94h]
0x65EE79: fstp    [esp+20h+var_8]
0x65EE7D: fld     [esp+20h+var_8]
0x65EE81: fcomp   dword ptr ds:0A2FAA8h
0x65EE87: fnstsw  ax
0x65EE89: test    ah, 41h
0x65EE8C: jnz     short loc_65EE9D
0x65EE8E: mov     dword ptr ds:0B3BAF4h, 2
0x65EE98: jmp     loc_65EC1D
0x65EE9D: mov     edi, 16h
0x65EEA2: jmp     loc_65EC1D
0x65EEA7: test    al, 2
0x65EEA9: jz      short loc_65EEB2
0x65EEAB: mov     edi, 18h
0x65EEB0: jmp     short loc_65EEC6
0x65EEB2: test    al, 4
0x65EEB4: jz      short loc_65EEBD
0x65EEB6: mov     edi, 19h
0x65EEBB: jmp     short loc_65EEC6
0x65EEBD: test    al, 8
0x65EEBF: jz      short loc_65EEC6
0x65EEC1: mov     edi, 1Ah
0x65EEC6: push    0; Seed
0x65EEC8: call    GetRandomLargeInteger?
0x65EECD: mov     [esp+24h+var_8], eax
0x65EED1: fild    [esp+24h+var_8]
0x65EED5: add     esp, 4
0x65EED8: fdiv    qword ptr ds:0A3D5A8h
0x65EEDE: fld     dword ptr ds:0B36F40h
0x65EEE4: fcompp
0x65EEE6: fnstsw  ax
0x65EEE8: test    ah, 1
0x65EEEB: jnz     short loc_65EEEF
0x65EEED: mov     bl, 1
0x65EEEF: push    edi
0x65EEF0: mov     ecx, esi
0x65EEF2: call    sub_5F48D0
0x65EEF7: test    al, al
0x65EEF9: jz      short loc_65EF21
0x65EEFB: test    bl, bl
0x65EEFD: jz      short loc_65EF21
0x65EEFF: mov     ecx, [esi+58h]
0x65EF02: mov     edx, [ecx]
0x65EF04: mov     eax, [edx+13Ch]
0x65EF0A: call    eax
0x65EF0C: test    al, al
0x65EF0E: jnz     short loc_65EF21
0x65EF10: mov     edx, [esi]
0x65EF12: mov     eax, [edx+308h]
0x65EF18: push    0
0x65EF1A: push    0Ah
0x65EF1C: push    esi
0x65EF1D: mov     ecx, esi
0x65EF1F: call    eax
0x65EF21: mov     ebx, [esp+20h+var_4]
0x65EF25: xor     eax, eax
0x65EF27: mov     ds:0B3BAF4h, eax
0x65EF2C: mov     byte ptr ds:0B3BB84h, 1
0x65EF33: mov     ds:0B3BB80h, eax
0x65EF38: push    0; a3
0x65EF3A: push    4; a2
0x65EF3C: mov     ecx, ebx; this
0x65EF3E: call    InputGlobals__QueryControlState
0x65EF43: test    eax, eax
0x65EF45: jnz     short loc_65EF5A
0x65EF47: push    1; a3
0x65EF49: push    4; a2
0x65EF4B: mov     ecx, ebx; this
0x65EF4D: call    InputGlobals__QueryControlState
0x65EF52: test    eax, eax
0x65EF54: jz      loc_65F056
0x65EF5A: mov     ecx, [esi+58h]
0x65EF5D: mov     edx, [ecx]
0x65EF5F: mov     eax, [edx+304h]
0x65EF65: call    eax
0x65EF67: test    al, al
0x65EF69: jz      loc_65F056
0x65EF6F: mov     ecx, [esi+58h]
0x65EF72: mov     edx, [ecx]
0x65EF74: mov     eax, [edx+13Ch]
0x65EF7A: call    eax
0x65EF7C: test    al, al
0x65EF7E: jnz     loc_65F056
0x65EF84: cmp     ds:0B3BAEBh, al
0x65EF8A: jnz     loc_65F056
0x65EF90: push    3
0x65EF92: mov     ecx, ebp
0x65EF94: call    ActorAnimData_GetAnimGroupFromField8Value
0x65EF99: push    eax
0x65EF9A: call    sub_51AC80
0x65EF9F: add     esp, 4
0x65EFA2: test    al, al
0x65EFA4: jz      loc_65F070
0x65EFAA: push    3
0x65EFAC: mov     ecx, ebp
0x65EFAE: call    ActorAnimData_GetAnimGroupFromField8Value
0x65EFB3: push    eax
0x65EFB4: call    sub_51ACC0
0x65EFB9: add     esp, 4
0x65EFBC: test    al, al
0x65EFBE: jnz     loc_65F070
0x65EFC4: cmp     dword ptr ds:0B3BAF4h, 0
0x65EFCB: jnz     loc_65F070
0x65EFD1: push    3
0x65EFD3: mov     ecx, ebp
0x65EFD5: call    sub_4706E0
0x65EFDA: mov     ecx, [esi+58h]
0x65EFDD: mov     edx, [ecx]
0x65EFDF: mov     edi, eax
0x65EFE1: fld     dword ptr [edi+48h]
0x65EFE4: mov     eax, [edx+138h]
0x65EFEA: fadd    dword ptr [ebp+94h]
0x65EFF0: fstp    [esp+20h+var_4]
0x65EFF4: call    eax
0x65EFF6: test    al, al
0x65EFF8: jz      short loc_65F013
0x65EFFA: push    3
0x65EFFC: mov     ecx, ebp
0x65EFFE: call    ActorAnimData_GetSomethingFromField8Value
0x65F003: cmp     eax, 2
0x65F006: jnz     short loc_65F070
0x65F008: cmp     byte ptr ds:0B3BB84h, 0
0x65F00F: jz      short loc_65F070
0x65F011: jmp     short loc_65F036
0x65F013: fldz
0x65F015: fcomp   [esp+20h+var_4]
0x65F019: fnstsw  ax
0x65F01B: test    ah, 1
0x65F01E: jz      short loc_65F026
0x65F020: cmp     dword ptr [edi+44h], 1
0x65F024: jz      short loc_65F070
0x65F026: mov     edx, [esi]
0x65F028: mov     eax, [edx+25Ch]
0x65F02E: mov     ecx, esi
0x65F030: call    eax
0x65F032: test    al, al
0x65F034: jnz     short loc_65F070
0x65F036: push    3
0x65F038: mov     ecx, ebp
0x65F03A: call    sub_4706D0
0x65F03F: mov     ecx, [esp+20h+var_C]
0x65F043: push    3
0x65F045: call    sub_4706D0
0x65F04A: mov     al, [esp+20h+var_D]
0x65F04E: pop     edi
0x65F04F: pop     esi
0x65F050: pop     ebp
0x65F051: pop     ebx
0x65F052: add     esp, 10h
0x65F055: retn
0x65F056: mov     ecx, esi
0x65F058: mov     byte ptr ds:0B3BB84h, 0
0x65F05F: call    Actor_GetCurrentAction
0x65F064: cmp     eax, 0FFFFFFFFh
0x65F067: jnz     short loc_65F070
0x65F069: mov     byte ptr ds:0B3BAEBh, 0
0x65F070: mov     al, [esp+20h+var_D]
0x65F074: pop     edi
0x65F075: pop     esi
0x65F076: pop     ebp
0x65F077: pop     ebx
0x65F078: add     esp, 10h
0x65F07B: retn
