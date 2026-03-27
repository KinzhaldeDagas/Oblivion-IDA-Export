0x7E9DB0: sub     esp, 38h
0x7E9DB3: mov     eax, ds:0B43104h
0x7E9DB8: push    ebx
0x7E9DB9: push    ebp
0x7E9DBA: push    esi
0x7E9DBB: push    edi
0x7E9DBC: push    10h; a3
0x7E9DBE: mov     esi, ecx
0x7E9DC0: mov     ecx, ds:0B42F50h; this
0x7E9DC6: xor     ebp, ebp
0x7E9DC8: push    eax; a2
0x7E9DC9: mov     [esp+50h+var_24], ebp
0x7E9DCD: call    BSTextureManager_GetDefaultRenderTarget
0x7E9DD2: fldz
0x7E9DD4: mov     cl, ds:0B43075h
0x7E9DDA: fst     [esp+48h+var_10]
0x7E9DDE: fld1
0x7E9DE0: neg     cl
0x7E9DE2: fst     [esp+48h+var_C]
0x7E9DE6: mov     edi, eax
0x7E9DE8: fst     [esp+48h+var_8]
0x7E9DEC: mov     [esp+48h+a2], edi
0x7E9DF0: fxch    st(1)
0x7E9DF2: fstp    [esp+48h+var_4]
0x7E9DF6: sbb     ecx, ecx
0x7E9DF8: and     ecx, 7
0x7E9DFB: cmp     byte ptr ds:0B42E96h, 0
0x7E9E02: mov     [esp+48h+a1], ecx
0x7E9E06: jz      short loc_7E9E15
0x7E9E08: mov     ebx, [esp+48h+arg_4]
0x7E9E0C: fst     [esp+48h+var_34]
0x7E9E10: jmp     loc_7E9ECB
0x7E9E15: mov     ecx, ds:0B3F928h
0x7E9E1B: fstp    st
0x7E9E1D: mov     edx, [ecx]
0x7E9E1F: mov     eax, [edx+7Ch]
0x7E9E22: call    eax
0x7E9E24: mov     ebx, [esp+48h+arg_4]
0x7E9E28: mov     edi, eax
0x7E9E2A: mov     eax, [ebx]
0x7E9E2C: mov     ecx, [eax+20h]
0x7E9E2F: cmp     ecx, ebp
0x7E9E31: jz      short loc_7E9E3C
0x7E9E33: mov     edx, [ecx]
0x7E9E35: mov     eax, [edx+4Ch]
0x7E9E38: call    eax
0x7E9E3A: mov     ebp, eax
0x7E9E3C: mov     edx, [edi]
0x7E9E3E: mov     eax, [edx+4Ch]
0x7E9E41: push    0
0x7E9E43: mov     ecx, edi
0x7E9E45: call    eax
0x7E9E47: test    eax, eax
0x7E9E49: mov     [esp+48h+var_14], eax
0x7E9E4D: fild    [esp+48h+var_14]
0x7E9E51: jge     short loc_7E9E59
0x7E9E53: fadd    dword ptr ds:0A2FC78h
0x7E9E59: test    ebp, ebp
0x7E9E5B: mov     [esp+48h+var_14], ebp
0x7E9E5F: fild    [esp+48h+var_14]
0x7E9E63: jge     short loc_7E9E6B
0x7E9E65: fadd    dword ptr ds:0A2FC78h
0x7E9E6B: fdivp   st(1), st
0x7E9E6D: mov     ecx, ds:0B3F928h
0x7E9E73: mov     edx, [ecx]
0x7E9E75: mov     eax, [edx+7Ch]
0x7E9E78: fstp    [esp+48h+var_34]
0x7E9E7C: call    eax
0x7E9E7E: mov     edi, eax
0x7E9E80: mov     eax, [ebx]
0x7E9E82: mov     ecx, [eax+20h]
0x7E9E85: test    ecx, ecx
0x7E9E87: jz      short loc_7E9E94
0x7E9E89: mov     edx, [ecx]
0x7E9E8B: mov     eax, [edx+50h]
0x7E9E8E: call    eax
0x7E9E90: mov     ebp, eax
0x7E9E92: jmp     short loc_7E9E96
0x7E9E94: xor     ebp, ebp
0x7E9E96: mov     edx, [edi]
0x7E9E98: mov     eax, [edx+50h]
0x7E9E9B: push    0
0x7E9E9D: mov     ecx, edi
0x7E9E9F: call    eax
0x7E9EA1: test    eax, eax
0x7E9EA3: mov     [esp+48h+var_14], eax
0x7E9EA7: fild    [esp+48h+var_14]
0x7E9EAB: jge     short loc_7E9EB3
0x7E9EAD: fadd    dword ptr ds:0A2FC78h
0x7E9EB3: test    ebp, ebp
0x7E9EB5: mov     [esp+48h+var_14], ebp
0x7E9EB9: fild    [esp+48h+var_14]
0x7E9EBD: jge     short loc_7E9EC5
0x7E9EBF: fadd    dword ptr ds:0A2FC78h
0x7E9EC5: mov     edi, [esp+48h+a2]
0x7E9EC9: fdivp   st(1), st
0x7E9ECB: mov     eax, [ebx]
0x7E9ECD: fstp    [esp+48h+var_30]
0x7E9ED1: mov     ecx, [eax+20h]
0x7E9ED4: test    ecx, ecx
0x7E9ED6: jz      short loc_7E9EE1
0x7E9ED8: mov     edx, [ecx]
0x7E9EDA: mov     eax, [edx+4Ch]
0x7E9EDD: call    eax
0x7E9EDF: jmp     short loc_7E9EE3
0x7E9EE1: xor     eax, eax
0x7E9EE3: test    eax, eax
0x7E9EE5: mov     [esp+48h+var_14], eax
0x7E9EE9: fild    [esp+48h+var_14]
0x7E9EED: jge     short loc_7E9EF5
0x7E9EEF: fadd    dword ptr ds:0A2FC78h
0x7E9EF5: fdivr   qword ptr ds:0A2FAA0h
0x7E9EFB: mov     eax, [ebx]
0x7E9EFD: mov     ecx, [eax+20h]
0x7E9F00: test    ecx, ecx
0x7E9F02: fstp    [esp+48h+var_2C]
0x7E9F06: jz      short loc_7E9F11
0x7E9F08: mov     edx, [ecx]
0x7E9F0A: mov     eax, [edx+50h]
0x7E9F0D: call    eax
0x7E9F0F: jmp     short loc_7E9F13
0x7E9F11: xor     eax, eax
0x7E9F13: test    eax, eax
0x7E9F15: mov     [esp+48h+var_14], eax
0x7E9F19: fild    [esp+48h+var_14]
0x7E9F1D: jge     short loc_7E9F25
0x7E9F1F: fadd    dword ptr ds:0A2FC78h
0x7E9F25: fdivr   qword ptr ds:0A2FAA0h
0x7E9F2B: mov     ecx, [edi+20h]
0x7E9F2E: test    ecx, ecx
0x7E9F30: fstp    [esp+48h+var_28]
0x7E9F34: jz      short loc_7E9F3F
0x7E9F36: mov     edx, [ecx]
0x7E9F38: mov     eax, [edx+4Ch]
0x7E9F3B: call    eax
0x7E9F3D: jmp     short loc_7E9F41
0x7E9F3F: xor     eax, eax
0x7E9F41: test    eax, eax
0x7E9F43: mov     [esp+48h+var_14], eax
0x7E9F47: fild    [esp+48h+var_14]
0x7E9F4B: jge     short loc_7E9F53
0x7E9F4D: fadd    dword ptr ds:0A2FC78h
0x7E9F53: fdivr   qword ptr ds:0A2FAA0h
0x7E9F59: mov     ecx, [edi+20h]
0x7E9F5C: test    ecx, ecx
0x7E9F5E: fstp    [esp+48h+var_18]
0x7E9F62: jz      short loc_7E9F6D
0x7E9F64: mov     edx, [ecx]
0x7E9F66: mov     eax, [edx+50h]
0x7E9F69: call    eax
0x7E9F6B: jmp     short loc_7E9F6F
0x7E9F6D: xor     eax, eax
0x7E9F6F: test    eax, eax
0x7E9F71: mov     [esp+48h+var_14], eax
0x7E9F75: fild    [esp+48h+var_14]
0x7E9F79: jge     short loc_7E9F81
0x7E9F7B: fadd    dword ptr ds:0A2FC78h
0x7E9F81: fdivr   qword ptr ds:0A2FAA0h
0x7E9F87: mov     ecx, [esi+70h]
0x7E9F8A: fstp    [esp+48h+var_14]
0x7E9F8E: fldz
0x7E9F90: fst     dword ptr [esi+0CCh]
0x7E9F96: fst     dword ptr [esi+0C8h]
0x7E9F9C: fst     dword ptr [esi+0C4h]
0x7E9FA2: fstp    dword ptr [esi+0C0h]
0x7E9FA8: fld     dword ptr ds:0B2C2B0h
0x7E9FAE: fstp    dword ptr [esi+0C4h]
0x7E9FB4: fld     dword ptr ds:0B2C2B4h
0x7E9FBA: fstp    dword ptr [esi+0C8h]
0x7E9FC0: mov     edx, [ecx+24h]
0x7E9FC3: mov     edi, [edx+4]
0x7E9FC6: mov     ebp, [edi+4]
0x7E9FC9: add     edi, 4
0x7E9FCC: test    ebp, ebp
0x7E9FCE: jz      short loc_7EA002
0x7E9FD0: lea     eax, [ebp+4]
0x7E9FD3: push    eax; lpAddend
0x7E9FD4: call    dword ptr ds:0A2807Ch
0x7E9FDA: test    eax, eax
0x7E9FDC: jnz     short loc_7E9FF7
0x7E9FDE: test    ebp, ebp
0x7E9FE0: jz      short loc_7E9FF7
0x7E9FE2: mov     edx, [ebp+0]
0x7E9FE5: mov     eax, [edx]
0x7E9FE7: mov     ebx, 1
0x7E9FEC: push    ebx
0x7E9FED: mov     ecx, ebp
0x7E9FEF: call    eax
0x7E9FF1: xor     ebp, ebp
0x7E9FF3: mov     [edi], ebp
0x7E9FF5: jmp     short loc_7EA009
0x7E9FF7: xor     ebp, ebp
0x7E9FF9: mov     ebx, 1
0x7E9FFE: mov     [edi], ebp
0x7EA000: jmp     short loc_7EA009
0x7EA002: mov     ebx, 1
0x7EA007: xor     ebp, ebp
0x7EA009: cmp     byte ptr ds:0B4610Ch, 0
0x7EA010: jz      loc_7EA0F8
0x7EA016: mov     ecx, ds:0B43104h
0x7EA01C: push    ebp
0x7EA01D: push    ebp
0x7EA01E: push    6
0x7EA020: push    ebp
0x7EA021: push    ecx
0x7EA022: mov     ecx, ds:0B42F50h
0x7EA028: call    sub_7C2420
0x7EA02D: fld     [esp+48h+var_34]
0x7EA031: mov     edx, [esp+48h+arg_4]
0x7EA035: fstp    dword ptr ds:0B2D898h
0x7EA03B: fld     [esp+48h+var_30]
0x7EA03F: mov     edi, eax
0x7EA041: fstp    dword ptr ds:0B2D89Ch
0x7EA047: mov     ecx, esi; this
0x7EA049: fld     [esp+48h+var_2C]
0x7EA04D: fldz
0x7EA04F: fadd    st(1), st
0x7EA051: fxch    st(1)
0x7EA053: fstp    dword ptr ds:0B2D8A0h
0x7EA059: fadd    [esp+48h+var_28]
0x7EA05D: fstp    dword ptr ds:0B2D8A4h
0x7EA063: mov     [esi+0BCh], ebp
0x7EA069: mov     dword ptr [esi+90h], 4
0x7EA073: mov     eax, [edx]
0x7EA075: push    eax; a2
0x7EA076: call    sub_802890
0x7EA07B: mov     ecx, edi
0x7EA07D: call    BSRenderedTexture__UseTextureToRender
0x7EA082: push    eax; a2
0x7EA083: push    ebx; a1
0x7EA084: call    NiRenderer_BeginScene
0x7EA089: mov     ecx, ds:0B3F928h
0x7EA08F: add     esp, 8
0x7EA092: cmp     [ecx+200h], ebx
0x7EA098: jz      short loc_7EA0A2
0x7EA09A: cmp     [ecx+204h], ebx
0x7EA0A0: jnz     short loc_7EA0BC
0x7EA0A2: cmp     byte ptr [ecx+20Ch], 1
0x7EA0A9: jnz     short loc_7EA0BC
0x7EA0AB: mov     edx, [ecx]
0x7EA0AD: mov     eax, [edx+144h]
0x7EA0B3: push    ebp
0x7EA0B4: call    eax
0x7EA0B6: mov     ecx, ds:0B3F928h
0x7EA0BC: push    ecx
0x7EA0BD: mov     ecx, [esp+4Ch+arg_0]; this
0x7EA0C1: call    sub_709C60
0x7EA0C6: call    NiRenderer_EndScene
0x7EA0CB: mov     ecx, edi; this
0x7EA0CD: call    BSRenderedTexture__GetInnerTexture
0x7EA0D2: push    9; a1
0x7EA0D4: mov     ebp, eax
0x7EA0D6: call    GetShaderDefinition
0x7EA0DB: mov     ecx, [eax+4]; this
0x7EA0DE: add     esp, 4
0x7EA0E1: add     eax, 4
0x7EA0E4: push    ebp; a2
0x7EA0E5: call    sub_7FA470
0x7EA0EA: mov     ecx, ds:0B42F50h; this
0x7EA0F0: push    edi; a2
0x7EA0F1: call    sub_7C1EE0
0x7EA0F6: xor     ebp, ebp
0x7EA0F8: fld     [esp+48h+var_34]
0x7EA0FC: mov     ecx, [esp+48h+arg_4]
0x7EA100: fstp    dword ptr ds:0B2D898h
0x7EA106: fld     [esp+48h+var_30]
0x7EA10A: fstp    dword ptr ds:0B2D89Ch
0x7EA110: fld     [esp+48h+var_2C]
0x7EA114: fldz
0x7EA116: fadd    st(1), st
0x7EA118: fxch    st(1)
0x7EA11A: fstp    [esp+48h+var_2C]
0x7EA11E: fld     [esp+48h+var_2C]
0x7EA122: fstp    dword ptr ds:0B2D8A0h
0x7EA128: fadd    [esp+48h+var_28]
0x7EA12C: fstp    [esp+48h+var_20]
0x7EA130: fld     [esp+48h+var_20]
0x7EA134: fstp    dword ptr ds:0B2D8A4h
0x7EA13A: mov     [esi+0BCh], ebp
0x7EA140: mov     [esi+90h], ebp
0x7EA146: mov     edx, [ecx]
0x7EA148: push    edx; a2
0x7EA149: mov     ecx, esi; this
0x7EA14B: call    sub_802890
0x7EA150: mov     ecx, [esp+48h+a2]
0x7EA154: call    BSRenderedTexture__UseTextureToRender
0x7EA159: push    eax; a2
0x7EA15A: push    ebx; a1
0x7EA15B: call    NiRenderer_BeginScene
0x7EA160: mov     ecx, ds:0B3F928h
0x7EA166: add     esp, 8
0x7EA169: cmp     [ecx+200h], ebx
0x7EA16F: jz      short loc_7EA179
0x7EA171: cmp     [ecx+204h], ebx
0x7EA177: jnz     short loc_7EA193
0x7EA179: cmp     byte ptr [ecx+20Ch], 1
0x7EA180: jnz     short loc_7EA193
0x7EA182: mov     eax, [ecx]
0x7EA184: mov     edx, [eax+144h]
0x7EA18A: push    ebp
0x7EA18B: call    edx
0x7EA18D: mov     ecx, ds:0B3F928h
0x7EA193: push    ecx
0x7EA194: mov     ecx, [esp+4Ch+arg_0]; this
0x7EA198: call    sub_709C60
0x7EA19D: call    NiRenderer_EndScene
0x7EA1A2: mov     eax, ds:0B43104h
0x7EA1A7: mov     ecx, ds:0B42F50h; this
0x7EA1AD: push    10h; a3
0x7EA1AF: push    eax; a2
0x7EA1B0: call    BSTextureManager_GetDefaultRenderTarget
0x7EA1B5: fld1
0x7EA1B7: cmp     ds:0B2C1E8h, ebp
0x7EA1BD: fst     dword ptr ds:0B2D898h
0x7EA1C3: fstp    dword ptr ds:0B2D89Ch
0x7EA1C9: mov     edi, eax
0x7EA1CB: fldz
0x7EA1CD: mov     [esp+48h+var_28], ebp
0x7EA1D1: fst     dword ptr ds:0B2D8A0h
0x7EA1D7: fst     dword ptr ds:0B2D8A4h
0x7EA1DD: ja      short loc_7EA225
0x7EA1DF: fstp    st
0x7EA1E1: mov     ecx, ds:0B42F50h; this
0x7EA1E7: push    edi; a2
0x7EA1E8: call    sub_7C1EE0
0x7EA1ED: mov     ecx, [esp+48h+a2]
0x7EA1F1: push    ecx; a2
0x7EA1F2: mov     ecx, esi; this
0x7EA1F4: mov     [esi+0BCh], ebp
0x7EA1FA: mov     dword ptr [esi+90h], 3
0x7EA204: call    sub_802890
0x7EA209: mov     edx, [esp+48h+arg_4]
0x7EA20D: mov     eax, [edx]
0x7EA20F: cmp     eax, ebp
0x7EA211: jz      loc_7EA342
0x7EA217: mov     edi, [esp+48h+arg_4]
0x7EA21B: add     eax, 20h ; ' '
0x7EA21E: jmp     loc_7EA350
0x7EA223: fldz
0x7EA225: fstp    dword ptr ds:0B2D8B8h
0x7EA22B: mov     ecx, edi
0x7EA22D: fld     dword ptr ds:0B2C1ECh
0x7EA233: fadd    st, st
0x7EA235: fstp    dword ptr ds:0B2D8BCh
0x7EA23B: call    BSRenderedTexture__UseTextureToRender
0x7EA240: mov     ebp, [esp+48h+a1]
0x7EA244: push    eax; a2
0x7EA245: push    ebp; a1
0x7EA246: call    NiRenderer_BeginScene
0x7EA24B: mov     ecx, [esp+50h+a2]
0x7EA24F: add     esp, 8
0x7EA252: push    ecx; a2
0x7EA253: mov     ecx, esi; this
0x7EA255: call    sub_802890
0x7EA25A: mov     [esi+0BCh], ebx
0x7EA260: mov     dword ptr [esi+90h], 2
0x7EA26A: mov     ecx, ds:0B3F928h
0x7EA270: cmp     [ecx+200h], ebx
0x7EA276: jz      short loc_7EA280
0x7EA278: cmp     [ecx+204h], ebx
0x7EA27E: jnz     short loc_7EA29B
0x7EA280: cmp     byte ptr [ecx+20Ch], 1
0x7EA287: jnz     short loc_7EA29B
0x7EA289: mov     edx, [ecx]
0x7EA28B: mov     eax, [edx+144h]
0x7EA291: push    0
0x7EA293: call    eax
0x7EA295: mov     ecx, ds:0B3F928h
0x7EA29B: push    ecx
0x7EA29C: mov     ecx, [esp+4Ch+arg_0]; this
0x7EA2A0: call    sub_709C60
0x7EA2A5: push    edi; a2
0x7EA2A6: mov     ecx, esi; this
0x7EA2A8: call    sub_802890
0x7EA2AD: call    NiRenderer_EndScene
0x7EA2B2: mov     ecx, [esp+48h+a2]
0x7EA2B6: call    BSRenderedTexture__UseTextureToRender
0x7EA2BB: push    eax; a2
0x7EA2BC: push    ebp; a1
0x7EA2BD: call    NiRenderer_BeginScene
0x7EA2C2: fld     dword ptr ds:0B2C1ECh
0x7EA2C8: fadd    st, st
0x7EA2CA: add     esp, 8
0x7EA2CD: fstp    dword ptr ds:0B2D8B8h
0x7EA2D3: fldz
0x7EA2D5: fstp    dword ptr ds:0B2D8BCh
0x7EA2DB: mov     dword ptr [esi+0BCh], 2
0x7EA2E5: mov     ecx, ds:0B3F928h
0x7EA2EB: cmp     [ecx+200h], ebx
0x7EA2F1: jz      short loc_7EA2FB
0x7EA2F3: cmp     [ecx+204h], ebx
0x7EA2F9: jnz     short loc_7EA316
0x7EA2FB: cmp     byte ptr [ecx+20Ch], 1
0x7EA302: jnz     short loc_7EA316
0x7EA304: mov     edx, [ecx]
0x7EA306: mov     eax, [edx+144h]
0x7EA30C: push    0
0x7EA30E: call    eax
0x7EA310: mov     ecx, ds:0B3F928h
0x7EA316: push    ecx
0x7EA317: mov     ecx, [esp+4Ch+arg_0]; this
0x7EA31B: call    sub_709C60
0x7EA320: call    NiRenderer_EndScene
0x7EA325: mov     eax, [esp+48h+var_28]
0x7EA329: add     eax, ebx
0x7EA32B: cmp     eax, ds:0B2C1E8h
0x7EA331: mov     [esp+48h+var_28], eax
0x7EA335: jb      loc_7EA223
0x7EA33B: xor     ebp, ebp
0x7EA33D: jmp     loc_7EA1E1
0x7EA342: xor     edi, edi
0x7EA344: mov     [esp+48h+arg_4], edi
0x7EA348: lea     eax, [esp+48h+arg_4]
0x7EA34C: mov     [esp+48h+var_24], ebx
0x7EA350: test    byte ptr [esp+48h+var_24], 1
0x7EA355: mov     ebx, [eax]
0x7EA357: jz      short loc_7EA375
0x7EA359: test    edi, edi
0x7EA35B: jz      short loc_7EA375
0x7EA35D: lea     eax, [edi+4]
0x7EA360: push    eax; lpAddend
0x7EA361: call    dword ptr ds:0A2807Ch
0x7EA367: test    eax, eax
0x7EA369: jnz     short loc_7EA375
0x7EA36B: mov     edx, [edi]
0x7EA36D: mov     eax, [edx]
0x7EA36F: push    1
0x7EA371: mov     ecx, edi
0x7EA373: call    eax
0x7EA375: mov     ecx, [esi+70h]
0x7EA378: mov     edx, [ecx+24h]
0x7EA37B: mov     ebp, [edx+4]
0x7EA37E: mov     edi, [ebp+4]
0x7EA381: add     ebp, 4
0x7EA384: cmp     edi, ebx
0x7EA386: jz      short loc_7EA3B9
0x7EA388: test    edi, edi
0x7EA38A: jz      short loc_7EA3A8
0x7EA38C: lea     eax, [edi+4]
0x7EA38F: push    eax; lpAddend
0x7EA390: call    dword ptr ds:0A2807Ch
0x7EA396: test    eax, eax
0x7EA398: jnz     short loc_7EA3A8
0x7EA39A: test    edi, edi
0x7EA39C: jz      short loc_7EA3A8
0x7EA39E: mov     edx, [edi]
0x7EA3A0: mov     eax, [edx]
0x7EA3A2: push    1
0x7EA3A4: mov     ecx, edi
0x7EA3A6: call    eax
0x7EA3A8: test    ebx, ebx
0x7EA3AA: mov     [ebp+0], ebx
0x7EA3AD: jz      short loc_7EA3B9
0x7EA3AF: add     ebx, 4
0x7EA3B2: push    ebx; lpAddend
0x7EA3B3: call    dword ptr ds:0A28078h
0x7EA3B9: fld1
0x7EA3BB: mov     eax, ds:0B2C1E4h
0x7EA3C0: sub     eax, 0
0x7EA3C3: fst     dword ptr ds:0B2D898h
0x7EA3C9: fst     dword ptr ds:0B2D89Ch
0x7EA3CF: fld     [esp+48h+var_18]
0x7EA3D3: fldz
0x7EA3D5: fadd    st(1), st
0x7EA3D7: fxch    st(1)
0x7EA3D9: fstp    dword ptr ds:0B2D8A0h
0x7EA3DF: fadd    [esp+48h+var_14]
0x7EA3E3: fstp    dword ptr ds:0B2D8A4h
0x7EA3E9: fld     [esp+48h+var_34]
0x7EA3ED: fst     dword ptr ds:0B2D8A8h
0x7EA3F3: fld     [esp+48h+var_30]
0x7EA3F7: fst     dword ptr ds:0B2D8ACh
0x7EA3FD: fld     [esp+48h+var_2C]
0x7EA401: fstp    dword ptr ds:0B2D8B0h
0x7EA407: fld     [esp+48h+var_20]
0x7EA40B: fstp    dword ptr ds:0B2D8B4h
0x7EA411: jz      short loc_7EA42A
0x7EA413: sub     eax, 1
0x7EA416: fxch    st(2)
0x7EA418: fst     dword ptr ds:0B2D888h
0x7EA41E: jnz     short loc_7EA434
0x7EA420: fldz
0x7EA422: fstp    dword ptr ds:0B2D88Ch
0x7EA428: jmp     short loc_7EA43A
0x7EA42A: fldz
0x7EA42C: fstp    dword ptr ds:0B2D888h
0x7EA432: fxch    st(2)
0x7EA434: fst     dword ptr ds:0B2D88Ch
0x7EA43A: mov     edi, [esp+48h+arg_8]
0x7EA43E: mov     ecx, [edi]
0x7EA440: test    ecx, ecx
0x7EA442: jnz     short loc_7EA44E
0x7EA444: fstp    st(1)
0x7EA446: fstp    st(1)
0x7EA448: fst     [esp+48h+var_C]
0x7EA44C: jmp     short loc_7EA454
0x7EA44E: fstp    st
0x7EA450: fstp    [esp+48h+var_C]
0x7EA454: test    ecx, ecx
0x7EA456: fstp    [esp+48h+var_8]
0x7EA45A: jz      short loc_7EA46B
0x7EA45C: call    BSRenderedTexture__UseTextureToRender
0x7EA461: push    eax; a2
0x7EA462: push    1; a1
0x7EA464: call    NiRenderer_BeginScene
0x7EA469: jmp     short loc_7EA474
0x7EA46B: push    0; a2
0x7EA46D: push    1; a1
0x7EA46F: call    NiRenderer_BeginScene1
0x7EA474: mov     ecx, ds:0B3F928h
0x7EA47A: add     esp, 8
0x7EA47D: cmp     dword ptr [ecx+200h], 1
0x7EA484: jz      short loc_7EA48F
0x7EA486: cmp     dword ptr [ecx+204h], 1
0x7EA48D: jnz     short loc_7EA4AD
0x7EA48F: cmp     byte ptr [ecx+20Ch], 1
0x7EA496: jnz     short loc_7EA4AD
0x7EA498: mov     edx, [ecx]
0x7EA49A: mov     edx, [edx+144h]
0x7EA4A0: lea     eax, [esp+48h+var_10]
0x7EA4A4: push    eax
0x7EA4A5: call    edx
0x7EA4A7: mov     ecx, ds:0B3F928h
0x7EA4AD: push    ecx
0x7EA4AE: mov     ecx, [esp+4Ch+arg_0]; this
0x7EA4B2: call    sub_709C60
0x7EA4B7: cmp     dword ptr [edi], 0
0x7EA4BA: jz      short loc_7EA4C1
0x7EA4BC: call    NiRenderer_EndScene
0x7EA4C1: mov     eax, [esi+70h]
0x7EA4C4: mov     ecx, [eax+24h]
0x7EA4C7: mov     esi, [ecx+4]
0x7EA4CA: mov     edi, [esi+4]
0x7EA4CD: add     esi, 4
0x7EA4D0: test    edi, edi
0x7EA4D2: jz      short loc_7EA4F6
0x7EA4D4: lea     edx, [edi+4]
0x7EA4D7: push    edx; lpAddend
0x7EA4D8: call    dword ptr ds:0A2807Ch
0x7EA4DE: test    eax, eax
0x7EA4E0: jnz     short loc_7EA4F0
0x7EA4E2: test    edi, edi
0x7EA4E4: jz      short loc_7EA4F0
0x7EA4E6: mov     eax, [edi]
0x7EA4E8: mov     edx, [eax]
0x7EA4EA: push    1
0x7EA4EC: mov     ecx, edi
0x7EA4EE: call    edx
0x7EA4F0: mov     dword ptr [esi], 0
0x7EA4F6: mov     eax, [esp+48h+a2]
0x7EA4FA: mov     ecx, ds:0B42F50h; this
0x7EA500: push    eax; a2
0x7EA501: call    sub_7C1EE0
0x7EA506: pop     edi
0x7EA507: pop     esi
0x7EA508: pop     ebp
0x7EA509: pop     ebx
0x7EA50A: add     esp, 38h
0x7EA50D: retn    10h
