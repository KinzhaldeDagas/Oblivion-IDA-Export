0x66B710: push    0FFFFFFFFh
0x66B712: push    offset SEH_66B710
0x66B717: mov     eax, large fs:0
0x66B71D: push    eax
0x66B71E: sub     esp, 0D0h
0x66B724: push    ebx
0x66B725: push    ebp
0x66B726: push    esi
0x66B727: push    edi
0x66B728: mov     eax, ds:0B30AACh
0x66B72D: xor     eax, esp
0x66B72F: push    eax
0x66B730: lea     eax, [esp+0F0h+var_C]
0x66B737: mov     large fs:0, eax
0x66B73D: mov     ebp, ecx
0x66B73F: mov     eax, [ebp+0]
0x66B742: mov     edx, [eax+1E0h]
0x66B748: call    edx
0x66B74A: fstp    dword ptr ds:0B3BAC8h
0x66B750: mov     ecx, ebp
0x66B752: call    sub_4A9720
0x66B757: fstp    dword ptr ds:0B3BAC4h
0x66B75D: mov     eax, ds:0B333CCh
0x66B762: mov     edx, [ebp+0]
0x66B765: mov     [esp+0F0h+var_DC], eax
0x66B769: mov     eax, [edx+198h]
0x66B76F: push    0; a5
0x66B771: mov     ecx, ebp
0x66B773: call    eax
0x66B775: test    al, al
0x66B777: jz      short loc_66B795
0x66B779: fld     dword ptr ds:0B33E9Ch
0x66B77F: fmul    qword ptr ds:0A3C770h
0x66B785: fld1
0x66B787: fsubrp  st(1), st
0x66B789: fmul    dword ptr [ebp+5D4h]
0x66B78F: fstp    dword ptr [ebp+5D4h]
0x66B795: cmp     byte ptr [ebp+588h], 0
0x66B79C: jnz     loc_66BA9A
0x66B7A2: cmp     byte ptr ds:0B3BB04h, 0
0x66B7A9: jnz     loc_66BA9A
0x66B7AF: fld     dword ptr ds:0B3BAC8h
0x66B7B5: push    ecx
0x66B7B6: lea     ecx, [esp+0F4h+var_90]
0x66B7BA: fstp    [esp+0F4h+var_F4]; float
0x66B7BD: call    NiMatrix33_InitRotationTransform
0x66B7C2: fld     dword ptr ds:0B3BAC4h
0x66B7C8: push    ecx
0x66B7C9: lea     ecx, [esp+0F4h+var_60]
0x66B7D0: fstp    [esp+0F4h+var_F4]; float
0x66B7D3: call    NiMatrix33_InitRotationTransposedTransform???
0x66B7D8: lea     ecx, [esp+0F0h+var_60]
0x66B7DF: push    ecx
0x66B7E0: lea     edx, [esp+0F4h+var_3C]
0x66B7E7: push    edx
0x66B7E8: lea     ecx, [esp+0F8h+var_90]
0x66B7EC: call    NiMAtrix33_Multiply
0x66B7F1: mov     esi, eax
0x66B7F3: mov     ecx, 9
0x66B7F8: lea     edi, [esp+0F0h+var_90]
0x66B7FC: rep movsd
0x66B7FE: mov     ecx, ebp; this
0x66B800: call    sub_5E6C10
0x66B805: mov     bl, al
0x66B807: test    bl, bl
0x66B809: jz      short loc_66B80F
0x66B80B: fldz
0x66B80D: jmp     short loc_66B817
0x66B80F: mov     eax, ds:0B3BB0Ch
0x66B814: fld     dword ptr [eax+3Ch]
0x66B817: fstp    [esp+0F0h+var_D8]
0x66B81B: push    ecx
0x66B81C: fld     [esp+0F4h+var_D8]
0x66B820: lea     ecx, [esp+0F4h+var_60]
0x66B827: fchs
0x66B829: fmul    qword ptr ds:0A3D5B8h
0x66B82F: fmul    qword ptr ds:0A2FAA0h
0x66B835: fstp    [esp+0F4h+var_D8]
0x66B839: fld     [esp+0F4h+var_D8]
0x66B83D: fstp    [esp+0F4h+var_F4]; float
0x66B840: call    NiMatrix33_InitRotationTransform
0x66B845: lea     ecx, [esp+0F0h+var_60]
0x66B84C: push    ecx
0x66B84D: lea     edx, [esp+0F4h+var_3C]
0x66B854: push    edx
0x66B855: lea     ecx, [esp+0F8h+var_90]
0x66B859: call    NiMAtrix33_Multiply
0x66B85E: test    bl, bl
0x66B860: mov     ecx, 9
0x66B865: mov     esi, eax
0x66B867: lea     edi, [esp+0F0h+var_90]
0x66B86B: rep movsd
0x66B86D: jz      short loc_66B873
0x66B86F: fldz
0x66B871: jmp     short loc_66B87B
0x66B873: mov     eax, ds:0B3BB0Ch
0x66B878: fld     dword ptr [eax+40h]
0x66B87B: fstp    [esp+0F0h+var_D8]
0x66B87F: push    ecx
0x66B880: fld     [esp+0F4h+var_D8]
0x66B884: lea     ecx, [esp+0F4h+var_60]
0x66B88B: fmul    qword ptr ds:0A3D5B8h
0x66B891: fmul    qword ptr ds:0A2FAA0h
0x66B897: fstp    [esp+0F4h+var_D8]
0x66B89B: fld     [esp+0F4h+var_D8]
0x66B89F: fstp    [esp+0F4h+var_F4]; float
0x66B8A2: call    NiMatrix33_InitRotationTransposedTransform???
0x66B8A7: lea     ecx, [esp+0F0h+var_60]
0x66B8AE: push    ecx
0x66B8AF: lea     edx, [esp+0F4h+var_3C]
0x66B8B6: push    edx
0x66B8B7: lea     ecx, [esp+0F8h+var_90]
0x66B8BB: call    NiMAtrix33_Multiply
0x66B8C0: mov     esi, eax
0x66B8C2: mov     eax, ds:0B3BB0Ch
0x66B8C7: test    eax, eax
0x66B8C9: mov     ecx, 9
0x66B8CE: lea     edi, [esp+0F0h+var_90]
0x66B8D2: rep movsd
0x66B8D4: jz      short loc_66B8F4
0x66B8D6: mov     ecx, [eax+88h]
0x66B8DC: mov     edx, [eax+8Ch]
0x66B8E2: mov     eax, [eax+90h]
0x66B8E8: mov     dword ptr [esp+0F0h+var_B8], ecx
0x66B8EC: mov     dword ptr [esp+0F0h+var_B8+4], edx
0x66B8F0: mov     dword ptr [esp+0F0h+var_B8+8], eax
0x66B8F4: mov     edx, [ebp+58h]
0x66B8F7: mov     ecx, [ebp+104h]
0x66B8FD: mov     esi, [edx+17Ch]
0x66B903: push    0
0x66B905: call    sub_477EC0
0x66B90A: push    eax
0x66B90B: mov     ecx, esi
0x66B90D: call    sub_4710B0
0x66B912: fstp    [esp+0F0h+var_D8]
0x66B916: fld1
0x66B918: fld     [esp+0F0h+var_D8]
0x66B91C: fcom    st(1)
0x66B91E: fnstsw  ax
0x66B920: fstp    st(1)
0x66B922: test    ah, 5
0x66B925: jp      loc_66BA30
0x66B92B: mov     eax, ds:0B3BB10h
0x66B930: fld     dword ptr [eax+8Ch]
0x66B936: mov     esi, ds:0B3BB14h
0x66B93C: test    esi, esi
0x66B93E: fld     dword ptr [esp+0F0h+var_B8+4]
0x66B942: fld     st
0x66B944: fsubp   st(2), st
0x66B946: fxch    st(1)
0x66B948: fstp    [esp+0F0h+a1]
0x66B94C: fld     dword ptr [eax+90h]
0x66B952: fld     dword ptr [esp+0F0h+var_B8+8]
0x66B956: fld     st
0x66B958: fsubp   st(2), st
0x66B95A: fxch    st(1)
0x66B95C: fstp    [esp+0F0h+a3]
0x66B960: fld     dword ptr [eax+88h]
0x66B966: fld     dword ptr [esp+0F0h+var_B8]
0x66B96A: fld     st
0x66B96C: fsubp   st(2), st
0x66B96E: fxch    st(1)
0x66B970: fstp    [esp+0F0h+CameraPosition.x]
0x66B974: fld     dword ptr ds:0B36BD0h
0x66B97A: fmulp   st(4), st
0x66B97C: fxch    st(3)
0x66B97E: fstp    [esp+0F0h+var_D8]
0x66B982: fld     [esp+0F0h+CameraPosition.x]
0x66B986: fld     [esp+0F0h+var_D8]
0x66B98A: fld     st
0x66B98C: fmulp   st(2), st
0x66B98E: fxch    st(1)
0x66B990: fstp    [esp+0F0h+CameraPosition.x]
0x66B994: fld     [esp+0F0h+a1]
0x66B998: fmul    st, st(1)
0x66B99A: fstp    [esp+0F0h+CameraPosition.y]
0x66B99E: fmul    [esp+0F0h+a3]
0x66B9A2: fstp    [esp+0F0h+CameraPosition.z]
0x66B9A6: fld     [esp+0F0h+CameraPosition.x]
0x66B9AA: faddp   st(3), st
0x66B9AC: fxch    st(2)
0x66B9AE: fstp    dword ptr [esp+0F0h+var_B8]
0x66B9B2: fadd    [esp+0F0h+CameraPosition.y]
0x66B9B6: fstp    dword ptr [esp+0F0h+var_B8+4]
0x66B9BA: fadd    [esp+0F0h+CameraPosition.z]
0x66B9BE: fstp    dword ptr [esp+0F0h+var_B8+8]
0x66B9C2: jz      short loc_66BA32
0x66B9C4: mov     eax, [ebp+5D0h]
0x66B9CA: add     eax, 30h ; '0'
0x66B9CD: push    eax
0x66B9CE: lea     eax, [esp+0F4h+CameraPosition]
0x66B9D2: push    eax
0x66B9D3: lea     ecx, [esp+0F8h+var_AC]
0x66B9D7: push    ecx
0x66B9D8: add     esi, 54h ; 'T'
0x66B9DB: call    sub_710250
0x66B9E0: fld     dword ptr [eax]
0x66B9E2: fadd    dword ptr [esi]
0x66B9E4: add     esp, 0Ch
0x66B9E7: push    1; a3
0x66B9E9: fstp    dword ptr [esp+0F4h+var_C4]
0x66B9ED: mov     edx, dword ptr [esp+0F4h+var_C4]
0x66B9F1: fld     dword ptr [eax+4]
0x66B9F4: fadd    dword ptr [esi+4]
0x66B9F7: fstp    dword ptr [esp+0F4h+var_C4+4]
0x66B9FB: mov     ecx, dword ptr [esp+0F4h+var_C4+4]
0x66B9FF: fld     dword ptr [eax+8]
0x66BA02: mov     eax, ds:0B3BB14h
0x66BA07: fadd    dword ptr [esi+8]
0x66BA0A: add     eax, 54h ; 'T'
0x66BA0D: mov     [eax], edx
0x66BA0F: mov     [eax+4], ecx
0x66BA12: fstp    dword ptr [esp+0F4h+var_C4+8]
0x66BA16: mov     edx, dword ptr [esp+0F4h+var_C4+8]
0x66BA1A: fldz
0x66BA1C: push    ecx
0x66BA1D: mov     [eax+8], edx
0x66BA20: fstp    [esp+0F8h+var_F8]; a2
0x66BA23: mov     ecx, ds:0B3BB14h; this
0x66BA29: call    NiAVObject_UpdateNiAVObject
0x66BA2E: jmp     short loc_66BA32
0x66BA30: fstp    st
0x66BA32: mov     ecx, [ebp+1F0h]
0x66BA38: test    ecx, ecx
0x66BA3A: jz      loc_66BE1B
0x66BA40: call    sub_531F10
0x66BA45: test    eax, eax
0x66BA47: jz      loc_66BE1B
0x66BA4D: mov     ecx, [ebp+1F0h]
0x66BA53: push    0
0x66BA55: call    sub_531E90
0x66BA5A: mov     eax, [ebp+0]
0x66BA5D: mov     edx, [eax+380h]
0x66BA63: mov     ecx, ebp
0x66BA65: call    edx
0x66BA67: test    eax, eax
0x66BA69: jz      loc_66BE1B
0x66BA6F: fld1
0x66BA71: mov     dword ptr ds:0B3BB00h, 0
0x66BA7B: fstp    dword ptr ds:0B14E54h
0x66BA81: mov     ecx, ebp
0x66BA83: mov     eax, [ebp+0]
0x66BA86: mov     edx, [eax+380h]
0x66BA8C: call    edx
0x66BA8E: mov     ecx, eax; a1
0x66BA90: call    sub_5EE1B0
0x66BA95: jmp     loc_66BE1B
0x66BA9A: mov     ecx, ebp; this
0x66BA9C: call    TESObjectREFR__GetNiNode
0x66BAA1: fldz
0x66BAA3: cmp     byte ptr ds:0B3BB04h, 0
0x66BAAA: mov     ecx, [eax+88h]
0x66BAB0: mov     [esp+0F0h+PlayerPosition.x], ecx
0x66BAB4: mov     edx, [eax+8Ch]
0x66BABA: mov     [esp+0F0h+PlayerPosition.y], edx
0x66BABE: mov     eax, [eax+90h]
0x66BAC4: mov     [esp+0F0h+PlayerPosition.z], eax
0x66BAC8: jz      loc_66BC08
0x66BACE: cmp     byte ptr ds:0B3BB05h, 0
0x66BAD5: jz      short loc_66BB46
0x66BAD7: fld     dword ptr ds:0B3BB34h
0x66BADD: fcom    st(1)
0x66BADF: fnstsw  ax
0x66BAE1: fstp    st(1)
0x66BAE3: test    ah, 5
0x66BAE6: jp      short loc_66BAF6
0x66BAE8: fadd    qword ptr ds:0A3D5B0h
0x66BAEE: fstp    dword ptr ds:0B3BB34h
0x66BAF4: jmp     short loc_66BB13
0x66BAF6: fld     qword ptr ds:0A3D5B0h
0x66BAFC: fcom    st(1)
0x66BAFE: fnstsw  ax
0x66BB00: test    ah, 5
0x66BB03: jp      short loc_66BB0F
0x66BB05: fsubp   st(1), st
0x66BB07: fstp    dword ptr ds:0B3BB34h
0x66BB0D: jmp     short loc_66BB13
0x66BB0F: fstp    st(1)
0x66BB11: fstp    st
0x66BB13: mov     edx, [ebp+0]
0x66BB16: mov     eax, [edx+1E0h]
0x66BB1C: mov     ecx, ebp
0x66BB1E: call    eax
0x66BB20: fadd    dword ptr ds:0B3BB34h
0x66BB26: push    ecx
0x66BB27: lea     ecx, [esp+0F4h+var_90]
0x66BB2B: fstp    [esp+0F4h+a3]
0x66BB2F: fld     [esp+0F4h+a3]
0x66BB33: fstp    [esp+0F4h+var_F4]; float
0x66BB36: call    NiMatrix33_InitRotationTransform
0x66BB3B: fld     dword ptr ds:0B3BB2Ch
0x66BB41: jmp     loc_66BBE3
0x66BB46: fld     dword ptr ds:0B3BB28h
0x66BB4C: fcom    st(1)
0x66BB4E: fnstsw  ax
0x66BB50: fstp    st(1)
0x66BB52: test    ah, 5
0x66BB55: jp      short loc_66BB6B
0x66BB57: fadd    qword ptr ds:0A3D5B0h
0x66BB5D: fstp    dword ptr ds:0B3BB28h
0x66BB63: fld     dword ptr ds:0B3BB28h
0x66BB69: jmp     short loc_66BB8C
0x66BB6B: fld     qword ptr ds:0A3D5B0h
0x66BB71: fcom    st(1)
0x66BB73: fnstsw  ax
0x66BB75: test    ah, 5
0x66BB78: jp      short loc_66BB8A
0x66BB7A: fsubp   st(1), st
0x66BB7C: fstp    dword ptr ds:0B3BB28h
0x66BB82: fld     dword ptr ds:0B3BB28h
0x66BB88: jmp     short loc_66BB8C
0x66BB8A: fstp    st
0x66BB8C: fld     dword ptr ds:0B3BB20h
0x66BB92: fcom    qword ptr ds:0A6E740h
0x66BB98: fnstsw  ax
0x66BB9A: test    ah, 41h
0x66BB9D: jnz     short loc_66BBA9
0x66BB9F: fstp    st
0x66BBA1: fld     dword ptr ds:0A3F3E0h
0x66BBA7: jmp     short loc_66BBBC
0x66BBA9: fcomp   qword ptr ds:0A73DD0h
0x66BBAF: fnstsw  ax
0x66BBB1: test    ah, 5
0x66BBB4: jp      short loc_66BBC2
0x66BBB6: fld     dword ptr ds:0A3721Ch
0x66BBBC: fstp    dword ptr ds:0B3BB20h
0x66BBC2: fadd    dword ptr ds:0B3BAC8h
0x66BBC8: push    ecx
0x66BBC9: lea     ecx, [esp+0F4h+var_90]
0x66BBCD: fstp    [esp+0F4h+a3]
0x66BBD1: fld     [esp+0F4h+a3]
0x66BBD5: fstp    [esp+0F4h+var_F4]; float
0x66BBD8: call    NiMatrix33_InitRotationTransform
0x66BBDD: fld     dword ptr ds:0B3BB20h
0x66BBE3: push    ecx
0x66BBE4: lea     ecx, [esp+0F4h+var_60]
0x66BBEB: fstp    [esp+0F4h+var_F4]; float
0x66BBEE: call    NiMatrix33_InitRotationTransposedTransform???
0x66BBF3: mov     edx, [ebp+0]
0x66BBF6: mov     eax, [edx+0ECh]
0x66BBFC: mov     ecx, ebp
0x66BBFE: call    eax
0x66BC00: fmul    qword ptr ds:0A309F0h
0x66BC06: jmp     short loc_66BC46
0x66BC08: fstp    st
0x66BC0A: push    ecx
0x66BC0B: fld     dword ptr ds:0B3BAC8h
0x66BC11: lea     ecx, [esp+0F4h+var_90]
0x66BC15: fstp    [esp+0F4h+var_F4]; float
0x66BC18: call    NiMatrix33_InitRotationTransform
0x66BC1D: fld     dword ptr ds:0B3BAC4h
0x66BC23: push    ecx
0x66BC24: lea     ecx, [esp+0F4h+var_60]
0x66BC2B: fstp    [esp+0F4h+var_F4]; float
0x66BC2E: call    NiMatrix33_InitRotationTransposedTransform???
0x66BC33: mov     edx, [ebp+0]
0x66BC36: mov     eax, [edx+0ECh]
0x66BC3C: mov     ecx, ebp
0x66BC3E: call    eax
0x66BC40: fmul    dword ptr [ebp+5D4h]
0x66BC46: fadd    [esp+0F0h+PlayerPosition.z]
0x66BC4A: lea     ecx, [esp+0F0h+var_60]
0x66BC51: push    ecx
0x66BC52: lea     edx, [esp+0F4h+var_3C]
0x66BC59: push    edx
0x66BC5A: fstp    [esp+0F8h+PlayerPosition.z]
0x66BC5E: lea     ecx, [esp+0F8h+var_90]
0x66BC62: call    NiMAtrix33_Multiply
0x66BC67: fld     dword ptr ds:0B3BB24h
0x66BC6D: fchs
0x66BC6F: mov     esi, eax
0x66BC71: fstp    [esp+0F0h+a3]
0x66BC75: mov     ecx, 9
0x66BC7A: fldz
0x66BC7C: lea     edi, [esp+0F0h+var_90]
0x66BC80: fst     [esp+0F0h+var_6C]
0x66BC87: rep movsd
0x66BC89: fld     [esp+0F0h+a3]
0x66BC8D: fstp    [esp+0F0h+var_68]
0x66BC94: fstp    [esp+0F0h+var_64]
0x66BC9B: lea     eax, [esp+0F0h+var_6C]
0x66BCA2: push    eax
0x66BCA3: lea     ecx, [esp+0F4h+var_18]
0x66BCAA: push    ecx
0x66BCAB: lea     ecx, [esp+0F8h+var_90]
0x66BCAF: call    sub_7101F0
0x66BCB4: fld     [esp+0F0h+PlayerPosition.x]
0x66BCB8: fadd    dword ptr [eax]
0x66BCBA: fstp    [esp+0F0h+a3]
0x66BCBE: fld     dword ptr [eax+4]
0x66BCC1: fadd    [esp+0F0h+PlayerPosition.y]
0x66BCC5: fstp    [esp+0F0h+a1]
0x66BCC9: fld     dword ptr [eax+8]
0x66BCCC: fadd    [esp+0F0h+PlayerPosition.z]
0x66BCD0: fstp    [esp+0F0h+var_D8]
0x66BCD4: fld     [esp+0F0h+a3]
0x66BCD8: fstp    dword ptr [esp+0F0h+var_C4]
0x66BCDC: mov     edx, dword ptr [esp+0F0h+var_C4]
0x66BCE0: fld     [esp+0F0h+a1]
0x66BCE4: mov     [esp+0F0h+CameraPosition.x], edx
0x66BCE8: fstp    dword ptr [esp+0F0h+var_C4+4]
0x66BCEC: mov     eax, dword ptr [esp+0F0h+var_C4+4]
0x66BCF0: fld     [esp+0F0h+var_D8]
0x66BCF4: mov     [esp+0F0h+CameraPosition.y], eax
0x66BCF8: fstp    dword ptr [esp+0F0h+var_C4+8]
0x66BCFC: mov     ecx, dword ptr [esp+0F0h+var_C4+8]
0x66BD00: mov     [esp+0F0h+CameraPosition.z], ecx
0x66BD04: mov     ecx, ebp; this
0x66BD06: call    sub_66A5E0
0x66BD0B: push    0; CameraChasing
0x66BD0D: lea     edx, [esp+0F4h+PlayerPosition]
0x66BD11: push    edx; PlayerPosition
0x66BD12: lea     eax, [esp+0F8h+CameraPosition]
0x66BD16: push    eax; CameraPosition
0x66BD17: mov     ecx, ebp; a2
0x66BD19: call    UpdateCameraCollision
0x66BD1E: test    byte ptr ds:0B3BCCCh, 1
0x66BD25: mov     esi, [esp+0F0h+CameraPosition.x]
0x66BD29: mov     edi, [esp+0F0h+CameraPosition.y]
0x66BD2D: mov     ebx, [esp+0F0h+CameraPosition.z]
0x66BD31: mov     dword ptr [esp+0F0h+var_B8], esi
0x66BD35: mov     dword ptr [esp+0F0h+var_B8+4], edi
0x66BD39: mov     dword ptr [esp+0F0h+var_B8+8], ebx
0x66BD3D: jnz     short loc_66BD73
0x66BD3F: or      dword ptr ds:0B3BCCCh, 1
0x66BD46: mov     ecx, offset stru_B3BBA8
0x66BD4B: mov     [esp+0F0h+var_4], 0
0x66BD56: call    sub_70D590
0x66BD5B: push    offset sub_A25850; void (__cdecl *)()
0x66BD60: call    _atexit
0x66BD65: add     esp, 4
0x66BD68: mov     [esp+0F0h+var_4], 0FFFFFFFFh
0x66BD73: fldz
0x66BD75: push    1; a3
0x66BD77: push    ecx
0x66BD78: fstp    [esp+0F8h+var_F8]; a2
0x66BD7B: mov     ecx, offset stru_B3BBA8; this
0x66BD80: mov     ds:0B3BBFCh, esi
0x66BD86: mov     ds:0B3BC00h, edi
0x66BD8C: mov     ds:0B3BC04h, ebx
0x66BD92: call    NiAVObject_UpdateNiAVObject
0x66BD97: push    offset dword_B258E8
0x66BD9C: lea     ecx, [esp+0F4h+PlayerPosition]
0x66BDA0: push    ecx
0x66BDA1: mov     ecx, offset stru_B3BBA8
0x66BDA6: call    sub_70C340
0x66BDAB: fld     dword ptr ds:0B3BBE0h
0x66BDB1: fstp    [esp+0F0h+var_90]
0x66BDB5: mov     ecx, 9
0x66BDBA: fld     dword ptr ds:0B3BBD8h
0x66BDC0: mov     esi, offset stru_B3BBA8.members.super.m_localTransform
0x66BDC5: fstp    [esp+0F0h+var_8C]
0x66BDC9: lea     edi, [esp+0F0h+var_60]
0x66BDD0: fld     dword ptr ds:0B3BBDCh
0x66BDD6: rep movsd
0x66BDD8: fstp    [esp+0F0h+var_88]
0x66BDDC: fld     dword ptr ds:0B3BBECh
0x66BDE2: fstp    [esp+0F0h+var_84]
0x66BDE6: fld     dword ptr ds:0B3BBE4h
0x66BDEC: fstp    [esp+0F0h+var_80]
0x66BDF0: fld     dword ptr ds:0B3BBE8h
0x66BDF6: fstp    [esp+0F0h+var_7C]
0x66BDFA: fld     dword ptr ds:0B3BBF8h
0x66BE00: fstp    [esp+0F0h+var_78]
0x66BE04: fld     dword ptr ds:0B3BBF0h
0x66BE0A: fstp    [esp+0F0h+var_74]
0x66BE0E: fld     dword ptr ds:0B3BBF4h
0x66BE14: fstp    [esp+0F0h+var_70]
0x66BE1B: mov     ebx, [esp+0F0h+var_DC]
0x66BE1F: cmp     word ptr [ebx+0B6h], 0
0x66BE27: ja      short loc_66BE2D
0x66BE29: xor     eax, eax
0x66BE2B: jmp     short loc_66BE35
0x66BE2D: mov     edx, [ebx+0B0h]
0x66BE33: mov     eax, [edx]
0x66BE35: mov     ecx, dword ptr [esp+0F0h+var_B8]
0x66BE39: mov     edx, dword ptr [esp+0F0h+var_B8+4]
0x66BE3D: mov     [eax+54h], ecx
0x66BE40: mov     ecx, dword ptr [esp+0F0h+var_B8+8]
0x66BE44: mov     [eax+58h], edx
0x66BE47: mov     [eax+5Ch], ecx
0x66BE4A: cmp     word ptr [ebx+0B6h], 0
0x66BE52: ja      short loc_66BE58
0x66BE54: xor     eax, eax
0x66BE56: jmp     short loc_66BE60
0x66BE58: mov     edx, [ebx+0B0h]
0x66BE5E: mov     eax, [edx]
0x66BE60: lea     edi, [eax+30h]
0x66BE63: mov     ecx, 9
0x66BE68: lea     esi, [esp+0F0h+var_90]
0x66BE6C: rep movsd
0x66BE6E: cmp     word ptr [ebx+0B6h], 0
0x66BE76: ja      short loc_66BE7C
0x66BE78: xor     ecx, ecx
0x66BE7A: jmp     short loc_66BE84
0x66BE7C: mov     eax, [ebx+0B0h]
0x66BE82: mov     ecx, [eax]; this
0x66BE84: fldz
0x66BE86: push    0; a3
0x66BE88: push    ecx
0x66BE89: fstp    [esp+0F8h+var_F8]; a2
0x66BE8C: call    NiAVObject_UpdateNiAVObject
0x66BE91: mov     ecx, ds:0B33398h
0x66BE97: mov     esi, [ecx+24h]
0x66BE9A: test    esi, esi
0x66BE9C: jz      loc_66BF33
0x66BEA2: mov     ecx, [ebp+34h]
0x66BEA5: mov     eax, [ebp+30h]
0x66BEA8: mov     edx, [ebp+2Ch]
0x66BEAB: mov     dword ptr [esp+0F0h+var_C4+8], ecx
0x66BEAF: fld     dword ptr [esp+0F0h+var_C4+8]
0x66BEB3: sub     esp, 0Ch
0x66BEB6: fstp    [esp+0FCh+var_F4]; float
0x66BEBA: mov     dword ptr [esp+0FCh+var_C4+4], eax
0x66BEBE: fld     dword ptr [esp+0FCh+var_C4+4]
0x66BEC2: mov     dword ptr [esp+0FCh+var_C4], edx
0x66BEC6: fstp    [esp+0FCh+var_F8]; float
0x66BECA: mov     ecx, esi
0x66BECC: fld     dword ptr [esp+0FCh+var_C4]
0x66BED0: fstp    [esp+0FCh+a2+4]; float
0x66BED3: call    sub_6A8E10
0x66BED8: mov     edx, [ebp+0]
0x66BEDB: mov     eax, [edx+1E0h]
0x66BEE1: mov     ecx, ebp
0x66BEE3: call    eax
0x66BEE5: call    __CIcos
0x66BEEA: fstp    [esp+0F0h+var_DC]
0x66BEEE: mov     edx, [ebp+0]
0x66BEF1: fld     [esp+0F0h+var_DC]
0x66BEF5: mov     eax, [edx+1E0h]
0x66BEFB: fstp    [esp+0F0h+var_DC]
0x66BEFF: mov     ecx, ebp
0x66BF01: call    eax
0x66BF03: fstp    [esp+0F0h+a3]
0x66BF07: fldz
0x66BF09: sub     esp, 8
0x66BF0C: fstp    [esp+0F8h+var_F4]; float
0x66BF10: fld     [esp+0F8h+var_DC]
0x66BF14: fstp    [esp+0F8h+var_F8]; float
0x66BF17: fld     [esp+0F8h+a3]
0x66BF1B: call    __CIsin
0x66BF20: fstp    [esp+0F8h+var_DC]
0x66BF24: fld     [esp+0F8h+var_DC]
0x66BF28: push    ecx
0x66BF29: mov     ecx, esi
0x66BF2B: fstp    [esp+0FCh+a2+4]; float
0x66BF2E: call    sub_6A8E40
0x66BF33: mov     ecx, ebp; this
0x66BF35: call    TESObjectREFR_GetParentCell
0x66BF3A: mov     edi, eax
0x66BF3C: test    edi, edi
0x66BF3E: jz      short loc_66BFA5
0x66BF40: mov     ecx, [ebx+0DCh]
0x66BF46: push    ecx
0x66BF47: mov     ecx, edi
0x66BF49: call    sub_4D4EB0
0x66BF4E: test    esi, esi
0x66BF50: jz      short loc_66BFA5
0x66BF52: cmp     byte ptr [esi+0A5h], 0
0x66BF59: jnz     short loc_66BF82
0x66BF5B: fld     dword ptr ds:0A73DC8h
0x66BF61: push    ecx
0x66BF62: fstp    [esp+0F4h+var_F4]; float
0x66BF65: push    edi; int
0x66BF66: lea     edx, [ebp+2Ch]
0x66BF69: push    edx; int
0x66BF6A: mov     ecx, ebp
0x66BF6C: call    Actor_IsUnderwater??
0x66BF71: test    al, al
0x66BF73: jz      short loc_66BF79
0x66BF75: push    1
0x66BF77: jmp     short loc_66BF9E
0x66BF79: cmp     byte ptr [esi+0A5h], 0
0x66BF80: jz      short loc_66BFA5
0x66BF82: fld     dword ptr ds:0A73DC8h
0x66BF88: push    ecx
0x66BF89: fstp    [esp+0F4h+var_F4]; float
0x66BF8C: push    edi; int
0x66BF8D: lea     eax, [ebp+2Ch]
0x66BF90: push    eax; int
0x66BF91: mov     ecx, ebp
0x66BF93: call    Actor_IsUnderwater??
0x66BF98: test    al, al
0x66BF9A: jnz     short loc_66BFA5
0x66BF9C: push    0
0x66BF9E: mov     ecx, esi
0x66BFA0: call    sub_6AE720
0x66BFA5: mov     eax, ds:0B3BCCCh
0x66BFAA: test    al, 2
0x66BFAC: mov     ecx, ds:0B3F9B0h
0x66BFB2: mov     edx, ds:0B3F9ACh
0x66BFB8: mov     esi, ds:0B3F9A8h
0x66BFBE: jnz     short loc_66BFDA
0x66BFC0: or      eax, 2
0x66BFC3: mov     ds:0B3BCCCh, eax
0x66BFC8: mov     ds:0B3BB98h, esi
0x66BFCE: mov     ds:0B3BB9Ch, edx
0x66BFD4: mov     ds:0B3BBA0h, ecx
0x66BFDA: test    al, 4
0x66BFDC: jnz     short loc_66BFF8
0x66BFDE: or      eax, 4
0x66BFE1: mov     ds:0B3BCCCh, eax
0x66BFE6: mov     ds:0B3BB8Ch, esi
0x66BFEC: mov     ds:0B3BB90h, edx
0x66BFF2: mov     ds:0B3BB94h, ecx
0x66BFF8: fld     dword ptr [esp+0F0h+var_B8]
0x66BFFC: mov     esi, [ebx+0DCh]
0x66C002: fsub    dword ptr ds:0B3BB98h
0x66C008: fstp    [esp+0F0h+var_AC]
0x66C00C: fld     dword ptr [esp+0F0h+var_B8+4]
0x66C010: fsub    dword ptr ds:0B3BB9Ch
0x66C016: fstp    [esp+0F0h+var_A8]
0x66C01A: fld     dword ptr ds:0B3BBA0h
0x66C020: fldz
0x66C022: fsubrp  st(1), st
0x66C024: fstp    [esp+0F0h+var_A4]
0x66C028: fld     dword ptr [esi+0F0h]
0x66C02E: call    __CIatan
0x66C033: fstp    [esp+0F0h+var_DC]
0x66C037: fld     [esp+0F0h+var_DC]
0x66C03B: fdiv    dword ptr [esi+120h]
0x66C041: fstp    [esp+0F0h+a3]
0x66C045: fld     dword ptr [esi+64h]
0x66C048: fstp    dword ptr [esp+0F0h+var_C4]
0x66C04C: fld     dword ptr [esi+70h]
0x66C04F: mov     ecx, dword ptr [esp+0F0h+var_C4]
0x66C053: fstp    dword ptr [esp+0F0h+var_C4+4]
0x66C057: fld     dword ptr [esi+7Ch]
0x66C05A: mov     [esp+0F0h+CameraPosition.x], ecx
0x66C05E: mov     edx, dword ptr [esp+0F0h+var_C4+4]
0x66C062: fstp    dword ptr [esp+0F0h+var_C4+8]
0x66C066: lea     ecx, [esp+0F0h+CameraPosition]
0x66C06A: mov     eax, dword ptr [esp+0F0h+var_C4+8]
0x66C06E: mov     [esp+0F0h+CameraPosition.y], edx
0x66C072: mov     [esp+0F0h+CameraPosition.z], eax
0x66C076: call    sub_43F350
0x66C07B: fstp    st
0x66C07D: fld     [esp+0F0h+var_A8]
0x66C081: fld     [esp+0F0h+var_AC]
0x66C085: fld     [esp+0F0h+var_A4]
0x66C089: fld     st(1)
0x66C08B: fmulp   st(2), st
0x66C08D: fld     st(2)
0x66C08F: fmulp   st(3), st
0x66C091: fxch    st(1)
0x66C093: faddp   st(2), st
0x66C095: fmul    st, st
0x66C097: faddp   st(1), st
0x66C099: fstp    [esp+0F0h+var_DC]
0x66C09D: fld     [esp+0F0h+var_DC]
0x66C0A1: call    __CIsqrt
0x66C0A6: fstp    [esp+0F0h+var_DC]
0x66C0AA: fld     [esp+0F0h+var_DC]
0x66C0AE: fabs
0x66C0B0: fstp    [esp+0F0h+var_DC]
0x66C0B4: fld     [esp+0F0h+var_DC]
0x66C0B8: fcomp   dword ptr ds:0A56670h
0x66C0BE: fnstsw  ax
0x66C0C0: fld     [esp+0F0h+a3]
0x66C0C4: test    ah, 41h
0x66C0C7: jz      short loc_66C11E
0x66C0C9: fld     [esp+0F0h+CameraPosition.y]
0x66C0CD: fmul    dword ptr ds:0B3BB90h
0x66C0D3: fld     dword ptr ds:0B3BB8Ch
0x66C0D9: fmul    [esp+0F0h+CameraPosition.x]
0x66C0DD: faddp   st(1), st
0x66C0DF: fld     [esp+0F0h+CameraPosition.z]
0x66C0E3: fmul    dword ptr ds:0B3BB94h
0x66C0E9: faddp   st(1), st
0x66C0EB: fstp    [esp+0F0h+var_DC]
0x66C0EF: fld     [esp+0F0h+var_DC]
0x66C0F3: fld     st(1)
0x66C0F5: fsub    qword ptr ds:0A432D8h
0x66C0FB: fld1
0x66C0FD: fsubrp  st(1), st
0x66C0FF: fstp    [esp+0F0h+var_DC]
0x66C103: fld     [esp+0F0h+var_DC]
0x66C107: fcompp
0x66C109: fnstsw  ax
0x66C10B: test    ah, 41h
0x66C10E: jz      short loc_66C11E
0x66C110: cmp     [esp+0F0h+arg_0], 0
0x66C118: jz      loc_66C1DD
0x66C11E: fsub    qword ptr ds:0A3C770h
0x66C124: mov     esi, [esp+0F0h+CameraPosition.x]
0x66C128: mov     edi, [esp+0F0h+CameraPosition.y]
0x66C12C: mov     ebx, [esp+0F0h+CameraPosition.z]
0x66C130: mov     ecx, dword ptr [esp+0F0h+var_B8]
0x66C134: fstp    [esp+0F0h+var_DC]
0x66C138: fld     [esp+0F0h+var_DC]
0x66C13C: mov     edx, dword ptr [esp+0F0h+var_B8+4]
0x66C140: sub     esp, 10h
0x66C143: fstp    [esp+100h+var_F4]; float
0x66C147: mov     eax, esp
0x66C149: mov     [eax], esi
0x66C14B: mov     [eax+4], edi
0x66C14E: mov     [eax+8], ebx
0x66C151: sub     esp, 0Ch
0x66C154: mov     eax, esp
0x66C156: mov     [eax], ecx
0x66C158: mov     ecx, dword ptr [esp+10Ch+var_B8+8]
0x66C15C: mov     [eax+4], edx
0x66C15F: mov     [eax+8], ecx
0x66C162: call    DrawGrassPass?
0x66C167: mov     edx, [ebp+0]
0x66C16A: mov     eax, [edx+174h]
0x66C170: add     esp, 1Ch
0x66C173: mov     ecx, ebp
0x66C175: call    eax
0x66C177: mov     edx, [eax]
0x66C179: push    0
0x66C17B: sub     esp, 0Ch
0x66C17E: mov     ecx, esp
0x66C180: mov     [ecx], edx
0x66C182: mov     edx, [eax+4]
0x66C185: mov     eax, [eax+8]
0x66C188: mov     [ecx+4], edx
0x66C18B: mov     [ecx+8], eax
0x66C18E: call    sub_4EA6E0
0x66C193: fld     dword ptr [esp+100h+var_B8]
0x66C197: fstp    [esp+100h+var_AC]
0x66C19B: mov     ecx, [esp+100h+var_AC]
0x66C19F: fld     dword ptr [esp+100h+var_B8+4]
0x66C1A3: add     esp, 10h
0x66C1A6: fstp    [esp+0F0h+var_A8]
0x66C1AA: mov     edx, [esp+0F0h+var_A8]
0x66C1AE: fldz
0x66C1B0: mov     ds:0B3BB98h, ecx
0x66C1B6: fstp    [esp+0F0h+var_A4]
0x66C1BA: mov     ds:0B3BB9Ch, edx
0x66C1C0: mov     eax, [esp+0F0h+var_A4]
0x66C1C4: mov     ds:0B3BBA0h, eax
0x66C1C9: mov     ds:0B3BB8Ch, esi
0x66C1CF: mov     ds:0B3BB90h, edi
0x66C1D5: mov     ds:0B3BB94h, ebx
0x66C1DB: jmp     short loc_66C1DF
0x66C1DD: fstp    st
0x66C1DF: mov     ecx, dword ptr [esp+0F0h+var_C]
0x66C1E6: mov     large fs:0, ecx
0x66C1ED: pop     ecx
0x66C1EE: pop     edi
0x66C1EF: pop     esi
0x66C1F0: pop     ebp
0x66C1F1: pop     ebx
0x66C1F2: add     esp, 0DCh
0x66C1F8: retn    4
