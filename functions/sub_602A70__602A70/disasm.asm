0x602A70: push    0FFFFFFFFh
0x602A72: push    offset SEH_602A70
0x602A77: mov     eax, large fs:0
0x602A7D: push    eax
0x602A7E: sub     esp, 0Ch
0x602A81: push    ebx
0x602A82: push    ebp
0x602A83: push    esi
0x602A84: push    edi; int
0x602A85: mov     eax, ds:0B30AACh
0x602A8A: xor     eax, esp
0x602A8C: push    eax; int
0x602A8D: lea     eax, [esp+2Ch+var_C]
0x602A91: mov     large fs:0, eax
0x602A97: mov     esi, ecx
0x602A99: mov     ecx, [esi+58h]
0x602A9C: test    ecx, ecx
0x602A9E: jz      short loc_602AAB
0x602AA0: mov     eax, [ecx]
0x602AA2: mov     edx, [eax+318h]
0x602AA8: push    esi
0x602AA9: call    edx
0x602AAB: mov     eax, [esp+2Ch+arg_4]
0x602AAF: mov     ecx, [esp+2Ch+arg_0]
0x602AB3: push    eax; int
0x602AB4: push    ecx; int
0x602AB5: mov     ecx, esi; int
0x602AB7: call    MobilObject_PostLinkModifiedForm
0x602ABC: mov     edx, [esi]
0x602ABE: mov     eax, [edx+170h]
0x602AC4: mov     ecx, esi
0x602AC6: call    eax
0x602AC8: cmp     byte ptr [eax+4], 24h ; '$'
0x602ACC: jnz     loc_602B8E
0x602AD2: mov     edx, [esi]
0x602AD4: mov     eax, [edx+170h]
0x602ADA: mov     ecx, esi
0x602ADC: call    eax
0x602ADE: test    eax, eax
0x602AE0: jz      loc_602B8E
0x602AE6: mov     al, [eax+104h]
0x602AEC: cmp     al, 4
0x602AEE: jnz     loc_602B8E
0x602AF4: mov     edx, [esi]
0x602AF6: mov     eax, [edx+388h]
0x602AFC: mov     ecx, esi
0x602AFE: call    eax
0x602B00: mov     edi, eax
0x602B02: test    edi, edi
0x602B04: jz      loc_602B8E
0x602B0A: mov     eax, [edi+8]
0x602B0D: mov     ecx, eax
0x602B0F: shr     ecx, 0Bh
0x602B12: test    cl, 1
0x602B15: jnz     short loc_602B72
0x602B17: shr     eax, 5
0x602B1A: test    al, 1
0x602B1C: jnz     short loc_602B72
0x602B1E: mov     eax, [esi+8]
0x602B21: mov     edx, eax
0x602B23: shr     edx, 0Bh
0x602B26: test    dl, 1
0x602B29: jnz     short loc_602B72
0x602B2B: shr     eax, 5
0x602B2E: test    al, 1
0x602B30: jnz     short loc_602B72
0x602B32: mov     eax, [edi]
0x602B34: mov     edx, [eax+18Ch]
0x602B3A: mov     ecx, edi
0x602B3C: call    edx
0x602B3E: mov     ebx, eax
0x602B40: cmp     ebx, 3
0x602B43: jz      short loc_602B4F
0x602B45: cmp     ebx, 4
0x602B48: jz      short loc_602B4F
0x602B4A: cmp     ebx, 5
0x602B4D: jnz     short loc_602B57
0x602B4F: push    esi
0x602B50: mov     ecx, edi
0x602B52: call    sub_602050
0x602B57: mov     edi, [edi+58h]
0x602B5A: test    edi, edi
0x602B5C: jz      short loc_602B8E
0x602B5E: mov     eax, [edi]
0x602B60: mov     edx, [eax+370h]
0x602B66: push    7Fh
0x602B68: push    0
0x602B6A: push    ebx
0x602B6B: push    esi
0x602B6C: mov     ecx, edi
0x602B6E: call    edx
0x602B70: jmp     short loc_602B8E
0x602B72: mov     eax, [edi]
0x602B74: mov     edx, [eax+384h]
0x602B7A: push    0
0x602B7C: mov     ecx, edi
0x602B7E: call    edx
0x602B80: mov     eax, [esi]
0x602B82: mov     edx, [eax+38Ch]
0x602B88: push    0
0x602B8A: mov     ecx, esi
0x602B8C: call    edx
0x602B8E: mov     ecx, [esi+58h]
0x602B91: test    ecx, ecx
0x602B93: jz      loc_602C80
0x602B99: mov     eax, [ecx]
0x602B9B: mov     edx, [eax+304h]
0x602BA1: call    edx
0x602BA3: mov     ecx, esi
0x602BA5: push    eax
0x602BA6: call    sub_5EF9B0
0x602BAB: mov     ecx, esi; this
0x602BAD: mov     ebx, eax
0x602BAF: call    MobileObject_GetCharProxy
0x602BB4: test    ebx, ebx
0x602BB6: jz      loc_602C80
0x602BBC: test    eax, eax
0x602BBE: jz      short loc_602BE2
0x602BC0: mov     eax, [eax+8]
0x602BC3: test    eax, eax
0x602BC5: jz      short loc_602BD0
0x602BC7: mov     ecx, eax
0x602BC9: call    sub_8AC0C0
0x602BCE: jmp     short loc_602BD2
0x602BD0: xor     eax, eax
0x602BD2: mov     eax, [eax+8]
0x602BD5: test    eax, eax
0x602BD7: jz      short loc_602BE2
0x602BD9: cmp     dword ptr [eax+2B0h], 0
0x602BE0: jnz     short loc_602C2D
0x602BE2: mov     ecx, esi; this
0x602BE4: call    TESObjectREFR_GetParentCell
0x602BE9: test    eax, eax
0x602BEB: jz      short loc_602C2D
0x602BED: mov     ecx, esi; this
0x602BEF: call    TESObjectREFR_GetParentCell
0x602BF4: mov     edi, eax
0x602BF6: mov     ecx, edi; this
0x602BF8: call    TESObjectCELL_IsInterior
0x602BFD: test    al, al
0x602BFF: jz      short loc_602C0B
0x602C01: lea     ecx, [edi+28h]
0x602C04: call    sub_424180
0x602C09: jmp     short loc_602C10
0x602C0B: mov     eax, ds:0B35C24h
0x602C10: test    eax, eax
0x602C12: jz      short loc_602C2D
0x602C14: mov     eax, [ebx+10h]
0x602C17: push    eax
0x602C18: mov     ecx, esi; this
0x602C1A: call    TESObjectREFR_GetParentCell
0x602C1F: mov     ecx, eax
0x602C21: call    sub_4440C0
0x602C26: mov     ecx, eax
0x602C28: call    sub_532C80
0x602C2D: mov     ecx, [esi+58h]
0x602C30: mov     eax, [ecx]
0x602C32: mov     edx, [eax+124h]
0x602C38: push    0
0x602C3A: call    edx
0x602C3C: test    eax, eax
0x602C3E: jnz     short loc_602C80
0x602C40: mov     eax, [esi]
0x602C42: mov     edx, [eax+27Ch]
0x602C48: mov     ecx, esi
0x602C4A: call    edx
0x602C4C: test    eax, eax
0x602C4E: jnz     short loc_602C80
0x602C50: mov     ecx, [esi+58h]
0x602C53: mov     eax, [ecx]
0x602C55: mov     edx, [eax+300h]
0x602C5B: push    1
0x602C5D: call    edx
0x602C5F: mov     eax, [esi]
0x602C61: mov     edx, [eax+198h]
0x602C67: push    0
0x602C69: mov     ecx, esi
0x602C6B: call    edx
0x602C6D: test    al, al
0x602C6F: jz      short loc_602C80
0x602C71: mov     ecx, [esi+58h]
0x602C74: mov     eax, [ecx]
0x602C76: mov     edx, [eax+308h]
0x602C7C: push    1
0x602C7E: call    edx
0x602C80: mov     eax, [esi+5Ch]
0x602C83: mov     edx, [eax+30h]
0x602C86: lea     edi, [esi+5Ch]
0x602C89: mov     ecx, edi
0x602C8B: call    edx
0x602C8D: test    eax, eax
0x602C8F: jz      loc_602DBA
0x602C95: cmp     dword ptr [esi+3Ch], 0
0x602C99: jz      loc_602DBA
0x602C9F: mov     eax, [edi]
0x602CA1: mov     edx, [eax+30h]
0x602CA4: push    0
0x602CA6: mov     ecx, edi
0x602CA8: call    edx
0x602CAA: mov     ecx, eax
0x602CAC: call    MagicItem_GetFXEffect
0x602CB1: mov     ebx, eax
0x602CB3: test    ebx, ebx
0x602CB5: jz      loc_602DBA
0x602CBB: movzx   eax, word ptr [ebx+20h]
0x602CBF: cmp     ax, 0FFFFh
0x602CC3: jnz     short loc_602CDD
0x602CC5: mov     eax, [ebx+1Ch]
0x602CC8: lea     edx, [eax+1]
0x602CCB: jmp     short loc_602CD0
0x602CCD: align 10h
0x602CD0: mov     cl, [eax]
0x602CD2: add     eax, 1
0x602CD5: test    cl, cl
0x602CD7: jnz     short loc_602CD0
0x602CD9: sub     eax, edx
0x602CDB: jmp     short loc_602CE0
0x602CDD: movzx   eax, ax
0x602CE0: test    eax, eax
0x602CE2: jbe     loc_602DBA
0x602CE8: push    ebx
0x602CE9: call    sub_69FD20
0x602CEE: mov     ecx, ds:0B333C4h; this
0x602CF4: add     esp, 4
0x602CF7: cmp     esi, ecx
0x602CF9: mov     ebp, eax
0x602CFB: jnz     short loc_602D18
0x602CFD: cmp     byte ptr [ecx+588h], 0
0x602D04: jz      short loc_602D0F
0x602D06: push    0; a2
0x602D08: call    Player_GetAnimData
0x602D0D: jmp     short loc_602D24
0x602D0F: push    1; a2
0x602D11: call    Player_GetAnimData
0x602D16: jmp     short loc_602D24
0x602D18: mov     eax, [esi]
0x602D1A: mov     edx, [eax+164h]
0x602D20: mov     ecx, esi
0x602D22: call    edx
0x602D24: test    eax, eax
0x602D26: jz      loc_602DBA
0x602D2C: mov     eax, [eax+98h]
0x602D32: test    eax, eax
0x602D34: jz      loc_602DBA
0x602D3A: mov     ecx, [eax+7Ch]
0x602D3D: mov     eax, [ecx]
0x602D3F: mov     edx, [eax+4Ch]
0x602D42: push    offset aMagicnode; "magicNode"
0x602D47: call    edx
0x602D49: mov     edi, eax
0x602D4B: test    edi, edi
0x602D4D: jz      short loc_602D5A
0x602D4F: mov     eax, [edi]
0x602D51: mov     edx, [eax+8]
0x602D54: mov     ecx, edi
0x602D56: call    edx
0x602D58: jmp     short loc_602D5C
0x602D5A: xor     eax, eax
0x602D5C: test    ebp, ebp
0x602D5E: jz      short loc_602DBA
0x602D60: test    eax, eax
0x602D62: jz      short loc_602DBA
0x602D64: mov     edx, [eax]
0x602D66: push    1
0x602D68: mov     ecx, eax
0x602D6A: mov     eax, [edx+84h]
0x602D70: push    ebp
0x602D71: call    eax
0x602D73: cmp     dword ptr [ebx+70h], 0
0x602D77: jz      short loc_602DBA
0x602D79: cmp     byte ptr ds:0B333B8h, 0
0x602D80: jnz     short loc_602DBA
0x602D82: push    1Ch; Size
0x602D84: call    FormHeapAlloc
0x602D89: add     esp, 4
0x602D8C: mov     [esp+2Ch+arg_4], eax
0x602D90: test    eax, eax
0x602D92: mov     [esp+2Ch+var_4], 0
0x602D9A: jz      short loc_602DAD
0x602D9C: mov     edx, [ebx+70h]
0x602D9F: mov     edx, [edx+0Ch]
0x602DA2: push    edi
0x602DA3: push    edx
0x602DA4: mov     ecx, eax
0x602DA6: call    MagicCaster_CastingVFX_constr
0x602DAB: jmp     short loc_602DAF
0x602DAD: xor     eax, eax
0x602DAF: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x602DB7: mov     [esi+60h], eax
0x602DBA: mov     eax, [esi+3Ch]
0x602DBD: test    eax, eax
0x602DBF: jz      loc_602EBF
0x602DC5: mov     ecx, [esi+58h]
0x602DC8: test    ecx, ecx
0x602DCA: jz      loc_602EBF
0x602DD0: mov     edx, [ecx]
0x602DD2: mov     eax, [edx+2D0h]
0x602DD8: call    eax
0x602DDA: cmp     eax, 5
0x602DDD: jz      loc_602EBF
0x602DE3: mov     ecx, ds:0B333C4h
0x602DE9: cmp     esi, ecx
0x602DEB: jnz     short loc_602DF6
0x602DED: push    0
0x602DEF: call    sub_6600D0
0x602DF4: jmp     short loc_602E02
0x602DF6: mov     edx, [esi]
0x602DF8: mov     eax, [edx+168h]
0x602DFE: mov     ecx, esi
0x602E00: call    eax
0x602E02: cmp     esi, ds:0B333C4h
0x602E08: mov     [esp+2Ch+arg_0], eax
0x602E0C: mov     [esp+2Ch+arg_4], 1
0x602E14: jnz     short loc_602E20
0x602E16: mov     [esp+2Ch+arg_4], 2
0x602E1E: mov     edi, edi
0x602E20: mov     edx, [esi]
0x602E22: mov     eax, [edx+164h]
0x602E28: mov     ecx, esi
0x602E2A: call    eax
0x602E2C: mov     ecx, ds:0B333C4h
0x602E32: cmp     esi, ecx
0x602E34: mov     ebx, eax
0x602E36: jnz     short loc_602E59
0x602E38: cmp     [esp+2Ch+arg_4], 1
0x602E3D: jnz     short loc_602E59
0x602E3F: push    1
0x602E41: call    sub_6600D0
0x602E46: mov     ecx, ds:0B333C4h; this
0x602E4C: push    1; a2
0x602E4E: mov     [esp+30h+arg_0], eax
0x602E52: call    Player_GetAnimData
0x602E57: mov     ebx, eax
0x602E59: mov     ecx, [esi+58h]
0x602E5C: mov     edx, [ecx]
0x602E5E: mov     eax, [esp+2Ch+arg_0]
0x602E62: mov     edx, [edx+12Ch]
0x602E68: push    eax
0x602E69: call    edx
0x602E6B: mov     ebp, eax
0x602E6D: test    ebp, ebp
0x602E6F: jz      short loc_602EB4
0x602E71: test    ebx, ebx
0x602E73: jz      short loc_602EA9
0x602E75: movzx   eax, word ptr [ebp+0B6h]
0x602E7C: xor     edi, edi
0x602E7E: test    eax, eax
0x602E80: jbe     short loc_602EA9
0x602E82: cmp     eax, edi
0x602E84: ja      short loc_602E8A
0x602E86: xor     eax, eax
0x602E88: jmp     short loc_602E93
0x602E8A: mov     eax, [ebp+0B0h]
0x602E90: mov     eax, [eax+edi*4]
0x602E93: push    eax
0x602E94: mov     ecx, ebx
0x602E96: call    sub_4712D0
0x602E9B: movzx   eax, word ptr [ebp+0B6h]
0x602EA2: add     edi, 1
0x602EA5: cmp     eax, edi
0x602EA7: ja      short loc_602E8A
0x602EA9: lea     ecx, [ebp+0ACh]
0x602EAF: call    sub_477EF0
0x602EB4: sub     [esp+2Ch+arg_4], 1
0x602EB9: jnz     loc_602E20
0x602EBF: cmp     dword ptr [esi+3Ch], 0
0x602EC3: jz      loc_60305F
0x602EC9: mov     ecx, [esi+58h]
0x602ECC: test    ecx, ecx
0x602ECE: jz      loc_60305F
0x602ED4: mov     edx, [ecx]
0x602ED6: mov     eax, [edx+2D0h]
0x602EDC: call    eax
0x602EDE: cmp     eax, 5
0x602EE1: jnz     loc_60305F
0x602EE7: mov     ecx, ds:0B333C4h
0x602EED: cmp     esi, ecx
0x602EEF: jnz     short loc_602EFA
0x602EF1: push    0
0x602EF3: call    sub_6600D0
0x602EF8: jmp     short loc_602F06
0x602EFA: mov     edx, [esi]
0x602EFC: mov     eax, [edx+168h]
0x602F02: mov     ecx, esi
0x602F04: call    eax
0x602F06: mov     ecx, ds:0B333C4h
0x602F0C: cmp     esi, ecx
0x602F0E: mov     [esp+2Ch+arg_0], eax
0x602F12: mov     [esp+2Ch+arg_4], 1
0x602F1A: jnz     short loc_602F46
0x602F1C: mov     [esp+2Ch+arg_4], 2
0x602F24: jmp     short loc_602F2C
0x602F26: mov     ecx, ds:0B333C4h
0x602F2C: cmp     esi, ecx
0x602F2E: jnz     short loc_602F46
0x602F30: cmp     [esp+2Ch+arg_4], 1
0x602F35: jnz     short loc_602F46
0x602F37: push    1
0x602F39: call    sub_6600D0
0x602F3E: mov     ebx, eax
0x602F40: mov     [esp+2Ch+arg_0], ebx
0x602F44: jmp     short loc_602F4A
0x602F46: mov     ebx, [esp+2Ch+arg_0]
0x602F4A: mov     ecx, [esi+58h]
0x602F4D: mov     edx, [ecx]
0x602F4F: mov     eax, [edx+128h]
0x602F55: push    ebx
0x602F56: call    eax
0x602F58: mov     ecx, [esi+58h]
0x602F5B: mov     edx, [ecx]
0x602F5D: mov     edi, eax
0x602F5F: mov     eax, [edx+12Ch]
0x602F65: push    ebx
0x602F66: call    eax
0x602F68: test    edi, edi
0x602F6A: mov     ebp, eax
0x602F6C: jz      loc_603054
0x602F72: test    ebp, ebp
0x602F74: jz      loc_603054
0x602F7A: mov     edx, [edi]
0x602F7C: mov     eax, [edx+58h]
0x602F7F: push    offset aArrow0; "Arrow:0"
0x602F84: mov     ecx, edi
0x602F86: call    eax
0x602F88: mov     ebx, eax
0x602F8A: test    ebx, ebx
0x602F8C: jz      short loc_602FB8
0x602F8E: mov     ecx, ebx
0x602F90: call    sub_700900
0x602F95: lea     ecx, [ebp+0ACh]
0x602F9B: mov     [esp+2Ch+var_18], eax
0x602F9F: call    sub_477EF0
0x602FA4: mov     edx, [ebp+0]
0x602FA7: mov     eax, [esp+2Ch+var_18]
0x602FAB: mov     edx, [edx+84h]
0x602FB1: push    1
0x602FB3: push    eax
0x602FB4: mov     ecx, ebp
0x602FB6: call    edx
0x602FB8: cmp     esi, ds:0B333C4h
0x602FBE: jnz     loc_603054
0x602FC4: call    GetGodMode
0x602FC9: test    al, al
0x602FCB: jnz     loc_603054
0x602FD1: mov     ecx, [esi+58h]
0x602FD4: mov     eax, [ecx]
0x602FD6: mov     edx, [eax+0F4h]
0x602FDC: mov     ebp, 1
0x602FE1: push    ebp
0x602FE2: call    edx
0x602FE4: mov     eax, [eax+8]
0x602FE7: push    eax
0x602FE8: mov     ecx, esi
0x602FEA: call    TESObjectREF_GetItemCount
0x602FEF: cmp     eax, ebp
0x602FF1: jnz     short loc_602FF9
0x602FF3: mov     edi, ebx
0x602FF5: xor     ebx, ebx
0x602FF7: jmp     short loc_60304C
0x602FF9: cmp     eax, ds:0B35588h
0x602FFF: jg      short loc_603054
0x603001: xor     ebx, ebx
0x603003: mov     [esp+2Ch+var_14], ebx
0x603007: mov     [esp+2Ch+var_10], bx
0x60300C: mov     [esp+2Ch+var_E], bx
0x603011: add     eax, 0FFFFFFFFh
0x603014: push    eax; ArgList
0x603015: lea     eax, [esp+30h+var_14]
0x603019: push    offset aArrowD; "Arrow%d"
0x60301E: push    eax; int
0x60301F: mov     [esp+38h+var_4], ebp
0x603023: call    BSStringT_Static_Format
0x603028: mov     edx, [edi]
0x60302A: mov     eax, [esp+38h+var_14]
0x60302E: mov     edx, [edx+58h]
0x603031: add     esp, 0Ch
0x603034: push    eax
0x603035: mov     ecx, edi
0x603037: call    edx
0x603039: lea     ecx, [esp+2Ch+var_14]; void *
0x60303D: mov     edi, eax
0x60303F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x603047: call    BSStringT_Clear
0x60304C: cmp     edi, ebx
0x60304E: jz      short loc_603054
0x603050: or      [edi+18h], bp
0x603054: sub     [esp+2Ch+arg_4], 1
0x603059: jnz     loc_602F26
0x60305F: mov     ecx, esi; a1
0x603061: call    sub_5EE1B0
0x603066: mov     ecx, [esi+58h]
0x603069: test    ecx, ecx
0x60306B: jz      short loc_6030A2
0x60306D: mov     eax, [ecx]
0x60306F: mov     edx, [eax+438h]
0x603075: call    edx
0x603077: fstp    [esp+2Ch+arg_4]
0x60307B: fldz
0x60307D: fld     [esp+2Ch+arg_4]
0x603081: fcom    st(1)
0x603083: fnstsw  ax
0x603085: fstp    st(1)
0x603087: test    ah, 41h
0x60308A: jnz     short loc_6030A0
0x60308C: mov     eax, [esi]
0x60308E: mov     edx, [eax+270h]
0x603094: push    ecx
0x603095: fstp    [esp+30h+var_30]
0x603098: push    1
0x60309A: mov     ecx, esi
0x60309C: call    edx
0x60309E: jmp     short loc_6030A2
0x6030A0: fstp    st
0x6030A2: mov     eax, [esi]
0x6030A4: mov     edx, [eax+18Ch]
0x6030AA: mov     ecx, esi
0x6030AC: call    edx
0x6030AE: cmp     eax, 9
0x6030B1: jz      short loc_6030CE
0x6030B3: cmp     dword ptr [esi+0B0h], 3
0x6030BA: jz      short loc_6030CE
0x6030BC: mov     eax, [esi]
0x6030BE: mov     edx, [eax+198h]
0x6030C4: push    0
0x6030C6: mov     ecx, esi
0x6030C8: call    edx
0x6030CA: test    al, al
0x6030CC: jz      short loc_6030F4
0x6030CE: mov     ecx, [esi+58h]
0x6030D1: test    ecx, ecx
0x6030D3: jz      short loc_6030F4
0x6030D5: mov     eax, [ecx]
0x6030D7: mov     edx, [eax+0E8h]
0x6030DD: push    esi
0x6030DE: call    edx
0x6030E0: test    eax, eax
0x6030E2: jz      short loc_6030F4
0x6030E4: mov     edx, [eax]
0x6030E6: push    1
0x6030E8: mov     ecx, eax
0x6030EA: mov     eax, [edx+9Ch]
0x6030F0: push    1
0x6030F2: call    eax
0x6030F4: mov     edx, [esi]
0x6030F6: mov     eax, [edx+2ECh]
0x6030FC: mov     ecx, esi
0x6030FE: call    eax
0x603100: cmp     esi, ds:0B333C4h
0x603106: jz      short loc_60313C
0x603108: mov     eax, [esi+0B0h]
0x60310E: cmp     eax, 2
0x603111: jz      short loc_60313C
0x603113: cmp     eax, 1
0x603116: jz      short loc_60313C
0x603118: mov     edx, [esi]
0x60311A: mov     eax, [edx+164h]
0x603120: mov     ecx, esi
0x603122: call    eax
0x603124: test    eax, eax
0x603126: jz      short loc_60313C
0x603128: push    3
0x60312A: mov     ecx, eax
0x60312C: call    sub_470D00
0x603131: test    al, al
0x603133: jnz     short loc_60313C
0x603135: mov     ecx, esi; int
0x603137: call    sub_4E3490
0x60313C: mov     ecx, dword ptr [esp+2Ch+var_C]
0x603140: mov     large fs:0, ecx
0x603147: pop     ecx
0x603148: pop     edi
0x603149: pop     esi
0x60314A: pop     ebp
0x60314B: pop     ebx
0x60314C: add     esp, 18h
0x60314F: retn    8
