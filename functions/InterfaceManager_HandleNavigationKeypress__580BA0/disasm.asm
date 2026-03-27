0x580BA0: sub     esp, 18h
0x580BA3: mov     eax, ds:0B33398h
0x580BA8: push    ebx
0x580BA9: push    esi
0x580BAA: push    edi
0x580BAB: mov     edi, ecx
0x580BAD: mov     ecx, [eax+20h]
0x580BB0: push    1
0x580BB2: mov     [esp+28h+var_14], edi
0x580BB6: mov     [esp+28h+var_18], ecx
0x580BBA: call    Menu_GetB3A708
0x580BBF: add     esp, 4
0x580BC2: mov     ecx, eax
0x580BC4: call    sub_5877D0
0x580BC9: mov     ebx, eax
0x580BCB: test    ebx, ebx
0x580BCD: jz      short loc_580BD4
0x580BCF: mov     esi, [ebx+4]
0x580BD2: jmp     short loc_580BD6
0x580BD4: xor     esi, esi
0x580BD6: test    ebx, ebx
0x580BD8: mov     [esp+24h+var_10], esi
0x580BDC: jz      loc_581379
0x580BE2: fld1
0x580BE4: mov     edx, [ebx]
0x580BE6: mov     eax, [edx+38h]
0x580BE9: push    ebp; a3
0x580BEA: mov     ebp, [esp+28h+a3]
0x580BEE: push    ecx
0x580BEF: fstp    [esp+2Ch+var_2C]; a3
0x580BF2: push    ebp; a3
0x580BF3: mov     ecx, ebx
0x580BF5: call    eax
0x580BF7: test    al, al
0x580BF9: jnz     loc_581378
0x580BFF: test    esi, esi
0x580C01: jz      loc_581378
0x580C07: test    ebp, ebp
0x580C09: jz      loc_581378
0x580C0F: cmp     ebp, 1
0x580C12: jz      loc_58100F
0x580C18: cmp     ebp, 2
0x580C1B: jz      loc_58100F
0x580C21: cmp     ebp, 4
0x580C24: jz      loc_58100F
0x580C2A: cmp     ebp, 3
0x580C2D: jz      loc_58100F
0x580C33: mov     ecx, [edi+68h]
0x580C36: mov     ebx, [ecx+38h]
0x580C39: test    ebx, ebx
0x580C3B: jz      short loc_580C97
0x580C3D: lea     ecx, [ecx+0]
0x580C40: mov     esi, [ebx+8]
0x580C43: test    esi, esi
0x580C45: lea     eax, [ebx+8]
0x580C48: mov     ebx, [ebx+4]
0x580C4B: jz      short loc_580C93
0x580C4D: mov     ecx, esi
0x580C4F: call    Tile_GetParentMenu
0x580C54: mov     edi, eax
0x580C56: test    edi, edi
0x580C58: jz      short loc_580C8F
0x580C5A: mov     ecx, esi
0x580C5C: call    sub_5893B0
0x580C61: test    al, al
0x580C63: jz      short loc_580C8F
0x580C65: mov     esi, [edi]
0x580C67: mov     ecx, [esp+28h+var_18]
0x580C6B: push    ebp
0x580C6C: add     esi, 38h ; '8'
0x580C6F: call    sub_6DA150
0x580C74: mov     edx, [esi]
0x580C76: mov     [esp+28h+a3], eax
0x580C7A: fild    [esp+28h+a3]
0x580C7E: push    ecx
0x580C7F: mov     ecx, edi
0x580C81: fstp    [esp+2Ch+var_2C]; a3
0x580C84: push    ebp; a3
0x580C85: call    edx
0x580C87: test    al, al
0x580C89: jnz     loc_580D11
0x580C8F: mov     edi, [esp+28h+var_14]
0x580C93: test    ebx, ebx
0x580C95: jnz     short loc_580C40
0x580C97: cmp     ebp, 5
0x580C9A: jnz     short loc_580CF7
0x580C9C: push    3F5h
0x580CA1: push    1
0x580CA3: call    Menu_GetB3A708
0x580CA8: add     esp, 4
0x580CAB: mov     ecx, eax
0x580CAD: call    sub_5878B0
0x580CB2: test    al, al
0x580CB4: jnz     short loc_580CF7
0x580CB6: push    414h
0x580CBB: push    1
0x580CBD: call    Menu_GetB3A708
0x580CC2: add     esp, 4
0x580CC5: mov     ecx, eax
0x580CC7: call    sub_5878B0
0x580CCC: test    al, al
0x580CCE: jnz     short loc_580CF7
0x580CD0: push    3EFh
0x580CD5: push    1
0x580CD7: call    Menu_GetB3A708
0x580CDC: add     esp, 4
0x580CDF: mov     ecx, eax
0x580CE1: call    sub_5878B0
0x580CE6: test    al, al
0x580CE8: jnz     short loc_580CF7
0x580CEA: cmp     ds:0B143AEh, al
0x580CF0: jz      short loc_580CF7
0x580CF2: call    sub_57B560
0x580CF7: cmp     ebp, 9
0x580CFA: mov     [esp+28h+a3], 0
0x580D02: jnz     short loc_580D25
0x580D04: mov     [esp+28h+a3], 0FF7h
0x580D0C: jmp     loc_580D9B
0x580D11: mov     ecx, [esp+28h+var_18]
0x580D15: push    ebp
0x580D16: call    nullsub_returnvVoid_1arg
0x580D1B: pop     ebp
0x580D1C: pop     edi
0x580D1D: pop     esi
0x580D1E: pop     ebx
0x580D1F: add     esp, 18h
0x580D22: retn    4
0x580D25: cmp     ebp, 0Ah
0x580D28: jnz     short loc_580D34
0x580D2A: mov     [esp+28h+a3], 0FF8h
0x580D32: jmp     short loc_580D9B
0x580D34: cmp     ebp, 0Bh
0x580D37: jnz     short loc_580D43
0x580D39: mov     [esp+28h+a3], 0FF9h
0x580D41: jmp     short loc_580D9B
0x580D43: cmp     ebp, 0Ch
0x580D46: jnz     short loc_580D52
0x580D48: mov     [esp+28h+a3], 0FFAh
0x580D50: jmp     short loc_580D9B
0x580D52: cmp     ebp, 0Eh
0x580D55: jnz     short loc_580D61
0x580D57: mov     [esp+28h+a3], 0FFCh
0x580D5F: jmp     short loc_580D9B
0x580D61: cmp     ebp, 0Dh
0x580D64: jnz     short loc_580D70
0x580D66: mov     [esp+28h+a3], 0FFBh
0x580D6E: jmp     short loc_580D9B
0x580D70: cmp     ebp, 10h
0x580D73: jnz     short loc_580D7F
0x580D75: mov     [esp+28h+a3], 0FFEh
0x580D7D: jmp     short loc_580D9B
0x580D7F: cmp     ebp, 0Fh
0x580D82: jnz     short loc_580D8E
0x580D84: mov     [esp+28h+a3], 0FFDh
0x580D8C: jmp     short loc_580D9B
0x580D8E: cmp     ebp, 5
0x580D91: jnz     short loc_580D9B
0x580D93: mov     [esp+28h+a3], 1001h
0x580D9B: mov     esi, [edi+88h]
0x580DA1: test    esi, esi
0x580DA3: jnz     short loc_580DB3
0x580DA5: mov     esi, [edi+98h]
0x580DAB: test    esi, esi
0x580DAD: jnz     short loc_580DB3
0x580DAF: mov     esi, [esp+28h+var_10]
0x580DB3: mov     ecx, esi
0x580DB5: call    sub_5893B0
0x580DBA: test    al, al
0x580DBC: jnz     short loc_580DCF
0x580DBE: mov     esi, [esi+10h]
0x580DC1: test    esi, esi
0x580DC3: jnz     short loc_580DB3
0x580DC5: pop     ebp
0x580DC6: pop     edi
0x580DC7: pop     esi
0x580DC8: pop     ebx
0x580DC9: add     esp, 18h
0x580DCC: retn    4
0x580DCF: test    esi, esi
0x580DD1: jz      loc_581378
0x580DD7: mov     ecx, [esp+28h+a3]
0x580DDB: lea     eax, [esp+28h+var_10]
0x580DDF: push    eax
0x580DE0: push    ecx
0x580DE1: mov     ecx, esi
0x580DE3: call    sub_58E3B0
0x580DE8: mov     edi, eax
0x580DEA: test    edi, edi
0x580DEC: mov     ebx, esi
0x580DEE: jnz     short loc_580E12
0x580DF0: test    ebx, ebx
0x580DF2: jz      short loc_580E12
0x580DF4: mov     ebx, [ebx+10h]
0x580DF7: test    ebx, ebx
0x580DF9: jz      short loc_580E0E
0x580DFB: mov     eax, [esp+28h+a3]
0x580DFF: lea     edx, [esp+28h+var_10]
0x580E03: push    edx
0x580E04: push    eax
0x580E05: mov     ecx, ebx
0x580E07: call    sub_58E3B0
0x580E0C: mov     edi, eax
0x580E0E: test    edi, edi
0x580E10: jz      short loc_580DF0
0x580E12: cmp     ebp, 0FFFFFFFEh
0x580E15: jnz     short loc_580E1E
0x580E17: mov     edi, esi
0x580E19: mov     ebp, 9
0x580E1E: test    edi, edi
0x580E20: jz      loc_580F41
0x580E26: mov     ecx, edi
0x580E28: call    sub_5893B0
0x580E2D: test    al, al
0x580E2F: jz      loc_580F41
0x580E35: push    0FC9h
0x580E3A: mov     ecx, edi
0x580E3C: call    Tile_GetFloat
0x580E41: fcomp   dword ptr ds:0A379B4h
0x580E47: fnstsw  ax
0x580E49: test    ah, 44h
0x580E4C: jp      loc_580F41
0x580E52: mov     eax, [esp+28h+var_10]
0x580E56: cmp     eax, 0FE1h
0x580E5B: jz      short loc_580E73
0x580E5D: cmp     eax, 0FDFh
0x580E62: jnz     loc_580F41
0x580E68: mov     eax, [esp+28h+var_14]
0x580E6C: or      dword ptr [eax+118h], 4
0x580E73: push    0FE5h
0x580E78: mov     ecx, edi
0x580E7A: call    Tile_GetFloat
0x580E7F: call    Double_To_SInt32
0x580E84: test    eax, eax
0x580E86: jz      short loc_580E91
0x580E88: push    eax; int
0x580E89: call    sub_57DE50
0x580E8E: add     esp, 4
0x580E91: push    0FE2h
0x580E96: mov     ecx, edi
0x580E98: call    Tile_GetFloat
0x580E9D: fadd    qword ptr ds:0A2F928h
0x580EA3: push    ecx
0x580EA4: mov     ecx, edi; this
0x580EA6: fstp    [esp+2Ch+a3]
0x580EAA: fld     [esp+2Ch+a3]
0x580EAE: fstp    [esp+2Ch+var_2C]; a3
0x580EB1: push    0FE3h; a2
0x580EB6: call    Tile_SetFloat
0x580EBB: fld1
0x580EBD: push    ecx
0x580EBE: fstp    [esp+2Ch+var_2C]; a3
0x580EC1: push    0FE1h; a2
0x580EC6: mov     ecx, edi; this
0x580EC8: call    Tile_SetFloat
0x580ECD: fldz
0x580ECF: push    ecx
0x580ED0: fstp    [esp+2Ch+var_2C]; a3
0x580ED3: push    0FE1h; a2
0x580ED8: mov     ecx, edi; this
0x580EDA: call    Tile_SetFloat
0x580EDF: mov     ecx, edi
0x580EE1: call    Tile_GetParentMenu
0x580EE6: mov     ebx, [eax]
0x580EE8: push    esi
0x580EE9: push    0FA8h
0x580EEE: mov     ecx, edi
0x580EF0: mov     [esp+30h+a3], eax
0x580EF4: add     ebx, 0Ch
0x580EF7: call    Tile_GetFloat
0x580EFC: call    Double_To_SInt32
0x580F01: mov     ecx, [esp+2Ch+a3]
0x580F05: mov     edx, [ebx]
0x580F07: push    eax
0x580F08: call    edx
0x580F0A: cmp     [esp+28h+var_10], 0FDFh
0x580F12: jnz     short loc_580F22
0x580F14: mov     eax, [esp+28h+var_14]
0x580F18: and     dword ptr [eax+118h], 0FFFBh
0x580F22: mov     esi, [esp+28h+var_18]
0x580F26: push    ebp
0x580F27: mov     ecx, esi
0x580F29: call    nullsub_returnvVoid_1arg
0x580F2E: push    6
0x580F30: mov     ecx, esi
0x580F32: call    nullsub_returnvVoid_1arg
0x580F37: pop     ebp
0x580F38: pop     edi
0x580F39: pop     esi
0x580F3A: pop     ebx
0x580F3B: add     esp, 18h
0x580F3E: retn    4
0x580F41: cmp     ebp, 9
0x580F44: jnz     loc_581378
0x580F4A: push    0FC9h
0x580F4F: mov     ecx, esi
0x580F51: call    Tile_GetFloat
0x580F56: fcomp   dword ptr ds:0A379B4h
0x580F5C: fnstsw  ax
0x580F5E: test    ah, 44h
0x580F61: jp      loc_581378
0x580F67: push    0FE5h
0x580F6C: mov     ecx, esi
0x580F6E: call    Tile_GetFloat
0x580F73: call    Double_To_SInt32
0x580F78: test    eax, eax
0x580F7A: jz      short loc_580F85
0x580F7C: push    eax; int
0x580F7D: call    sub_57DE50
0x580F82: add     esp, 4
0x580F85: push    0FE2h
0x580F8A: mov     ecx, esi
0x580F8C: call    Tile_GetFloat
0x580F91: fadd    qword ptr ds:0A2F928h
0x580F97: push    ecx
0x580F98: mov     ecx, esi; this
0x580F9A: fstp    [esp+2Ch+a3]
0x580F9E: fld     [esp+2Ch+a3]
0x580FA2: fstp    [esp+2Ch+var_2C]; a3
0x580FA5: push    0FE3h; a2
0x580FAA: call    Tile_SetFloat
0x580FAF: fld1
0x580FB1: push    ecx
0x580FB2: fstp    [esp+2Ch+var_2C]; a3
0x580FB5: push    0FE1h; a2
0x580FBA: mov     ecx, esi; this
0x580FBC: call    Tile_SetFloat
0x580FC1: fldz
0x580FC3: push    ecx
0x580FC4: fstp    [esp+2Ch+var_2C]; a3
0x580FC7: push    0FE1h; a2
0x580FCC: mov     ecx, esi; this
0x580FCE: call    Tile_SetFloat
0x580FD3: mov     ecx, esi
0x580FD5: call    Tile_GetParentMenu
0x580FDA: mov     ebx, eax
0x580FDC: mov     edi, [ebx]
0x580FDE: push    esi
0x580FDF: push    0FA8h
0x580FE4: mov     ecx, esi
0x580FE6: add     edi, 0Ch
0x580FE9: call    Tile_GetFloat
0x580FEE: call    Double_To_SInt32
0x580FF3: push    eax
0x580FF4: mov     eax, [edi]
0x580FF6: mov     ecx, ebx
0x580FF8: call    eax
0x580FFA: mov     ecx, [esp+28h+var_18]
0x580FFE: push    9
0x581000: call    nullsub_returnvVoid_1arg
0x581005: pop     ebp
0x581006: pop     edi
0x581007: pop     esi
0x581008: pop     ebx
0x581009: add     esp, 18h
0x58100C: retn    4
0x58100F: cmp     ebp, 1
0x581012: mov     byte ptr [edi+0B9h], 0
0x581019: mov     [esp+28h+var_18], 0FDDh
0x581021: mov     [esp+28h+a3], 0
0x581029: jnz     short loc_581035
0x58102B: mov     [esp+28h+a3], 0FF1h
0x581033: jmp     short loc_581060
0x581035: cmp     ebp, 2
0x581038: jnz     short loc_581044
0x58103A: mov     [esp+28h+a3], 0FF2h
0x581042: jmp     short loc_581060
0x581044: cmp     ebp, 4
0x581047: jnz     short loc_581053
0x581049: mov     [esp+28h+a3], 0FF3h
0x581051: jmp     short loc_581060
0x581053: cmp     ebp, 3
0x581056: jnz     short loc_581060
0x581058: mov     [esp+28h+a3], 0FF4h
0x581060: mov     esi, [edi+88h]
0x581066: test    esi, esi
0x581068: mov     [esp+28h+var_C], esi
0x58106C: jnz     loc_581151
0x581072: push    esi
0x581073: lea     ecx, [esp+2Ch+var_C]
0x581077: push    ecx
0x581078: mov     ecx, edi
0x58107A: mov     [esp+30h+var_C], 80000000h
0x581082: call    sub_57DA90
0x581087: push    0
0x581089: mov     esi, eax
0x58108B: push    0FDDh
0x581090: push    esi
0x581091: mov     ecx, edi
0x581093: call    sub_57F9F0
0x581098: test    esi, esi
0x58109A: jnz     loc_581378
0x5810A0: mov     eax, [esp+28h+a3]
0x5810A4: mov     ecx, [esp+28h+var_10]
0x5810A8: lea     edx, [esp+28h+var_18]
0x5810AC: push    edx
0x5810AD: push    eax
0x5810AE: call    sub_58E3B0
0x5810B3: mov     esi, eax
0x5810B5: test    esi, esi
0x5810B7: jz      loc_581378
0x5810BD: push    0FE5h
0x5810C2: mov     ecx, esi
0x5810C4: call    Tile_GetFloat
0x5810C9: call    Double_To_SInt32
0x5810CE: test    eax, eax
0x5810D0: jz      short loc_5810DB
0x5810D2: push    eax; int
0x5810D3: call    sub_57DE50
0x5810D8: add     esp, 4
0x5810DB: push    0FE2h
0x5810E0: mov     ecx, esi
0x5810E2: call    Tile_GetFloat
0x5810E7: fadd    qword ptr ds:0A2F928h
0x5810ED: push    ecx
0x5810EE: mov     ecx, esi; this
0x5810F0: fstp    [esp+2Ch+a3]
0x5810F4: fld     [esp+2Ch+a3]
0x5810F8: fstp    [esp+2Ch+var_2C]; a3
0x5810FB: push    0FE3h; a2
0x581100: call    Tile_SetFloat
0x581105: fld1
0x581107: push    ecx
0x581108: fstp    [esp+2Ch+var_2C]; a3
0x58110B: push    0FE1h; a2
0x581110: mov     ecx, esi; this
0x581112: call    Tile_SetFloat
0x581117: fldz
0x581119: push    ecx
0x58111A: fstp    [esp+2Ch+var_2C]; a3
0x58111D: push    0FE1h; a2
0x581122: mov     ecx, esi; this
0x581124: call    Tile_SetFloat
0x581129: mov     edi, [ebx]
0x58112B: push    esi
0x58112C: push    0FA8h
0x581131: mov     ecx, esi
0x581133: add     edi, 0Ch
0x581136: call    Tile_GetFloat
0x58113B: call    Double_To_SInt32
0x581140: mov     edx, [edi]
0x581142: push    eax
0x581143: mov     ecx, ebx
0x581145: call    edx
0x581147: pop     ebp
0x581148: pop     edi
0x581149: pop     esi
0x58114A: pop     ebx
0x58114B: add     esp, 18h
0x58114E: retn    4
0x581151: mov     ecx, [esp+28h+a3]
0x581155: lea     eax, [esp+28h+var_18]
0x581159: push    eax
0x58115A: push    ecx
0x58115B: mov     ecx, esi
0x58115D: call    sub_58E3B0
0x581162: xor     ebx, ebx
0x581164: push    esi
0x581165: lea     ecx, [esp+2Ch+var_8]
0x581169: mov     edi, eax
0x58116B: mov     [esp+2Ch+var_8], ebx
0x58116F: mov     [esp+2Ch+var_4], ebx
0x581173: call    BSSimpleList_PushFront
0x581178: cmp     edi, ebx
0x58117A: jz      loc_5812E9
0x581180: lea     eax, [esp+28h+var_8]
0x581184: cmp     [eax], edi
0x581186: jz      loc_58128A
0x58118C: mov     eax, [eax+4]
0x58118F: test    eax, eax
0x581191: jnz     short loc_581184
0x581193: push    0FA1h
0x581198: mov     ecx, edi
0x58119A: call    Tile_GetFloat
0x58119F: fcomp   dword ptr ds:0A2F948h
0x5811A5: fnstsw  ax
0x5811A7: test    ah, 44h
0x5811AA: jnp     short loc_5811E2
0x5811AC: push    0FC9h
0x5811B1: mov     ecx, edi
0x5811B3: call    Tile_GetFloat
0x5811B8: fcomp   dword ptr ds:0A379B4h
0x5811BE: fnstsw  ax
0x5811C0: test    ah, 44h
0x5811C3: jp      short loc_5811E2
0x5811C5: push    0FF0h
0x5811CA: mov     ecx, edi
0x5811CC: call    Tile_GetFloat
0x5811D1: fcomp   dword ptr ds:0A690E0h
0x5811D7: fnstsw  ax
0x5811D9: test    ah, 44h
0x5811DC: jp      loc_58128A
0x5811E2: push    edi
0x5811E3: lea     ecx, [esp+2Ch+var_8]
0x5811E7: call    BSSimpleList_PushFront
0x5811EC: push    0FF6h
0x5811F1: mov     ecx, edi
0x5811F3: call    Tile_GetFloat
0x5811F8: fcomp   qword ptr ds:0A690D8h
0x5811FE: fnstsw  ax
0x581200: test    ah, 44h
0x581203: jp      short loc_58126D
0x581205: mov     ebp, [edi+38h]
0x581208: xor     ebx, ebx
0x58120A: cmp     ebp, ebx
0x58120C: mov     [esp+28h+var_10], ebx
0x581210: jz      short loc_581261
0x581212: mov     esi, [ebp+8]
0x581215: lea     eax, [ebp+8]
0x581218: mov     ebp, [ebp+4]
0x58121B: mov     ecx, esi
0x58121D: call    sub_5893B0
0x581222: test    al, al
0x581224: jz      short loc_581251
0x581226: push    0FF0h
0x58122B: mov     ecx, esi
0x58122D: call    sub_588B50
0x581232: test    eax, eax
0x581234: jz      short loc_581251
0x581236: push    0FF0h
0x58123B: mov     ecx, esi
0x58123D: call    Tile_GetFloat
0x581242: call    Double_To_SInt32
0x581247: cmp     eax, ebx
0x581249: jle     short loc_581251
0x58124B: mov     ebx, eax
0x58124D: mov     [esp+28h+var_10], esi
0x581251: test    ebp, ebp
0x581253: jnz     short loc_581212
0x581255: cmp     [esp+28h+var_10], ebp
0x581259: jz      short loc_581261
0x58125B: mov     edi, [esp+28h+var_10]
0x58125F: jmp     short loc_581280
0x581261: mov     eax, [esp+28h+a3]
0x581265: lea     edx, [esp+28h+var_18]
0x581269: push    edx
0x58126A: push    eax
0x58126B: jmp     short loc_581277
0x58126D: mov     edx, [esp+28h+a3]
0x581271: lea     ecx, [esp+28h+var_18]
0x581275: push    ecx
0x581276: push    edx
0x581277: mov     ecx, edi
0x581279: call    sub_58E3B0
0x58127E: mov     edi, eax
0x581280: test    edi, edi
0x581282: jnz     loc_581180
0x581288: jmp     short loc_5812E9
0x58128A: test    edi, edi
0x58128C: jz      short loc_5812E9
0x58128E: push    edi
0x58128F: lea     ecx, [esp+2Ch+var_8]
0x581293: call    sub_446C30
0x581298: test    al, al
0x58129A: jz      short loc_5812E9
0x58129C: push    0FA1h
0x5812A1: mov     ecx, edi
0x5812A3: call    Tile_GetFloat
0x5812A8: fcomp   dword ptr ds:0A2F948h
0x5812AE: fnstsw  ax
0x5812B0: test    ah, 44h
0x5812B3: jnp     short loc_5812E7
0x5812B5: push    0FC9h
0x5812BA: mov     ecx, edi
0x5812BC: call    Tile_GetFloat
0x5812C1: fcomp   dword ptr ds:0A379B4h
0x5812C7: fnstsw  ax
0x5812C9: test    ah, 44h
0x5812CC: jp      short loc_5812E7
0x5812CE: push    0FF0h
0x5812D3: mov     ecx, edi
0x5812D5: call    Tile_GetFloat
0x5812DA: fcomp   dword ptr ds:0A690E0h
0x5812E0: fnstsw  ax
0x5812E2: test    ah, 44h
0x5812E5: jp      short loc_5812E9
0x5812E7: xor     edi, edi
0x5812E9: lea     ecx, [esp+28h+var_8]
0x5812ED: call    BSSimpleList_Clear
0x5812F2: test    edi, edi
0x5812F4: jz      short loc_581360
0x5812F6: cmp     edi, [esp+28h+var_C]
0x5812FA: jz      short loc_581342
0x5812FC: cmp     [esp+28h+var_18], 0FDDh
0x581304: jnz     short loc_581342
0x581306: mov     eax, ds:0B33398h
0x58130B: mov     ecx, [eax+24h]
0x58130E: test    ecx, ecx
0x581310: jz      short loc_581342
0x581312: push    1
0x581314: push    121h
0x581319: push    offset aUimenufocus; "UIMenuFocus"
0x58131E: call    PlaySound???
0x581323: mov     esi, eax
0x581325: test    esi, esi
0x581327: jz      short loc_581342
0x581329: push    0
0x58132B: mov     ecx, esi
0x58132D: call    sub_6B7190
0x581332: mov     ecx, esi; this
0x581334: call    sub_6B73E0
0x581339: push    esi
0x58133A: call    FormHeapFree
0x58133F: add     esp, 4
0x581342: mov     ecx, [esp+28h+a3]
0x581346: mov     edx, [esp+28h+var_18]
0x58134A: push    ecx
0x58134B: mov     ecx, [esp+2Ch+var_14]
0x58134F: push    edx
0x581350: push    edi
0x581351: call    sub_57F9F0
0x581356: pop     ebp
0x581357: pop     edi
0x581358: pop     esi
0x581359: pop     ebx
0x58135A: add     esp, 18h
0x58135D: retn    4
0x581360: mov     eax, [esp+28h+a3]
0x581364: mov     ecx, [esp+28h+var_18]
0x581368: mov     edx, [esp+28h+var_C]
0x58136C: push    eax
0x58136D: push    ecx
0x58136E: mov     ecx, [esp+30h+var_14]
0x581372: push    edx
0x581373: call    sub_57F9F0
0x581378: pop     ebp
0x581379: pop     edi
0x58137A: pop     esi
0x58137B: pop     ebx
0x58137C: add     esp, 18h
0x58137F: retn    4
