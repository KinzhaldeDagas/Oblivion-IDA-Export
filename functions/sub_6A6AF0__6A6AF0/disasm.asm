0x6A6AF0: sub     esp, 1Ch
0x6A6AF3: push    ebx
0x6A6AF4: mov     ebx, ecx
0x6A6AF6: mov     ecx, [ebx+20h]
0x6A6AF9: test    ecx, ecx
0x6A6AFB: push    esi
0x6A6AFC: push    edi
0x6A6AFD: jz      loc_6A6C79
0x6A6B03: mov     eax, [ecx]
0x6A6B05: mov     edx, [eax+4]
0x6A6B08: call    edx
0x6A6B0A: mov     edi, eax
0x6A6B0C: test    edi, edi
0x6A6B0E: jz      loc_6A6C79
0x6A6B14: mov     ecx, edi; this
0x6A6B16: call    TESObjectREFR_GetParentCell
0x6A6B1B: mov     ecx, edi; this
0x6A6B1D: mov     esi, eax
0x6A6B1F: call    sub_4D8B90
0x6A6B24: test    al, al
0x6A6B26: jz      short loc_6A6B3F
0x6A6B28: test    esi, esi
0x6A6B2A: jz      loc_6A6C79
0x6A6B30: mov     ecx, esi
0x6A6B32: call    sub_4C9820
0x6A6B37: test    al, al
0x6A6B39: jz      loc_6A6C79
0x6A6B3F: mov     eax, ds:0B333A0h
0x6A6B44: mov     esi, [eax+5Ch]
0x6A6B47: fld     dword ptr [esi+0D0h]
0x6A6B4D: mov     ecx, esi
0x6A6B4F: fstp    [esp+28h+var_4]
0x6A6B53: call    sub_499140
0x6A6B58: mov     ecx, esi
0x6A6B5A: fstp    [esp+28h+var_8]
0x6A6B5E: call    sub_499200
0x6A6B63: fstp    [esp+28h+var_C]
0x6A6B67: mov     eax, [esi+10h]
0x6A6B6A: fld     qword ptr ds:0A3F398h
0x6A6B70: test    eax, eax
0x6A6B72: fld1
0x6A6B74: fldz
0x6A6B76: jz      short loc_6A6B90
0x6A6B78: movzx   ecx, byte ptr [eax+4Dh]
0x6A6B7C: mov     dword ptr [esp+28h+var_18], ecx
0x6A6B80: fild    dword ptr [esp+28h+var_18]
0x6A6B84: fmul    st, st(3)
0x6A6B86: fld     st(2)
0x6A6B88: fsub    st, st(2)
0x6A6B8A: fmulp   st(1), st
0x6A6B8C: fadd    st, st(1)
0x6A6B8E: jmp     short loc_6A6B92
0x6A6B90: fldz
0x6A6B92: mov     eax, [esi+14h]
0x6A6B95: fstp    [esp+28h+var_1C]
0x6A6B99: test    eax, eax
0x6A6B9B: jz      short loc_6A6BE5
0x6A6B9D: movzx   edx, byte ptr [eax+4Dh]
0x6A6BA1: fld     dword ptr [esi+0D8h]
0x6A6BA7: fstp    dword ptr [esp+28h+var_14]
0x6A6BAB: mov     dword ptr [esp+28h+var_18], edx
0x6A6BAF: fild    dword ptr [esp+28h+var_18]
0x6A6BB3: fmulp   st(3), st
0x6A6BB5: fld     st(1)
0x6A6BB7: fsub    st, st(1)
0x6A6BB9: fmulp   st(3), st
0x6A6BBB: faddp   st(2), st
0x6A6BBD: fxch    st(1)
0x6A6BBF: fstp    dword ptr [esp+28h+var_18]
0x6A6BC3: fld     dword ptr [esp+28h+var_18]
0x6A6BC7: fld     dword ptr [esp+28h+var_14]
0x6A6BCB: fld     st
0x6A6BCD: fsubp   st(3), st
0x6A6BCF: fxch    st(1)
0x6A6BD1: fmulp   st(2), st
0x6A6BD3: fmul    [esp+28h+var_1C]
0x6A6BD7: fstp    dword ptr [esp+28h+var_14]
0x6A6BDB: fadd    dword ptr [esp+28h+var_14]
0x6A6BDF: fstp    [esp+28h+var_1C]
0x6A6BE3: jmp     short loc_6A6BEB
0x6A6BE5: fstp    st
0x6A6BE7: fstp    st
0x6A6BE9: fstp    st
0x6A6BEB: mov     ecx, edi; this
0x6A6BED: mov     [esp+28h+var_18], 0
0x6A6BF2: call    TESObjectREFR_GetParentCell
0x6A6BF7: movzx   eax, byte ptr [eax+24h]
0x6A6BFB: shr     eax, 1
0x6A6BFD: test    al, 1
0x6A6BFF: jz      short loc_6A6C32
0x6A6C01: mov     ecx, edi; this
0x6A6C03: call    TESObjectREFR_GetParentCell
0x6A6C08: mov     ecx, eax
0x6A6C0A: call    TESObjectCELL_GetWaterHeight
0x6A6C0F: fstp    [esp+28h+var_14]
0x6A6C13: mov     edx, [edi]
0x6A6C15: mov     eax, [edx+174h]
0x6A6C1B: mov     ecx, edi
0x6A6C1D: call    eax
0x6A6C1F: fld     dword ptr [eax+8]
0x6A6C22: fcomp   [esp+28h+var_14]
0x6A6C26: fnstsw  ax
0x6A6C28: test    ah, 41h
0x6A6C2B: jp      short loc_6A6C32
0x6A6C2D: mov     [esp+28h+var_18], 1
0x6A6C32: mov     ecx, dword ptr [esp+28h+var_18]
0x6A6C36: fld     dword ptr [ebx+18h]
0x6A6C39: fstp    dword ptr [esp+28h+var_14]
0x6A6C3D: push    ecx; char
0x6A6C3E: fld     [esp+2Ch+var_1C]
0x6A6C42: push    ecx
0x6A6C43: fstp    [esp+30h+var_30]; float
0x6A6C46: push    1; char
0x6A6C48: fld     [esp+34h+var_C]
0x6A6C4C: sub     esp, 10h
0x6A6C4F: fstp    [esp+44h+var_38]; float
0x6A6C53: fld     [esp+44h+var_8]
0x6A6C57: fstp    [esp+44h+var_3C]; float
0x6A6C5B: fld     [esp+44h+var_4]
0x6A6C5F: fstp    [esp+44h+var_40]; float
0x6A6C63: fld     dword ptr [esp+44h+var_14]
0x6A6C67: fstp    [esp+44h+var_44]; float
0x6A6C6A: call    Calc_SunDamage??
0x6A6C6F: add     esp, 1Ch
0x6A6C72: pop     edi
0x6A6C73: pop     esi
0x6A6C74: pop     ebx
0x6A6C75: add     esp, 1Ch
0x6A6C78: retn
0x6A6C79: fldz
0x6A6C7B: pop     edi
0x6A6C7C: pop     esi
0x6A6C7D: pop     ebx
0x6A6C7E: add     esp, 1Ch
0x6A6C81: retn
