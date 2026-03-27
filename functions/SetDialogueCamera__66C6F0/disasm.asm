0x66C6F0: sub     esp, 18h
0x66C6F3: push    ebp
0x66C6F4: mov     ebp, [esp+1Ch+arg_0]
0x66C6F8: test    ebp, ebp
0x66C6FA: push    esi
0x66C6FB: mov     esi, ecx
0x66C6FD: jz      loc_66CC2A
0x66C703: fld1
0x66C705: fcomp   [esp+20h+a4]
0x66C709: fnstsw  ax
0x66C70B: test    ah, 44h
0x66C70E: jp      short loc_66C71C
0x66C710: fld     dword ptr ds:0A46B24h
0x66C716: fstp    dword ptr [esi+598h]
0x66C71C: cmp     byte ptr ds:0B3BB04h, 0
0x66C723: jz      short loc_66C74B
0x66C725: cmp     byte ptr [esi+588h], 0
0x66C72C: fldz
0x66C72E: fstp    dword ptr ds:0B3BB08h
0x66C734: mov     byte ptr ds:0B3BB05h, 0
0x66C73B: setz    al
0x66C73E: mov     byte ptr ds:0B3BB04h, 0
0x66C745: push    eax; a3
0x66C746: call    ToggleBody
0x66C74B: push    edi
0x66C74C: mov     ecx, esi; this
0x66C74E: call    TESObjectREFR_GetParentCell
0x66C753: test    eax, eax
0x66C755: jz      short loc_66C77B
0x66C757: mov     ecx, esi; this
0x66C759: call    TESObjectREFR_GetParentCell
0x66C75E: mov     ecx, eax; this
0x66C760: call    TESObjectCELL_IsInterior
0x66C765: test    al, al
0x66C767: jz      short loc_66C77B
0x66C769: mov     ecx, ebp; this
0x66C76B: call    TESObjectREFR_GetParentCell
0x66C770: mov     ecx, esi; this
0x66C772: mov     edi, eax
0x66C774: call    TESObjectREFR_GetParentCell
0x66C779: jmp     short loc_66C78B
0x66C77B: mov     ecx, ebp; this
0x66C77D: call    TESObjectREFR_GetWorldSpace
0x66C782: mov     ecx, esi; this
0x66C784: mov     edi, eax
0x66C786: call    TESObjectREFR_GetWorldSpace
0x66C78B: cmp     edi, eax
0x66C78D: jnz     loc_66CC29
0x66C793: mov     eax, ds:0B3BB0Ch
0x66C798: mov     edx, [eax+8Ch]
0x66C79E: mov     ecx, [eax+88h]
0x66C7A4: mov     eax, [eax+90h]
0x66C7AA: mov     [esp+24h+var_8], edx
0x66C7AE: mov     edx, [ebp+0]
0x66C7B1: mov     [esp+24h+var_C], ecx
0x66C7B5: mov     [esp+24h+var_4], eax
0x66C7B9: mov     eax, [edx+154h]
0x66C7BF: mov     ecx, ebp
0x66C7C1: mov     byte ptr [esp+24h+arg_0], 0
0x66C7C6: call    eax
0x66C7C8: test    eax, eax
0x66C7CA: jz      loc_66CBC4
0x66C7D0: mov     edx, [ebp+0]
0x66C7D3: mov     eax, [edx+134h]
0x66C7D9: push    ebx
0x66C7DA: push    0
0x66C7DC: mov     ecx, ebp
0x66C7DE: call    eax
0x66C7E0: mov     edi, eax
0x66C7E2: test    edi, edi
0x66C7E4: jz      loc_66C975
0x66C7EA: test    byte ptr [edi+18h], 1
0x66C7EE: jz      short loc_66C813
0x66C7F0: fldz
0x66C7F2: and     word ptr [edi+18h], 0FFFEh
0x66C7F8: push    0; a3
0x66C7FA: push    ecx
0x66C7FB: mov     ecx, edi; this
0x66C7FD: fstp    [esp+30h+a2]; a2
0x66C800: call    NiAVObject_UpdateNiAVObject
0x66C805: mov     edx, [edi]
0x66C807: mov     eax, [edx+78h]
0x66C80A: mov     ecx, edi
0x66C80C: call    eax
0x66C80E: or      word ptr [edi+18h], 1
0x66C813: mov     cl, ds:0B3BCD1h
0x66C819: test    cl, cl
0x66C81B: jz      short loc_66C832
0x66C81D: fld1
0x66C81F: fcomp   [esp+28h+a4]
0x66C823: fnstsw  ax
0x66C825: test    ah, 41h
0x66C828: jnz     short loc_66C832
0x66C82A: xor     cl, cl
0x66C82C: mov     ds:0B3BCD1h, cl
0x66C832: mov     edx, [edi+20h]
0x66C835: fld     dword ptr ds:0B14F28h
0x66C83B: mov     eax, [edi+24h]
0x66C83E: mov     ebx, ds:0B333CCh
0x66C844: cmp     dword ptr [ebx+0DCh], 0
0x66C84B: mov     dword ptr [esp+28h+var_1C+4], edx
0x66C84F: mov     edx, [edi+28h]
0x66C852: mov     [esp+28h+var_10], edx
0x66C856: fadd    [esp+28h+var_10]
0x66C85A: mov     [esp+28h+var_14], eax
0x66C85E: fstp    [esp+28h+var_10]
0x66C862: fld     [esp+28h+var_C]
0x66C866: fsub    dword ptr [esp+28h+var_1C+4]
0x66C86A: fstp    [esp+28h+var_C]
0x66C86E: fld     [esp+28h+var_8]
0x66C872: fsub    [esp+28h+var_14]
0x66C876: fstp    [esp+28h+var_8]
0x66C87A: fld     [esp+28h+var_4]
0x66C87E: fsub    [esp+28h+var_10]
0x66C882: fstp    [esp+28h+var_4]
0x66C886: jz      loc_66C9D5
0x66C88C: test    cl, cl
0x66C88E: mov     byte ptr [esp+28h+arg_0], 1
0x66C893: jnz     loc_66C9D5
0x66C899: fld     dword ptr [edi+2Ch]
0x66C89C: mov     ecx, offset unk_B14F10
0x66C8A1: fstp    dword ptr [esp+28h+var_1C+4]
0x66C8A5: call    sub_404E30
0x66C8AA: fmul    dword ptr [esp+28h+var_1C+4]
0x66C8AE: lea     ecx, [esp+28h+var_C]
0x66C8B2: fstp    [esp+28h+var_1C+4]
0x66C8B6: call    sub_404C90
0x66C8BB: fdivr   [esp+28h+var_1C+4]
0x66C8BF: fstp    dword ptr [esp+28h+var_1C+4]
0x66C8C3: fld     dword ptr [esp+28h+var_1C+4]
0x66C8C7: call    __CIatan
0x66C8CC: fstp    dword ptr [esp+28h+var_1C+4]
0x66C8D0: fld     dword ptr [esp+28h+var_1C+4]
0x66C8D4: mov     ecx, offset g_DefaulFOV
0x66C8D9: fmul    qword ptr ds:0A309F0h
0x66C8DF: fstp    dword ptr [esp+28h+var_1C+4]
0x66C8E3: call    GameSetting_GetSafeFloatPointer
0x66C8E8: fld     dword ptr [esp+28h+var_1C+4]
0x66C8EC: fld     dword ptr [eax]
0x66C8EE: fcomp   st(1)
0x66C8F0: fnstsw  ax
0x66C8F2: test    ah, 41h
0x66C8F5: jp      short loc_66C90D
0x66C8F7: mov     ecx, offset g_DefaulFOV
0x66C8FC: fstp    st
0x66C8FE: call    GameSetting_GetSafeFloatPointer
0x66C903: fld     dword ptr [eax]
0x66C905: fstp    dword ptr [esp+28h+var_1C+4]
0x66C909: fld     dword ptr [esp+28h+var_1C+4]
0x66C90D: fld1
0x66C90F: fld     [esp+28h+a4]
0x66C913: fcom    st(1)
0x66C915: fnstsw  ax
0x66C917: test    ah, 5
0x66C91A: jp      short loc_66C920
0x66C91C: fstp    st(1)
0x66C91E: jmp     short loc_66C922
0x66C920: fstp    st
0x66C922: fstp    dword ptr [esp+28h+var_1C+4]
0x66C926: push    0; a3
0x66C928: fld     dword ptr [esi+598h]
0x66C92E: push    ecx
0x66C92F: fsub    st, st(1)
0x66C931: mov     ecx, ebx; this
0x66C933: fld     dword ptr [esp+30h+var_1C+4]
0x66C937: fld1
0x66C939: fsubrp  st(1), st
0x66C93B: fmulp   st(1), st
0x66C93D: faddp   st(1), st
0x66C93F: fstp    dword ptr [esp+30h+var_1C+4]
0x66C943: fld     dword ptr [esp+30h+var_1C+4]
0x66C947: fstp    [esp+30h+a2]; a2
0x66C94A: call    SetCameraFOV_0
0x66C94F: fld     dword ptr [esp+28h+var_1C+4]
0x66C953: push    ecx
0x66C954: fstp    [esp+2Ch+var_2C]; float
0x66C957: call    UpdateParticleShaderFOVData
0x66C95C: fld1
0x66C95E: add     esp, 4
0x66C961: fcomp   [esp+28h+a4]
0x66C965: fnstsw  ax
0x66C967: test    ah, 41h
0x66C96A: jp      short loc_66C9D5
0x66C96C: mov     byte ptr ds:0B3BCD1h, 1
0x66C973: jmp     short loc_66C9D5
0x66C975: mov     eax, [ebp+0]
0x66C978: mov     edx, [eax+174h]
0x66C97E: mov     ecx, ebp
0x66C980: call    edx
0x66C982: mov     edx, [eax+4]
0x66C985: mov     ecx, [eax]
0x66C987: mov     eax, [eax+8]
0x66C98A: mov     [esp+28h+var_14], edx
0x66C98E: mov     edx, [ebp+0]
0x66C991: mov     dword ptr [esp+28h+var_1C+4], ecx
0x66C995: mov     [esp+28h+var_10], eax
0x66C999: mov     eax, [edx+0ECh]
0x66C99F: mov     ecx, ebp
0x66C9A1: call    eax
0x66C9A3: fmul    dword ptr [esi+5D4h]
0x66C9A9: fadd    [esp+28h+var_10]
0x66C9AD: fstp    [esp+28h+var_10]
0x66C9B1: fld     [esp+28h+var_C]
0x66C9B5: fsub    dword ptr [esp+28h+var_1C+4]
0x66C9B9: fstp    [esp+28h+var_C]
0x66C9BD: fld     [esp+28h+var_8]
0x66C9C1: fsub    [esp+28h+var_14]
0x66C9C5: fstp    [esp+28h+var_8]
0x66C9C9: fld     [esp+28h+var_4]
0x66C9CD: fsub    [esp+28h+var_10]
0x66C9D1: fstp    [esp+28h+var_4]
0x66C9D5: cmp     byte ptr [esp+28h+a5], 0
0x66C9DA: pop     ebx
0x66C9DB: jnz     loc_66CBBD
0x66C9E1: fld     [esp+24h+var_4]
0x66C9E5: lea     ecx, [esp+24h+var_C]
0x66C9E9: fstp    [esp+24h+var_1C+4]
0x66C9ED: call    sub_404C90
0x66C9F2: fdivr   [esp+24h+var_1C+4]
0x66C9F6: fstp    [esp+24h+a5]
0x66C9FA: fld     [esp+24h+a5]
0x66C9FE: call    __CIasin
0x66CA03: fstp    [esp+24h+a5]
0x66CA07: fld     [esp+24h+a5]
0x66CA0B: mov     ecx, esi
0x66CA0D: fstp    [esp+24h+a5]
0x66CA11: call    sub_4A9720
0x66CA16: fsubr   [esp+24h+a5]
0x66CA1A: fstp    [esp+24h+a5]
0x66CA1E: fld     [esp+24h+a5]
0x66CA22: fabs
0x66CA24: fstp    [esp+24h+a4]
0x66CA28: fld     [esp+24h+a4]
0x66CA2C: fld     dword ptr ds:0B14F18h
0x66CA32: fmul    qword ptr ds:0A31C78h
0x66CA38: fcompp
0x66CA3A: fnstsw  ax
0x66CA3C: test    ah, 5
0x66CA3F: jp      short loc_66CA4A
0x66CA41: mov     byte ptr ds:0B3BCD0h, 1
0x66CA48: jmp     short loc_66CA53
0x66CA4A: cmp     byte ptr ds:0B3BCD0h, 0
0x66CA51: jz      short loc_66CA9C
0x66CA53: mov     ecx, offset dword_B14F30
0x66CA58: call    GameSetting_GetSafeFloatPointer
0x66CA5D: fld     [esp+24h+a5]
0x66CA61: fmul    dword ptr [eax]
0x66CA63: push    ecx
0x66CA64: mov     ecx, esi
0x66CA66: fstp    [esp+28h+a5]
0x66CA6A: fld     [esp+28h+a5]
0x66CA6E: fstp    [esp+28h+var_28]; float
0x66CA71: call    sub_65ABC0
0x66CA76: mov     ecx, offset dword_B14F20
0x66CA7B: call    GameSetting_GetSafeFloatPointer
0x66CA80: fld     [esp+24h+a4]
0x66CA84: fld     dword ptr [eax]
0x66CA86: fmul    qword ptr ds:0A31C78h
0x66CA8C: fcompp
0x66CA8E: fnstsw  ax
0x66CA90: test    ah, 41h
0x66CA93: jnz     short loc_66CA9C
0x66CA95: mov     byte ptr ds:0B3BCD0h, 0
0x66CA9C: mov     edx, [esi]
0x66CA9E: mov     eax, [edx+18Ch]
0x66CAA4: mov     ecx, esi
0x66CAA6: call    eax
0x66CAA8: test    eax, eax
0x66CAAA: jnz     short loc_66CABB
0x66CAAC: mov     edx, [esi]
0x66CAAE: mov     eax, [edx+1E4h]
0x66CAB4: push    ebp
0x66CAB5: mov     ecx, esi
0x66CAB7: call    eax
0x66CAB9: jmp     short loc_66CB03
0x66CABB: fld     [esp+24h+var_C]
0x66CABF: lea     ecx, [esp+24h+var_1C+4]
0x66CAC3: fchs
0x66CAC5: push    ecx
0x66CAC6: fstp    dword ptr [esp+28h+var_1C+4]
0x66CACA: fld     [esp+28h+var_8]
0x66CACE: fchs
0x66CAD0: fstp    [esp+28h+var_14]
0x66CAD4: fld     [esp+28h+var_4]
0x66CAD8: fchs
0x66CADA: fstp    [esp+28h+var_10]
0x66CADE: call    sub_683CB0
0x66CAE3: fstp    [esp+28h+a5]
0x66CAE7: add     esp, 4
0x66CAEA: fld     [esp+24h+a5]
0x66CAEE: mov     ecx, esi; this
0x66CAF0: fstp    [esp+24h+var_1C+4]
0x66CAF4: call    MobileObject_GetZRotation
0x66CAF9: fsubr   [esp+24h+var_1C+4]
0x66CAFD: fstp    dword ptr [esi+61Ch]
0x66CB03: mov     edx, [esi]
0x66CB05: mov     eax, [edx+1E0h]
0x66CB0B: mov     ecx, esi
0x66CB0D: call    eax
0x66CB0F: fstp    dword ptr ds:0B3BAC8h
0x66CB15: mov     ecx, esi
0x66CB17: call    sub_4A9720
0x66CB1C: fstp    dword ptr ds:0B3BAC4h
0x66CB22: push    1; a1
0x66CB24: mov     ecx, esi; this
0x66CB26: call    TogglePOV
0x66CB2B: push    3Fh ; '?'
0x66CB2D: mov     ecx, esi
0x66CB2F: call    sub_5E05F0
0x66CB34: fld1
0x66CB36: sub     esp, 8
0x66CB39: fst     [esp+2Ch+var_28]; int
0x66CB3D: mov     ecx, esi
0x66CB3F: fstp    [esp+2Ch+var_2C]; float
0x66CB42: mov     byte ptr [esi+588h], 1
0x66CB49: call    Actor_ProcessAction
0x66CB4E: mov     byte ptr [esi+588h], 0
0x66CB55: fld     dword ptr ds:0B33E9Ch
0x66CB5B: mov     ecx, esi; this
0x66CB5D: fstp    [esp+24h+a5]
0x66CB61: call    TESObjectREFR_GetAnimData
0x66CB66: fld     dword ptr ds:0A30634h
0x66CB6C: sub     esp, 8
0x66CB6F: fstp    [esp+2Ch+var_28]; float
0x66CB73: mov     ecx, eax; this
0x66CB75: fld     [esp+2Ch+a5]
0x66CB79: fstp    [esp+2Ch+var_2C]; float
0x66CB7C: push    esi; int
0x66CB7D: call    sub_476D10
0x66CB82: fld     dword ptr ds:0A30634h
0x66CB88: mov     ecx, [esi+5CCh]; this
0x66CB8E: sub     esp, 8
0x66CB91: fstp    [esp+2Ch+var_28]; float
0x66CB95: fld     dword ptr ds:0B33E9Ch
0x66CB9B: fstp    [esp+2Ch+var_2C]; float
0x66CB9E: push    esi; int
0x66CB9F: call    sub_476D10
0x66CBA4: fldz
0x66CBA6: push    ecx
0x66CBA7: fstp    [esp+28h+var_28]; a2
0x66CBAA: mov     ecx, esi; this
0x66CBAC: call    sub_603CA0
0x66CBB1: mov     edx, [esi]
0x66CBB3: mov     eax, [edx+0FCh]
0x66CBB9: mov     ecx, esi
0x66CBBB: call    eax
0x66CBBD: cmp     byte ptr [esp+24h+arg_0], 0
0x66CBC2: jnz     short loc_66CC29
0x66CBC4: fld     [esp+24h+var_8]
0x66CBC8: fld     [esp+24h+var_C]
0x66CBCC: fld     [esp+24h+var_4]
0x66CBD0: fld     st(2)
0x66CBD2: fmulp   st(3), st
0x66CBD4: fld     st(1)
0x66CBD6: fmulp   st(2), st
0x66CBD8: fxch    st(2)
0x66CBDA: faddp   st(1), st
0x66CBDC: fld     st(1)
0x66CBDE: fmulp   st(2), st
0x66CBE0: faddp   st(1), st
0x66CBE2: fstp    [esp+24h+a5]
0x66CBE6: fld     [esp+24h+a5]
0x66CBEA: call    __CIsqrt
0x66CBEF: fstp    [esp+24h+a5]
0x66CBF3: fld     [esp+24h+a5]
0x66CBF7: fsub    qword ptr ds:0A73DD8h
0x66CBFD: fdiv    qword ptr ds:0A309F0h
0x66CC03: fmul    qword ptr ds:0A492B0h
0x66CC09: fadd    qword ptr ds:0A492F0h
0x66CC0F: call    Double_To_SInt32
0x66CC14: mov     [esp+24h+a5], eax
0x66CC18: fild    [esp+24h+a5]
0x66CC1C: push    ecx
0x66CC1D: mov     ecx, esi
0x66CC1F: fstp    [esp+28h+var_28]; float
0x66CC22: call    SetCameraFOV
0x66CC27: fstp    st
0x66CC29: pop     edi
0x66CC2A: pop     esi
0x66CC2B: pop     ebp
0x66CC2C: add     esp, 18h
0x66CC2F: retn    0Ch
