0x49B930: sub     esp, 44h
0x49B933: push    ebx
0x49B934: push    esi
0x49B935: mov     esi, [esp+4Ch+arg_0]
0x49B939: mov     ebx, ecx
0x49B93B: mov     ecx, [esi]; this
0x49B93D: call    TESObjectREFR_GetParentCell
0x49B942: test    eax, eax
0x49B944: jz      loc_49BED9
0x49B94A: mov     ecx, [esi]
0x49B94C: mov     eax, [ecx]
0x49B94E: mov     edx, [eax+154h]
0x49B954: call    edx
0x49B956: test    eax, eax
0x49B958: jz      loc_49BED9
0x49B95E: mov     ecx, [esi]; this
0x49B960: call    TESObjectREFR_GetParentCell
0x49B965: mov     ecx, eax
0x49B967: call    TESObjectCELL_GetWaterHeight
0x49B96C: fstp    [esp+4Ch+var_38]
0x49B970: mov     ecx, [esi]
0x49B972: mov     eax, [ecx]
0x49B974: mov     edx, [eax+174h]
0x49B97A: call    edx
0x49B97C: fld     dword ptr [eax+8]
0x49B97F: fcomp   [esp+4Ch+var_38]
0x49B983: mov     byte ptr [esp+4Ch+arg_0], 1
0x49B988: fnstsw  ax
0x49B98A: test    ah, 5
0x49B98D: jnp     short loc_49B994
0x49B98F: mov     byte ptr [esp+4Ch+arg_0], 0
0x49B994: mov     ecx, [esi]; this
0x49B996: fld1
0x49B998: push    edi
0x49B999: push    ecx
0x49B99A: fstp    [esp+54h+var_54]; float
0x49B99D: lea     edi, [ecx+2Ch]
0x49B9A0: call    TESObjectREFR_GetParentCell
0x49B9A5: mov     ecx, [esi]
0x49B9A7: push    eax; int
0x49B9A8: push    edi; int
0x49B9A9: call    Actor_IsUnderwater??
0x49B9AE: mov     ecx, [esi]
0x49B9B0: mov     [esp+50h+var_41], al
0x49B9B4: mov     eax, [ecx]
0x49B9B6: mov     edx, [eax+174h]
0x49B9BC: call    edx
0x49B9BE: mov     ecx, [eax]
0x49B9C0: mov     edx, [eax+4]
0x49B9C3: mov     eax, [eax+8]
0x49B9C6: mov     [esp+50h+var_1C], eax
0x49B9CA: mov     eax, [esi+4]
0x49B9CD: add     eax, 54h ; 'T'
0x49B9D0: mov     [esp+50h+var_24], ecx
0x49B9D4: fld     [esp+50h+var_24]
0x49B9D8: mov     ecx, [eax]
0x49B9DA: mov     dword ptr [esp+50h+var_38], ecx
0x49B9DE: fsub    dword ptr [esp+50h+var_38]
0x49B9E2: mov     [esp+50h+var_20], edx
0x49B9E6: mov     edx, [eax+4]
0x49B9E9: fstp    [esp+50h+var_C]
0x49B9ED: mov     dword ptr [esp+50h+var_38+4], edx
0x49B9F1: fld     [esp+50h+var_20]
0x49B9F5: mov     eax, [eax+8]
0x49B9F8: fsub    dword ptr [esp+50h+var_38+4]
0x49B9FC: mov     [esp+50h+var_30], eax
0x49BA00: fstp    [esp+50h+var_8]
0x49BA04: fld     [esp+50h+var_C]
0x49BA08: fld     [esp+50h+var_8]
0x49BA0C: fldz
0x49BA0E: fmul    st, st
0x49BA10: fst     [esp+50h+var_2C]
0x49BA14: fld     st(1)
0x49BA16: fmulp   st(2), st
0x49BA18: fld     st(2)
0x49BA1A: fmulp   st(3), st
0x49BA1C: fxch    st(1)
0x49BA1E: faddp   st(2), st
0x49BA20: faddp   st(1), st
0x49BA22: fstp    [esp+50h+var_3C]
0x49BA26: fld     [esp+50h+var_3C]
0x49BA2A: call    __CIsqrt
0x49BA2F: fstp    [esp+50h+var_3C]
0x49BA33: fld     [esp+50h+var_3C]
0x49BA37: fstp    [esp+50h+var_3C]
0x49BA3B: fld     dword ptr ds:0A3F420h
0x49BA41: fld     [esp+50h+var_3C]
0x49BA45: fcom    st(1)
0x49BA47: fnstsw  ax
0x49BA49: fstp    st(1)
0x49BA4B: test    ah, 41h
0x49BA4E: jnz     short loc_49BA90
0x49BA50: fld     qword ptr ds:0A3F418h
0x49BA56: fldz
0x49BA58: fsub    st(1), st
0x49BA5A: fsubp   st(2), st
0x49BA5C: fdivrp  st(1), st
0x49BA5E: fld     dword ptr [esp+50h+var_38]
0x49BA62: fld     [esp+50h+var_24]
0x49BA66: fld     st
0x49BA68: fsubp   st(2), st
0x49BA6A: fxch    st(1)
0x49BA6C: fmul    st, st(2)
0x49BA6E: fadd    st, st(1)
0x49BA70: fstp    dword ptr [esp+50h+var_38]
0x49BA74: fld     dword ptr [esp+50h+var_38+4]
0x49BA78: fld     [esp+50h+var_20]
0x49BA7C: fld     st
0x49BA7E: fsubp   st(2), st
0x49BA80: fxch    st(1)
0x49BA82: fmulp   st(3), st
0x49BA84: fld     st
0x49BA86: faddp   st(3), st
0x49BA88: fxch    st(2)
0x49BA8A: fstp    dword ptr [esp+50h+var_38+4]
0x49BA8E: jmp     short loc_49BA9A
0x49BA90: fstp    st
0x49BA92: fld     [esp+50h+var_20]
0x49BA96: fld     [esp+50h+var_24]
0x49BA9A: fst     [esp+50h+var_24]
0x49BA9E: fxch    st(1)
0x49BAA0: fst     [esp+50h+var_20]
0x49BAA4: fld     st(1)
0x49BAA6: fsubr   st, st
0x49BAA8: fstp    [esp+50h+var_3C]
0x49BAAC: fld     [esp+50h+var_3C]
0x49BAB0: fld     qword ptr ds:0A3F410h
0x49BAB6: fsub    st(1), st
0x49BAB8: fld     qword ptr ds:0A3F408h
0x49BABE: fmul    st(2), st
0x49BAC0: fxch    st(2)
0x49BAC2: fadd    st, st
0x49BAC4: fld1
0x49BAC6: fsub    st(1), st
0x49BAC8: fxch    st(1)
0x49BACA: fstp    dword ptr ds:0B45FB8h
0x49BAD0: fld     st(3)
0x49BAD2: fsubr   st, st
0x49BAD4: fstp    [esp+50h+var_3C]
0x49BAD8: fld     [esp+50h+var_3C]
0x49BADC: fsub    st, st(2)
0x49BADE: fmul    st, st(3)
0x49BAE0: fld     qword ptr ds:0A3F400h
0x49BAE6: fmul    st(1), st
0x49BAE8: fxch    st(1)
0x49BAEA: fadd    st, st(2)
0x49BAEC: fstp    dword ptr ds:0B45FBCh
0x49BAF2: fld     dword ptr [esp+50h+var_38]
0x49BAF6: fsubrp  st(6), st
0x49BAF8: fxch    st(5)
0x49BAFA: fstp    [esp+50h+var_3C]
0x49BAFE: fld     [esp+50h+var_3C]
0x49BB02: fsub    st, st(2)
0x49BB04: fmul    st, st(3)
0x49BB06: fmul    st, st(5)
0x49BB08: fadd    st, st(1)
0x49BB0A: fstp    dword ptr ds:0B45FACh
0x49BB10: fld     dword ptr [esp+50h+var_38+4]
0x49BB14: fsubrp  st(4), st
0x49BB16: fxch    st(3)
0x49BB18: fstp    [esp+50h+var_3C]
0x49BB1C: fsubr   [esp+50h+var_3C]
0x49BB20: fmulp   st(1), st
0x49BB22: fmulp   st(2), st
0x49BB24: faddp   st(1), st
0x49BB26: fstp    dword ptr ds:0B45FB0h
0x49BB2C: mov     ecx, [esi+1Ch]
0x49BB2F: mov     ds:0B45F98h, ecx
0x49BB35: mov     edx, [esi+20h]
0x49BB38: mov     ds:0B45F9Ch, edx
0x49BB3E: mov     ecx, [esi]; this
0x49BB40: call    TESObjectREFR_GetParentCell
0x49BB45: movzx   eax, byte ptr [eax+24h]
0x49BB49: shr     eax, 1
0x49BB4B: test    al, 1
0x49BB4D: jz      short loc_49BB9C
0x49BB4F: mov     ecx, [esi]; this
0x49BB51: call    TESObjectREFR_GetParentCell
0x49BB56: mov     ecx, eax
0x49BB58: call    TESObjectCELL_GetWaterHeight
0x49BB5D: fadd    qword ptr ds:0A2FC80h
0x49BB63: mov     eax, [esi+4]
0x49BB66: mov     ecx, [esp+50h+var_24]
0x49BB6A: mov     edx, [esp+50h+var_20]
0x49BB6E: fstp    [esp+50h+var_1C]
0x49BB72: fldz
0x49BB74: add     eax, 54h ; 'T'
0x49BB77: mov     [eax], ecx
0x49BB79: mov     ecx, [esp+50h+var_1C]
0x49BB7D: mov     [eax+4], edx
0x49BB80: mov     [eax+8], ecx
0x49BB83: mov     eax, [esi+4]
0x49BB86: and     word ptr [eax+18h], 0FFFEh
0x49BB8C: push    1; a3
0x49BB8E: push    ecx
0x49BB8F: mov     ecx, [esi+4]; this
0x49BB92: fstp    [esp+58h+a2]; a2
0x49BB95: call    NiAVObject_UpdateNiAVObject
0x49BB9A: jmp     short loc_49BBA4
0x49BB9C: mov     eax, [esi+4]
0x49BB9F: or      word ptr [eax+18h], 1
0x49BBA4: mov     eax, [ebx+34h]
0x49BBA7: fld     dword ptr ds:0A32048h
0x49BBAD: xor     ecx, ecx
0x49BBAF: fstp    [esp+50h+var_40]
0x49BBB3: xor     bl, bl
0x49BBB5: test    eax, eax
0x49BBB7: push    ebp; _DWORD
0x49BBB8: mov     [esp+54h+var_3C], ecx
0x49BBBC: jz      loc_49BC86
0x49BBC2: test    bl, bl
0x49BBC4: mov     edi, [eax+8]
0x49BBC7: mov     ebp, [eax]
0x49BBC9: jz      loc_49BC72
0x49BBCF: mov     eax, [esi+4]
0x49BBD2: mov     edx, [eax+54h]
0x49BBD5: mov     ecx, [eax+58h]
0x49BBD8: add     eax, 54h ; 'T'
0x49BBDB: mov     [esp+54h+var_18], edx
0x49BBDF: mov     edx, [eax+8]
0x49BBE2: mov     eax, [edi+4]
0x49BBE5: add     eax, 54h ; 'T'
0x49BBE8: mov     [esp+54h+var_14], ecx
0x49BBEC: mov     ecx, [eax]
0x49BBEE: mov     [esp+54h+var_24], ecx
0x49BBF2: fld     [esp+54h+var_24]
0x49BBF6: fsub    [esp+54h+var_18]
0x49BBFA: mov     [esp+54h+var_10], edx
0x49BBFE: mov     edx, [eax+4]
0x49BC01: mov     eax, [eax+8]
0x49BC04: fstp    [esp+54h+var_C]
0x49BC08: mov     [esp+54h+var_20], edx
0x49BC0C: fld     [esp+54h+var_20]
0x49BC10: mov     [esp+54h+var_1C], eax
0x49BC14: fsub    [esp+54h+var_14]
0x49BC18: fstp    [esp+54h+var_8]
0x49BC1C: fld     [esp+54h+var_1C]
0x49BC20: fsub    [esp+54h+var_10]
0x49BC24: fstp    [esp+54h+var_4]
0x49BC28: fld     [esp+54h+var_C]
0x49BC2C: fld     [esp+54h+var_8]
0x49BC30: fmul    st, st
0x49BC32: fld     st(1)
0x49BC34: fmulp   st(2), st
0x49BC36: faddp   st(1), st
0x49BC38: fadd    [esp+54h+var_2C]
0x49BC3C: fstp    dword ptr [esp+54h+var_38]
0x49BC40: fld     dword ptr [esp+54h+var_38]
0x49BC44: call    __CIsqrt
0x49BC49: fstp    dword ptr [esp+54h+var_38]
0x49BC4D: fld     dword ptr [esp+54h+var_38]
0x49BC51: fstp    dword ptr [esp+54h+var_38]
0x49BC55: fld     dword ptr [esp+54h+var_38]
0x49BC59: fld     [esp+54h+var_40]
0x49BC5D: fcomp   st(1)
0x49BC5F: fnstsw  ax
0x49BC61: test    ah, 41h
0x49BC64: jnz     short loc_49BC70
0x49BC66: fstp    [esp+54h+var_40]
0x49BC6A: mov     [esp+54h+var_3C], edi
0x49BC6E: jmp     short loc_49BC72
0x49BC70: fstp    st
0x49BC72: cmp     edi, esi
0x49BC74: mov     eax, ebp
0x49BC76: jnz     short loc_49BC7A
0x49BC78: mov     bl, 1
0x49BC7A: test    ebp, ebp
0x49BC7C: jnz     loc_49BBC2
0x49BC82: mov     ecx, [esp+54h+var_3C]
0x49BC86: fld     [esp+54h+var_40]
0x49BC8A: fcom    qword ptr ds:0A3A5B0h
0x49BC90: fnstsw  ax
0x49BC92: test    ah, 44h
0x49BC95: jnp     loc_49BD20
0x49BC9B: fldz
0x49BC9D: fsub    st(1), st
0x49BC9F: fld     qword ptr ds:0A3F3F8h
0x49BCA5: fsub    st, st(1)
0x49BCA7: fdivp   st(2), st
0x49BCA9: fld1
0x49BCAB: fld     st
0x49BCAD: fsub    st, st(2)
0x49BCAF: fmulp   st(3), st
0x49BCB1: fxch    st(2)
0x49BCB3: fadd    st, st(1)
0x49BCB5: fstp    dword ptr [esp+54h+var_38]
0x49BCB9: fld     dword ptr [esp+54h+var_38]
0x49BCBD: fcom    st(1)
0x49BCBF: fnstsw  ax
0x49BCC1: test    ah, 5
0x49BCC4: jp      short loc_49BCCE
0x49BCC6: fldz
0x49BCC8: fstp    [esp+54h+var_3C]
0x49BCCC: jmp     short loc_49BCD2
0x49BCCE: fst     [esp+54h+var_3C]
0x49BCD2: fld     [esp+54h+var_3C]
0x49BCD6: fcomp   st(3)
0x49BCD8: fnstsw  ax
0x49BCDA: fstp    st(2)
0x49BCDC: test    ah, 41h
0x49BCDF: jnz     short loc_49BCE9
0x49BCE1: fstp    st
0x49BCE3: fstp    st
0x49BCE5: fld1
0x49BCE7: jmp     short loc_49BCF6
0x49BCE9: fcomp   st(1)
0x49BCEB: fnstsw  ax
0x49BCED: test    ah, 41h
0x49BCF0: jnz     short loc_49BCF6
0x49BCF2: fstp    st
0x49BCF4: fldz
0x49BCF6: fstp    [esp+54h+var_40]
0x49BCFA: fld     dword ptr [esi+18h]
0x49BCFD: fld     [esp+54h+var_40]
0x49BD01: fcom    st(1)
0x49BD03: fnstsw  ax
0x49BD05: fstp    st(1)
0x49BD07: test    ah, 5
0x49BD0A: jp      short loc_49BD0F
0x49BD0C: fst     dword ptr [esi+18h]
0x49BD0F: fld     dword ptr [ecx+18h]
0x49BD12: fcomp   st(1)
0x49BD14: fnstsw  ax
0x49BD16: test    ah, 41h
0x49BD19: jnz     short loc_49BD20
0x49BD1B: fstp    dword ptr [ecx+18h]
0x49BD1E: jmp     short loc_49BD22
0x49BD20: fstp    st
0x49BD22: mov     ecx, [esi+4]
0x49BD25: push    4
0x49BD27: call    NiNode_GetNiPropertyByID
0x49BD2C: fld     dword ptr [esi+18h]
0x49BD2F: cmp     byte ptr [esp+54h+arg_4], 0
0x49BD34: mov     edi, eax
0x49BD36: fstp    dword ptr [edi+7Ch]
0x49BD39: jnz     short loc_49BD58
0x49BD3B: cmp     byte ptr [esp+54h+arg_0], 0
0x49BD40: jz      short loc_49BD54
0x49BD42: cmp     [esp+54h+var_41], 0
0x49BD47: jnz     short loc_49BD54
0x49BD49: mov     ecx, [esi]
0x49BD4B: call    sub_5E05B0
0x49BD50: test    al, al
0x49BD52: jnz     short loc_49BD58
0x49BD54: xor     al, al
0x49BD56: jmp     short loc_49BD5A
0x49BD58: mov     al, 1
0x49BD5A: mov     cl, byte ptr [esp+54h+arg_0]
0x49BD5E: mov     ds:0B45F4Dh, al
0x49BD63: mov     [edi+84h], al
0x49BD69: mov     [edi+85h], cl
0x49BD6F: cmp     dword ptr ds:0B42D78h, 0
0x49BD76: jz      short loc_49BD87
0x49BD78: push    1; _DWORD
0x49BD7A: push    1; _DWORD
0x49BD7C: call    dword ptr ds:0B42D78h
0x49BD82: add     esp, 8
0x49BD85: jmp     short loc_49BD89
0x49BD87: fldz
0x49BD89: cmp     byte ptr [edi+85h], 0
0x49BD90: fstp    [esp+54h+arg_4]
0x49BD94: jz      short loc_49BDD6
0x49BD96: cmp     byte ptr [edi+84h], 0
0x49BD9D: jz      short loc_49BDC7
0x49BD9F: fld1
0x49BDA1: fcomp   dword ptr [edi+80h]
0x49BDA7: fnstsw  ax
0x49BDA9: test    ah, 1
0x49BDAC: jnz     short loc_49BDC7
0x49BDAE: fld     dword ptr [edi+80h]
0x49BDB4: fadd    [esp+54h+arg_4]
0x49BDB8: fld1
0x49BDBA: fcom    st(1)
0x49BDBC: fnstsw  ax
0x49BDBE: test    ah, 5
0x49BDC1: jp      short loc_49BDF7
0x49BDC3: fstp    st(1)
0x49BDC5: jmp     short loc_49BDF9
0x49BDC7: fldz
0x49BDC9: fcomp   dword ptr [edi+80h]
0x49BDCF: fnstsw  ax
0x49BDD1: test    ah, 5
0x49BDD4: jp      short loc_49BDFF
0x49BDD6: fld     dword ptr [edi+80h]
0x49BDDC: fld     [esp+54h+arg_4]
0x49BDE0: fdiv    qword ptr ds:0A3F3F0h
0x49BDE6: fsubp   st(1), st
0x49BDE8: fldz
0x49BDEA: fcom    st(1)
0x49BDEC: fnstsw  ax
0x49BDEE: test    ah, 41h
0x49BDF1: jnz     short loc_49BDF7
0x49BDF3: fstp    st(1)
0x49BDF5: jmp     short loc_49BDF9
0x49BDF7: fstp    st
0x49BDF9: fstp    dword ptr [edi+80h]
0x49BDFF: cmp     dword ptr ds:0B42F48h, 2
0x49BE06: jl      loc_49BED7
0x49BE0C: push    14h; a1
0x49BE0E: call    GetShaderDefinition
0x49BE13: add     esp, 4
0x49BE16: test    eax, eax
0x49BE18: jz      short loc_49BE1F
0x49BE1A: mov     ebp, [eax+4]
0x49BE1D: jmp     short loc_49BE21
0x49BE1F: xor     ebp, ebp
0x49BE21: lea     edx, [esi+0Ch]
0x49BE24: push    edx
0x49BE25: mov     ecx, offset dword_B45FB4
0x49BE2A: mov     byte ptr ds:0B45F4Ch, 1
0x49BE31: call    sub_55E2A0
0x49BE36: cmp     byte ptr ds:0B3522Bh, 0
0x49BE3D: jnz     short loc_49BE5C
0x49BE3F: mov     eax, ds:0B35220h
0x49BE44: test    eax, eax
0x49BE46: jz      short loc_49BE50
0x49BE48: fld     dword ptr [eax+98h]
0x49BE4E: jmp     short loc_49BE56
0x49BE50: fld     dword ptr ds:0A31C80h
0x49BE56: fstp    dword ptr ds:0B45F40h
0x49BE5C: push    3
0x49BE5E: call    nullsub_returnTrue_0arg
0x49BE63: mov     eax, [esi+8]
0x49BE66: lea     edi, [esi+8]
0x49BE69: push    eax; a4
0x49BE6A: push    eax; a3
0x49BE6B: mov     eax, ds:0B43104h
0x49BE70: push    eax; a2
0x49BE71: push    ebp; a1
0x49BE72: call    sub_7B4900
0x49BE77: push    2
0x49BE79: call    nullsub_returnTrue_0arg
0x49BE7E: add     esp, 18h
0x49BE81: push    offset dword_B45FA8
0x49BE86: mov     ecx, edi
0x49BE88: call    sub_55E2A0
0x49BE8D: mov     eax, ds:0B45FB4h
0x49BE92: test    eax, eax
0x49BE94: jz      short loc_49BEBE
0x49BE96: mov     edi, eax
0x49BE98: add     eax, 4
0x49BE9B: push    eax; lpAddend
0x49BE9C: call    dword ptr ds:0A2807Ch
0x49BEA2: test    eax, eax
0x49BEA4: jnz     short loc_49BEB4
0x49BEA6: test    edi, edi
0x49BEA8: jz      short loc_49BEB4
0x49BEAA: mov     edx, [edi]
0x49BEAC: mov     eax, [edx]
0x49BEAE: push    1
0x49BEB0: mov     ecx, edi
0x49BEB2: call    eax
0x49BEB4: mov     dword ptr ds:0B45FB4h, 0
0x49BEBE: mov     ecx, ds:0B45FB8h
0x49BEC4: mov     byte ptr ds:0B45F4Ch, 0
0x49BECB: mov     [esi+1Ch], ecx
0x49BECE: mov     edx, ds:0B45FBCh
0x49BED4: mov     [esi+20h], edx
0x49BED7: pop     ebp
0x49BED8: pop     edi
0x49BED9: pop     esi
0x49BEDA: pop     ebx
0x49BEDB: add     esp, 44h
0x49BEDE: retn    8
