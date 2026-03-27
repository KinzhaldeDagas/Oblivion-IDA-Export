0x6189E0: sub     esp, 2Ch
0x6189E3: push    esi
0x6189E4: mov     esi, ecx
0x6189E6: cmp     dword ptr [esi+74h], 3
0x6189EA: jnz     loc_6191A4
0x6189F0: call    sub_6135F0
0x6189F5: test    eax, eax
0x6189F7: jz      loc_6191A4
0x6189FD: mov     eax, [esi+6Ch]
0x618A00: cmp     eax, 4
0x618A03: push    edi
0x618A04: jz      short loc_618A15
0x618A06: cmp     eax, 0Eh
0x618A09: jz      short loc_618A15
0x618A0B: cmp     eax, 0Ch
0x618A0E: jz      short loc_618A15
0x618A10: cmp     eax, 7
0x618A13: jnz     short loc_618A33
0x618A15: mov     edi, [esi+3Ch]
0x618A18: push    0
0x618A1A: mov     ecx, esi
0x618A1C: call    sub_6135F0
0x618A21: push    eax
0x618A22: push    edi
0x618A23: call    sub_6131D0
0x618A28: add     esp, 0Ch
0x618A2B: test    al, al
0x618A2D: jz      loc_6191A3
0x618A33: mov     ecx, esi
0x618A35: mov     dword ptr [esi+50h], 0FFh
0x618A3C: call    sub_615980
0x618A41: fstp    [esp+34h+var_1C]
0x618A45: fldz
0x618A47: lea     eax, [esp+34h+var_14]
0x618A4B: push    eax
0x618A4C: fst     [esp+38h+var_10]
0x618A50: lea     ecx, [esp+38h+var_10]
0x618A54: fstp    [esp+38h+var_14]
0x618A58: push    ecx
0x618A59: mov     ecx, esi
0x618A5B: call    sub_6142D0
0x618A60: mov     ecx, [esi+3Ch]
0x618A63: mov     edx, [ecx]
0x618A65: mov     eax, [edx+164h]
0x618A6B: push    3
0x618A6D: call    eax
0x618A6F: mov     ecx, eax
0x618A71: call    ActorAnimData_GetAnimGroupFromField8Value
0x618A76: push    eax
0x618A77: call    sub_51AC80
0x618A7C: mov     ecx, [esi+3Ch]
0x618A7F: mov     edx, [ecx]
0x618A81: add     esp, 4
0x618A84: mov     byte ptr [esp+30h+var_24+1], al
0x618A88: mov     eax, [edx+164h]
0x618A8E: push    3
0x618A90: call    eax
0x618A92: mov     ecx, eax
0x618A94: call    ActorAnimData_GetSomethingFromField8Value
0x618A99: cmp     eax, 2
0x618A9C: mov     ecx, esi
0x618A9E: setz    byte ptr [esp+30h+var_24+3]
0x618AA3: call    sub_6135F0
0x618AA8: mov     ecx, eax
0x618AAA: call    sub_5E5640
0x618AAF: mov     ecx, esi
0x618AB1: mov     byte ptr [esp+30h+var_C], al
0x618AB5: call    sub_6135F0
0x618ABA: mov     ecx, eax
0x618ABC: call    Actor_GetCurrentAction
0x618AC1: cmp     eax, 7
0x618AC4: jz      short loc_618ADE
0x618AC6: mov     ecx, esi
0x618AC8: call    sub_6135F0
0x618ACD: mov     ecx, eax
0x618ACF: call    Actor_GetCurrentAction
0x618AD4: cmp     eax, 8
0x618AD7: mov     byte ptr [esp+30h+var_14], 0
0x618ADC: jnz     short loc_618AE3
0x618ADE: mov     byte ptr [esp+30h+var_14], 1
0x618AE3: push    ebp
0x618AE4: mov     ecx, esi
0x618AE6: call    sub_6135F0
0x618AEB: mov     edx, [eax]
0x618AED: mov     ecx, eax
0x618AEF: mov     eax, [edx+334h]
0x618AF5: push    1
0x618AF7: call    eax
0x618AF9: mov     ecx, esi
0x618AFB: mov     byte ptr [esp+38h+var_28+2], al
0x618AFF: call    sub_6135F0
0x618B04: mov     ecx, eax
0x618B06: call    Actor_IsBlocking
0x618B0B: mov     ecx, esi
0x618B0D: mov     byte ptr [esp+38h+var_8], al
0x618B11: call    sub_612D60
0x618B16: mov     edi, eax
0x618B18: test    edi, edi
0x618B1A: mov     byte ptr [esp+38h+var_30+6], 0
0x618B1F: mov     byte ptr [esp+38h+var_30+7], 0
0x618B24: mov     byte ptr [esp+38h+var_28], 0
0x618B29: jz      loc_618BC1
0x618B2F: mov     ecx, [esi+3Ch]
0x618B32: mov     ecx, [ecx+58h]
0x618B35: mov     edx, [ecx]
0x618B37: mov     eax, [edx+0ECh]
0x618B3D: push    1
0x618B3F: call    eax
0x618B41: mov     dl, [edi+90h]
0x618B47: cmp     dl, 4
0x618B4A: jnz     short loc_618BB2
0x618B4C: mov     ebp, [edi+64h]
0x618B4F: test    ebp, ebp
0x618B51: jz      short loc_618BB2
0x618B53: mov     ecx, eax
0x618B55: add     ebp, 24h ; '$'
0x618B58: call    sub_4849C0
0x618B5D: fstp    [esp+38h+var_24]
0x618B61: mov     edx, [ebp+0]
0x618B64: mov     eax, [edx]
0x618B66: push    0
0x618B68: mov     ecx, ebp
0x618B6A: call    eax
0x618B6C: fcomp   [esp+38h+var_24]
0x618B70: fnstsw  ax
0x618B72: test    ah, 41h
0x618B75: jz      short loc_618BA6
0x618B77: mov     ecx, esi
0x618B79: call    sub_6135F0
0x618B7E: test    eax, eax
0x618B80: jz      short loc_618BAB
0x618B82: mov     eax, [edi+64h]
0x618B85: test    eax, eax
0x618B87: jz      short loc_618B8E
0x618B89: add     eax, 18h
0x618B8C: jmp     short loc_618B90
0x618B8E: xor     eax, eax
0x618B90: push    eax
0x618B91: mov     ecx, esi
0x618B93: call    sub_6135F0
0x618B98: mov     ecx, eax
0x618B9A: add     ecx, 68h ; 'h'
0x618B9D: call    MagicTarget_HasMagicItem
0x618BA2: test    al, al
0x618BA4: jz      short loc_618BAB
0x618BA6: mov     byte ptr [esp+38h+var_30+6], 1
0x618BAB: mov     byte ptr [esp+38h+var_30+7], 1
0x618BB0: jmp     short loc_618BC1
0x618BB2: cmp     dl, 5
0x618BB5: jz      short loc_618BC1
0x618BB7: cmp     dl, 4
0x618BBA: jz      short loc_618BC1
0x618BBC: mov     byte ptr [esp+38h+var_28], 1
0x618BC1: fld     [esp+38h+var_14]
0x618BC5: push    0; int
0x618BC7: sub     esp, 8
0x618BCA: fstp    [esp+44h+var_40]; float
0x618BCE: mov     ecx, esi
0x618BD0: fld     [esp+44h+var_1C]
0x618BD4: fstp    [esp+44h+var_44]; float
0x618BD7: call    sub_613440
0x618BDC: test    al, al
0x618BDE: jz      loc_6191A2
0x618BE4: fldz
0x618BE6: mov     eax, [esi+70h]
0x618BE9: cmp     eax, 2
0x618BEC: fstp    dword ptr [esp+38h+var_24]
0x618BF0: push    ebx
0x618BF1: mov     ebx, [esp+3Ch+var_1C+4]
0x618BF5: jz      short loc_618BFC
0x618BF7: cmp     eax, 4
0x618BFA: jnz     short loc_618C5D
0x618BFC: test    edi, edi
0x618BFE: jz      short loc_618C5D
0x618C00: cmp     byte ptr [esp+3Ch+var_28], 0
0x618C05: jnz     short loc_618C5D
0x618C07: cmp     byte ptr [esp+3Ch+var_30+6], 0
0x618C0C: jnz     short loc_618C5D
0x618C0E: mov     ecx, esi
0x618C10: call    sub_6135F0
0x618C15: mov     ecx, [esp+3Ch+var_8]
0x618C19: mov     edx, [eax]
0x618C1B: mov     edi, [esi+3Ch]
0x618C1E: push    ecx
0x618C1F: mov     ecx, eax
0x618C21: mov     eax, [edx+19Ch]
0x618C27: call    eax
0x618C29: mov     ecx, [esp+3Ch+var_C]
0x618C2D: mov     edx, [edi]
0x618C2F: push    eax; char
0x618C30: mov     eax, [edx+284h]
0x618C36: push    ebx; float
0x618C37: push    0; float
0x618C39: push    ecx; float
0x618C3A: push    7; char
0x618C3C: mov     ecx, edi
0x618C3E: call    eax
0x618C40: push    eax; int
0x618C41: mov     ecx, esi
0x618C43: call    sub_613780
0x618C48: push    eax; int
0x618C49: mov     ecx, edi
0x618C4B: call    sub_5E0F50
0x618C50: push    eax; int
0x618C51: call    sub_546800
0x618C56: fstp    dword ptr [esp+5Ch+var_24]
0x618C5A: add     esp, 20h
0x618C5D: fldz
0x618C5F: mov     ecx, [esi+80h]
0x618C65: test    ecx, ecx
0x618C67: fstp    [esp+3Ch+var_1C]
0x618C6B: jz      loc_618CFB
0x618C71: fld     dword ptr [esi+44h]
0x618C74: fsub    dword ptr [esi+104h]
0x618C7A: fld     dword ptr [esi+108h]
0x618C80: fcompp
0x618C82: fnstsw  ax
0x618C84: test    ah, 5
0x618C87: jp      short loc_618CFB
0x618C89: push    0
0x618C8B: push    0
0x618C8D: push    ecx
0x618C8E: mov     ecx, esi
0x618C90: call    sub_613BB0
0x618C95: test    al, al
0x618C97: jz      short loc_618CFB
0x618C99: mov     ecx, esi
0x618C9B: call    sub_6135F0
0x618CA0: mov     edx, [eax]
0x618CA2: mov     edi, [esi+3Ch]
0x618CA5: mov     ebp, [edi]
0x618CA7: mov     ecx, eax
0x618CA9: mov     eax, [edx+19Ch]
0x618CAF: push    0
0x618CB1: call    eax
0x618CB3: mov     ecx, [esp+38h+var_8]
0x618CB7: mov     edx, [edi]
0x618CB9: push    eax
0x618CBA: mov     eax, [edx+284h]
0x618CC0: push    ebx; char
0x618CC1: push    0; float
0x618CC3: push    ecx; float
0x618CC4: push    7; float
0x618CC6: mov     ecx, edi
0x618CC8: call    eax
0x618CCA: mov     ecx, [esi+80h]
0x618CD0: mov     ecx, [ecx]
0x618CD2: push    eax; char
0x618CD3: add     ecx, 0Ch
0x618CD6: call    EffectItemList_GetSchoolAV
0x618CDB: mov     edx, [ebp+284h]
0x618CE1: push    eax; int
0x618CE2: mov     ecx, edi
0x618CE4: call    edx
0x618CE6: push    eax; int
0x618CE7: mov     ecx, edi
0x618CE9: call    sub_5E0F50
0x618CEE: push    eax; int
0x618CEF: call    sub_546800
0x618CF4: fstp    [esp+5Ch+var_1C]
0x618CF8: add     esp, 20h
0x618CFB: cmp     byte ptr [esp+3Ch+var_28+2], 0
0x618D00: jnz     short loc_618D47
0x618D02: mov     ecx, esi
0x618D04: call    sub_6135F0
0x618D09: cmp     eax, ds:0B333C4h
0x618D0F: jz      short loc_618D47
0x618D11: cmp     dword ptr [esi+80h], 0
0x618D18: fld     dword ptr [esp+3Ch+var_24]
0x618D1C: fld     qword ptr ds:0A309F0h
0x618D22: fadd    st(1), st
0x618D24: fxch    st(1)
0x618D26: fstp    dword ptr [esp+3Ch+var_24]
0x618D2A: jz      short loc_618D45
0x618D2C: fldz
0x618D2E: fld     [esp+3Ch+var_1C]
0x618D32: fcom    st(1)
0x618D34: fnstsw  ax
0x618D36: test    ah, 41h
0x618D39: jnz     short loc_618D4B
0x618D3B: faddp   st(2), st
0x618D3D: fxch    st(1)
0x618D3F: fstp    [esp+3Ch+var_1C]
0x618D43: jmp     short loc_618D4F
0x618D45: fstp    st
0x618D47: fldz
0x618D49: jmp     short loc_618D4F
0x618D4B: fstp    st(2)
0x618D4D: fstp    st(1)
0x618D4F: fcom    dword ptr [esp+3Ch+var_24]
0x618D53: fnstsw  ax
0x618D55: test    ah, 5
0x618D58: jnp     short loc_618D69
0x618D5A: fcomp   [esp+3Ch+var_1C]
0x618D5E: fnstsw  ax
0x618D60: test    ah, 5
0x618D63: jnp     short loc_618D6B
0x618D65: xor     bl, bl
0x618D67: jmp     short loc_618D71
0x618D69: fstp    st
0x618D6B: mov     bl, [esi+158h]
0x618D71: mov     eax, [esi+3Ch]
0x618D74: mov     ecx, [eax+58h]
0x618D77: mov     edx, [ecx]
0x618D79: mov     eax, [edx+2DCh]
0x618D7F: call    eax
0x618D81: test    al, al
0x618D83: jz      short loc_618D89
0x618D85: test    bl, bl
0x618D87: jnz     short loc_618D95
0x618D89: fldz
0x618D8B: fst     dword ptr [esp+3Ch+var_24]
0x618D8F: fst     [esp+3Ch+var_1C]
0x618D93: jmp     short loc_618D97
0x618D95: fldz
0x618D97: cmp     byte ptr [esp+3Ch+var_30+7], 0
0x618D9C: fld     dword ptr [esp+3Ch+var_24]
0x618DA0: fld     [esp+3Ch+var_1C]
0x618DA4: jz      short loc_618DCE
0x618DA6: fld     dword ptr [esi+44h]
0x618DA9: fsub    dword ptr [esi+1B0h]
0x618DAF: fld     dword ptr [esi+1B4h]
0x618DB5: fcompp
0x618DB7: fnstsw  ax
0x618DB9: test    ah, 5
0x618DBC: jnp     short loc_618DCE
0x618DBE: fstp    st(1)
0x618DC0: fxch    st(1)
0x618DC2: fst     dword ptr [esp+3Ch+var_24]
0x618DC6: fld     dword ptr [esp+3Ch+var_24]
0x618DCA: fxch    st(1)
0x618DCC: fxch    st(2)
0x618DCE: fcom    st(2)
0x618DD0: fnstsw  ax
0x618DD2: test    ah, 41h
0x618DD5: jnz     loc_618EC6
0x618DDB: fxch    st(1)
0x618DDD: fcom    st(2)
0x618DDF: fnstsw  ax
0x618DE1: test    ah, 41h
0x618DE4: jnz     loc_618EC6
0x618DEA: fld     st(1)
0x618DEC: fsub    st, st(1)
0x618DEE: fstp    [esp+3Ch+var_8]
0x618DF2: fld     [esp+3Ch+var_8]
0x618DF6: fabs
0x618DF8: fstp    [esp+3Ch+var_8]
0x618DFC: fld     [esp+3Ch+var_8]
0x618E00: fstp    [esp+3Ch+var_8]
0x618E04: fld     [esp+3Ch+var_8]
0x618E08: fld     st
0x618E0A: fadd    st, st(1)
0x618E0C: call    Double_To_SInt32
0x618E11: mov     [esp+3Ch+var_8], eax
0x618E15: fisubr  [esp+3Ch+var_8]
0x618E19: call    Double_To_SInt32
0x618E1E: mov     edi, eax
0x618E20: test    edi, edi
0x618E22: jz      loc_618EB9
0x618E28: fstp    st(2)
0x618E2A: push    0; Seed
0x618E2C: fcom    st(1)
0x618E2E: fnstsw  ax
0x618E30: fstp    st(1)
0x618E32: test    ah, 41h
0x618E35: jnz     short loc_618E6E
0x618E37: fstp    qword ptr [esp+40h+var_10]
0x618E3B: call    GetRandomLargeInteger?
0x618E40: cdq
0x618E41: idiv    edi
0x618E43: push    0; Seed
0x618E45: mov     [esp+44h+var_8], edx
0x618E49: fild    [esp+44h+var_8]
0x618E4D: fsubr   qword ptr [esp+44h+var_10]
0x618E51: fstp    [esp+44h+var_1C]
0x618E55: call    GetRandomLargeInteger?
0x618E5A: cdq
0x618E5B: add     esp, 8
0x618E5E: idiv    edi
0x618E60: mov     [esp+3Ch+var_8], edx
0x618E64: fild    [esp+3Ch+var_8]
0x618E68: fadd    dword ptr [esp+3Ch+var_24]
0x618E6C: jmp     short loc_618EA9
0x618E6E: fstp    st
0x618E70: call    GetRandomLargeInteger?
0x618E75: cdq
0x618E76: idiv    edi
0x618E78: push    0; Seed
0x618E7A: mov     [esp+44h+var_8], edx
0x618E7E: fild    [esp+44h+var_8]
0x618E82: fadd    [esp+44h+var_1C]
0x618E86: fstp    [esp+44h+var_1C]
0x618E8A: fld     dword ptr [esp+44h+var_24]
0x618E8E: fstp    qword ptr [esp+44h+var_10]
0x618E92: call    GetRandomLargeInteger?
0x618E97: cdq
0x618E98: add     esp, 8
0x618E9B: idiv    edi
0x618E9D: mov     [esp+3Ch+var_8], edx
0x618EA1: fild    [esp+3Ch+var_8]
0x618EA5: fsubr   qword ptr [esp+3Ch+var_10]
0x618EA9: fstp    dword ptr [esp+3Ch+var_24]
0x618EAD: fld     dword ptr [esp+3Ch+var_24]
0x618EB1: fld     [esp+3Ch+var_1C]
0x618EB5: fldz
0x618EB7: fxch    st(2)
0x618EB9: fcom    st(1)
0x618EBB: fnstsw  ax
0x618EBD: test    ah, 5
0x618EC0: jnp     short loc_618EC6
0x618EC2: fstp    st(1)
0x618EC4: jmp     short loc_618EC8
0x618EC6: fstp    st
0x618EC8: fstp    [esp+3Ch+var_1C+4]
0x618ECC: fld     [esp+3Ch+var_1C+4]
0x618ED0: fld     st
0x618ED2: fsubr   qword ptr ds:0A309F0h
0x618ED8: fld     dword ptr ds:0B37128h
0x618EDE: fcom    st(1)
0x618EE0: fnstsw  ax
0x618EE2: test    ah, 5
0x618EE5: jp      short loc_618EEB
0x618EE7: fstp    st
0x618EE9: jmp     short loc_618EED
0x618EEB: fstp    st(1)
0x618EED: mov     ebp, 1
0x618EF2: fstp    [esp+3Ch+var_14]
0x618EF6: cmp     [esi+6Ch], ebp
0x618EF9: jnz     short loc_618F03
0x618EFB: fxch    st(1)
0x618EFD: fst     [esp+3Ch+var_14]
0x618F01: fxch    st(1)
0x618F03: cmp     byte ptr [esp+3Ch+var_28+1], 0
0x618F08: jz      short loc_618F19
0x618F0A: cmp     byte ptr [esp+3Ch+var_28+3], 0
0x618F0F: jnz     short loc_618F19
0x618F11: fxch    st(1)
0x618F13: fst     [esp+3Ch+var_14]
0x618F17: fxch    st(1)
0x618F19: mov     ebx, 2
0x618F1E: cmp     [esi+78h], ebx
0x618F21: jnz     short loc_618F2B
0x618F23: fxch    st(1)
0x618F25: fstp    [esp+3Ch+var_14]
0x618F29: jmp     short loc_618F2D
0x618F2B: fstp    st(1)
0x618F2D: fadd    [esp+3Ch+var_14]
0x618F31: call    Double_To_SInt32
0x618F36: test    eax, eax
0x618F38: mov     edi, eax
0x618F3A: jg      short loc_618F41
0x618F3C: mov     edi, 64h ; 'd'
0x618F41: push    0; Seed
0x618F43: call    GetRandomLargeInteger?
0x618F48: cdq
0x618F49: idiv    edi
0x618F4B: add     esp, 4
0x618F4E: mov     [esp+3Ch+var_8], edx
0x618F52: fild    [esp+3Ch+var_8]
0x618F56: fstp    [esp+3Ch+var_8]
0x618F5A: fld     [esp+3Ch+var_8]
0x618F5E: fld     [esp+3Ch+var_1C+4]
0x618F62: fcom    st(1)
0x618F64: fnstsw  ax
0x618F66: test    ah, 41h
0x618F69: jnz     loc_619071
0x618F6F: fld     dword ptr [esp+3Ch+var_24]
0x618F73: fld     [esp+3Ch+var_1C]
0x618F77: fcompp
0x618F79: fnstsw  ax
0x618F7B: test    ah, 41h
0x618F7E: jp      loc_619071
0x618F84: cmp     byte ptr [esi+49h], 0
0x618F88: fstp    st(1)
0x618F8A: fstp    st
0x618F8C: jz      short loc_618FA7
0x618F8E: mov     ecx, [esi+3Ch]
0x618F91: push    0; float
0x618F93: call    sub_5F4AE0
0x618F98: cmp     [esi+74h], ebp
0x618F9B: jnz     short loc_618FA7
0x618F9D: mov     [esi+78h], ebp
0x618FA0: mov     dword ptr [esi+74h], 3
0x618FA7: mov     ecx, esi
0x618FA9: call    sub_6135F0
0x618FAE: mov     edx, [eax]
0x618FB0: mov     ecx, eax
0x618FB2: mov     eax, [edx+154h]
0x618FB8: call    eax
0x618FBA: test    eax, eax
0x618FBC: jz      loc_6191A1
0x618FC2: mov     ecx, esi
0x618FC4: call    sub_616CA0
0x618FC9: push    0; Seed
0x618FCB: call    GetRandomLargeInteger?
0x618FD0: mov     [esp+40h+var_8], eax
0x618FD4: fild    [esp+40h+var_8]
0x618FD8: add     esp, 4
0x618FDB: mov     ecx, offset fCombatSpeakAttackChance
0x618FE0: fdiv    qword ptr ds:0A3D5A8h
0x618FE6: fstp    qword ptr [esp+3Ch+var_8]
0x618FEA: call    GameSetting_GetSafeFloatPointer
0x618FEF: fld     dword ptr [eax]
0x618FF1: fcomp   qword ptr [esp+3Ch+var_8]
0x618FF5: fnstsw  ax
0x618FF7: test    ah, 1
0x618FFA: jnz     short loc_61901A
0x618FFC: mov     ebp, [esi+3Ch]
0x618FFF: mov     edi, [ebp+0]
0x619002: push    0
0x619004: push    0
0x619006: mov     ecx, esi
0x619008: add     edi, 308h
0x61900E: call    sub_6135F0
0x619013: mov     edx, [edi]
0x619015: push    eax
0x619016: mov     ecx, ebp
0x619018: call    edx
0x61901A: push    0
0x61901C: push    13h
0x61901E: mov     ecx, esi
0x619020: call    sub_612BD0
0x619025: cmp     byte ptr [esp+3Ch+var_30+7], 0
0x61902A: jz      loc_6191A1
0x619030: fld     dword ptr [esi+44h]
0x619033: mov     ecx, offset unk_B36F78
0x619038: fstp    [esp+3Ch+var_8]
0x61903C: call    GameSetting_GetSafeFloatPointer
0x619041: fld     dword ptr [eax]
0x619043: pop     ebx
0x619044: fstp    [esp+38h+var_10]
0x619048: pop     ebp
0x619049: fld     [esp+34h+var_8]
0x61904D: pop     edi
0x61904E: fstp    dword ptr [esi+1B0h]
0x619054: fld     [esp+30h+var_10]
0x619058: fstp    dword ptr [esi+1B4h]
0x61905E: fld     dword ptr ds:0A30634h
0x619064: fstp    dword ptr [esi+1B8h]
0x61906A: pop     esi
0x61906B: add     esp, 2Ch
0x61906E: retn    4
0x619071: fcompp
0x619073: fnstsw  ax
0x619075: test    ah, 41h
0x619078: jnz     loc_619134
0x61907E: fld     [esp+3Ch+var_1C]
0x619082: fld     dword ptr [esp+3Ch+var_24]
0x619086: fcompp
0x619088: fnstsw  ax
0x61908A: test    ah, 5
0x61908D: jp      loc_619134
0x619093: cmp     byte ptr [esp+3Ch+var_28+1], 0
0x619098: jnz     loc_619134
0x61909E: cmp     byte ptr [esi+49h], 0
0x6190A2: jz      short loc_6190BD
0x6190A4: mov     ecx, [esi+3Ch]
0x6190A7: push    0; float
0x6190A9: call    sub_5F4AE0
0x6190AE: cmp     [esi+74h], ebp
0x6190B1: jnz     short loc_6190BD
0x6190B3: mov     [esi+78h], ebp
0x6190B6: mov     dword ptr [esi+74h], 3
0x6190BD: mov     ecx, esi
0x6190BF: call    sub_6135F0
0x6190C4: test    eax, eax
0x6190C6: jz      short loc_6190CD
0x6190C8: add     eax, 68h ; 'h'
0x6190CB: jmp     short loc_6190CF
0x6190CD: xor     eax, eax
0x6190CF: push    eax
0x6190D0: mov     eax, [esi+80h]
0x6190D6: push    eax
0x6190D7: mov     ecx, esi
0x6190D9: call    sub_617340
0x6190DE: test    al, al
0x6190E0: jz      loc_6191A1
0x6190E6: mov     ecx, [esi+74h]
0x6190E9: fld     dword ptr [esi+44h]
0x6190EC: mov     [esi+78h], ecx
0x6190EF: fstp    [esp+3Ch+var_8]
0x6190F3: mov     ecx, offset unk_B372E8
0x6190F8: mov     dword ptr [esi+74h], 0
0x6190FF: call    GameSetting_GetSafeFloatPointer
0x619104: fld     dword ptr [eax]
0x619106: fstp    [esp+3Ch+var_10]
0x61910A: pop     ebx
0x61910B: fld     [esp+38h+var_8]
0x61910F: pop     ebp
0x619110: fstp    dword ptr [esi+104h]
0x619116: pop     edi
0x619117: fld     [esp+30h+var_10]
0x61911B: fstp    dword ptr [esi+108h]
0x619121: fld     dword ptr ds:0A30634h
0x619127: fstp    dword ptr [esi+10Ch]
0x61912D: pop     esi
0x61912E: add     esp, 2Ch
0x619131: retn    4
0x619134: cmp     [esi+78h], ebx
0x619137: jz      short loc_6191A1
0x619139: mov     edx, [esi+74h]
0x61913C: mov     ecx, [esi+3Ch]
0x61913F: mov     [esi+78h], edx
0x619142: mov     [esi+74h], ebx
0x619145: call    sub_5E0F50
0x61914A: mov     ecx, [esi+3Ch]
0x61914D: mov     edi, eax
0x61914F: call    sub_5E0F50
0x619154: mov     ebx, eax
0x619156: mov     eax, [edi]
0x619158: mov     edx, [eax+140h]
0x61915E: mov     ecx, edi
0x619160: call    edx
0x619162: mov     eax, [ebx]
0x619164: mov     edx, [eax+13Ch]
0x61916A: push    ecx
0x61916B: mov     ecx, ebx
0x61916D: fstp    [esp+40h+var_40]; float
0x619170: call    edx
0x619172: push    ecx
0x619173: fstp    [esp+44h+var_44]; float
0x619176: call    sub_546B20
0x61917B: fstp    [esp+44h+var_8]
0x61917F: add     esp, 8
0x619182: fld     dword ptr [esi+44h]
0x619185: fstp    dword ptr [esi+0E0h]
0x61918B: fld     [esp+3Ch+var_8]
0x61918F: fstp    dword ptr [esi+0E4h]
0x619195: fld     dword ptr ds:0A30634h
0x61919B: fstp    dword ptr [esi+0E8h]
0x6191A1: pop     ebx
0x6191A2: pop     ebp
0x6191A3: pop     edi
0x6191A4: pop     esi
0x6191A5: add     esp, 2Ch
0x6191A8: retn    4
