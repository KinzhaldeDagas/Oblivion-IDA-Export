0x7DE8A0: push    0FFFFFFFFh
0x7DE8A2: push    offset WaterDisplacementPass_SEH
0x7DE8A7: mov     eax, large fs:0
0x7DE8AD: push    eax
0x7DE8AE: sub     esp, 78h
0x7DE8B1: mov     eax, ds:0B30AACh
0x7DE8B6: xor     eax, esp
0x7DE8B8: mov     [esp+84h+var_10], eax
0x7DE8BC: push    ebx
0x7DE8BD: push    ebp
0x7DE8BE: push    esi
0x7DE8BF: push    edi
0x7DE8C0: mov     eax, ds:0B30AACh
0x7DE8C5: xor     eax, esp
0x7DE8C7: push    eax; _DWORD
0x7DE8C8: lea     eax, [esp+98h+var_C]
0x7DE8CF: mov     large fs:0, eax
0x7DE8D5: mov     eax, [esp+98h+arg_0]
0x7DE8DC: mov     ebp, [esp+98h+arg_4]
0x7DE8E3: mov     ebx, ecx
0x7DE8E5: mov     ecx, [esp+98h+arg_8]
0x7DE8EC: mov     [esp+98h+var_48], ecx
0x7DE8F0: mov     ecx, ds:0B3F928h
0x7DE8F6: mov     edx, [ecx]
0x7DE8F8: mov     [esp+98h+var_78+4], eax
0x7DE8FC: mov     eax, [edx+7Ch]
0x7DE8FF: mov     [esp+98h+var_78], ebp
0x7DE903: call    eax
0x7DE905: mov     esi, eax
0x7DE907: mov     eax, [ebp+0]
0x7DE90A: mov     ecx, [eax+20h]
0x7DE90D: test    ecx, ecx
0x7DE90F: jz      short loc_7DE91C
0x7DE911: mov     edx, [ecx]
0x7DE913: mov     eax, [edx+4Ch]
0x7DE916: call    eax
0x7DE918: mov     edi, eax
0x7DE91A: jmp     short loc_7DE91E
0x7DE91C: xor     edi, edi
0x7DE91E: mov     edx, [esi]
0x7DE920: mov     eax, [edx+4Ch]
0x7DE923: push    0
0x7DE925: mov     ecx, esi
0x7DE927: call    eax
0x7DE929: test    eax, eax
0x7DE92B: mov     [esp+98h+var_7C], eax
0x7DE92F: fild    [esp+98h+var_7C]
0x7DE933: jge     short loc_7DE93B
0x7DE935: fadd    dword ptr ds:0A2FC78h
0x7DE93B: test    edi, edi
0x7DE93D: mov     [esp+98h+var_7C], edi
0x7DE941: fild    [esp+98h+var_7C]
0x7DE945: jge     short loc_7DE94D
0x7DE947: fadd    dword ptr ds:0A2FC78h
0x7DE94D: fdivp   st(1), st
0x7DE94F: mov     ecx, ds:0B3F928h
0x7DE955: mov     edx, [ecx]
0x7DE957: mov     eax, [edx+7Ch]
0x7DE95A: fstp    [esp+98h+var_58]
0x7DE95E: call    eax
0x7DE960: mov     esi, eax
0x7DE962: mov     eax, [ebp+0]
0x7DE965: mov     ecx, [eax+20h]
0x7DE968: test    ecx, ecx
0x7DE96A: jz      short loc_7DE977
0x7DE96C: mov     edx, [ecx]
0x7DE96E: mov     eax, [edx+50h]
0x7DE971: call    eax
0x7DE973: mov     edi, eax
0x7DE975: jmp     short loc_7DE979
0x7DE977: xor     edi, edi
0x7DE979: mov     edx, [esi]
0x7DE97B: mov     eax, [edx+50h]
0x7DE97E: push    0
0x7DE980: mov     ecx, esi
0x7DE982: call    eax
0x7DE984: test    eax, eax
0x7DE986: mov     [esp+98h+var_7C], eax
0x7DE98A: fild    [esp+98h+var_7C]
0x7DE98E: jge     short loc_7DE996
0x7DE990: fadd    dword ptr ds:0A2FC78h
0x7DE996: test    edi, edi
0x7DE998: mov     [esp+98h+var_7C], edi
0x7DE99C: fild    [esp+98h+var_7C]
0x7DE9A0: jge     short loc_7DE9A8
0x7DE9A2: fadd    dword ptr ds:0A2FC78h
0x7DE9A8: cmp     byte ptr ds:0B42E96h, 0
0x7DE9AF: fdivp   st(1), st
0x7DE9B1: fstp    [esp+98h+var_50]
0x7DE9B5: fldz
0x7DE9B7: fst     [esp+98h+var_68]
0x7DE9BB: fld1
0x7DE9BD: fst     [esp+98h+var_64]
0x7DE9C1: fst     [esp+98h+var_60]
0x7DE9C5: fxch    st(1)
0x7DE9C7: fstp    [esp+98h+var_5C]
0x7DE9CB: jz      short loc_7DE9D5
0x7DE9CD: fst     [esp+98h+var_58]
0x7DE9D1: fst     [esp+98h+var_50]
0x7DE9D5: mov     cl, ds:0B43075h
0x7DE9DB: neg     cl
0x7DE9DD: sbb     ecx, ecx
0x7DE9DF: and     ecx, 7
0x7DE9E2: cmp     byte ptr ds:0B45F4Ch, 0
0x7DE9E9: mov     [esp+98h+a1], ecx
0x7DE9ED: jz      short loc_7DE9F7
0x7DE9EF: fld     dword ptr ds:0A91B4Ch
0x7DE9F5: jmp     short loc_7DE9FD
0x7DE9F7: fld     dword ptr ds:0A47E78h
0x7DE9FD: lea     esi, [ebx+100h]
0x7DEA03: fstp    dword ptr [ebx+120h]
0x7DEA09: xor     edi, edi
0x7DEA0B: cmp     [esi], edi
0x7DEA0D: jnz     short loc_7DEA2F
0x7DEA0F: mov     edx, ds:0B43104h
0x7DEA15: fstp    st
0x7DEA17: mov     ecx, ds:0B42F50h; this
0x7DEA1D: push    7; a3
0x7DEA1F: push    edx; a2
0x7DEA20: call    BSTextureManager_GetDefaultRenderTarget
0x7DEA25: push    eax; a2
0x7DEA26: mov     ecx, esi; this
0x7DEA28: call    NiSmartPointer_Set??
0x7DEA2D: fld1
0x7DEA2F: cmp     [ebx+104h], edi
0x7DEA35: lea     esi, [ebx+104h]
0x7DEA3B: jnz     short loc_7DEA5C
0x7DEA3D: mov     eax, ds:0B43104h
0x7DEA42: fstp    st
0x7DEA44: mov     ecx, ds:0B42F50h; this
0x7DEA4A: push    7; a3
0x7DEA4C: push    eax; a2
0x7DEA4D: call    BSTextureManager_GetDefaultRenderTarget
0x7DEA52: push    eax; a2
0x7DEA53: mov     ecx, esi; this
0x7DEA55: call    NiSmartPointer_Set??
0x7DEA5A: fld1
0x7DEA5C: fldz
0x7DEA5E: mov     eax, [ebp+0]
0x7DEA61: fst     [esp+98h+var_68]
0x7DEA65: fstp    [esp+98h+var_5C]
0x7DEA69: fst     [esp+98h+var_64]
0x7DEA6D: fst     [esp+98h+var_60]
0x7DEA71: mov     ecx, [eax+20h]
0x7DEA74: cmp     ecx, edi
0x7DEA76: jz      short loc_7DEA85
0x7DEA78: mov     edx, [ecx]
0x7DEA7A: fstp    st
0x7DEA7C: mov     eax, [edx+4Ch]
0x7DEA7F: call    eax
0x7DEA81: fld1
0x7DEA83: jmp     short loc_7DEA87
0x7DEA85: xor     eax, eax
0x7DEA87: test    eax, eax
0x7DEA89: mov     [esp+98h+var_7C], eax
0x7DEA8D: fild    [esp+98h+var_7C]
0x7DEA91: jge     short loc_7DEA99
0x7DEA93: fadd    dword ptr ds:0A2FC78h
0x7DEA99: fdivr   qword ptr ds:0A2FAA0h
0x7DEA9F: mov     eax, [ebp+0]
0x7DEAA2: mov     ecx, [eax+20h]
0x7DEAA5: cmp     ecx, edi
0x7DEAA7: fstp    [esp+98h+var_40]
0x7DEAAB: jz      short loc_7DEABA
0x7DEAAD: mov     edx, [ecx]
0x7DEAAF: fstp    st
0x7DEAB1: mov     eax, [edx+50h]
0x7DEAB4: call    eax
0x7DEAB6: fld1
0x7DEAB8: jmp     short loc_7DEABC
0x7DEABA: xor     eax, eax
0x7DEABC: test    eax, eax
0x7DEABE: mov     [esp+98h+var_7C], eax
0x7DEAC2: fild    [esp+98h+var_7C]
0x7DEAC6: jge     short loc_7DEACE
0x7DEAC8: fadd    dword ptr ds:0A2FC78h
0x7DEACE: cmp     [esp+98h+arg_C], 0
0x7DEAD6: fdivr   qword ptr ds:0A2FAA0h
0x7DEADC: fstp    [esp+98h+var_7C]
0x7DEAE0: jz      short loc_7DEAE8
0x7DEAE2: fst     [esp+98h+var_64]
0x7DEAE6: jmp     short loc_7DEAF6
0x7DEAE8: fstp    st
0x7DEAEA: fld     [esp+98h+var_58]
0x7DEAEE: fstp    [esp+98h+var_64]
0x7DEAF2: fld     [esp+98h+var_50]
0x7DEAF6: cmp     ds:0B42D78h, edi
0x7DEAFC: fstp    [esp+98h+var_60]
0x7DEB00: jz      short loc_7DEB11
0x7DEB02: push    1; _DWORD
0x7DEB04: push    1; _DWORD
0x7DEB06: call    dword ptr ds:0B42D78h
0x7DEB0C: add     esp, 8
0x7DEB0F: jmp     short loc_7DEB13
0x7DEB11: fldz
0x7DEB13: fstp    [esp+98h+var_80]
0x7DEB17: fld     [esp+98h+var_80]
0x7DEB1B: mov     [esp+98h+var_80], edi
0x7DEB1F: fst     dword ptr [ebx+110h]
0x7DEB25: fld     dword ptr [ebx+11Ch]
0x7DEB2B: fadd    st, st(1)
0x7DEB2D: fstp    dword ptr [ebx+11Ch]
0x7DEB33: fadd    dword ptr [ebx+124h]
0x7DEB39: fstp    dword ptr [ebx+124h]
0x7DEB3F: cmp     byte ptr ds:0B45F4Ch, 0
0x7DEB46: mov     [esp+98h+var_4], edi
0x7DEB4D: jz      loc_7DEC55
0x7DEB53: mov     edi, [ebp+0]
0x7DEB56: mov     eax, ds:0B45FA8h
0x7DEB5B: cmp     eax, edi
0x7DEB5D: jz      short loc_7DEB95
0x7DEB5F: test    eax, eax
0x7DEB61: jz      short loc_7DEB81
0x7DEB63: mov     esi, eax
0x7DEB65: add     eax, 4
0x7DEB68: push    eax; lpAddend
0x7DEB69: call    dword ptr ds:0A2807Ch
0x7DEB6F: test    eax, eax
0x7DEB71: jnz     short loc_7DEB81
0x7DEB73: test    esi, esi
0x7DEB75: jz      short loc_7DEB81
0x7DEB77: mov     edx, [esi]
0x7DEB79: mov     eax, [edx]
0x7DEB7B: push    1
0x7DEB7D: mov     ecx, esi
0x7DEB7F: call    eax
0x7DEB81: test    edi, edi
0x7DEB83: mov     ds:0B45FA8h, edi
0x7DEB89: jz      short loc_7DEB95
0x7DEB8B: add     edi, 4
0x7DEB8E: push    edi; lpAddend
0x7DEB8F: call    dword ptr ds:0A28078h
0x7DEB95: mov     ecx, [ebx+100h]
0x7DEB9B: mov     dword ptr [ebx+0F4h], 7
0x7DEBA5: call    BSRenderedTexture__UseTextureToRender
0x7DEBAA: mov     ecx, [esp+98h+a1]
0x7DEBAE: push    eax; a2
0x7DEBAF: push    ecx; a1
0x7DEBB0: call    NiRenderer_BeginScene
0x7DEBB5: mov     ecx, ds:0B3F928h
0x7DEBBB: mov     eax, 1
0x7DEBC0: add     esp, 8
0x7DEBC3: cmp     [ecx+200h], eax
0x7DEBC9: jz      short loc_7DEBD3
0x7DEBCB: cmp     [ecx+204h], eax
0x7DEBD1: jnz     short loc_7DEBF0
0x7DEBD3: cmp     [ecx+20Ch], al
0x7DEBD9: jnz     short loc_7DEBF0
0x7DEBDB: mov     edx, [ecx]
0x7DEBDD: mov     edx, [edx+144h]
0x7DEBE3: lea     eax, [esp+98h+var_68]
0x7DEBE7: push    eax
0x7DEBE8: call    edx
0x7DEBEA: mov     ecx, ds:0B3F928h
0x7DEBF0: mov     edi, [esp+98h+var_78+4]
0x7DEBF4: push    ecx
0x7DEBF5: mov     ecx, edi; this
0x7DEBF7: call    sub_709C60
0x7DEBFC: call    NiRenderer_EndScene
0x7DEC01: cmp     byte ptr ds:0B45F4Ch, 0
0x7DEC08: jz      short loc_7DEC59
0x7DEC0A: mov     ecx, [ebx+100h]
0x7DEC10: call    BSRenderedTexture__UseTextureToRender
0x7DEC15: push    eax; a2
0x7DEC16: push    0; a1
0x7DEC18: call    NiRenderer_BeginScene
0x7DEC1D: mov     ecx, ds:0B3F928h
0x7DEC23: mov     esi, 1
0x7DEC28: add     esp, 8
0x7DEC2B: cmp     [ecx+200h], esi
0x7DEC31: jz      short loc_7DEC3B
0x7DEC33: cmp     [ecx+204h], esi
0x7DEC39: jnz     short loc_7DEC71
0x7DEC3B: cmp     byte ptr [ecx+20Ch], 1
0x7DEC42: jnz     short loc_7DEC71
0x7DEC44: mov     eax, [ecx]
0x7DEC46: mov     eax, [eax+144h]
0x7DEC4C: lea     edx, [esp+98h+var_68]
0x7DEC50: push    edx
0x7DEC51: call    eax
0x7DEC53: jmp     short loc_7DEC71
0x7DEC55: mov     edi, [esp+98h+var_78+4]
0x7DEC59: mov     ecx, [ebp+0]
0x7DEC5C: call    BSRenderedTexture__UseTextureToRender
0x7DEC61: push    eax; a2
0x7DEC62: push    0; a1
0x7DEC64: call    NiRenderer_BeginScene
0x7DEC69: add     esp, 8
0x7DEC6C: mov     esi, 1
0x7DEC71: cmp     byte ptr ds:0B45F4Ch, 0
0x7DEC78: jz      loc_7DF040
0x7DEC7E: cmp     byte ptr ds:0B45F4Dh, 0
0x7DEC85: jz      loc_7DF117
0x7DEC8B: fld1
0x7DEC8D: xor     esi, esi
0x7DEC8F: fst     dword ptr [ebx+98h]
0x7DEC95: push    14h; a1
0x7DEC97: fstp    dword ptr [ebx+94h]
0x7DEC9D: mov     [ebx+0F4h], esi
0x7DECA3: fldz
0x7DECA5: mov     [esp+9Ch+var_4C], esi
0x7DECA9: fst     dword ptr [ebx+9Ch]
0x7DECAF: fstp    dword ptr [ebx+0A0h]
0x7DECB5: call    GetShaderDefinition
0x7DECBA: add     esp, 4
0x7DECBD: cmp     eax, esi
0x7DECBF: jz      short loc_7DECC8
0x7DECC1: mov     ecx, [eax+4]
0x7DECC4: mov     [esp+98h+var_4C], ecx
0x7DECC8: cmp     [ebx+90h], esi
0x7DECCE: jnz     loc_7DEF5E
0x7DECD4: push    30h ; '0'; Size
0x7DECD6: call    FormHeapAlloc
0x7DECDB: fldz
0x7DECDD: fst     [esp+9Ch+var_1C]
0x7DECE4: mov     ebp, eax
0x7DECE6: fld     dword ptr ds:0A34BA0h
0x7DECEC: mov     edx, [esp+9Ch+var_1C]
0x7DECF3: fst     [esp+9Ch+var_18]
0x7DECFA: mov     [ebp+0], edx
0x7DECFD: mov     eax, [esp+9Ch+var_18]
0x7DED04: fxch    st(1)
0x7DED06: fst     [esp+9Ch+var_14]
0x7DED0D: mov     [ebp+4], eax
0x7DED10: fld1
0x7DED12: mov     ecx, [esp+9Ch+var_14]
0x7DED19: fst     [esp+9Ch+var_1C]
0x7DED20: mov     [ebp+8], ecx
0x7DED23: fxch    st(2)
0x7DED25: push    0Ch; Size
0x7DED27: mov     edx, [esp+0A0h+var_1C]
0x7DED2E: fstp    [esp+0A0h+var_18]
0x7DED35: mov     [ebp+0Ch], edx
0x7DED38: mov     eax, [esp+0A0h+var_18]
0x7DED3F: mov     [ebp+10h], eax
0x7DED42: fst     [esp+0A0h+var_14]
0x7DED49: mov     ecx, [esp+0A0h+var_14]
0x7DED50: fxch    st(1)
0x7DED52: mov     [ebp+14h], ecx
0x7DED55: fstp    [esp+0A0h+var_1C]
0x7DED5C: mov     edx, [esp+0A0h+var_1C]
0x7DED63: fld     dword ptr ds:0A59E38h
0x7DED69: mov     [ebp+18h], edx
0x7DED6C: fst     [esp+0A0h+var_18]
0x7DED73: mov     eax, [esp+0A0h+var_18]
0x7DED7A: fxch    st(1)
0x7DED7C: mov     [ebp+1Ch], eax
0x7DED7F: fst     [esp+0A0h+var_14]
0x7DED86: mov     ecx, [esp+0A0h+var_14]
0x7DED8D: fst     [esp+0A0h+var_1C]
0x7DED94: mov     edx, [esp+0A0h+var_1C]
0x7DED9B: fstp    [esp+0A0h+var_14]
0x7DEDA2: mov     [ebp+20h], ecx
0x7DEDA5: mov     ecx, [esp+0A0h+var_14]
0x7DEDAC: fstp    [esp+0A0h+var_18]
0x7DEDB3: mov     eax, [esp+0A0h+var_18]
0x7DEDBA: mov     [ebp+24h], edx
0x7DEDBD: mov     [ebp+28h], eax
0x7DEDC0: mov     [ebp+2Ch], ecx
0x7DEDC3: xor     eax, eax
0x7DEDC5: mov     ecx, 2
0x7DEDCA: mov     word ptr [esp+0A0h+var_1C], ax
0x7DEDD2: mov     word ptr [esp+0A0h+var_1C+2], 1
0x7DEDDC: mov     word ptr [esp+0A0h+var_18], cx
0x7DEDE4: mov     word ptr [esp+0A0h+var_18+2], ax
0x7DEDEC: mov     word ptr [esp+0A0h+var_14], cx
0x7DEDF4: mov     word ptr [esp+0A0h+var_14+2], 3
0x7DEDFE: call    FormHeapAlloc
0x7DEE03: fldz
0x7DEE05: mov     edx, [esp+0A0h+var_1C]
0x7DEE0C: fst     [esp+0A0h+var_1C]
0x7DEE13: mov     ecx, [esp+0A0h+var_18]
0x7DEE1A: fstp    [esp+0A0h+var_18]
0x7DEE21: mov     [eax], edx
0x7DEE23: mov     edx, [esp+0A0h+var_14]
0x7DEE2A: mov     [eax+4], ecx
0x7DEE2D: mov     ecx, [esp+0A0h+var_18]
0x7DEE34: mov     [esp+0A0h+var_44], eax
0x7DEE38: mov     [eax+8], edx
0x7DEE3B: mov     eax, [esp+0A0h+var_1C]
0x7DEE42: push    20h ; ' '; Size
0x7DEE44: mov     [esp+0A4h+var_3C], eax
0x7DEE48: mov     [esp+0A4h+var_38], ecx
0x7DEE4C: mov     [esp+0A4h+var_34], eax
0x7DEE50: mov     [esp+0A4h+var_30], ecx
0x7DEE54: mov     [esp+0A4h+var_2C], eax
0x7DEE58: mov     [esp+0A4h+var_28], ecx
0x7DEE5C: mov     [esp+0A4h+var_24], eax
0x7DEE63: mov     [esp+0A4h+var_20], ecx
0x7DEE6A: call    FormHeapAlloc
0x7DEE6F: mov     [esp+0A4h+var_70], eax
0x7DEE73: mov     ecx, 8
0x7DEE78: mov     edi, eax
0x7DEE7A: lea     esi, [esp+0A4h+var_3C]
0x7DEE7E: push    58h ; 'X'; Size
0x7DEE80: rep movsd
0x7DEE82: call    FormHeapAlloc
0x7DEE87: add     esp, 10h
0x7DEE8A: mov     [esp+98h+var_1C], eax
0x7DEE8E: test    eax, eax
0x7DEE90: mov     byte ptr [esp+98h+var_4], 1
0x7DEE98: jz      short loc_7DEEBC
0x7DEE9A: mov     ecx, [esp+98h+var_44]
0x7DEE9E: mov     edx, [esp+98h+var_70]
0x7DEEA2: push    ecx
0x7DEEA3: push    2
0x7DEEA5: push    0
0x7DEEA7: push    1
0x7DEEA9: push    edx
0x7DEEAA: push    0
0x7DEEAC: push    0
0x7DEEAE: push    ebp
0x7DEEAF: push    4
0x7DEEB1: mov     ecx, eax
0x7DEEB3: call    sub_71FB40
0x7DEEB8: mov     esi, eax
0x7DEEBA: jmp     short loc_7DEEBE
0x7DEEBC: xor     esi, esi
0x7DEEBE: push    0C0h ; 'À'; Size
0x7DEEC3: mov     byte ptr [esp+9Ch+var_4], 0
0x7DEECB: call    FormHeapAlloc
0x7DEED0: add     esp, 4
0x7DEED3: mov     [esp+98h+var_1C], eax
0x7DEED7: test    eax, eax
0x7DEED9: mov     byte ptr [esp+98h+var_4], 2
0x7DEEE1: jz      short loc_7DEEED
0x7DEEE3: push    esi; a2
0x7DEEE4: mov     ecx, eax; this
0x7DEEE6: call    NiTriShape_NiTriShape
0x7DEEEB: jmp     short loc_7DEEEF
0x7DEEED: xor     eax, eax
0x7DEEEF: push    24h ; '$'; Size
0x7DEEF1: mov     byte ptr [esp+9Ch+var_4], 0
0x7DEEF9: mov     [ebx+90h], eax
0x7DEEFF: call    FormHeapAlloc
0x7DEF04: add     esp, 4
0x7DEF07: mov     [esp+98h+var_1C], eax
0x7DEF0B: test    eax, eax
0x7DEF0D: mov     byte ptr [esp+98h+var_4], 3
0x7DEF15: jz      short loc_7DEF20
0x7DEF17: mov     ecx, eax
0x7DEF19: call    sub_482590
0x7DEF1E: jmp     short loc_7DEF22
0x7DEF20: xor     eax, eax
0x7DEF22: or      word ptr [eax+18h], 0C00h
0x7DEF28: mov     ecx, [ebx+90h]; this
0x7DEF2E: push    eax; a2
0x7DEF2F: mov     byte ptr [esp+9Ch+var_4], 0
0x7DEF37: call    sub_405680
0x7DEF3C: mov     ecx, [ebx+90h]; this
0x7DEF42: call    NiAVObject_InitializePropertyState
0x7DEF47: fldz
0x7DEF49: push    1; a3
0x7DEF4B: push    ecx
0x7DEF4C: mov     ecx, [ebx+90h]; this
0x7DEF52: fstp    [esp+0A0h+a2]; a2
0x7DEF55: call    NiAVObject_UpdateNiAVObject
0x7DEF5A: mov     edi, [esp+98h+var_78+4]
0x7DEF5E: mov     eax, [esp+98h+var_4C]
0x7DEF62: mov     ecx, [ebx+90h]; this
0x7DEF68: push    eax; a2
0x7DEF69: call    sub_4EC910
0x7DEF6E: fld     dword ptr ds:0B45F98h
0x7DEF74: fsub    dword ptr ds:0B45FACh
0x7DEF7A: lea     ecx, [esp+98h+var_1C]
0x7DEF7E: fld     dword ptr ds:0B45FB8h
0x7DEF84: fsub    st, st(1)
0x7DEF86: fstp    dword ptr ds:0B45F78h
0x7DEF8C: fld     dword ptr ds:0B45FB0h
0x7DEF92: fadd    dword ptr ds:0B45F9Ch
0x7DEF98: fst     qword ptr [esp+98h+var_70]
0x7DEF9C: fsubr   dword ptr ds:0B45FBCh
0x7DEFA2: fstp    dword ptr ds:0B45F88h
0x7DEFA8: fstp    dword ptr ds:0B45F80h
0x7DEFAE: fld     dword ptr ds:0B45F88h
0x7DEFB4: fchs
0x7DEFB6: fstp    [esp+98h+var_1C]
0x7DEFBA: fld     dword ptr ds:0B45F78h
0x7DEFC0: fstp    [esp+98h+var_18]
0x7DEFC7: call    sub_499020
0x7DEFCC: fstp    st
0x7DEFCE: mov     eax, ds:0B3F928h
0x7DEFD3: fld     [esp+98h+var_1C]
0x7DEFD7: push    eax
0x7DEFD8: fld     qword ptr ds:0A563D0h
0x7DEFDE: fmul    st(1), st
0x7DEFE0: fxch    st(1)
0x7DEFE2: fstp    [esp+9Ch+var_1C]
0x7DEFE9: fmul    [esp+9Ch+var_18]
0x7DEFF0: fstp    [esp+9Ch+var_18]
0x7DEFF7: fld     [esp+9Ch+var_1C]
0x7DEFFE: fstp    dword ptr ds:0B45F7Ch
0x7DF004: fld     [esp+9Ch+var_18]
0x7DF00B: fstp    dword ptr ds:0B45F8Ch
0x7DF011: fld     qword ptr [esp+9Ch+var_70]
0x7DF015: fstp    dword ptr ds:0B45F90h
0x7DF01B: mov     ecx, [ebx+90h]
0x7DF021: test    ecx, ecx
0x7DF023: jz      short loc_7DF034
0x7DF025: mov     edx, [ecx]
0x7DF027: mov     edx, [edx+84h]
0x7DF02D: call    edx
0x7DF02F: jmp     loc_7DF117
0x7DF034: mov     ecx, edi; this
0x7DF036: call    sub_709C60
0x7DF03B: jmp     loc_7DF117
0x7DF040: mov     [ebx+0F4h], esi
0x7DF046: fld     dword ptr ds:0B45F64h
0x7DF04C: fstp    dword ptr [ebx+98h]
0x7DF052: fld     dword ptr ds:0B45F64h
0x7DF058: fstp    dword ptr [ebx+94h]
0x7DF05E: fild    dword ptr ds:0B45F48h
0x7DF064: fmul    dword ptr [ebx+11Ch]
0x7DF06A: call    Double_To_SInt32
0x7DF06F: fldz
0x7DF071: test    eax, eax
0x7DF073: fstp    dword ptr [ebx+11Ch]
0x7DF079: jle     loc_7DF117
0x7DF07F: mov     ebp, eax
0x7DF081: call    _rand
0x7DF086: mov     [esp+98h+var_70], eax
0x7DF08A: fild    [esp+98h+var_70]
0x7DF08E: fdiv    qword ptr ds:0A3D5A8h
0x7DF094: fstp    [esp+98h+var_70]
0x7DF098: fld     [esp+98h+var_70]
0x7DF09C: fadd    st, st
0x7DF09E: fsub    qword ptr ds:0A2F928h
0x7DF0A4: fstp    dword ptr [ebx+9Ch]
0x7DF0AA: call    _rand
0x7DF0AF: mov     [esp+98h+var_70], eax
0x7DF0B3: fild    [esp+98h+var_70]
0x7DF0B7: fdiv    qword ptr ds:0A3D5A8h
0x7DF0BD: fstp    [esp+98h+var_70]
0x7DF0C1: fld     [esp+98h+var_70]
0x7DF0C5: fadd    st, st
0x7DF0C7: fsub    qword ptr ds:0A2F928h
0x7DF0CD: fstp    dword ptr [ebx+0A0h]
0x7DF0D3: mov     ecx, ds:0B3F928h
0x7DF0D9: cmp     [ecx+200h], esi
0x7DF0DF: jz      short loc_7DF0E9
0x7DF0E1: cmp     [ecx+204h], esi
0x7DF0E7: jnz     short loc_7DF107
0x7DF0E9: cmp     byte ptr [ecx+20Ch], 1
0x7DF0F0: jnz     short loc_7DF107
0x7DF0F2: mov     edx, [ecx]
0x7DF0F4: mov     edx, [edx+144h]
0x7DF0FA: lea     eax, [esp+98h+var_68]
0x7DF0FE: push    eax
0x7DF0FF: call    edx
0x7DF101: mov     ecx, ds:0B3F928h
0x7DF107: push    ecx
0x7DF108: mov     ecx, edi; this
0x7DF10A: call    sub_709C60
0x7DF10F: sub     ebp, esi
0x7DF111: jnz     loc_7DF081
0x7DF117: call    NiRenderer_EndScene
0x7DF11C: fld     [esp+98h+var_58]
0x7DF120: fstp    dword ptr [ebx+94h]
0x7DF126: fld     [esp+98h+var_50]
0x7DF12A: fstp    dword ptr [ebx+98h]
0x7DF130: fld     [esp+98h+var_40]
0x7DF134: fldz
0x7DF136: fadd    st(1), st
0x7DF138: fxch    st(1)
0x7DF13A: fstp    dword ptr [ebx+9Ch]
0x7DF140: fadd    [esp+98h+var_7C]
0x7DF144: fstp    dword ptr [ebx+0A0h]
0x7DF14A: cmp     byte ptr ds:0B45F4Ch, 0
0x7DF151: jz      short loc_7DF15F
0x7DF153: mov     dword ptr [ebx+0F4h], 2
0x7DF15D: jmp     short loc_7DF169
0x7DF15F: mov     dword ptr [ebx+0F4h], 3
0x7DF169: fld     dword ptr [ebx+124h]
0x7DF16F: mov     byte ptr [esp+98h+var_84+3], 1
0x7DF174: fld     dword ptr [ebx+120h]
0x7DF17A: fcompp
0x7DF17C: fnstsw  ax
0x7DF17E: test    ah, 5
0x7DF181: jp      loc_7DF320
0x7DF187: mov     ebp, [esp+98h+var_80]
0x7DF18B: cmp     byte ptr [esp+98h+var_84+3], 0
0x7DF190: jnz     loc_7DF22F
0x7DF196: cmp     byte ptr ds:0B45F4Ch, 0
0x7DF19D: jz      loc_7DF23C
0x7DF1A3: cmp     ebp, [ebx+100h]
0x7DF1A9: jz      short loc_7DF1E0
0x7DF1AB: test    ebp, ebp
0x7DF1AD: jz      short loc_7DF1C8
0x7DF1AF: lea     eax, [ebp+4]
0x7DF1B2: push    eax; lpAddend
0x7DF1B3: call    dword ptr ds:0A2807Ch
0x7DF1B9: test    eax, eax
0x7DF1BB: jnz     short loc_7DF1C8
0x7DF1BD: mov     edx, [ebp+0]
0x7DF1C0: mov     eax, [edx]
0x7DF1C2: push    1
0x7DF1C4: mov     ecx, ebp
0x7DF1C6: call    eax
0x7DF1C8: mov     ebp, [ebx+100h]
0x7DF1CE: test    ebp, ebp
0x7DF1D0: mov     [esp+98h+var_80], ebp
0x7DF1D4: jz      short loc_7DF1E0
0x7DF1D6: lea     ecx, [ebp+4]
0x7DF1D9: push    ecx; lpAddend
0x7DF1DA: call    dword ptr ds:0A28078h
0x7DF1E0: mov     edx, [esp+98h+var_78]
0x7DF1E4: mov     edi, [edx]
0x7DF1E6: mov     esi, [ebx+100h]
0x7DF1EC: cmp     esi, edi
0x7DF1EE: jz      short loc_7DF224
0x7DF1F0: test    esi, esi
0x7DF1F2: jz      short loc_7DF210
0x7DF1F4: lea     eax, [esi+4]
0x7DF1F7: push    eax; lpAddend
0x7DF1F8: call    dword ptr ds:0A2807Ch
0x7DF1FE: test    eax, eax
0x7DF200: jnz     short loc_7DF210
0x7DF202: test    esi, esi
0x7DF204: jz      short loc_7DF210
0x7DF206: mov     edx, [esi]
0x7DF208: mov     eax, [edx]
0x7DF20A: push    1
0x7DF20C: mov     ecx, esi
0x7DF20E: call    eax
0x7DF210: test    edi, edi
0x7DF212: mov     [ebx+100h], edi
0x7DF218: jz      short loc_7DF224
0x7DF21A: add     edi, 4
0x7DF21D: push    edi; lpAddend
0x7DF21E: call    dword ptr ds:0A28078h
0x7DF224: mov     ecx, [esp+98h+var_78]
0x7DF228: mov     [ecx], ebp
0x7DF22A: jmp     loc_7DF2CA
0x7DF22F: cmp     byte ptr ds:0B45F4Ch, 0
0x7DF236: jnz     loc_7DF2C5
0x7DF23C: cmp     ebp, [ebx+104h]
0x7DF242: jz      short loc_7DF279
0x7DF244: test    ebp, ebp
0x7DF246: jz      short loc_7DF261
0x7DF248: lea     edx, [ebp+4]
0x7DF24B: push    edx; lpAddend
0x7DF24C: call    dword ptr ds:0A2807Ch
0x7DF252: test    eax, eax
0x7DF254: jnz     short loc_7DF261
0x7DF256: mov     eax, [ebp+0]
0x7DF259: mov     edx, [eax]
0x7DF25B: push    1
0x7DF25D: mov     ecx, ebp
0x7DF25F: call    edx
0x7DF261: mov     ebp, [ebx+104h]
0x7DF267: test    ebp, ebp
0x7DF269: mov     [esp+98h+var_80], ebp
0x7DF26D: jz      short loc_7DF279
0x7DF26F: lea     eax, [ebp+4]
0x7DF272: push    eax; lpAddend
0x7DF273: call    dword ptr ds:0A28078h
0x7DF279: mov     ecx, [esp+98h+var_78]
0x7DF27D: mov     edi, [ecx]
0x7DF27F: mov     esi, [ebx+104h]
0x7DF285: cmp     esi, edi
0x7DF287: jz      short loc_7DF2BD
0x7DF289: test    esi, esi
0x7DF28B: jz      short loc_7DF2A9
0x7DF28D: lea     edx, [esi+4]
0x7DF290: push    edx; lpAddend
0x7DF291: call    dword ptr ds:0A2807Ch
0x7DF297: test    eax, eax
0x7DF299: jnz     short loc_7DF2A9
0x7DF29B: test    esi, esi
0x7DF29D: jz      short loc_7DF2A9
0x7DF29F: mov     eax, [esi]
0x7DF2A1: mov     edx, [eax]
0x7DF2A3: push    1
0x7DF2A5: mov     ecx, esi
0x7DF2A7: call    edx
0x7DF2A9: test    edi, edi
0x7DF2AB: mov     [ebx+104h], edi
0x7DF2B1: jz      short loc_7DF2BD
0x7DF2B3: add     edi, 4
0x7DF2B6: push    edi; lpAddend
0x7DF2B7: call    dword ptr ds:0A28078h
0x7DF2BD: mov     eax, [esp+98h+var_78]
0x7DF2C1: mov     [eax], ebp
0x7DF2C3: jmp     short loc_7DF2CA
0x7DF2C5: mov     byte ptr [esp+98h+var_84+3], 0
0x7DF2CA: fld     dword ptr [ebx+124h]
0x7DF2D0: mov     ecx, [esp+98h+var_78]
0x7DF2D4: fsub    dword ptr [ebx+120h]
0x7DF2DA: fstp    dword ptr [ebx+124h]
0x7DF2E0: mov     ecx, [ecx]
0x7DF2E2: call    BSRenderedTexture__UseTextureToRender
0x7DF2E7: push    eax; a2
0x7DF2E8: push    0; a1
0x7DF2EA: call    NiRenderer_BeginScene
0x7DF2EF: mov     edx, ds:0B3F928h
0x7DF2F5: mov     ecx, [esp+0A0h+var_78+4]; this
0x7DF2F9: add     esp, 8
0x7DF2FC: push    edx
0x7DF2FD: call    sub_709C60
0x7DF302: call    NiRenderer_EndScene
0x7DF307: fld     dword ptr [ebx+124h]
0x7DF30D: fld     dword ptr [ebx+120h]
0x7DF313: fcompp
0x7DF315: fnstsw  ax
0x7DF317: test    ah, 5
0x7DF31A: jnp     loc_7DF18B
0x7DF320: mov     eax, [esp+98h+var_78]
0x7DF324: mov     edi, [eax]
0x7DF326: mov     esi, [ebx+0FCh]
0x7DF32C: cmp     esi, edi
0x7DF32E: lea     ebp, [ebx+0FCh]
0x7DF334: jz      short loc_7DF367
0x7DF336: test    esi, esi
0x7DF338: jz      short loc_7DF356
0x7DF33A: lea     ecx, [esi+4]
0x7DF33D: push    ecx; lpAddend
0x7DF33E: call    dword ptr ds:0A2807Ch
0x7DF344: test    eax, eax
0x7DF346: jnz     short loc_7DF356
0x7DF348: test    esi, esi
0x7DF34A: jz      short loc_7DF356
0x7DF34C: mov     edx, [esi]
0x7DF34E: mov     eax, [edx]
0x7DF350: push    1
0x7DF352: mov     ecx, esi
0x7DF354: call    eax
0x7DF356: test    edi, edi
0x7DF358: mov     [ebp+0], edi
0x7DF35B: jz      short loc_7DF367
0x7DF35D: add     edi, 4
0x7DF360: push    edi; lpAddend
0x7DF361: call    dword ptr ds:0A28078h
0x7DF367: cmp     byte ptr ds:0B45F4Ch, 0
0x7DF36E: fld     dword ptr ds:0B45F44h
0x7DF374: jnz     loc_7DF411
0x7DF37A: fldz
0x7DF37C: fcomp   st(1)
0x7DF37E: fnstsw  ax
0x7DF380: test    ah, 5
0x7DF383: jp      loc_7DF411
0x7DF389: fld1
0x7DF38B: fcomp   st(1)
0x7DF38D: fnstsw  ax
0x7DF38F: test    ah, 41h
0x7DF392: jnz     short loc_7DF411
0x7DF394: cmp     dword ptr [ebx+10Ch], 0
0x7DF39B: fstp    st
0x7DF39D: lea     esi, [ebx+10Ch]
0x7DF3A3: jnz     short loc_7DF3C1
0x7DF3A5: mov     ecx, ds:0B43104h
0x7DF3AB: push    7; a3
0x7DF3AD: push    ecx; a2
0x7DF3AE: mov     ecx, ds:0B42F50h; this
0x7DF3B4: call    BSTextureManager_GetDefaultRenderTarget
0x7DF3B9: push    eax; a2
0x7DF3BA: mov     ecx, esi; this
0x7DF3BC: call    NiSmartPointer_Set??
0x7DF3C1: mov     edx, [esp+98h+var_48]
0x7DF3C5: mov     eax, [edx]
0x7DF3C7: push    eax; a2
0x7DF3C8: lea     ecx, [ebx+108h]; this
0x7DF3CE: call    NiSmartPointer_Set??
0x7DF3D3: mov     ecx, [esi]
0x7DF3D5: mov     dword ptr [ebx+0F4h], 6
0x7DF3DF: call    BSRenderedTexture__UseTextureToRender
0x7DF3E4: mov     ecx, [esp+98h+a1]
0x7DF3E8: push    eax; a2
0x7DF3E9: push    ecx; a1
0x7DF3EA: call    NiRenderer_BeginScene
0x7DF3EF: mov     edx, ds:0B3F928h
0x7DF3F5: mov     ecx, [esp+0A0h+var_78+4]; this
0x7DF3F9: add     esp, 8
0x7DF3FC: push    edx
0x7DF3FD: call    sub_709C60
0x7DF402: call    NiRenderer_EndScene
0x7DF407: push    esi
0x7DF408: mov     ecx, ebp
0x7DF40A: call    sub_55E2A0
0x7DF40F: jmp     short loc_7DF466
0x7DF411: mov     ecx, [ebx+10Ch]
0x7DF417: test    ecx, ecx
0x7DF419: jz      short loc_7DF464
0x7DF41B: fld1
0x7DF41D: fucompp
0x7DF41F: fnstsw  ax
0x7DF421: test    ah, 44h
0x7DF424: jp      short loc_7DF466
0x7DF426: push    ecx; a2
0x7DF427: mov     ecx, ds:0B42F50h; this
0x7DF42D: call    sub_7C1EE0
0x7DF432: mov     esi, [ebx+10Ch]
0x7DF438: test    esi, esi
0x7DF43A: jz      short loc_7DF466
0x7DF43C: lea     eax, [esi+4]
0x7DF43F: push    eax; lpAddend
0x7DF440: call    dword ptr ds:0A2807Ch
0x7DF446: test    eax, eax
0x7DF448: jnz     short loc_7DF458
0x7DF44A: test    esi, esi
0x7DF44C: jz      short loc_7DF458
0x7DF44E: mov     edx, [esi]
0x7DF450: mov     eax, [edx]
0x7DF452: push    1
0x7DF454: mov     ecx, esi
0x7DF456: call    eax
0x7DF458: mov     dword ptr [ebx+10Ch], 0
0x7DF462: jmp     short loc_7DF466
0x7DF464: fstp    st
0x7DF466: cmp     dword ptr ds:0B45FB4h, 0
0x7DF46D: jz      short loc_7DF4A7
0x7DF46F: mov     dword ptr [ebx+0F4h], 5
0x7DF479: mov     ecx, ds:0B45FB4h
0x7DF47F: call    BSRenderedTexture__UseTextureToRender
0x7DF484: mov     ecx, [esp+98h+a1]
0x7DF488: push    eax; a2
0x7DF489: push    ecx; a1
0x7DF48A: call    NiRenderer_BeginScene
0x7DF48F: mov     edx, ds:0B3F928h
0x7DF495: mov     ecx, [esp+0A0h+var_78+4]; this
0x7DF499: add     esp, 8
0x7DF49C: push    edx
0x7DF49D: call    sub_709C60
0x7DF4A2: call    NiRenderer_EndScene
0x7DF4A7: fldz
0x7DF4A9: mov     eax, [esp+98h+var_78]
0x7DF4AD: mov     edi, [eax]
0x7DF4AF: fst     [esp+98h+var_68]
0x7DF4B3: fld1
0x7DF4B5: mov     eax, ds:0B45FA8h
0x7DF4BA: cmp     eax, edi
0x7DF4BC: fst     [esp+98h+var_64]
0x7DF4C0: fstp    [esp+98h+var_60]
0x7DF4C4: fstp    [esp+98h+var_5C]
0x7DF4C8: jz      short loc_7DF500
0x7DF4CA: test    eax, eax
0x7DF4CC: jz      short loc_7DF4EC
0x7DF4CE: mov     esi, eax
0x7DF4D0: add     eax, 4
0x7DF4D3: push    eax; lpAddend
0x7DF4D4: call    dword ptr ds:0A2807Ch
0x7DF4DA: test    eax, eax
0x7DF4DC: jnz     short loc_7DF4EC
0x7DF4DE: test    esi, esi
0x7DF4E0: jz      short loc_7DF4EC
0x7DF4E2: mov     edx, [esi]
0x7DF4E4: mov     eax, [edx]
0x7DF4E6: push    1
0x7DF4E8: mov     ecx, esi
0x7DF4EA: call    eax
0x7DF4EC: test    edi, edi
0x7DF4EE: mov     ds:0B45FA8h, edi
0x7DF4F4: jz      short loc_7DF500
0x7DF4F6: add     edi, 4
0x7DF4F9: push    edi; lpAddend
0x7DF4FA: call    dword ptr ds:0A28078h
0x7DF500: mov     esi, [esp+98h+var_80]
0x7DF504: test    esi, esi
0x7DF506: mov     [esp+98h+var_4], 0FFFFFFFFh
0x7DF511: jz      short loc_7DF52B
0x7DF513: lea     ecx, [esi+4]
0x7DF516: push    ecx; lpAddend
0x7DF517: call    dword ptr ds:0A2807Ch
0x7DF51D: test    eax, eax
0x7DF51F: jnz     short loc_7DF52B
0x7DF521: mov     edx, [esi]
0x7DF523: mov     eax, [edx]
0x7DF525: push    1
0x7DF527: mov     ecx, esi
0x7DF529: call    eax
0x7DF52B: mov     ecx, [esp+98h+var_C]
0x7DF532: mov     large fs:0, ecx
0x7DF539: pop     ecx
0x7DF53A: pop     edi
0x7DF53B: pop     esi
0x7DF53C: pop     ebp
0x7DF53D: pop     ebx
0x7DF53E: mov     ecx, [esp+84h+var_10]
0x7DF542: xor     ecx, esp
0x7DF544: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7DF549: add     esp, 84h
0x7DF54F: retn    10h
