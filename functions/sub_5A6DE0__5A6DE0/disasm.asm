0x5A6DE0: push    ebp
0x5A6DE1: mov     ebp, esp
0x5A6DE3: and     esp, 0FFFFFFF8h
0x5A6DE6: push    0FFFFFFFFh
0x5A6DE8: push    offset SEH_5A6DE0
0x5A6DED: mov     eax, large fs:0
0x5A6DF3: push    eax
0x5A6DF4: sub     esp, 5Ch
0x5A6DF7: push    ebx
0x5A6DF8: push    ebp
0x5A6DF9: push    esi; a3
0x5A6DFA: push    edi; a3
0x5A6DFB: mov     eax, ds:0B30AACh
0x5A6E00: xor     eax, esp
0x5A6E02: push    eax; a3
0x5A6E03: lea     eax, [esp+7Ch+var_C]
0x5A6E07: mov     large fs:0, eax
0x5A6E0D: mov     ebp, ecx
0x5A6E0F: mov     [esp+7Ch+a3], ebp
0x5A6E13: mov     ecx, ds:0B333C4h; this
0x5A6E19: call    TESObjectREFR_GetParentCell
0x5A6E1E: test    eax, eax
0x5A6E20: jz      loc_5A7CB2
0x5A6E26: mov     ecx, [ebp+54h]; this
0x5A6E29: xor     ebx, ebx
0x5A6E2B: cmp     ecx, ebx
0x5A6E2D: jz      short loc_5A6E54
0x5A6E2F: mov     eax, ds:0B333C4h
0x5A6E34: cmp     [eax+1DCh], bl
0x5A6E3A: push    ecx
0x5A6E3B: jz      short loc_5A6E45
0x5A6E3D: fld     dword ptr ds:0A379B4h
0x5A6E43: jmp     short loc_5A6E47
0x5A6E45: fld1
0x5A6E47: fstp    [esp+80h+var_80]; a3
0x5A6E4A: push    0FA1h; a2
0x5A6E4F: call    Tile_SetFloat
0x5A6E54: cmp     [ebp+4Ch], ebx
0x5A6E57: jz      short loc_5A6EBC
0x5A6E59: push    ebx
0x5A6E5A: push    3EBh
0x5A6E5F: call    sub_5790E0
0x5A6E64: add     esp, 8
0x5A6E67: test    al, al
0x5A6E69: jnz     short loc_5A6EA5
0x5A6E6B: push    ebx
0x5A6E6C: push    3EAh
0x5A6E71: call    sub_5790E0
0x5A6E76: add     esp, 8
0x5A6E79: test    al, al
0x5A6E7B: jnz     short loc_5A6EA5
0x5A6E7D: push    ebx
0x5A6E7E: push    3FEh
0x5A6E83: call    sub_5790E0
0x5A6E88: add     esp, 8
0x5A6E8B: test    al, al
0x5A6E8D: jnz     short loc_5A6EA5
0x5A6E8F: push    ebx
0x5A6E90: push    3FFh
0x5A6E95: call    sub_5790E0
0x5A6E9A: add     esp, 8
0x5A6E9D: test    al, al
0x5A6E9F: jnz     short loc_5A6EA5
0x5A6EA1: fld1
0x5A6EA3: jmp     short loc_5A6EAB
0x5A6EA5: fld     dword ptr ds:0A379B4h
0x5A6EAB: mov     ecx, [ebp+4Ch]; this
0x5A6EAE: push    ecx
0x5A6EAF: fstp    [esp+80h+var_80]; a3
0x5A6EB2: push    0FA1h; a2
0x5A6EB7: call    Tile_SetFloat
0x5A6EBC: mov     esi, [ebp+44h]
0x5A6EBF: cmp     esi, ebx
0x5A6EC1: mov     [esp+7Ch+var_54], esi
0x5A6EC5: jz      loc_5A782D
0x5A6ECB: mov     ecx, ds:0B333C4h
0x5A6ED1: mov     edx, [ecx]
0x5A6ED3: mov     eax, [edx+174h]
0x5A6ED9: call    eax
0x5A6EDB: mov     ecx, [eax]
0x5A6EDD: mov     edx, [eax+4]
0x5A6EE0: mov     eax, [eax+8]
0x5A6EE3: mov     [esp+7Ch+var_20], ecx
0x5A6EE7: mov     ecx, ds:0B333C4h; this
0x5A6EED: mov     [esp+7Ch+var_1C], edx
0x5A6EF1: mov     [esp+7Ch+var_18], eax
0x5A6EF5: call    TESObjectREFR_GetParentCell
0x5A6EFA: mov     ecx, eax
0x5A6EFC: call    sub_4CCE00
0x5A6F01: fstp    qword ptr [esp+7Ch+var_30]
0x5A6F05: mov     ecx, ds:0B333C4h
0x5A6F0B: mov     edx, [ecx]
0x5A6F0D: mov     eax, [edx+1E0h]
0x5A6F13: call    eax
0x5A6F15: fadd    qword ptr [esp+7Ch+var_30]
0x5A6F19: fmul    qword ptr ds:0A30DC8h
0x5A6F1F: fstp    [esp+7Ch+var_50]
0x5A6F23: fld     [esp+7Ch+var_50]
0x5A6F27: fld     st
0x5A6F29: fabs
0x5A6F2B: fstp    [esp+7Ch+var_50]
0x5A6F2F: fld     [esp+7Ch+var_50]
0x5A6F33: fstp    [esp+7Ch+var_50]
0x5A6F37: fld     [esp+7Ch+var_50]
0x5A6F3B: fdiv    qword ptr ds:0A56CA0h
0x5A6F41: call    Double_To_SInt32
0x5A6F46: imul    eax, 168h
0x5A6F4C: mov     [esp+7Ch+var_50], eax
0x5A6F50: push    ecx
0x5A6F51: mov     ecx, [ebp+40h]; this
0x5A6F54: fisub   [esp+80h+var_50]
0x5A6F58: fstp    [esp+80h+var_50]
0x5A6F5C: fld     [esp+80h+var_50]
0x5A6F60: fstp    [esp+80h+var_80]; a3
0x5A6F63: push    0FAEh; a2
0x5A6F68: call    Tile_SetFloat
0x5A6F6D: mov     ecx, ds:0B333C4h
0x5A6F73: call    sub_65D260
0x5A6F78: cmp     eax, ebx
0x5A6F7A: mov     ecx, [esi+34h]
0x5A6F7D: mov     [esp+7Ch+var_64], ecx
0x5A6F81: mov     [esp+7Ch+var_60], 1
0x5A6F89: mov     ecx, eax
0x5A6F8B: jz      loc_5A733F
0x5A6F91: jmp     short loc_5A6F97
0x5A6F93: mov     ecx, [esp+7Ch+var_50]
0x5A6F97: mov     edi, [ecx]
0x5A6F99: cmp     edi, ebx
0x5A6F9B: jz      loc_5A733F
0x5A6FA1: mov     edx, [ecx+4]
0x5A6FA4: mov     eax, [edi+4]
0x5A6FA7: mov     ecx, [eax+8]
0x5A6FAA: shr     ecx, 0Bh
0x5A6FAD: test    cl, 1
0x5A6FB0: mov     [esp+7Ch+var_50], edx
0x5A6FB4: jnz     loc_5A7335
0x5A6FBA: mov     ecx, eax
0x5A6FBC: mov     edx, [ecx]
0x5A6FBE: mov     eax, [edx+174h]
0x5A6FC4: call    eax
0x5A6FC6: fld     dword ptr [eax]
0x5A6FC8: fsub    [esp+7Ch+var_20]
0x5A6FCC: fstp    [esp+7Ch+var_4C]
0x5A6FD0: fld     dword ptr [eax+4]
0x5A6FD3: fsub    [esp+7Ch+var_1C]
0x5A6FD7: fstp    [esp+7Ch+var_58]
0x5A6FDB: fld     dword ptr [eax+8]
0x5A6FDE: fsub    [esp+7Ch+var_18]
0x5A6FE2: fstp    [esp+7Ch+var_48]
0x5A6FE6: fld     [esp+7Ch+var_58]
0x5A6FEA: fld     [esp+7Ch+var_4C]
0x5A6FEE: fld     [esp+7Ch+var_48]
0x5A6FF2: fld     st(1)
0x5A6FF4: fmulp   st(2), st
0x5A6FF6: fld     st(2)
0x5A6FF8: fmulp   st(3), st
0x5A6FFA: fxch    st(1)
0x5A6FFC: faddp   st(2), st
0x5A6FFE: fmul    st, st
0x5A7000: faddp   st(1), st
0x5A7002: fstp    [esp+7Ch+var_48]
0x5A7006: fld     [esp+7Ch+var_48]
0x5A700A: call    __CIsqrt
0x5A700F: fstp    [esp+7Ch+var_48]
0x5A7013: fld     [esp+7Ch+var_48]
0x5A7017: mov     ecx, [edi]
0x5A7019: fstp    [esp+7Ch+var_48]
0x5A701D: mov     [esp+7Ch+var_65], bl
0x5A7021: fld     [esp+7Ch+var_48]
0x5A7025: fabs
0x5A7027: fstp    [esp+7Ch+var_48]
0x5A702B: fld     [esp+7Ch+var_48]
0x5A702F: fstp    [esp+7Ch+var_58]
0x5A7033: call    sub_42B310
0x5A7038: test    al, al
0x5A703A: jnz     short loc_5A706C
0x5A703C: fld     [esp+7Ch+var_58]
0x5A7040: fild    dword ptr ds:0B37BC0h
0x5A7046: fcompp
0x5A7048: fnstsw  ax
0x5A704A: test    ah, 41h
0x5A704D: jnz     short loc_5A706C
0x5A704F: mov     ecx, [edi]
0x5A7051: push    1
0x5A7053: call    AddMapMarker
0x5A7058: mov     ecx, [edi+4]
0x5A705B: mov     edx, [ecx]
0x5A705D: mov     eax, [edx+40h]
0x5A7060: push    400h; a3
0x5A7065: call    eax
0x5A7067: mov     [esp+7Ch+var_65], 1
0x5A706C: mov     ecx, [edi]
0x5A706E: call    sub_42B340
0x5A7073: test    al, al
0x5A7075: jnz     short loc_5A70A9
0x5A7077: fld     [esp+7Ch+var_58]
0x5A707B: fild    dword ptr ds:0B37BC0h
0x5A7081: fcompp
0x5A7083: fnstsw  ax
0x5A7085: test    ah, 41h
0x5A7088: jnz     short loc_5A70A9
0x5A708A: mov     ecx, [edi]
0x5A708C: push    1
0x5A708E: call    sub_42B350
0x5A7093: mov     ecx, [edi+4]
0x5A7096: mov     edx, [ecx]
0x5A7098: mov     eax, [edx+40h]
0x5A709B: push    400h
0x5A70A0: call    eax
0x5A70A2: mov     [esp+7Ch+var_65], 1
0x5A70A7: jmp     short loc_5A70B3
0x5A70A9: cmp     [esp+7Ch+var_65], bl
0x5A70AD: jz      loc_5A7160
0x5A70B3: mov     ecx, ds:0B333C4h
0x5A70B9: mov     edx, [ecx]
0x5A70BB: mov     eax, [edx+198h]
0x5A70C1: push    ebx
0x5A70C2: call    eax
0x5A70C4: test    al, al
0x5A70C6: jnz     loc_5A7160
0x5A70CC: mov     [esp+7Ch+a2], ebx
0x5A70D0: mov     word ptr [esp+7Ch+var_40], bx
0x5A70D5: mov     word ptr [esp+7Ch+var_40+2], bx
0x5A70DA: mov     ecx, [edi]; this
0x5A70DC: mov     esi, ds:0B38C20h
0x5A70E2: mov     [esp+7Ch+var_4], ebx
0x5A70E6: call    TESModel_GetModelPath
0x5A70EB: push    eax
0x5A70EC: push    esi; ArgList
0x5A70ED: lea     ecx, [esp+84h+a2]
0x5A70F1: push    offset aSS_; "%s %s."
0x5A70F6: push    ecx; int
0x5A70F7: call    BSStringT_Static_Format
0x5A70FC: fld     dword ptr ds:0A31E2Ch
0x5A7102: mov     esi, [esp+8Ch+a2]
0x5A7106: fstp    [esp+8Ch+var_80]; duration
0x5A710A: add     esp, 0Ch
0x5A710D: push    1; unk2
0x5A710F: push    ebx; unk1
0x5A7110: push    esi; string
0x5A7111: call    GameUI_QueueMessage
0x5A7116: mov     eax, ds:0B333C4h
0x5A711B: add     dword ptr [eax+674h], 1
0x5A7122: mov     edx, [edi+4]
0x5A7125: lea     eax, [esp+8Ch+var_30]
0x5A7129: push    eax
0x5A712A: mov     [esp+90h+var_30], edx
0x5A712E: mov     byte ptr [esp+90h+var_30+4], bl
0x5A7132: mov     byte ptr [esp+90h+var_30+5], 1
0x5A7137: call    sub_5A65B0
0x5A713C: push    esi
0x5A713D: mov     [esp+94h+var_4], 0FFFFFFFFh
0x5A7148: call    FormHeapFree
0x5A714D: add     esp, 18h
0x5A7150: mov     [esp+7Ch+a2], ebx
0x5A7154: mov     word ptr [esp+7Ch+var_40+2], bx
0x5A7159: mov     word ptr [esp+7Ch+var_40], bx
0x5A715E: jmp     short loc_5A71B4
0x5A7160: mov     ecx, [edi]
0x5A7162: call    sub_42B340
0x5A7167: test    al, al
0x5A7169: jz      short loc_5A71B4
0x5A716B: mov     ecx, ds:0B333C4h
0x5A7171: mov     edx, [ecx]
0x5A7173: mov     eax, [edx+198h]
0x5A7179: push    ebx
0x5A717A: call    eax
0x5A717C: test    al, al
0x5A717E: jnz     short loc_5A71B4
0x5A7180: fld     [esp+7Ch+var_58]
0x5A7184: mov     ecx, [edi+4]
0x5A7187: fild    dword ptr ds:0B37BC0h
0x5A718D: mov     [esp+7Ch+var_3C], ecx
0x5A7191: mov     byte ptr [esp+7Ch+var_38], 1
0x5A7196: fcompp
0x5A7198: fnstsw  ax
0x5A719A: test    ah, 41h
0x5A719D: jz      short loc_5A71A3
0x5A719F: mov     byte ptr [esp+7Ch+var_38], bl
0x5A71A3: lea     edx, [esp+7Ch+var_3C]
0x5A71A7: push    edx
0x5A71A8: mov     byte ptr [esp+80h+var_38+1], bl
0x5A71AC: call    sub_5A65B0
0x5A71B1: add     esp, 4
0x5A71B4: fld     [esp+7Ch+var_58]
0x5A71B8: fild    dword ptr ds:0B37BC8h
0x5A71BE: fcompp
0x5A71C0: fnstsw  ax
0x5A71C2: test    ah, 5
0x5A71C5: jnp     loc_5A7335
0x5A71CB: cmp     [esp+7Ch+var_64], ebx
0x5A71CF: jz      short loc_5A71E3
0x5A71D1: mov     ecx, [esp+7Ch+var_64]
0x5A71D5: mov     esi, [ecx+8]
0x5A71D8: lea     eax, [ecx+8]
0x5A71DB: mov     ecx, [ecx]
0x5A71DD: mov     [esp+7Ch+var_64], ecx
0x5A71E1: jmp     short loc_5A71F7
0x5A71E3: mov     edx, [esp+7Ch+var_54]
0x5A71E7: push    ebx
0x5A71E8: push    offset aHudmain_compas; "hudmain_compass_icon"
0x5A71ED: push    edx
0x5A71EE: mov     ecx, ebp
0x5A71F0: call    Menu_CreateTileFromTemplate
0x5A71F5: mov     esi, eax
0x5A71F7: cmp     esi, ebx
0x5A71F9: jz      loc_5A7335
0x5A71FF: mov     ecx, [edi]
0x5A7201: call    sub_42B310
0x5A7206: mov     ecx, [edi+4]
0x5A7209: or      [esp+7Ch+var_65], al
0x5A720D: mov     eax, [ecx]
0x5A720F: mov     edx, [eax+174h]
0x5A7215: call    edx
0x5A7217: push    eax
0x5A7218: lea     eax, [esp+80h+var_20]
0x5A721C: push    eax
0x5A721D: call    sub_5A62D0
0x5A7222: fstp    [esp+84h+var_48]
0x5A7226: mov     ecx, [edi]; this
0x5A7228: add     esp, 8
0x5A722B: call    TESModel_GetModelPath
0x5A7230: push    ebx; a3
0x5A7231: lea     ecx, [esi+8]; this
0x5A7234: push    eax; a2
0x5A7235: call    BSStringT_Set
0x5A723A: fld     [esp+7Ch+var_48]
0x5A723E: push    ecx
0x5A723F: fstp    [esp+80h+var_80]; a3
0x5A7242: push    0FAEh; a2
0x5A7247: mov     ecx, esi; this
0x5A7249: call    Tile_SetFloat
0x5A724E: fld     [esp+7Ch+var_58]
0x5A7252: push    ecx
0x5A7253: fstp    [esp+80h+var_80]; a3
0x5A7256: push    0FAFh; a2
0x5A725B: mov     ecx, esi; this
0x5A725D: call    Tile_SetFloat
0x5A7262: fld     dword ptr ds:0A379B4h
0x5A7268: push    ecx
0x5A7269: fstp    [esp+80h+var_80]; a3
0x5A726C: push    0FB0h; a2
0x5A7271: mov     ecx, esi; this
0x5A7273: call    Tile_SetFloat
0x5A7278: mov     ecx, [edi]
0x5A727A: call    sub_42B370
0x5A727F: mov     [esp+7Ch+var_48], eax
0x5A7283: fild    [esp+7Ch+var_48]
0x5A7287: push    ecx
0x5A7288: mov     ecx, esi; this
0x5A728A: fstp    [esp+80h+var_80]; a3
0x5A728D: push    0FB3h; a2
0x5A7292: call    Tile_SetFloat
0x5A7297: mov     ecx, [edi]
0x5A7299: call    sub_42B340
0x5A729E: test    al, al
0x5A72A0: jz      short loc_5A72B0
0x5A72A2: cmp     [esp+7Ch+var_65], bl
0x5A72A6: mov     [esp+7Ch+var_58], 2
0x5A72AE: jnz     short loc_5A72B8
0x5A72B0: mov     [esp+7Ch+var_58], 1
0x5A72B8: fild    [esp+7Ch+var_58]
0x5A72BC: push    ecx
0x5A72BD: mov     ecx, esi; this
0x5A72BF: fstp    [esp+80h+var_80]; a3
0x5A72C2: push    0FB4h; a2
0x5A72C7: call    Tile_SetFloat
0x5A72CC: fld     dword ptr ds:0A379B4h
0x5A72D2: push    ecx
0x5A72D3: fstp    [esp+80h+var_80]; a3
0x5A72D6: push    0FB7h; a2
0x5A72DB: mov     ecx, esi; this
0x5A72DD: call    Tile_SetFloat
0x5A72E2: fild    [esp+7Ch+var_60]
0x5A72E6: push    ecx
0x5A72E7: mov     ecx, esi; this
0x5A72E9: fstp    [esp+80h+var_80]; a3
0x5A72EC: push    0FABh; a2
0x5A72F1: call    Tile_SetFloat
0x5A72F6: fld     dword ptr ds:0A379B4h
0x5A72FC: add     [esp+7Ch+var_60], 1
0x5A7301: push    ecx
0x5A7302: fstp    [esp+80h+var_80]; a3
0x5A7305: push    0FA1h; a2
0x5A730A: mov     ecx, esi; this
0x5A730C: call    Tile_SetFloat
0x5A7311: fld1
0x5A7313: push    ecx
0x5A7314: fstp    [esp+80h+var_80]; a3
0x5A7317: push    0FB9h; a2
0x5A731C: mov     ecx, esi; this
0x5A731E: call    Tile_SetFloat
0x5A7323: fld1
0x5A7325: push    ecx
0x5A7326: fstp    [esp+80h+var_80]; a3
0x5A7329: push    0FBAh; a2
0x5A732E: mov     ecx, esi; this
0x5A7330: call    Tile_SetFloat
0x5A7335: cmp     [esp+7Ch+var_50], ebx
0x5A7339: jnz     loc_5A6F93
0x5A733F: mov     ecx, ds:0B333C4h
0x5A7345: call    sub_65D830
0x5A734A: mov     ecx, [esp+7Ch+a3]
0x5A734E: xor     ebp, ebp
0x5A7350: cmp     eax, ebx
0x5A7352: mov     [ecx+64h], eax
0x5A7355: jz      loc_5A7615
0x5A735B: jmp     short loc_5A7364
0x5A735D: align 10h
0x5A7360: mov     eax, [esp+7Ch+var_50]
0x5A7364: mov     ecx, [eax]
0x5A7366: cmp     ecx, ebx
0x5A7368: jz      loc_5A7615
0x5A736E: mov     edi, [ecx+10h]
0x5A7371: cmp     edi, ebx
0x5A7373: mov     edx, [eax+4]
0x5A7376: mov     [esp+7Ch+var_65], bl
0x5A737A: mov     [esp+7Ch+var_50], edx; a3
0x5A737E: jz      short loc_5A7387
0x5A7380: mov     [esp+7Ch+var_65], 1
0x5A7385: jmp     short loc_5A7390
0x5A7387: push    1
0x5A7389: call    sub_52B440
0x5A738E: mov     edi, eax
0x5A7390: cmp     edi, ebx
0x5A7392: jz      loc_5A760B
0x5A7398: mov     eax, [edi]
0x5A739A: mov     edx, [eax+174h]
0x5A73A0: mov     ecx, edi
0x5A73A2: call    edx
0x5A73A4: fld     dword ptr [eax]
0x5A73A6: fsub    [esp+7Ch+var_20]
0x5A73AA: fstp    [esp+7Ch+var_48]
0x5A73AE: fld     dword ptr [eax+4]
0x5A73B1: fsub    [esp+7Ch+var_1C]
0x5A73B5: fstp    [esp+7Ch+var_4C]
0x5A73B9: fld     dword ptr [eax+8]
0x5A73BC: fsub    [esp+7Ch+var_18]
0x5A73C0: fstp    [esp+7Ch+var_58]
0x5A73C4: fld     [esp+7Ch+var_48]
0x5A73C8: fld     [esp+7Ch+var_4C]
0x5A73CC: fld     [esp+7Ch+var_58]
0x5A73D0: fld     st(1)
0x5A73D2: fmulp   st(2), st
0x5A73D4: fld     st(2)
0x5A73D6: fmulp   st(3), st
0x5A73D8: fxch    st(1)
0x5A73DA: faddp   st(2), st
0x5A73DC: fmul    st, st
0x5A73DE: faddp   st(1), st
0x5A73E0: fstp    [esp+7Ch+var_48]
0x5A73E4: fld     [esp+7Ch+var_48]
0x5A73E8: call    __CIsqrt
0x5A73ED: fstp    [esp+7Ch+var_48]
0x5A73F1: fld     [esp+7Ch+var_48]
0x5A73F5: fstp    [esp+7Ch+var_48]
0x5A73F9: fld     [esp+7Ch+var_48]
0x5A73FD: fabs
0x5A73FF: fstp    [esp+7Ch+var_48]
0x5A7403: fld     [esp+7Ch+var_48]
0x5A7407: fstp    [esp+7Ch+var_48]
0x5A740B: fld     [esp+7Ch+var_48]
0x5A740F: fidiv   dword ptr ds:0B37BC0h
0x5A7415: fld     qword ptr ds:0A3DDD8h
0x5A741B: fmul    st(1), st
0x5A741D: fxch    st(1)
0x5A741F: fstp    [esp+7Ch+var_58]
0x5A7423: fld     [esp+7Ch+var_58]
0x5A7427: fcomp   st(1)
0x5A7429: fnstsw  ax
0x5A742B: test    ah, 41h
0x5A742E: jnz     short loc_5A743A
0x5A7430: fld     dword ptr ds:0A40098h
0x5A7436: fstp    [esp+7Ch+var_58]
0x5A743A: cmp     [esp+7Ch+var_64], ebx
0x5A743E: fld     [esp+7Ch+var_58]
0x5A7442: fmul    qword ptr ds:0A2FAA0h
0x5A7448: fsubp   st(1), st
0x5A744A: fstp    [esp+7Ch+var_58]; a3
0x5A744E: jz      short loc_5A7462
0x5A7450: mov     eax, [esp+7Ch+var_64]
0x5A7454: mov     esi, [eax+8]
0x5A7457: lea     ecx, [eax+8]
0x5A745A: mov     eax, [eax]
0x5A745C: mov     [esp+7Ch+var_64], eax
0x5A7460: jmp     short loc_5A7478
0x5A7462: mov     ecx, [esp+7Ch+var_54]
0x5A7466: push    ebx
0x5A7467: push    offset aHudmain_compas; "hudmain_compass_icon"
0x5A746C: push    ecx
0x5A746D: mov     ecx, [esp+88h+a3]
0x5A7471: call    Menu_CreateTileFromTemplate
0x5A7476: mov     esi, eax
0x5A7478: cmp     esi, ebx
0x5A747A: jz      loc_5A760B
0x5A7480: mov     edx, [edi]
0x5A7482: mov     eax, [edx+174h]
0x5A7488: mov     ecx, edi
0x5A748A: call    eax
0x5A748C: push    eax
0x5A748D: lea     ecx, [esp+80h+var_20]
0x5A7491: push    ecx
0x5A7492: call    sub_5A62D0
0x5A7497: fstp    qword ptr [esp+84h+var_30]; a3
0x5A749B: mov     ecx, ds:0B333C4h; this
0x5A74A1: add     esp, 8
0x5A74A4: call    TESObjectREFR_GetParentCell
0x5A74A9: mov     ecx, eax
0x5A74AB: call    sub_4CCE00
0x5A74B0: fmul    qword ptr ds:0A30DC8h
0x5A74B6: mov     [esp+7Ch+a2], ebx; a3
0x5A74BA: mov     word ptr [esp+7Ch+var_40], bx; a3
0x5A74BF: fadd    qword ptr [esp+7Ch+var_30]
0x5A74C3: mov     word ptr [esp+7Ch+var_40+2], bx
0x5A74C8: fstp    [esp+7Ch+var_48]; a3
0x5A74CC: add     ebp, 1
0x5A74CF: push    ebp; ArgList
0x5A74D0: lea     edx, [esp+80h+a2]
0x5A74D4: push    offset aQuest_I; "quest_%i"
0x5A74D9: push    edx; int
0x5A74DA: mov     [esp+88h+var_4], 1
0x5A74E5: call    BSStringT_Static_Format
0x5A74EA: mov     edi, [esp+88h+a2]
0x5A74EE: add     esp, 4
0x5A74F1: mov     ecx, esp; this
0x5A74F3: mov     [esp+84h+var_4C], esp; a3
0x5A74F7: push    ebx; a3
0x5A74F8: push    edi; a2
0x5A74F9: mov     [ecx], ebx
0x5A74FB: mov     [ecx+4], bx
0x5A74FF: mov     [ecx+6], bx
0x5A7503: call    BSStringT_Set
0x5A7508: mov     ecx, esi
0x5A750A: call    sub_58A020
0x5A750F: fld     [esp+7Ch+var_48]
0x5A7513: push    ecx
0x5A7514: fstp    [esp+80h+var_80]; a3
0x5A7517: push    0FAEh; a2
0x5A751C: mov     ecx, esi; this
0x5A751E: call    Tile_SetFloat
0x5A7523: fld     dword ptr ds:0A6BF7Ch
0x5A7529: push    ecx
0x5A752A: fstp    [esp+80h+var_80]; a3
0x5A752D: push    0FB3h; a2
0x5A7532: mov     ecx, esi; this
0x5A7534: call    Tile_SetFloat
0x5A7539: fld1
0x5A753B: push    ecx
0x5A753C: fstp    [esp+80h+var_80]; a3
0x5A753F: push    0FB4h; a2
0x5A7544: mov     ecx, esi; this
0x5A7546: call    Tile_SetFloat
0x5A754B: fld1
0x5A754D: push    ecx
0x5A754E: fstp    [esp+80h+var_80]; a3
0x5A7551: push    0FB7h; a2
0x5A7556: mov     ecx, esi; this
0x5A7558: call    Tile_SetFloat
0x5A755D: fild    [esp+7Ch+var_60]
0x5A7561: push    ecx
0x5A7562: mov     ecx, esi; this
0x5A7564: fstp    [esp+80h+var_80]; a3
0x5A7567: push    0FABh; a2
0x5A756C: call    Tile_SetFloat
0x5A7571: fld     dword ptr ds:0A379B4h
0x5A7577: add     [esp+7Ch+var_60], 1
0x5A757C: push    ecx
0x5A757D: fstp    [esp+80h+var_80]; a3
0x5A7580: push    0FA1h; a2
0x5A7585: mov     ecx, esi; this
0x5A7587: call    Tile_SetFloat
0x5A758C: fld     [esp+7Ch+var_58]
0x5A7590: push    ecx
0x5A7591: fstp    [esp+80h+var_80]; a3
0x5A7594: push    0FA7h; a2
0x5A7599: mov     ecx, esi; this
0x5A759B: call    Tile_SetFloat
0x5A75A0: xor     eax, eax
0x5A75A2: cmp     [esp+7Ch+var_65], bl
0x5A75A6: push    ecx
0x5A75A7: setnz   al
0x5A75AA: mov     ecx, esi; this
0x5A75AC: add     eax, 1
0x5A75AF: mov     [esp+80h+var_48], eax
0x5A75B3: fild    [esp+80h+var_48]
0x5A75B7: fstp    [esp+80h+var_80]; a3
0x5A75BA: push    0FB8h; a2
0x5A75BF: call    Tile_SetFloat
0x5A75C4: fld     dword ptr ds:0A379B4h
0x5A75CA: push    ecx
0x5A75CB: fstp    [esp+80h+var_80]; a3
0x5A75CE: push    0FB9h; a2
0x5A75D3: mov     ecx, esi; this
0x5A75D5: call    Tile_SetFloat
0x5A75DA: fld1
0x5A75DC: push    ecx
0x5A75DD: fstp    [esp+80h+var_80]; a3
0x5A75E0: push    0FBAh; a2
0x5A75E5: mov     ecx, esi; this
0x5A75E7: call    Tile_SetFloat
0x5A75EC: push    edi
0x5A75ED: mov     [esp+80h+var_4], 0FFFFFFFFh
0x5A75F5: call    FormHeapFree
0x5A75FA: add     esp, 4
0x5A75FD: mov     [esp+7Ch+a2], ebx
0x5A7601: mov     word ptr [esp+7Ch+var_40+2], bx
0x5A7606: mov     word ptr [esp+7Ch+var_40], bx
0x5A760B: cmp     [esp+7Ch+var_50], ebx
0x5A760F: jnz     loc_5A7360
0x5A7615: mov     edi, ds:0B333C4h
0x5A761B: cmp     [edi+638h], ebx
0x5A7621: jz      loc_5A77E6
0x5A7627: cmp     [esp+7Ch+var_64], ebx
0x5A762B: jz      short loc_5A763F
0x5A762D: mov     eax, [esp+7Ch+var_64]
0x5A7631: mov     edx, [eax]
0x5A7633: mov     esi, [eax+8]
0x5A7636: lea     ecx, [eax+8]
0x5A7639: mov     [esp+7Ch+var_64], edx
0x5A763D: jmp     short loc_5A765B
0x5A763F: mov     eax, [esp+7Ch+var_54]
0x5A7643: mov     ecx, [esp+7Ch+a3]
0x5A7647: push    ebx
0x5A7648: push    offset aHudmain_compas; "hudmain_compass_icon"
0x5A764D: push    eax
0x5A764E: call    Menu_CreateTileFromTemplate
0x5A7653: mov     edi, ds:0B333C4h
0x5A7659: mov     esi, eax
0x5A765B: cmp     esi, ebx
0x5A765D: jz      loc_5A77E6
0x5A7663: mov     ecx, [edi+63Ch]
0x5A7669: cmp     ecx, ebx
0x5A766B: jz      short loc_5A7693
0x5A766D: mov     edx, [ecx]
0x5A766F: mov     eax, [edx+174h]
0x5A7675: call    eax
0x5A7677: mov     ecx, [eax]
0x5A7679: mov     edx, [eax+4]
0x5A767C: mov     eax, [eax+8]
0x5A767F: mov     edi, ds:0B333C4h
0x5A7685: mov     [esp+7Ch+var_3C], ecx
0x5A7689: mov     [esp+7Ch+var_38], edx
0x5A768D: mov     [esp+7Ch+var_38+4], eax
0x5A7691: jmp     short loc_5A76B3
0x5A7693: lea     ecx, [esp+7Ch+var_30]
0x5A7697: push    ecx
0x5A7698: mov     ecx, edi
0x5A769A: call    sub_5A5790
0x5A769F: mov     edx, [eax]
0x5A76A1: mov     ecx, [eax+4]
0x5A76A4: mov     [esp+7Ch+var_3C], edx
0x5A76A8: mov     edx, [eax+8]
0x5A76AB: mov     [esp+7Ch+var_38], ecx
0x5A76AF: mov     [esp+7Ch+var_38+4], edx
0x5A76B3: mov     ecx, edi; this
0x5A76B5: call    TESObjectREFR_GetParentCell
0x5A76BA: mov     ecx, eax
0x5A76BC: call    sub_4CCE00
0x5A76C1: fmul    qword ptr ds:0A30DC8h
0x5A76C7: lea     eax, [esp+7Ch+var_3C]
0x5A76CB: push    eax
0x5A76CC: lea     ecx, [esp+80h+var_20]
0x5A76D0: fstp    qword ptr [esp+80h+var_30]
0x5A76D4: push    ecx
0x5A76D5: call    sub_5A62D0
0x5A76DA: fadd    qword ptr [esp+84h+var_30]
0x5A76DE: mov     [esp+84h+a2], ebx
0x5A76E2: mov     word ptr [esp+84h+var_40], bx
0x5A76E7: fstp    [esp+84h+var_48]
0x5A76EB: mov     word ptr [esp+84h+var_40+2], bx
0x5A76F0: add     ebp, 1
0x5A76F3: push    ebp; ArgList
0x5A76F4: lea     edx, [esp+88h+a2]
0x5A76F8: push    offset aPlayer_target_; "player_target_%i"
0x5A76FD: push    edx; int
0x5A76FE: mov     [esp+90h+var_4], 2
0x5A7709: call    BSStringT_Static_Format
0x5A770E: add     esp, 0Ch
0x5A7711: lea     eax, [esp+84h+a2]
0x5A7715: mov     ecx, esp
0x5A7717: mov     [esp+84h+var_4C], esp
0x5A771B: push    eax
0x5A771C: call    BSStringT_constr_BSStringT
0x5A7721: mov     ecx, esi
0x5A7723: call    sub_58A020
0x5A7728: fld     [esp+7Ch+var_48]
0x5A772C: push    ecx
0x5A772D: fstp    [esp+80h+var_80]; a3
0x5A7730: push    0FAEh; a2
0x5A7735: mov     ecx, esi; this
0x5A7737: call    Tile_SetFloat
0x5A773C: fld     dword ptr ds:0A6BF7Ch
0x5A7742: push    ecx
0x5A7743: fstp    [esp+80h+var_80]; a3
0x5A7746: push    0FB3h; a2
0x5A774B: mov     ecx, esi; this
0x5A774D: call    Tile_SetFloat
0x5A7752: fld     dword ptr ds:0A379B4h
0x5A7758: push    ecx
0x5A7759: fstp    [esp+80h+var_80]; a3
0x5A775C: push    0FB4h; a2
0x5A7761: mov     ecx, esi; this
0x5A7763: call    Tile_SetFloat
0x5A7768: fld1
0x5A776A: push    ecx
0x5A776B: fstp    [esp+80h+var_80]; a3
0x5A776E: push    0FB7h; a2
0x5A7773: mov     ecx, esi; this
0x5A7775: call    Tile_SetFloat
0x5A777A: fild    [esp+7Ch+var_60]
0x5A777E: push    ecx
0x5A777F: mov     ecx, esi; this
0x5A7781: fstp    [esp+80h+var_80]; a3
0x5A7784: push    0FABh; a2
0x5A7789: call    Tile_SetFloat
0x5A778E: fld     dword ptr ds:0A379B4h
0x5A7794: add     [esp+7Ch+var_60], 1
0x5A7799: push    ecx
0x5A779A: fstp    [esp+80h+var_80]; a3
0x5A779D: push    0FA1h; a2
0x5A77A2: mov     ecx, esi; this
0x5A77A4: call    Tile_SetFloat
0x5A77A9: fld1
0x5A77AB: push    ecx
0x5A77AC: fstp    [esp+80h+var_80]; a3
0x5A77AF: push    0FB9h; a2
0x5A77B4: mov     ecx, esi; this
0x5A77B6: call    Tile_SetFloat
0x5A77BB: fld     dword ptr ds:0A379B4h
0x5A77C1: push    ecx
0x5A77C2: fstp    [esp+80h+var_80]; a3
0x5A77C5: push    0FBAh; a2
0x5A77CA: mov     ecx, esi; this
0x5A77CC: call    Tile_SetFloat
0x5A77D1: mov     ecx, [esp+7Ch+a2]
0x5A77D5: push    ecx
0x5A77D6: mov     [esp+80h+var_4], 0FFFFFFFFh
0x5A77DE: call    FormHeapFree
0x5A77E3: add     esp, 4
0x5A77E6: mov     edx, [esp+7Ch+a3]
0x5A77EA: fild    [esp+7Ch+var_60]
0x5A77EE: mov     ecx, [edx+44h]; this
0x5A77F1: push    ecx
0x5A77F2: fstp    [esp+80h+var_80]; a3
0x5A77F5: push    0FAFh; a2
0x5A77FA: call    Tile_SetFloat
0x5A77FF: cmp     [esp+7Ch+var_64], ebx
0x5A7803: jz      short loc_5A782D
0x5A7805: mov     esi, [esp+7Ch+var_64]
0x5A7809: lea     esp, [esp+0]
0x5A7810: fld1
0x5A7812: lea     eax, [esi+8]
0x5A7815: mov     eax, [eax]
0x5A7817: mov     esi, [esi]
0x5A7819: push    ecx
0x5A781A: fstp    [esp+80h+var_80]; a3
0x5A781D: push    0FA1h; a2
0x5A7822: mov     ecx, eax; this
0x5A7824: call    Tile_SetFloat
0x5A7829: cmp     esi, ebx
0x5A782B: jnz     short loc_5A7810
0x5A782D: mov     eax, [esp+7Ch+a3]
0x5A7831: mov     al, [eax+90h]
0x5A7837: cmp     al, bl
0x5A7839: mov     [esp+7Ch+var_65], al
0x5A783D: jz      loc_5A78FF
0x5A7843: mov     ecx, [esp+7Ch+a3]
0x5A7847: xor     edi, edi
0x5A7849: cmp     [ecx+84h], ebx
0x5A784F: jbe     short loc_5A78A0
0x5A7851: mov     ebp, ecx
0x5A7853: cmp     [ebp+90h], bl
0x5A7859: jbe     short loc_5A78A0
0x5A785B: mov     edx, [ebp+7Ch]
0x5A785E: mov     eax, [edx+edi*4]
0x5A7861: mov     ecx, [eax]
0x5A7863: push    0FA7h
0x5A7868: call    Tile_GetFloat
0x5A786D: fcomp   dword ptr ds:0A2FAA8h
0x5A7873: fnstsw  ax
0x5A7875: test    ah, 44h
0x5A7878: jp      short loc_5A7895
0x5A787A: mov     eax, [ebp+78h]
0x5A787D: mov     edx, [eax+4]
0x5A7880: lea     esi, [ebp+78h]
0x5A7883: push    edi; a3
0x5A7884: mov     ecx, esi
0x5A7886: call    edx
0x5A7888: push    eax
0x5A7889: call    FormHeapFree
0x5A788E: add     esp, 4
0x5A7891: add     byte ptr [esi+18h], 0FFh
0x5A7895: add     edi, 1
0x5A7898: cmp     edi, [ebp+84h]
0x5A789E: jb      short loc_5A7853
0x5A78A0: mov     edi, [esp+7Ch+a3]
0x5A78A4: movzx   eax, byte ptr [edi+90h]
0x5A78AB: movzx   ecx, [esp+7Ch+var_65]
0x5A78B0: sub     ecx, eax
0x5A78B2: test    ecx, ecx
0x5A78B4: jle     short loc_5A78FF
0x5A78B6: lea     ecx, [edi+78h]
0x5A78B9: call    sub_5A56F0
0x5A78BE: xor     esi, esi
0x5A78C0: cmp     [edi+84h], ebx
0x5A78C6: jbe     short loc_5A78FF
0x5A78C8: mov     edx, [edi+7Ch]
0x5A78CB: mov     eax, [edx+esi*4]
0x5A78CE: mov     eax, [eax]
0x5A78D0: mov     ecx, esi
0x5A78D2: test    ecx, ecx
0x5A78D4: mov     [esp+7Ch+var_48], ecx
0x5A78D8: fild    [esp+7Ch+var_48]
0x5A78DC: jge     short loc_5A78E4
0x5A78DE: fadd    dword ptr ds:0A2FC78h
0x5A78E4: push    ecx
0x5A78E5: fstp    [esp+80h+var_80]; a3
0x5A78E8: push    0FAEh; a2
0x5A78ED: mov     ecx, eax; this
0x5A78EF: call    Tile_SetFloat
0x5A78F4: add     esi, 1
0x5A78F7: cmp     esi, [edi+84h]
0x5A78FD: jb      short loc_5A78C8
0x5A78FF: mov     edi, [esp+7Ch+a3]
0x5A7903: cmp     [edi+74h], ebx
0x5A7906: jz      short loc_5A794B
0x5A7908: call    dword ptr ds:0A280D0h
0x5A790E: cmp     eax, [edi+74h]
0x5A7911: jb      short loc_5A794B
0x5A7913: lea     edx, [esp+7Ch+var_20]
0x5A7917: mov     esi, ebx
0x5A7919: push    edx
0x5A791A: mov     [esp+80h+var_4], 3
0x5A7922: mov     [esp+80h+var_20], ebx
0x5A7926: mov     [esp+80h+var_1C], esi
0x5A792A: mov     [esp+80h+var_18], ebx
0x5A792E: mov     [esp+80h+var_14], ebx
0x5A7932: call    sub_5A64B0
0x5A7937: push    esi
0x5A7938: mov     [esp+84h+var_4], 0FFFFFFFFh
0x5A7943: call    FormHeapFree
0x5A7948: add     esp, 8
0x5A794B: mov     ecx, ds:0B333C4h
0x5A7951: push    8
0x5A7953: push    ebx
0x5A7954: call    Player_GetAVModifierf
0x5A7959: fcomp   qword ptr ds:0A2FC68h
0x5A795F: fnstsw  ax
0x5A7961: test    ah, 5
0x5A7964: jp      short loc_5A796A
0x5A7966: fldz
0x5A7968: jmp     short loc_5A7978
0x5A796A: mov     ecx, ds:0B333C4h
0x5A7970: push    8
0x5A7972: push    ebx
0x5A7973: call    Player_GetAVModifierf
0x5A7978: mov     ecx, ds:0B333C4h
0x5A797E: fstp    [esp+7Ch+var_64]
0x5A7982: push    8
0x5A7984: call    Actor_GetBaseCalcAVi
0x5A7989: mov     [esp+7Ch+var_48], eax
0x5A798D: fild    [esp+7Ch+var_48]
0x5A7991: fadd    [esp+7Ch+var_64]
0x5A7995: fldz
0x5A7997: fcom    st(1)
0x5A7999: fnstsw  ax
0x5A799B: fstp    st(1)
0x5A799D: test    ah, 41h
0x5A79A0: jz      short loc_5A79BD
0x5A79A2: mov     ecx, ds:0B333C4h
0x5A79A8: fstp    st
0x5A79AA: push    8
0x5A79AC: call    Actor_GetBaseCalcAVi
0x5A79B1: mov     [esp+7Ch+var_48], eax
0x5A79B5: fild    [esp+7Ch+var_48]
0x5A79B9: fadd    [esp+7Ch+var_64]
0x5A79BD: fstp    [esp+7Ch+var_64]
0x5A79C1: fldz
0x5A79C3: fcomp   [esp+7Ch+var_64]
0x5A79C7: fnstsw  ax
0x5A79C9: test    ah, 44h
0x5A79CC: jnp     short loc_5A7A0C
0x5A79CE: mov     ecx, ds:0B333C4h
0x5A79D4: mov     eax, [ecx]
0x5A79D6: mov     edx, [eax+284h]
0x5A79DC: push    8; a3
0x5A79DE: call    edx
0x5A79E0: test    eax, eax
0x5A79E2: jge     short loc_5A79EA
0x5A79E4: mov     [esp+7Ch+var_50], ebx
0x5A79E8: jmp     short loc_5A7A00
0x5A79EA: mov     ecx, ds:0B333C4h
0x5A79F0: mov     eax, [ecx]
0x5A79F2: mov     edx, [eax+284h]
0x5A79F8: push    8
0x5A79FA: call    edx
0x5A79FC: mov     [esp+7Ch+var_50], eax
0x5A7A00: fild    [esp+7Ch+var_50]
0x5A7A04: fdiv    [esp+7Ch+var_64]
0x5A7A08: fstp    [esp+7Ch+var_64]
0x5A7A0C: fld     [esp+7Ch+var_64]
0x5A7A10: push    ecx
0x5A7A11: mov     ecx, [edi+2Ch]; this
0x5A7A14: fstp    [esp+80h+var_80]; a3
0x5A7A17: push    0FAEh; a2
0x5A7A1C: call    Tile_SetFloat
0x5A7A21: mov     ecx, ds:0B333C4h
0x5A7A27: push    9
0x5A7A29: push    ebx
0x5A7A2A: call    Player_GetAVModifierf
0x5A7A2F: fcomp   qword ptr ds:0A2FC68h
0x5A7A35: fnstsw  ax
0x5A7A37: test    ah, 5
0x5A7A3A: jp      short loc_5A7A40
0x5A7A3C: fldz
0x5A7A3E: jmp     short loc_5A7A4E
0x5A7A40: mov     ecx, ds:0B333C4h
0x5A7A46: push    9
0x5A7A48: push    ebx
0x5A7A49: call    Player_GetAVModifierf
0x5A7A4E: mov     ecx, ds:0B333C4h
0x5A7A54: fstp    [esp+7Ch+var_64]
0x5A7A58: push    9
0x5A7A5A: call    Actor_GetBaseCalcAVi
0x5A7A5F: mov     [esp+7Ch+var_48], eax
0x5A7A63: fild    [esp+7Ch+var_48]
0x5A7A67: fadd    [esp+7Ch+var_64]
0x5A7A6B: fldz
0x5A7A6D: fcom    st(1)
0x5A7A6F: fnstsw  ax
0x5A7A71: fstp    st(1)
0x5A7A73: test    ah, 41h
0x5A7A76: jz      short loc_5A7A93
0x5A7A78: mov     ecx, ds:0B333C4h
0x5A7A7E: fstp    st
0x5A7A80: push    9
0x5A7A82: call    Actor_GetBaseCalcAVi
0x5A7A87: mov     [esp+7Ch+var_48], eax
0x5A7A8B: fild    [esp+7Ch+var_48]
0x5A7A8F: fadd    [esp+7Ch+var_64]
0x5A7A93: fstp    [esp+7Ch+var_64]
0x5A7A97: fldz
0x5A7A99: fcomp   [esp+7Ch+var_64]
0x5A7A9D: fnstsw  ax
0x5A7A9F: test    ah, 44h
0x5A7AA2: jnp     short loc_5A7AE2
0x5A7AA4: mov     ecx, ds:0B333C4h
0x5A7AAA: mov     eax, [ecx]
0x5A7AAC: mov     edx, [eax+284h]
0x5A7AB2: push    9; a3
0x5A7AB4: call    edx
0x5A7AB6: test    eax, eax
0x5A7AB8: jge     short loc_5A7AC0
0x5A7ABA: mov     [esp+7Ch+var_50], ebx
0x5A7ABE: jmp     short loc_5A7AD6
0x5A7AC0: mov     ecx, ds:0B333C4h
0x5A7AC6: mov     eax, [ecx]
0x5A7AC8: mov     edx, [eax+284h]
0x5A7ACE: push    9
0x5A7AD0: call    edx
0x5A7AD2: mov     [esp+7Ch+var_50], eax
0x5A7AD6: fild    [esp+7Ch+var_50]
0x5A7ADA: fdiv    [esp+7Ch+var_64]
0x5A7ADE: fstp    [esp+7Ch+var_64]
0x5A7AE2: fld     [esp+7Ch+var_64]
0x5A7AE6: push    ecx
0x5A7AE7: mov     ecx, [edi+30h]; this
0x5A7AEA: fstp    [esp+80h+var_80]; a3
0x5A7AED: push    0FAEh; a2
0x5A7AF2: call    Tile_SetFloat
0x5A7AF7: mov     ecx, ds:0B333C4h
0x5A7AFD: push    0Ah
0x5A7AFF: push    ebx
0x5A7B00: call    Player_GetAVModifierf
0x5A7B05: fcomp   qword ptr ds:0A2FC68h
0x5A7B0B: fnstsw  ax
0x5A7B0D: test    ah, 5
0x5A7B10: jp      short loc_5A7B16
0x5A7B12: fldz
0x5A7B14: jmp     short loc_5A7B24
0x5A7B16: mov     ecx, ds:0B333C4h
0x5A7B1C: push    0Ah
0x5A7B1E: push    ebx
0x5A7B1F: call    Player_GetAVModifierf
0x5A7B24: mov     ecx, ds:0B333C4h
0x5A7B2A: fstp    [esp+7Ch+var_64]
0x5A7B2E: push    0Ah
0x5A7B30: call    Actor_GetBaseCalcAVi
0x5A7B35: mov     [esp+7Ch+var_48], eax
0x5A7B39: fild    [esp+7Ch+var_48]
0x5A7B3D: fadd    [esp+7Ch+var_64]
0x5A7B41: fldz
0x5A7B43: fcom    st(1)
0x5A7B45: fnstsw  ax
0x5A7B47: fstp    st(1)
0x5A7B49: test    ah, 41h
0x5A7B4C: jz      short loc_5A7B69
0x5A7B4E: mov     ecx, ds:0B333C4h
0x5A7B54: fstp    st
0x5A7B56: push    0Ah
0x5A7B58: call    Actor_GetBaseCalcAVi
0x5A7B5D: mov     [esp+7Ch+var_48], eax
0x5A7B61: fild    [esp+7Ch+var_48]
0x5A7B65: fadd    [esp+7Ch+var_64]
0x5A7B69: fstp    [esp+7Ch+var_64]
0x5A7B6D: fldz
0x5A7B6F: fcomp   [esp+7Ch+var_64]
0x5A7B73: fnstsw  ax
0x5A7B75: test    ah, 44h
0x5A7B78: jnp     short loc_5A7BB8
0x5A7B7A: mov     ecx, ds:0B333C4h
0x5A7B80: mov     eax, [ecx]
0x5A7B82: mov     edx, [eax+284h]
0x5A7B88: push    0Ah; a3
0x5A7B8A: call    edx
0x5A7B8C: test    eax, eax
0x5A7B8E: jge     short loc_5A7B96
0x5A7B90: mov     [esp+7Ch+var_50], ebx
0x5A7B94: jmp     short loc_5A7BAC
0x5A7B96: mov     ecx, ds:0B333C4h
0x5A7B9C: mov     eax, [ecx]
0x5A7B9E: mov     edx, [eax+284h]
0x5A7BA4: push    0Ah
0x5A7BA6: call    edx
0x5A7BA8: mov     [esp+7Ch+var_50], eax
0x5A7BAC: fild    [esp+7Ch+var_50]
0x5A7BB0: fdiv    [esp+7Ch+var_64]
0x5A7BB4: fstp    [esp+7Ch+var_64]
0x5A7BB8: fld     [esp+7Ch+var_64]
0x5A7BBC: push    ecx
0x5A7BBD: mov     ecx, [edi+34h]; this
0x5A7BC0: fstp    [esp+80h+var_80]; a3
0x5A7BC3: push    0FAEh; a2
0x5A7BC8: call    Tile_SetFloat
0x5A7BCD: fld     dword ptr ds:0A2FE7Ch
0x5A7BD3: mov     eax, ds:0B333C4h
0x5A7BD8: fstp    [esp+7Ch+var_64]
0x5A7BDC: mov     ecx, [eax+58h]
0x5A7BDF: mov     edx, [ecx]
0x5A7BE1: mov     eax, [edx+0ECh]
0x5A7BE7: push    1; a3
0x5A7BE9: call    eax
0x5A7BEB: mov     esi, eax
0x5A7BED: cmp     esi, ebx
0x5A7BEF: jz      short loc_5A7BFE
0x5A7BF1: push    1
0x5A7BF3: mov     ecx, esi
0x5A7BF5: call    ContainerEntryExtraData_GetHealth
0x5A7BFA: fstp    [esp+7Ch+var_64]
0x5A7BFE: fld     [esp+7Ch+var_64]
0x5A7C02: push    ecx
0x5A7C03: mov     ecx, [edi+38h]; this
0x5A7C06: fstp    [esp+80h+var_80]; a3
0x5A7C09: push    0FB0h; a2
0x5A7C0E: call    Tile_SetFloat
0x5A7C13: fldz
0x5A7C15: mov     ecx, ds:0B333C4h
0x5A7C1B: fstp    [esp+7Ch+var_64]
0x5A7C1F: mov     ecx, [ecx+58h]
0x5A7C22: mov     edx, [ecx]
0x5A7C24: mov     eax, [edx+0F4h]
0x5A7C2A: push    1; a3
0x5A7C2C: call    eax
0x5A7C2E: cmp     eax, ebx
0x5A7C30: jz      short loc_5A7C59
0x5A7C32: cmp     esi, ebx
0x5A7C34: jz      short loc_5A7C59
0x5A7C36: mov     esi, [esi+8]
0x5A7C39: cmp     esi, ebx
0x5A7C3B: jz      short loc_5A7C59
0x5A7C3D: cmp     byte ptr [esi+90h], 5
0x5A7C44: jnz     short loc_5A7C59
0x5A7C46: mov     ecx, eax
0x5A7C48: call    TESHealthForm_GetHealth
0x5A7C4D: mov     [esp+7Ch+var_48], eax
0x5A7C51: fild    [esp+7Ch+var_48]
0x5A7C55: fstp    [esp+7Ch+var_64]
0x5A7C59: fld     [esp+7Ch+var_64]
0x5A7C5D: push    ecx
0x5A7C5E: mov     ecx, [edi+38h]; this
0x5A7C61: fstp    [esp+80h+var_80]; a3
0x5A7C64: push    0FB1h; a2
0x5A7C69: call    Tile_SetFloat
0x5A7C6E: mov     ecx, ds:0B333C4h
0x5A7C74: mov     esi, [ecx+5Ch]
0x5A7C77: push    ebx
0x5A7C78: push    ebx
0x5A7C79: push    ebx
0x5A7C7A: add     esi, 1Ch
0x5A7C7D: call    Player_GetCurrentMagicItem
0x5A7C82: mov     ecx, ds:0B333C4h
0x5A7C88: mov     edx, [esi]
0x5A7C8A: push    eax; a3
0x5A7C8B: add     ecx, 5Ch ; '\'
0x5A7C8E: call    edx
0x5A7C90: sub     al, 1
0x5A7C92: neg     al
0x5A7C94: push    ecx
0x5A7C95: mov     ecx, [edi+3Ch]; this
0x5A7C98: sbb     eax, eax
0x5A7C9A: add     eax, 2
0x5A7C9D: mov     [esp+80h+var_48], eax
0x5A7CA1: fild    [esp+80h+var_48]
0x5A7CA5: fstp    [esp+80h+var_80]; a3
0x5A7CA8: push    0FB0h; a2
0x5A7CAD: call    Tile_SetFloat
0x5A7CB2: mov     ecx, [esp+7Ch+var_C]
0x5A7CB6: mov     large fs:0, ecx
0x5A7CBD: pop     ecx
0x5A7CBE: pop     edi
0x5A7CBF: pop     esi
0x5A7CC0: pop     ebp
0x5A7CC1: pop     ebx
0x5A7CC2: mov     esp, ebp
0x5A7CC4: pop     ebp
0x5A7CC5: retn
