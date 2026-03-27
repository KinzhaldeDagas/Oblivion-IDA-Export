0x464AB0: push    0FFFFFFFFh
0x464AB2: push    offset SEH_464AB0
0x464AB7: mov     eax, large fs:0
0x464ABD: push    eax
0x464ABE: sub     esp, 50h
0x464AC1: push    ebx
0x464AC2: push    ebp
0x464AC3: push    esi
0x464AC4: push    edi
0x464AC5: mov     eax, ds:0B30AACh
0x464ACA: xor     eax, esp
0x464ACC: push    eax
0x464ACD: lea     eax, [esp+70h+var_C]
0x464AD1: mov     large fs:0, eax
0x464AD7: mov     esi, ecx
0x464AD9: mov     eax, [esi+18h]
0x464ADC: mov     edi, [esp+70h+arg_0]
0x464AE0: shr     eax, 9
0x464AE3: test    al, 1
0x464AE5: lea     ebx, [esi+70h]
0x464AE8: lea     ebp, [esi+71h]
0x464AEB: mov     byte ptr [ebx], 0
0x464AEE: mov     byte ptr [ebp+0], 7Dh ; '}'
0x464AF2: mov     byte ptr [esi+7Ch], 7Dh ; '}'
0x464AF6: jz      short loc_464B01
0x464AF8: add     dword ptr [esi+90h], 0Ch
0x464AFF: jmp     short loc_464B20
0x464B01: mov     edx, [edi+8]
0x464B04: push    1
0x464B06: lea     ecx, [esp+74h+var_44]
0x464B0A: push    ecx
0x464B0B: push    0Ch
0x464B0D: push    offset aTes4savegame; "TES4SAVEGAME"
0x464B12: push    edi
0x464B13: mov     [esp+84h+var_44], 1
0x464B1B: call    edx
0x464B1D: add     esp, 14h
0x464B20: mov     eax, [esi+18h]
0x464B23: shr     eax, 9
0x464B26: test    al, 1
0x464B28: jz      short loc_464B37
0x464B2A: mov     eax, 1
0x464B2F: add     [esi+90h], eax
0x464B35: jmp     short loc_464B57
0x464B37: mov     edx, [edi+8]
0x464B3A: push    1
0x464B3C: lea     ecx, [esp+74h+var_44]
0x464B40: push    ecx
0x464B41: push    1
0x464B43: push    ebx
0x464B44: push    edi
0x464B45: mov     [esp+84h+var_44], 1
0x464B4D: call    edx
0x464B4F: add     esp, 14h
0x464B52: mov     eax, 1
0x464B57: mov     ecx, [esi+18h]
0x464B5A: shr     ecx, 9
0x464B5D: test    cl, 1
0x464B60: jz      short loc_464B6A
0x464B62: add     [esi+90h], eax
0x464B68: jmp     short loc_464B7F
0x464B6A: push    eax
0x464B6B: lea     edx, [esp+74h+var_44]
0x464B6F: push    edx
0x464B70: push    eax
0x464B71: mov     [esp+7Ch+var_44], eax
0x464B75: mov     eax, [edi+8]
0x464B78: push    ebp
0x464B79: push    edi
0x464B7A: call    eax
0x464B7C: add     esp, 14h
0x464B7F: cmp     dword ptr [esi+0A4h], 0
0x464B86: lea     ebx, [esi+0A4h]
0x464B8C: jnz     short loc_464BA1
0x464B8E: lea     ecx, [esi+94h]
0x464B94: push    ecx; lpSystemTime
0x464B95: call    dword ptr ds:0A28108h
0x464B9B: movzx   edx, byte ptr [ebp+0]
0x464B9F: mov     [ebx], edx
0x464BA1: mov     eax, [esi+18h]
0x464BA4: shr     eax, 9
0x464BA7: test    al, 1
0x464BA9: jz      short loc_464BB4
0x464BAB: add     dword ptr [esi+90h], 10h
0x464BB2: jmp     short loc_464BD5
0x464BB4: mov     eax, [edi+8]
0x464BB7: push    1
0x464BB9: lea     ecx, [esp+74h+var_44]
0x464BBD: push    ecx
0x464BBE: push    10h
0x464BC0: lea     edx, [esi+94h]
0x464BC6: push    edx
0x464BC7: push    edi
0x464BC8: mov     [esp+84h+var_44], 1
0x464BD0: call    eax
0x464BD2: add     esp, 14h
0x464BD5: mov     ecx, [esi+18h]
0x464BD8: shr     ecx, 9
0x464BDB: test    cl, 1
0x464BDE: jz      short loc_464BE9
0x464BE0: add     dword ptr [esi+90h], 4
0x464BE7: jmp     short loc_464C04
0x464BE9: mov     eax, [edi+8]
0x464BEC: push    1
0x464BEE: lea     edx, [esp+74h+var_44]
0x464BF2: push    edx
0x464BF3: push    4
0x464BF5: push    ebx
0x464BF6: push    edi
0x464BF7: mov     [esp+84h+var_44], 1
0x464BFF: call    eax
0x464C01: add     esp, 14h
0x464C04: mov     ecx, ds:0B333C4h; this
0x464C0A: call    TESObjectREFR_GetName
0x464C0F: mov     [esp+70h+var_34], eax
0x464C13: lea     edx, [eax+1]
0x464C16: mov     cl, [eax]
0x464C18: add     eax, 1
0x464C1B: test    cl, cl
0x464C1D: jnz     short loc_464C16
0x464C1F: mov     ecx, ds:0B333C4h
0x464C25: sub     eax, edx
0x464C27: add     al, 1
0x464C29: mov     [esp+70h+var_59], al
0x464C2D: call    Actor_GetLevel
0x464C32: movzx   ecx, ax
0x464C35: xor     ebx, ebx
0x464C37: mov     [esp+70h+var_30], ecx
0x464C3B: mov     [esp+70h+var_24], ebx
0x464C3F: mov     [esp+70h+var_20], bx
0x464C44: mov     [esp+70h+var_1E], bx
0x464C49: mov     ecx, ds:0B333C4h
0x464C4F: lea     edx, [esp+70h+var_24]
0x464C53: push    edx
0x464C54: mov     [esp+74h+var_4], ebx
0x464C58: call    GetTeleportCellName
0x464C5D: mov     eax, [esp+70h+var_24]
0x464C61: cmp     eax, ebx
0x464C63: mov     [esp+70h+var_54], eax
0x464C67: jnz     short loc_464C84
0x464C69: mov     ecx, ds:0B333C4h; this
0x464C6F: call    TESObjectREFR_GetParentCell
0x464C74: mov     edx, [eax]
0x464C76: mov     ecx, eax
0x464C78: mov     eax, [edx+0D4h]
0x464C7E: call    eax
0x464C80: mov     [esp+70h+var_54], eax
0x464C84: cmp     eax, ebx
0x464C86: mov     byte ptr [esp+70h+arg_0], 0
0x464C8B: jz      short loc_464CA1
0x464C8D: lea     edx, [eax+1]
0x464C90: mov     cl, [eax]
0x464C92: add     eax, 1
0x464C95: test    cl, cl
0x464C97: jnz     short loc_464C90
0x464C99: sub     eax, edx
0x464C9B: add     al, 1
0x464C9D: mov     byte ptr [esp+70h+arg_0], al
0x464CA1: mov     ecx, offset TimeGlobals
0x464CA6: call    TimeGlobals_GetGameHour
0x464CAB: fdiv    qword ptr ds:0A2F920h
0x464CB1: mov     ecx, offset TimeGlobals
0x464CB6: fstp    [esp+70h+var_3C]
0x464CBA: call    TimeGlobals_GetGameDaysPassed
0x464CBF: test    eax, eax
0x464CC1: mov     [esp+70h+var_2C], eax
0x464CC5: fild    [esp+70h+var_2C]
0x464CC9: jge     short loc_464CD1
0x464CCB: fadd    dword ptr ds:0A2FC78h
0x464CD1: fadd    [esp+70h+var_3C]
0x464CD5: lea     ecx, [esp+70h+SystemTime]
0x464CD9: push    ecx; lpSystemTime
0x464CDA: fstp    [esp+74h+var_2C]
0x464CDE: call    dword ptr ds:0A28174h
0x464CE4: mov     edx, [esi+18h]
0x464CE7: mov     eax, 100h
0x464CEC: shr     edx, 9
0x464CEF: test    dl, 1
0x464CF2: mov     [esp+70h+var_58], ebx
0x464CF6: mov     [esp+70h+var_4C], eax
0x464CFA: mov     [esp+70h+var_48], eax
0x464CFE: mov     [esp+70h+var_50], ebx
0x464D02: mov     [esp+70h+var_44], ebx
0x464D06: jnz     short loc_464D65
0x464D08: push    3
0x464D0A: call    nullsub_returnTrue_0arg
0x464D0F: mov     ecx, ds:0B33A10h
0x464D15: add     esp, 4
0x464D18: call    sub_432890
0x464D1D: lea     eax, [esp+70h+var_48]
0x464D21: push    eax
0x464D22: lea     ecx, [esp+74h+var_4C]
0x464D26: push    ecx
0x464D27: call    Screenshot_RenderTexture
0x464D2C: mov     ecx, ds:0B33A10h
0x464D32: mov     ebp, eax
0x464D34: add     esp, 8
0x464D37: mov     [esp+70h+var_50], ebp
0x464D3B: call    sub_432860
0x464D40: push    2
0x464D42: call    nullsub_returnTrue_0arg
0x464D47: add     esp, 4
0x464D4A: cmp     ebp, ebx
0x464D4C: jz      short loc_464D91
0x464D4E: mov     edx, ebp
0x464D50: mov     eax, [edx+5Ch]
0x464D53: mov     ecx, [eax+4]
0x464D56: sub     ecx, [eax]
0x464D58: mov     [esp+70h+var_44], ecx
0x464D5C: add     ecx, 8
0x464D5F: mov     [esp+70h+var_58], ecx
0x464D63: jmp     short loc_464D91
0x464D65: fild    dword ptr ds:0B06C50h
0x464D6B: fidiv   dword ptr ds:0B06C4Ch
0x464D71: fstp    [esp+70h+var_58]
0x464D75: fld     [esp+70h+var_58]
0x464D79: fmul    qword ptr ds:0A3B1B8h
0x464D7F: call    Double_To_SInt32
0x464D84: lea     eax, [eax+eax*2]
0x464D87: shl     eax, 8
0x464D8A: add     eax, 8
0x464D8D: mov     [esp+70h+var_58], eax
0x464D91: mov     ebx, ds:0A280D0h
0x464D97: mov     ebp, ds:0B333C4h
0x464D9D: call    ebx ; GetTickCount
0x464D9F: sub     eax, [ebp+710h]
0x464DA5: add     [ebp+714h], eax
0x464DAB: call    ebx ; GetTickCount
0x464DAD: mov     ecx, [ebp+714h]
0x464DB3: mov     [ebp+710h], eax
0x464DB9: movzx   edx, byte ptr [esp+70h+arg_0]
0x464DBE: add     edx, [esp+70h+var_58]
0x464DC2: movzx   eax, [esp+70h+var_59]
0x464DC7: mov     [esp+70h+var_28], ecx
0x464DCB: lea     ecx, [eax+edx+24h]
0x464DCF: mov     edx, [esi+18h]
0x464DD2: shr     edx, 9
0x464DD5: test    dl, 1
0x464DD8: mov     [esp+70h+var_40], ecx
0x464DDC: mov     ebp, 1
0x464DE1: jz      short loc_464DEC
0x464DE3: add     dword ptr [esi+90h], 4
0x464DEA: jmp     short loc_464E06
0x464DEC: mov     edx, [edi+8]
0x464DEF: push    ebp
0x464DF0: lea     eax, [esp+74h+var_3C]
0x464DF4: push    eax
0x464DF5: push    4
0x464DF7: lea     ecx, [esp+7Ch+var_40]
0x464DFB: push    ecx
0x464DFC: push    edi
0x464DFD: mov     dword ptr [esp+84h+var_3C], ebp
0x464E01: call    edx
0x464E03: add     esp, 14h
0x464E06: mov     eax, [esi+18h]
0x464E09: shr     eax, 9
0x464E0C: test    al, 1
0x464E0E: jnz     loc_464E99
0x464E14: mov     ebx, [esp+70h+Str]
0x464E18: test    ebx, ebx
0x464E1A: jz      short loc_464E40
0x464E1C: push    offset aQuicksave; "quicksave"
0x464E21: push    ebx; Str
0x464E22: call    _strstr
0x464E27: add     esp, 8
0x464E2A: test    eax, eax
0x464E2C: jnz     short loc_464E99
0x464E2E: push    offset aAutosave; "autosave"
0x464E33: push    ebx; Str
0x464E34: call    _strstr
0x464E39: add     esp, 8
0x464E3C: test    eax, eax
0x464E3E: jnz     short loc_464E99
0x464E40: cmp     dword ptr [esi+88h], 0
0x464E47: jnz     short loc_464E50
0x464E49: mov     ecx, esi
0x464E4B: call    sub_464320
0x464E50: mov     edx, [esi+18h]
0x464E53: mov     ecx, [esi+88h]
0x464E59: shr     edx, 9
0x464E5C: test    dl, 1
0x464E5F: mov     dword ptr [esp+70h+var_3C], ecx
0x464E63: jz      short loc_464E74
0x464E65: add     dword ptr [esi+90h], 4
0x464E6C: add     [esi+88h], ebp
0x464E72: jmp     short loc_464ED1
0x464E74: mov     edx, [edi+8]
0x464E77: push    ebp
0x464E78: lea     eax, [esp+74h+Str]
0x464E7C: push    eax
0x464E7D: push    4
0x464E7F: lea     ecx, [esp+7Ch+var_3C]
0x464E83: push    ecx
0x464E84: push    edi
0x464E85: mov     [esp+84h+Str], ebp
0x464E8C: call    edx
0x464E8E: add     esp, 14h
0x464E91: add     [esi+88h], ebp
0x464E97: jmp     short loc_464ED1
0x464E99: mov     eax, [esi+18h]
0x464E9C: shr     eax, 9
0x464E9F: test    al, 1
0x464EA1: mov     dword ptr [esp+70h+var_3C], 0
0x464EA9: jz      short loc_464EB4
0x464EAB: add     dword ptr [esi+90h], 4
0x464EB2: jmp     short loc_464ED1
0x464EB4: mov     eax, [edi+8]
0x464EB7: push    ebp
0x464EB8: lea     ecx, [esp+74h+Str]
0x464EBC: push    ecx
0x464EBD: push    4
0x464EBF: lea     edx, [esp+7Ch+var_3C]
0x464EC3: push    edx
0x464EC4: push    edi
0x464EC5: mov     [esp+84h+Str], ebp
0x464ECC: call    eax
0x464ECE: add     esp, 14h
0x464ED1: mov     ecx, [esi+18h]
0x464ED4: shr     ecx, 9
0x464ED7: test    cl, 1
0x464EDA: jz      short loc_464EE4
0x464EDC: add     [esi+90h], ebp
0x464EE2: jmp     short loc_464F00
0x464EE4: mov     ecx, [edi+8]
0x464EE7: push    ebp
0x464EE8: lea     edx, [esp+74h+Str]
0x464EEC: push    edx
0x464EED: push    ebp
0x464EEE: lea     eax, [esp+7Ch+var_59]
0x464EF2: push    eax
0x464EF3: push    edi
0x464EF4: mov     [esp+84h+Str], ebp
0x464EFB: call    ecx
0x464EFD: add     esp, 14h
0x464F00: mov     edx, [esi+18h]
0x464F03: movzx   eax, [esp+70h+var_59]
0x464F08: shr     edx, 9
0x464F0B: test    dl, 1
0x464F0E: jz      short loc_464F18
0x464F10: add     [esi+90h], eax
0x464F16: jmp     short loc_464F34
0x464F18: mov     edx, [esp+70h+var_34]
0x464F1C: push    ebp
0x464F1D: lea     ecx, [esp+74h+Str]
0x464F21: push    ecx
0x464F22: push    eax
0x464F23: mov     eax, [edi+8]
0x464F26: push    edx
0x464F27: push    edi
0x464F28: mov     [esp+84h+Str], ebp
0x464F2F: call    eax
0x464F31: add     esp, 14h
0x464F34: mov     ecx, [esi+18h]
0x464F37: shr     ecx, 9
0x464F3A: test    cl, 1
0x464F3D: jz      short loc_464F48
0x464F3F: add     dword ptr [esi+90h], 2
0x464F46: jmp     short loc_464F65
0x464F48: mov     ecx, [edi+8]
0x464F4B: push    ebp
0x464F4C: lea     edx, [esp+74h+Str]
0x464F50: push    edx
0x464F51: push    2
0x464F53: lea     eax, [esp+7Ch+var_30]
0x464F57: push    eax
0x464F58: push    edi
0x464F59: mov     [esp+84h+Str], ebp
0x464F60: call    ecx
0x464F62: add     esp, 14h
0x464F65: mov     edx, [esi+18h]
0x464F68: shr     edx, 9
0x464F6B: test    dl, 1
0x464F6E: jz      short loc_464F78
0x464F70: add     [esi+90h], ebp
0x464F76: jmp     short loc_464F97
0x464F78: mov     edx, [edi+8]
0x464F7B: push    ebp
0x464F7C: lea     eax, [esp+74h+Str]
0x464F80: push    eax
0x464F81: push    ebp
0x464F82: lea     ecx, [esp+7Ch+arg_0]
0x464F89: push    ecx
0x464F8A: push    edi
0x464F8B: mov     [esp+84h+Str], ebp
0x464F92: call    edx
0x464F94: add     esp, 14h
0x464F97: mov     ecx, [esp+70h+var_54]
0x464F9B: test    ecx, ecx
0x464F9D: jz      short loc_464FCF
0x464F9F: mov     edx, [esi+18h]
0x464FA2: movzx   eax, byte ptr [esp+70h+arg_0]
0x464FA7: shr     edx, 9
0x464FAA: test    dl, 1
0x464FAD: jz      short loc_464FB7
0x464FAF: add     [esi+90h], eax
0x464FB5: jmp     short loc_464FCF
0x464FB7: push    ebp
0x464FB8: lea     edx, [esp+74h+Str]
0x464FBC: push    edx
0x464FBD: push    eax
0x464FBE: mov     eax, [edi+8]
0x464FC1: push    ecx
0x464FC2: push    edi
0x464FC3: mov     [esp+84h+Str], ebp
0x464FCA: call    eax
0x464FCC: add     esp, 14h
0x464FCF: mov     ecx, [esi+18h]
0x464FD2: shr     ecx, 9
0x464FD5: test    cl, 1
0x464FD8: jz      short loc_464FE3
0x464FDA: add     dword ptr [esi+90h], 4
0x464FE1: jmp     short loc_465000
0x464FE3: mov     ecx, [edi+8]
0x464FE6: push    ebp
0x464FE7: lea     edx, [esp+74h+Str]
0x464FEB: push    edx
0x464FEC: push    4
0x464FEE: lea     eax, [esp+7Ch+var_2C]
0x464FF2: push    eax
0x464FF3: push    edi
0x464FF4: mov     [esp+84h+Str], ebp
0x464FFB: call    ecx
0x464FFD: add     esp, 14h
0x465000: mov     edx, [esi+18h]
0x465003: shr     edx, 9
0x465006: test    dl, 1
0x465009: jz      short loc_465014
0x46500B: add     dword ptr [esi+90h], 4
0x465012: jmp     short loc_465031
0x465014: mov     edx, [edi+8]
0x465017: push    ebp
0x465018: lea     eax, [esp+74h+Str]
0x46501C: push    eax
0x46501D: push    4
0x46501F: lea     ecx, [esp+7Ch+var_28]
0x465023: push    ecx
0x465024: push    edi
0x465025: mov     [esp+84h+Str], ebp
0x46502C: call    edx
0x46502E: add     esp, 14h
0x465031: mov     eax, [esi+18h]
0x465034: shr     eax, 9
0x465037: test    al, 1
0x465039: jz      short loc_465044
0x46503B: add     dword ptr [esi+90h], 10h
0x465042: jmp     short loc_465061
0x465044: mov     eax, [edi+8]
0x465047: push    ebp
0x465048: lea     ecx, [esp+74h+Str]
0x46504C: push    ecx
0x46504D: push    10h
0x46504F: lea     edx, [esp+7Ch+SystemTime]
0x465053: push    edx
0x465054: push    edi
0x465055: mov     [esp+84h+Str], ebp
0x46505C: call    eax
0x46505E: add     esp, 14h
0x465061: mov     ecx, [esi+18h]
0x465064: shr     ecx, 9
0x465067: test    cl, 1
0x46506A: jz      short loc_465075
0x46506C: add     dword ptr [esi+90h], 4
0x465073: jmp     short loc_465092
0x465075: mov     ecx, [edi+8]
0x465078: push    ebp
0x465079: lea     edx, [esp+74h+Str]
0x46507D: push    edx
0x46507E: push    4
0x465080: lea     eax, [esp+7Ch+var_58]
0x465084: push    eax
0x465085: push    edi
0x465086: mov     [esp+84h+Str], ebp
0x46508D: call    ecx
0x46508F: add     esp, 14h
0x465092: mov     edx, [esi+18h]
0x465095: shr     edx, 9
0x465098: test    dl, 1
0x46509B: jnz     short loc_4650E4
0x46509D: mov     ebx, [esp+70h+var_50]
0x4650A1: test    ebx, ebx
0x4650A3: jz      short loc_4650EE
0x4650A5: push    4
0x4650A7: lea     eax, [esp+74h+var_4C]
0x4650AB: push    eax
0x4650AC: push    edi
0x4650AD: mov     ecx, esi
0x4650AF: call    sub_45BAB0
0x4650B4: push    4
0x4650B6: lea     ecx, [esp+74h+var_48]
0x4650BA: push    ecx
0x4650BB: push    edi
0x4650BC: mov     ecx, esi
0x4650BE: call    sub_45BAB0
0x4650C3: mov     eax, [ebx+5Ch]
0x4650C6: mov     ecx, [eax]
0x4650C8: mov     edx, [esp+70h+var_44]
0x4650CC: add     ecx, [ebx+50h]
0x4650CF: push    edx
0x4650D0: push    ecx
0x4650D1: push    edi
0x4650D2: mov     ecx, esi
0x4650D4: call    sub_45BAB0
0x4650D9: mov     edx, [ebx]
0x4650DB: mov     eax, [edx]
0x4650DD: push    ebp
0x4650DE: mov     ecx, ebx
0x4650E0: call    eax
0x4650E2: jmp     short loc_4650EE
0x4650E4: mov     ecx, [esp+70h+var_58]
0x4650E8: add     [esi+90h], ecx
0x4650EE: mov     esi, [esi+40h]
0x4650F1: test    esi, esi
0x4650F3: jz      short loc_465106
0x4650F5: mov     edx, [esp+70h+var_40]
0x4650F9: push    offset aSaveGameHeader; "Save Game Header"
0x4650FE: push    edx
0x4650FF: mov     ecx, esi
0x465101: call    sub_4531B0
0x465106: mov     eax, [esp+70h+var_24]
0x46510A: push    eax
0x46510B: call    FormHeapFree
0x465110: add     esp, 4
0x465113: mov     ecx, [esp+70h+var_C]
0x465117: mov     large fs:0, ecx
0x46511E: pop     ecx
0x46511F: pop     edi
0x465120: pop     esi
0x465121: pop     ebp
0x465122: pop     ebx
0x465123: add     esp, 5Ch
0x465126: retn    8
