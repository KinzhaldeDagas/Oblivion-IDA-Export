0x5A5900: sub     esp, 58h
0x5A5903: push    ebx
0x5A5904: push    1; arg1
0x5A5906: push    0; canCreate
0x5A5908: call    InterfaceManager_GetSingleton
0x5A590D: push    3ECh
0x5A5912: mov     ebx, eax
0x5A5914: call    Menu_GetOpenMenuTile
0x5A5919: add     esp, 0Ch
0x5A591C: test    eax, eax
0x5A591E: jz      loc_5A5B3E
0x5A5924: push    ebp
0x5A5925: push    esi
0x5A5926: push    edi
0x5A5927: push    0; int
0x5A5929: push    offset ??_R0?AVHUDMainMenu@@@8; struct TypeDescriptor *
0x5A592E: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5A5933: push    0; int
0x5A5935: mov     ecx, eax
0x5A5937: call    Tile_GetParentMenu
0x5A593C: push    eax; void *
0x5A593D: call    OblivionDynamicCast
0x5A5942: add     esp, 14h
0x5A5945: mov     ebp, eax
0x5A5947: lea     eax, [esp+68h+var_58]
0x5A594B: push    eax
0x5A594C: lea     ecx, [esp+6Ch+var_50]
0x5A5950: push    ecx
0x5A5951: mov     ecx, [ebx+60h]
0x5A5954: lea     edx, [esp+70h+var_4C]
0x5A5958: push    edx
0x5A5959: add     ecx, 30h ; '0'
0x5A595C: call    sub_711300
0x5A5961: fld     [esp+68h+var_58]
0x5A5965: fld     [esp+68h+arg_0]
0x5A5969: sub     esp, 0Ch
0x5A596C: fmul    qword ptr ds:0A2FAA0h
0x5A5972: lea     ecx, [esp+74h+var_24]
0x5A5976: fstp    [esp+74h+var_54]
0x5A597A: fld     [esp+74h+var_54]
0x5A597E: fmul    qword ptr ds:0A31C78h
0x5A5984: fsubp   st(1), st
0x5A5986: fstp    [esp+74h+var_58]
0x5A598A: fld     [esp+74h+var_58]
0x5A598E: fstp    [esp+74h+var_6C]; float
0x5A5992: fld     [esp+74h+var_50]
0x5A5996: fstp    [esp+74h+a2]; float
0x5A599A: fld     [esp+74h+var_4C]
0x5A599E: fstp    [esp+74h+var_74]; float
0x5A59A1: call    sub_711580
0x5A59A6: mov     edi, [ebx+60h]
0x5A59A9: add     edi, 30h ; '0'
0x5A59AC: mov     ecx, 9
0x5A59B1: lea     esi, [esp+68h+var_24]
0x5A59B5: rep movsd
0x5A59B7: mov     ecx, ds:0B333C4h
0x5A59BD: mov     eax, [ecx]
0x5A59BF: mov     edx, [eax+0ECh]
0x5A59C5: call    edx
0x5A59C7: mov     ecx, ds:0B333C4h
0x5A59CD: mov     eax, [ecx]
0x5A59CF: fstp    [esp+68h+var_54]
0x5A59D3: fld     [esp+68h+var_54]
0x5A59D7: mov     edx, [eax+0ECh]
0x5A59DD: fld     qword ptr ds:0A492F8h
0x5A59E3: fmul    st, st(1)
0x5A59E5: fstp    [esp+68h+var_3C]
0x5A59E9: fld     qword ptr ds:0A6BEC8h
0x5A59EF: fmul    st, st(1)
0x5A59F1: fstp    [esp+68h+var_38]
0x5A59F5: fmul    qword ptr ds:0A6BEC0h
0x5A59FB: fstp    [esp+68h+var_34]
0x5A59FF: call    edx
0x5A5A01: fstp    [esp+68h+var_54]
0x5A5A05: fld     [esp+68h+var_54]
0x5A5A09: fld     qword ptr ds:0A6BEB8h
0x5A5A0F: fmul    st, st(1)
0x5A5A11: fstp    [esp+68h+var_48]
0x5A5A15: fld     qword ptr ds:0A6BEB0h
0x5A5A1B: fmul    st, st(1)
0x5A5A1D: fstp    [esp+68h+var_44]
0x5A5A21: fmul    qword ptr ds:0A6BEA8h
0x5A5A27: fstp    [esp+68h+var_40]
0x5A5A2B: fld     [esp+68h+arg_4]
0x5A5A2F: fdiv    qword ptr ds:0A6BEA0h
0x5A5A35: fadd    dword ptr [ebp+70h]
0x5A5A38: fstp    [esp+68h+var_54]
0x5A5A3C: fld     [esp+68h+var_54]
0x5A5A40: fst     dword ptr [ebp+70h]
0x5A5A43: fld1
0x5A5A45: fcom    st(1)
0x5A5A47: fnstsw  ax
0x5A5A49: test    ah, 41h
0x5A5A4C: jnz     short loc_5A5A56
0x5A5A4E: fxch    st(1)
0x5A5A50: fst     [esp+68h+var_54]
0x5A5A54: jmp     short loc_5A5A5C
0x5A5A56: fst     [esp+68h+var_54]
0x5A5A5A: fxch    st(1)
0x5A5A5C: fld     [esp+68h+var_54]
0x5A5A60: fcomp   qword ptr ds:0A2FC68h
0x5A5A66: fnstsw  ax
0x5A5A68: fldz
0x5A5A6A: test    ah, 5
0x5A5A6D: jp      short loc_5A5A79
0x5A5A6F: fstp    st(1)
0x5A5A71: fstp    st(1)
0x5A5A73: fst     [esp+68h+var_54]
0x5A5A77: jmp     short loc_5A5A90
0x5A5A79: fxch    st(1)
0x5A5A7B: fcom    st(2)
0x5A5A7D: fnstsw  ax
0x5A5A7F: test    ah, 5
0x5A5A82: jp      short loc_5A5A88
0x5A5A84: fstp    st(2)
0x5A5A86: jmp     short loc_5A5A8A
0x5A5A88: fstp    st
0x5A5A8A: fxch    st(1)
0x5A5A8C: fstp    [esp+68h+var_54]
0x5A5A90: fld     [esp+68h+var_54]
0x5A5A94: mov     eax, [ebx+60h]
0x5A5A97: fst     dword ptr [ebp+70h]
0x5A5A9A: add     eax, 54h ; 'T'
0x5A5A9D: fld     [esp+68h+var_48]
0x5A5AA1: push    1; a3
0x5A5AA3: fld     [esp+6Ch+var_3C]
0x5A5AA7: fld     st
0x5A5AA9: fsubp   st(2), st
0x5A5AAB: fxch    st(1)
0x5A5AAD: fstp    [esp+6Ch+var_30]
0x5A5AB1: fld     [esp+6Ch+var_44]
0x5A5AB5: fld     [esp+6Ch+var_38]
0x5A5AB9: fld     st
0x5A5ABB: fsubp   st(2), st
0x5A5ABD: fxch    st(1)
0x5A5ABF: fstp    [esp+6Ch+var_2C]
0x5A5AC3: fld     [esp+6Ch+var_40]
0x5A5AC7: fld     [esp+6Ch+var_34]
0x5A5ACB: fld     st
0x5A5ACD: fsubp   st(2), st
0x5A5ACF: fxch    st(1)
0x5A5AD1: fstp    [esp+6Ch+var_28]
0x5A5AD5: fxch    st(3)
0x5A5AD7: fstp    [esp+6Ch+var_54]
0x5A5ADB: fld     [esp+6Ch+var_30]
0x5A5ADF: fld     [esp+6Ch+var_54]
0x5A5AE3: fld     st
0x5A5AE5: fmulp   st(2), st
0x5A5AE7: fxch    st(1)
0x5A5AE9: fstp    [esp+6Ch+var_3C]
0x5A5AED: fld     [esp+6Ch+var_2C]
0x5A5AF1: fmul    st, st(1)
0x5A5AF3: fstp    [esp+6Ch+var_38]
0x5A5AF7: fmul    [esp+6Ch+var_28]
0x5A5AFB: fstp    [esp+6Ch+var_34]
0x5A5AFF: fld     [esp+6Ch+var_3C]
0x5A5B03: faddp   st(2), st
0x5A5B05: fxch    st(1)
0x5A5B07: fstp    [esp+6Ch+var_30]
0x5A5B0B: mov     ecx, [esp+6Ch+var_30]
0x5A5B0F: mov     [eax], ecx
0x5A5B11: fadd    [esp+6Ch+var_38]
0x5A5B15: fstp    [esp+6Ch+var_2C]
0x5A5B19: mov     edx, [esp+6Ch+var_2C]
0x5A5B1D: mov     [eax+4], edx
0x5A5B20: fadd    [esp+6Ch+var_34]
0x5A5B24: fstp    [esp+6Ch+var_28]
0x5A5B28: mov     ecx, [esp+6Ch+var_28]
0x5A5B2C: push    ecx
0x5A5B2D: mov     [eax+8], ecx
0x5A5B30: fstp    [esp+70h+a2]; a2
0x5A5B33: mov     ecx, [ebx+60h]; this
0x5A5B36: call    NiAVObject_UpdateNiAVObject
0x5A5B3B: pop     edi
0x5A5B3C: pop     esi
0x5A5B3D: pop     ebp
0x5A5B3E: pop     ebx
0x5A5B3F: add     esp, 58h
0x5A5B42: retn
