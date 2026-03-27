0x656C90: mov     eax, [esp+arg_4]
0x656C94: sub     esp, 88h
0x656C9A: push    ebx
0x656C9B: mov     ebx, [esp+8Ch+arg_8]
0x656CA2: push    esi
0x656CA3: push    edi
0x656CA4: push    ebx
0x656CA5: mov     esi, ecx
0x656CA7: mov     ecx, [esp+98h+arg_0]
0x656CAE: push    eax
0x656CAF: push    ecx
0x656CB0: mov     ecx, esi
0x656CB2: call    sub_60CF80
0x656CB7: push    0; int
0x656CB9: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x656CBE: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x656CC3: push    0; int
0x656CC5: push    ebx; void *
0x656CC6: call    OblivionDynamicCast
0x656CCB: mov     edx, [ebx]
0x656CCD: add     esp, 14h
0x656CD0: mov     edi, eax
0x656CD2: mov     eax, [edx+13Ch]
0x656CD8: push    0
0x656CDA: mov     ecx, ebx
0x656CDC: call    eax
0x656CDE: test    eax, eax
0x656CE0: jz      short loc_656D08
0x656CE2: mov     cl, [esi+11Ch]
0x656CE8: test    cl, cl
0x656CEA: jz      short loc_656D08
0x656CEC: mov     edx, [eax]
0x656CEE: sub     cl, 1
0x656CF1: cmp     cl, 3
0x656CF4: mov     ecx, eax
0x656CF6: mov     eax, [edx+9Ch]
0x656CFC: push    0
0x656CFE: ja      short loc_656D04
0x656D00: push    1
0x656D02: jmp     short loc_656D06
0x656D04: push    0
0x656D06: call    eax
0x656D08: test    edi, edi
0x656D0A: push    ebp
0x656D0B: jz      loc_656DCD
0x656D11: mov     ecx, ds:0B333C4h; this
0x656D17: cmp     edi, ecx
0x656D19: mov     ebp, [esi]
0x656D1B: jnz     short loc_656D66
0x656D1D: push    ecx
0x656D1E: push    1; a2
0x656D20: call    Player_GetAnimData
0x656D25: mov     ecx, ds:0B333C4h
0x656D2B: push    eax
0x656D2C: push    1
0x656D2E: call    sub_6600D0
0x656D33: movzx   ecx, byte ptr [esi+115h]
0x656D3A: mov     edx, [ebp+150h]
0x656D40: push    eax
0x656D41: push    ecx
0x656D42: mov     ecx, esi
0x656D44: call    edx
0x656D46: mov     ecx, ds:0B333C4h; this
0x656D4C: mov     ebp, [esi]
0x656D4E: push    ecx
0x656D4F: push    0; a2
0x656D51: call    Player_GetAnimData
0x656D56: mov     ecx, ds:0B333C4h
0x656D5C: push    eax
0x656D5D: push    0
0x656D5F: call    sub_6600D0
0x656D64: jmp     short loc_656DBA
0x656D66: mov     eax, [edi]
0x656D68: mov     edx, [eax+168h]
0x656D6E: mov     ecx, edi
0x656D70: call    edx
0x656D72: push    eax
0x656D73: mov     eax, [ebp+118h]
0x656D79: mov     ecx, esi
0x656D7B: call    eax
0x656D7D: test    eax, eax
0x656D7F: jz      short loc_656DCD
0x656D81: mov     edx, [edi]
0x656D83: mov     eax, [edx+168h]
0x656D89: mov     ebp, [esi]
0x656D8B: mov     ecx, edi
0x656D8D: call    eax
0x656D8F: mov     edx, [ebp+124h]
0x656D95: push    eax
0x656D96: mov     ecx, esi
0x656D98: call    edx
0x656D9A: test    eax, eax
0x656D9C: jz      short loc_656DCD
0x656D9E: mov     eax, [edi]
0x656DA0: mov     edx, [eax+164h]
0x656DA6: mov     ebp, [esi]
0x656DA8: push    edi
0x656DA9: mov     ecx, edi
0x656DAB: call    edx
0x656DAD: push    eax
0x656DAE: mov     eax, [edi]
0x656DB0: mov     edx, [eax+168h]
0x656DB6: mov     ecx, edi
0x656DB8: call    edx
0x656DBA: mov     edx, [ebp+150h]
0x656DC0: push    eax
0x656DC1: movzx   eax, byte ptr [esi+115h]
0x656DC8: push    eax
0x656DC9: mov     ecx, esi
0x656DCB: call    edx
0x656DCD: mov     ecx, ds:0B333C4h
0x656DD3: cmp     ebx, ecx
0x656DD5: jnz     short loc_656DE0
0x656DD7: push    0
0x656DD9: call    PlayerCharacter_GetPlayerNode
0x656DDE: jmp     short loc_656DE3
0x656DE0: mov     eax, [ebx+3Ch]
0x656DE3: test    edi, edi
0x656DE5: mov     [esp+98h+a1], eax
0x656DE9: jz      loc_65725D
0x656DEF: cmp     dword ptr [edi+3Ch], 0
0x656DF3: jz      loc_657225
0x656DF9: cmp     dword ptr [esi+120h], 0
0x656E00: jz      loc_657225
0x656E06: mov     edx, [edi]
0x656E08: mov     eax, [edx+198h]
0x656E0E: push    0
0x656E10: mov     ecx, edi
0x656E12: call    eax
0x656E14: test    al, al
0x656E16: jnz     loc_657225
0x656E1C: mov     ecx, [esi+120h]; this
0x656E22: call    TESObjectREFR_GetParentCell
0x656E27: mov     ecx, edi; this
0x656E29: mov     ebp, eax
0x656E2B: call    TESObjectREFR_GetParentCell
0x656E30: cmp     eax, ebp
0x656E32: jnz     loc_6572EE
0x656E38: mov     edx, [esi]
0x656E3A: mov     eax, [edx+2C0h]
0x656E40: mov     ecx, esi
0x656E42: call    eax
0x656E44: test    ax, ax
0x656E47: jnz     loc_6572EE
0x656E4D: mov     ecx, [esi+120h]
0x656E53: mov     edx, [ecx]
0x656E55: mov     eax, [edx+170h]
0x656E5B: push    0; int
0x656E5D: push    offset ??_R0?AVTESFurniture@@@8; struct TypeDescriptor *
0x656E62: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x656E67: push    0; int
0x656E69: call    eax
0x656E6B: push    eax; void *
0x656E6C: call    OblivionDynamicCast
0x656E71: add     esp, 14h
0x656E74: xor     ebp, ebp
0x656E76: test    eax, eax
0x656E78: mov     [esp+98h+var_84], eax
0x656E7C: jz      short loc_656EB3
0x656E7E: mov     ecx, [esi+120h]
0x656E84: mov     edx, [ecx]
0x656E86: mov     eax, [edx+154h]
0x656E8C: call    eax
0x656E8E: push    eax; NiObjectNET *
0x656E8F: call    NiObjectNET__GetBSFornitureMarker
0x656E94: mov     ebp, eax
0x656E96: add     esp, 4
0x656E99: test    ebp, ebp
0x656E9B: jz      loc_6572EE
0x656EA1: movzx   cx, byte ptr [esi+124h]
0x656EA9: cmp     cx, [ebp+18h]
0x656EAD: jnb     loc_6572EE
0x656EB3: mov     bl, [esi+11Dh]
0x656EB9: movzx   eax, bl
0x656EBC: add     eax, 0FFFFFFFFh; switch 9 cases
0x656EBF: cmp     eax, 8
0x656EC2: ja      short def_656ECB; jumptable 00656ECB default case, case 5
0x656EC4: movzx   edx, ds:byte_657328[eax]
0x656ECB: jmp     ds:jpt_656ECB[edx*4]; switch jump
0x656ED2: mov     eax, [esi+17Ch]; jumptable 00656ECB cases 1-4
0x656ED8: test    eax, eax
0x656EDA: jz      short loc_656F20
0x656EDC: mov     eax, [eax+98h]
0x656EE2: mov     ecx, [eax+7Ch]
0x656EE5: mov     edx, [ecx]
0x656EE7: mov     eax, ds:0B06560h
0x656EEC: mov     edx, [edx+4Ch]
0x656EEF: push    eax
0x656EF0: call    edx
0x656EF2: test    eax, eax
0x656EF4: jz      short loc_656EFB
0x656EF6: or      word ptr [eax+18h], 1
0x656EFB: mov     eax, [esi+17Ch]
0x656F01: mov     ecx, [eax+98h]
0x656F07: mov     ecx, [ecx+7Ch]
0x656F0A: mov     edx, [ecx]
0x656F0C: mov     eax, ds:0B06568h
0x656F11: mov     edx, [edx+4Ch]
0x656F14: push    eax
0x656F15: call    edx
0x656F17: test    eax, eax
0x656F19: jz      short loc_656F20
0x656F1B: or      word ptr [eax+18h], 1
0x656F20: mov     byte ptr [esi+11Dh], 1
0x656F27: jmp     short def_656ECB; jumptable 00656ECB default case, case 5
0x656F29: mov     byte ptr [esi+11Dh], 6; jumptable 00656ECB cases 6-9
0x656F30: cmp     byte ptr [esi+11Dh], 0; jumptable 00656ECB default case, case 5
0x656F37: jz      loc_656FC3
0x656F3D: movzx   eax, byte ptr [esi+124h]
0x656F44: mov     ecx, [esi+120h]
0x656F4A: push    1
0x656F4C: push    eax
0x656F4D: call    sub_4D7300
0x656F52: mov     ecx, ds:0B333C4h
0x656F58: cmp     edi, ecx
0x656F5A: jnz     short loc_656FB6
0x656F5C: cmp     byte ptr [ecx+588h], 0
0x656F63: jz      short loc_656F78
0x656F65: mov     edx, [esi]
0x656F67: mov     eax, [edx+384h]
0x656F6D: push    ecx
0x656F6E: mov     ecx, esi
0x656F70: call    eax
0x656F72: mov     ecx, ds:0B333C4h; this
0x656F78: movzx   edx, byte ptr [ecx+588h]
0x656F7F: push    edx; a1
0x656F80: call    TogglePOV
0x656F85: mov     ecx, ds:0B333C4h
0x656F8B: cmp     byte ptr [ecx+588h], 0
0x656F92: jz      short loc_656FA7
0x656F94: mov     eax, [esi]
0x656F96: mov     edx, [eax+384h]
0x656F9C: push    ecx
0x656F9D: mov     ecx, esi
0x656F9F: call    edx
0x656FA1: mov     ecx, ds:0B333C4h; this
0x656FA7: movzx   eax, byte ptr [ecx+588h]
0x656FAE: push    eax; a1
0x656FAF: call    TogglePOV
0x656FB4: jmp     short loc_656FC3
0x656FB6: mov     edx, [esi]
0x656FB8: mov     eax, [edx+384h]
0x656FBE: push    edi
0x656FBF: mov     ecx, esi
0x656FC1: call    eax
0x656FC3: cmp     bl, 4
0x656FC6: mov     [esi+11Dh], bl
0x656FCC: jz      short loc_656FD7
0x656FCE: cmp     bl, 9
0x656FD1: jnz     loc_6571E1
0x656FD7: cmp     [esp+98h+var_84], 0
0x656FDC: jz      loc_6571E1
0x656FE2: test    ebp, ebp
0x656FE4: jz      loc_6570B1
0x656FEA: mov     al, [esi+124h]
0x656FF0: movzx   cx, al
0x656FF4: cmp     cx, [ebp+18h]
0x656FF8: jnb     loc_6570B1
0x656FFE: movzx   eax, al
0x657001: shl     eax, 4
0x657004: add     eax, [ebp+10h]
0x657007: mov     edx, [eax+4]
0x65700A: mov     ecx, [eax]
0x65700C: mov     ebx, [eax+0Ch]
0x65700F: mov     ebp, [eax+8]
0x657012: mov     [esp+98h+var_60], edx
0x657016: mov     [esp+98h+var_64], ecx
0x65701A: mov     ecx, [esi+120h]
0x657020: lea     edx, [esp+98h+var_7C]
0x657024: push    edx
0x657025: lea     eax, [esp+9Ch+var_64]
0x657029: mov     [esp+9Ch+var_5C], ebp
0x65702D: mov     edx, [ecx]
0x65702F: push    eax
0x657030: mov     eax, [edx+174h]
0x657036: push    1
0x657038: mov     [esp+0A4h+var_4C], ebx
0x65703C: call    eax
0x65703E: push    eax
0x65703F: lea     ecx, [esp+0A8h+var_24]
0x657046: push    ecx
0x657047: mov     ecx, [esi+120h]
0x65704D: call    sub_4D7AF0
0x657052: push    eax
0x657053: call    sub_710580
0x657058: mov     dl, byte ptr [esp+0ACh+var_4C+2]
0x65705C: mov     eax, [esp+0ACh+var_7C]
0x657060: mov     [esi+136h], dl
0x657066: mov     edx, [esp+0ACh+var_78]
0x65706A: lea     ecx, [esi+128h]
0x657070: mov     [ecx], eax
0x657072: mov     [ecx+4], edx
0x657075: movzx   edx, bx
0x657078: mov     [esp+0ACh+var_88], edx
0x65707C: mov     eax, [esp+0ACh+var_74]
0x657080: mov     [ecx+8], eax
0x657083: fild    [esp+0ACh+var_88]
0x657087: mov     eax, [esi+120h]
0x65708D: add     esp, 10h
0x657090: fdiv    qword ptr ds:0A2FC70h
0x657096: fstp    [esp+9Ch+var_88]
0x65709A: fld     [esp+9Ch+var_88]
0x65709E: fadd    dword ptr [eax+28h]
0x6570A1: fstp    [esp+9Ch+var_88]
0x6570A5: fld     [esp+9Ch+var_88]
0x6570A9: fstp    [esp+9Ch+var_9C]; float
0x6570AC: call    sub_6FAEE0
0x6570B1: mov     edx, [edi]
0x6570B3: mov     eax, [edx+0ECh]
0x6570B9: movzx   ebp, byte ptr [esi+136h]
0x6570C0: mov     ecx, edi
0x6570C2: call    eax
0x6570C4: push    ecx
0x6570C5: lea     ecx, [esp+9Ch+var_70]
0x6570C9: fstp    [esp+9Ch+var_9C]; float
0x6570CC: push    ebp; int
0x6570CD: push    ecx; int
0x6570CE: mov     ecx, [esp+0A4h+var_84]
0x6570D2: call    sub_4AEB40
0x6570D7: movzx   edx, word ptr [esi+134h]
0x6570DE: mov     [esp+98h+var_88], edx
0x6570E2: push    ecx
0x6570E3: lea     ecx, [esp+9Ch+var_48]
0x6570E7: fild    [esp+9Ch+var_88]
0x6570EB: fdiv    qword ptr ds:0A2FC70h
0x6570F1: fstp    [esp+9Ch+var_88]
0x6570F5: fld     [esp+9Ch+var_88]
0x6570F9: fstp    [esp+9Ch+var_9C]; float
0x6570FC: call    NiMatrix33_InitRotationTransform
0x657101: lea     eax, [esp+98h+var_70]
0x657105: push    eax
0x657106: lea     ecx, [esp+9Ch+var_7C]
0x65710A: push    ecx
0x65710B: lea     ecx, [esp+0A0h+var_48]
0x65710F: call    sub_7101F0
0x657114: fld     dword ptr [esi+128h]
0x65711A: mov     edx, [eax]
0x65711C: lea     ebp, [esi+128h]
0x657122: mov     [esp+98h+var_70], edx
0x657126: fadd    [esp+98h+var_70]
0x65712A: mov     ecx, [eax+4]
0x65712D: mov     [esp+98h+var_6C], ecx
0x657131: mov     edx, [eax+8]
0x657134: fstp    [esp+98h+var_7C]
0x657138: fld     dword ptr [ebp+4]
0x65713B: mov     eax, [edi]
0x65713D: fadd    [esp+98h+var_6C]
0x657141: mov     [esp+98h+var_68], edx
0x657145: mov     edx, [eax+1CCh]
0x65714B: lea     ecx, [esp+98h+var_7C]
0x65714F: fstp    [esp+98h+var_78]
0x657153: push    ecx
0x657154: fld     dword ptr [ebp+8]
0x657157: mov     ecx, edi
0x657159: fadd    [esp+9Ch+var_68]
0x65715D: fstp    [esp+9Ch+var_74]
0x657161: call    edx
0x657163: mov     bl, [esi+11Dh]
0x657169: mov     byte ptr [esi+11Dh], 0
0x657170: cmp     edi, ds:0B333C4h
0x657176: jz      short loc_6571C1
0x657178: movzx   ecx, word ptr [esi+134h]
0x65717F: mov     [esp+98h+var_88], ecx
0x657183: mov     eax, [edi]
0x657185: mov     edx, [eax+1E8h]
0x65718B: fild    [esp+98h+var_88]
0x65718F: push    ecx
0x657190: mov     ecx, edi
0x657192: fdiv    qword ptr ds:0A2FC70h
0x657198: fstp    [esp+9Ch+var_88]
0x65719C: fld     [esp+9Ch+var_88]
0x6571A0: fstp    [esp+9Ch+var_9C]
0x6571A3: call    edx
0x6571A5: movzx   eax, byte ptr [esi+136h]
0x6571AC: mov     ecx, [esp+98h+var_84]
0x6571B0: push    eax
0x6571B1: call    sub_4AEBE0
0x6571B6: push    ecx
0x6571B7: mov     ecx, edi
0x6571B9: fstp    [esp+9Ch+var_9C]; float
0x6571BC: call    sub_659B90
0x6571C1: mov     ecx, edi; this
0x6571C3: mov     [esi+11Dh], bl
0x6571C9: call    MobileObject_GetCharProxy
0x6571CE: test    eax, eax
0x6571D0: jz      short loc_6571E1
0x6571D2: push    ebp; a2
0x6571D3: mov     ecx, edi; this
0x6571D5: call    MobileObject_GetCharProxy
0x6571DA: mov     ecx, eax; this
0x6571DC: call    sub_452A10
0x6571E1: mov     eax, [esi]
0x6571E3: mov     edx, [eax+8]
0x6571E6: mov     ecx, esi
0x6571E8: call    edx
0x6571EA: test    eax, eax
0x6571EC: jnz     short loc_65721E
0x6571EE: mov     al, [esi+11Dh]
0x6571F4: cmp     al, 9
0x6571F6: jz      short loc_6571FC
0x6571F8: cmp     al, 4
0x6571FA: jnz     short loc_65721E
0x6571FC: mov     eax, [edi]
0x6571FE: mov     edx, [eax+380h]
0x657204: mov     ecx, edi
0x657206: call    edx
0x657208: test    eax, eax
0x65720A: jnz     short loc_65721E
0x65720C: push    eax
0x65720D: mov     eax, [esp+9Ch+a1]
0x657211: push    1
0x657213: push    1
0x657215: push    eax
0x657216: call    sub_88CE30
0x65721B: add     esp, 10h
0x65721E: mov     ebx, [esp+98h+arg_8]
0x657225: cmp     byte ptr [esi+11Dh], 0
0x65722C: jz      short loc_65725D
0x65722E: mov     edx, [edi]
0x657230: mov     eax, [edx+380h]
0x657236: mov     ecx, edi
0x657238: call    eax
0x65723A: test    eax, eax
0x65723C: jnz     short loc_65725D
0x65723E: cmp     [esi+120h], eax
0x657244: jnz     short loc_65725D
0x657246: mov     [esi+11Dh], al
0x65724C: mov     eax, ds:0B333C4h
0x657251: cmp     edi, eax
0x657253: jnz     short loc_65725D
0x657255: fldz
0x657257: fstp    dword ptr [eax+61Ch]
0x65725D: mov     ebp, [esp+98h+a1]
0x657261: test    ebp, ebp
0x657263: jz      short loc_65726E
0x657265: cmp     byte ptr [esi+11Ch], 2
0x65726C: jz      short loc_657277
0x65726E: cmp     byte ptr [esi+11Ch], 1
0x657275: jnz     short loc_657295
0x657277: push    0; a4
0x657279: push    1; a3
0x65727B: push    1; a2
0x65727D: push    ebp; a1
0x65727E: call    sub_88D070
0x657283: fldz
0x657285: add     esp, 10h
0x657288: push    0; a3
0x65728A: push    ecx
0x65728B: mov     ecx, ebp; this
0x65728D: fstp    [esp+0A0h+a2]; a2
0x657290: call    NiAVObject_UpdateNiAVObject
0x657295: mov     ecx, [esi+174h]
0x65729B: push    edi
0x65729C: push    ecx
0x65729D: call    ActiveEffect_Base_PostLinkAEList
0x6572A2: add     esp, 8
0x6572A5: test    edi, edi
0x6572A7: mov     byte ptr [esi+161h], 1
0x6572AE: pop     ebp
0x6572AF: jz      short loc_6572C4
0x6572B1: mov     edx, [esi]
0x6572B3: mov     eax, [edx+42Ch]
0x6572B9: push    0
0x6572BB: push    0
0x6572BD: push    1
0x6572BF: push    edi
0x6572C0: mov     ecx, esi
0x6572C2: call    eax
0x6572C4: cmp     byte ptr [esi+16Bh], 0
0x6572CB: jz      short loc_6572E2
0x6572CD: cmp     dword ptr [esi+13Ch], 0
0x6572D4: jnz     short loc_6572E2
0x6572D6: mov     ecx, ds:0B33B00h
0x6572DC: push    ebx
0x6572DD: call    sub_453910
0x6572E2: pop     edi
0x6572E3: pop     esi
0x6572E4: pop     ebx
0x6572E5: add     esp, 88h
0x6572EB: retn    0Ch
0x6572EE: mov     dword ptr [esi+120h], 0
0x6572F8: mov     byte ptr [esi+11Dh], 0
0x6572FF: mov     eax, ds:0B333C4h
0x657304: cmp     edi, eax
0x657306: jnz     loc_657225
0x65730C: fldz
0x65730E: fstp    dword ptr [eax+61Ch]
0x657314: jmp     loc_657225
