0x583F40: sub     esp, 14h
0x583F43: mov     eax, ds:0B33398h
0x583F48: push    edi
0x583F49: mov     edi, ecx
0x583F4B: mov     ecx, [eax+20h]
0x583F4E: mov     edx, [edi+68h]
0x583F51: mov     byte ptr [edi+9], 0
0x583F55: mov     eax, [edx+34h]
0x583F58: test    eax, eax
0x583F5A: mov     [esp+18h+var_4], ecx
0x583F5E: jz      loc_584263
0x583F64: push    ebx
0x583F65: push    ebp
0x583F66: push    esi; a3
0x583F67: lea     ecx, [eax+8]
0x583F6A: mov     ecx, [ecx]
0x583F6C: test    ecx, ecx
0x583F6E: mov     eax, [eax]
0x583F70: mov     [esp+24h+var_C], eax
0x583F74: jz      loc_5841CA
0x583F7A: call    Tile_GetParentMenu
0x583F7F: mov     esi, eax
0x583F81: test    esi, esi
0x583F83: jz      loc_5841CA
0x583F89: cmp     dword ptr [esi+4], 0
0x583F8D: jz      loc_5841CA
0x583F93: push    esi
0x583F94: call    sub_583D50
0x583F99: fstp    [esp+28h+var_10]
0x583F9D: fld     [esp+28h+var_10]
0x583FA1: add     esp, 4
0x583FA4: fabs
0x583FA6: mov     [esp+24h+var_11], 1
0x583FAB: fstp    [esp+24h+var_8]
0x583FAF: fld     [esp+24h+var_8]
0x583FB3: fcomp   dword ptr ds:0A2F948h
0x583FB9: fnstsw  ax
0x583FBB: test    ah, 44h
0x583FBE: jnp     short loc_583FC5
0x583FC0: mov     [esp+24h+var_11], 0
0x583FC5: mov     ebp, [esi+24h]
0x583FC8: mov     ecx, edi
0x583FCA: call    InterfaceManager__GetTopVisibleMenuID
0x583FCF: cmp     ebp, 2
0x583FD2: mov     ecx, [edi+0E0h]
0x583FD8: mov     edx, [edi+0E4h]
0x583FDE: jnz     loc_5840ED
0x583FE4: test    eax, eax
0x583FE6: jnz     short loc_583FEE
0x583FE8: test    ecx, ecx
0x583FEA: jz      short loc_584006
0x583FEC: jmp     short loc_583FF2
0x583FEE: test    ecx, ecx
0x583FF0: jz      short loc_58400A
0x583FF2: test    edx, edx
0x583FF4: jnz     short loc_58400A
0x583FF6: cmp     ecx, 3F3h
0x583FFC: jz      short loc_584006
0x583FFE: cmp     ecx, 3E9h
0x584004: jnz     short loc_58400A
0x584006: mov     bl, 1
0x584008: jmp     short loc_58400C
0x58400A: xor     bl, bl
0x58400C: cmp     [esp+24h+var_11], 0
0x584011: jz      short loc_58408A
0x584013: mov     ecx, [esi+4]
0x584016: push    1772h
0x58401B: mov     dword ptr [esi+24h], 4
0x584022: call    Tile_GetFloat
0x584027: fcomp   dword ptr ds:0A379B4h
0x58402D: fnstsw  ax
0x58402F: test    ah, 44h
0x584032: jnp     loc_5841DE
0x584038: fld1
0x58403A: push    ecx
0x58403B: mov     ecx, [esi+4]; this
0x58403E: fstp    [esp+28h+a2]; a3
0x584041: push    0FA1h; a2
0x584046: call    Tile_SetFloat
0x58404B: fldz
0x58404D: mov     ecx, [esi+4]
0x584050: mov     edx, [ecx+24h]
0x584053: sub     esp, 8
0x584056: fst     [esp+2Ch+a2]; float
0x58405A: mov     ecx, edi
0x58405C: fstp    [esp+2Ch+var_2C]; float
0x58405F: push    edx; int
0x584060: call    sub_57EA20
0x584065: test    bl, bl
0x584067: jz      loc_5841CA
0x58406D: cmp     byte ptr ds:0B42D54h, 0
0x584074: jz      short loc_58407E
0x584076: fldz
0x584078: fstp    dword ptr ds:0B42D50h
0x58407E: mov     byte ptr ds:0B42D54h, 0
0x584085: jmp     loc_5841CA
0x58408A: fld     dword ptr ds:0A379B4h
0x584090: push    ecx
0x584091: fstp    [esp+28h+a2]; a3
0x584094: mov     byte ptr [edi+9], 1
0x584098: mov     ecx, [esi+4]; this
0x58409B: push    0FA1h; a2
0x5840A0: call    Tile_SetFloat
0x5840A5: fld     [esp+24h+var_10]
0x5840A9: fld1
0x5840AB: mov     eax, [esi+4]
0x5840AE: mov     ecx, [eax+24h]
0x5840B1: fsubrp  st(1), st
0x5840B3: sub     esp, 8
0x5840B6: fstp    [esp+2Ch+var_10]
0x5840BA: fldz
0x5840BC: fstp    [esp+2Ch+a2]; float
0x5840C0: fld     [esp+2Ch+var_10]
0x5840C4: fstp    [esp+2Ch+var_2C]; float
0x5840C7: push    ecx; int
0x5840C8: mov     ecx, edi
0x5840CA: call    sub_57EA20
0x5840CF: test    bl, bl
0x5840D1: jz      loc_5841CA
0x5840D7: cmp     byte ptr ds:0B42D54h, 0
0x5840DE: jz      loc_5841CA
0x5840E4: fld     [esp+24h+var_10]
0x5840E8: jmp     loc_5841C4
0x5840ED: cmp     ebp, 8
0x5840F0: jnz     loc_5841CA
0x5840F6: test    eax, eax
0x5840F8: jz      short loc_58410C
0x5840FA: cmp     ecx, eax
0x5840FC: jnz     short loc_58410C
0x5840FE: cmp     eax, 3F3h
0x584103: jz      short loc_58410C
0x584105: cmp     eax, 3E9h
0x58410A: jnz     short loc_584124
0x58410C: test    edx, edx
0x58410E: jz      short loc_584128
0x584110: cmp     edx, eax
0x584112: jnz     short loc_584128
0x584114: cmp     ecx, 3F3h
0x58411A: jz      short loc_584124
0x58411C: cmp     ecx, 3E9h
0x584122: jnz     short loc_584128
0x584124: mov     bl, 1
0x584126: jmp     short loc_58412A
0x584128: xor     bl, bl
0x58412A: cmp     [esp+24h+var_11], 0
0x58412F: fld     dword ptr ds:0A379B4h
0x584135: push    ecx
0x584136: fstp    [esp+28h+a2]; a3
0x584139: push    0FA1h; a2
0x58413E: jz      short loc_584189
0x584140: mov     ecx, [esi+4]; this
0x584143: call    Tile_SetFloat
0x584148: fldz
0x58414A: mov     edx, [esi+4]
0x58414D: mov     eax, [edx+24h]
0x584150: sub     esp, 8
0x584153: fstp    [esp+2Ch+a2]; float
0x584157: mov     ecx, edi
0x584159: fld1
0x58415B: fstp    [esp+2Ch+var_2C]; float
0x58415E: push    eax; int
0x58415F: call    sub_57EA20
0x584164: test    bl, bl
0x584166: mov     dword ptr [esi+24h], 1
0x58416D: jz      short loc_5841CA
0x58416F: cmp     byte ptr ds:0B42D54h, 0
0x584176: jz      short loc_584180
0x584178: fld1
0x58417A: fstp    dword ptr ds:0B42D50h
0x584180: mov     byte ptr ds:0B42D54h, 0
0x584187: jmp     short loc_5841CA
0x584189: mov     byte ptr [edi+9], 1
0x58418D: mov     ecx, [esi+4]; this
0x584190: call    Tile_SetFloat
0x584195: fldz
0x584197: mov     ecx, [esi+4]
0x58419A: mov     edx, [ecx+24h]
0x58419D: sub     esp, 8
0x5841A0: fstp    [esp+2Ch+a2]; float
0x5841A4: mov     ecx, edi
0x5841A6: fld     [esp+2Ch+var_10]
0x5841AA: fstp    [esp+2Ch+var_2C]; float
0x5841AD: push    edx; int
0x5841AE: call    sub_57EA20
0x5841B3: test    bl, bl
0x5841B5: jz      short loc_5841CA
0x5841B7: cmp     byte ptr ds:0B42D54h, 0
0x5841BE: jz      short loc_5841CA
0x5841C0: fld     [esp+24h+var_10]
0x5841C4: fstp    dword ptr ds:0B42D50h
0x5841CA: cmp     [esp+24h+var_C], 0
0x5841CF: jz      loc_584260
0x5841D5: mov     eax, [esp+24h+var_C]
0x5841D9: jmp     loc_583F67
0x5841DE: mov     eax, [esi]
0x5841E0: mov     edx, [eax+34h]
0x5841E3: mov     ecx, esi
0x5841E5: call    edx
0x5841E7: cmp     eax, 3F1h
0x5841EC: jnz     short loc_584235
0x5841EE: push    0; int
0x5841F0: push    offset ??_R0?AVDialogMenu@@@8; struct TypeDescriptor *
0x5841F5: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5841FA: push    0; int
0x5841FC: push    esi; void *
0x5841FD: call    OblivionDynamicCast
0x584202: add     esp, 14h
0x584205: test    eax, eax
0x584207: jz      short loc_584230
0x584209: mov     ecx, [eax+60h]
0x58420C: test    ecx, ecx
0x58420E: jz      short loc_584230
0x584210: cmp     byte ptr [eax+95h], 0
0x584217: jz      short loc_584221
0x584219: mov     [edi+10Ch], ecx
0x58421F: jmp     short loc_584230
0x584221: cmp     byte ptr [eax+94h], 0
0x584228: jz      short loc_584230
0x58422A: mov     [edi+110h], ecx
0x584230: call    sub_6B94E0
0x584235: mov     eax, [esi]
0x584237: mov     edx, [eax+34h]
0x58423A: mov     ecx, esi
0x58423C: call    edx
0x58423E: mov     esi, [esi+4]
0x584241: cmp     eax, 3F3h
0x584246: setz    bl
0x584249: test    esi, esi
0x58424B: jz      short loc_584257
0x58424D: mov     eax, [esi]
0x58424F: mov     edx, [eax]
0x584251: push    1
0x584253: mov     ecx, esi
0x584255: call    edx
0x584257: test    bl, bl
0x584259: jz      short loc_584260
0x58425B: call    sub_5A4510
0x584260: pop     esi
0x584261: pop     ebp
0x584262: pop     ebx
0x584263: cmp     byte ptr [edi+8], 4
0x584267: jnz     short loc_5842E7
0x584269: cmp     byte ptr [edi+9], 0
0x58426D: jz      short loc_584280
0x58426F: mov     eax, ds:0B333A0h
0x584274: cmp     byte ptr [eax+51h], 0
0x584278: jnz     short loc_584280
0x58427A: cmp     byte ptr [eax+52h], 0
0x58427E: jz      short loc_5842E7
0x584280: mov     ecx, [esp+18h+var_4]; this
0x584284: call    InputGlobals__FlushKeyboardBuffer
0x584289: fld1
0x58428B: mov     eax, [edi+1Ch]
0x58428E: mov     byte ptr [edi+8], 1
0x584292: mov     eax, [eax+24h]
0x584295: or      word ptr [eax+18h], 1
0x58429A: push    ecx
0x58429B: mov     ecx, [edi+1Ch]; this
0x58429E: fstp    [esp+1Ch+a3]; a3
0x5842A1: push    0FA1h; a2
0x5842A6: call    Tile_SetFloat
0x5842AB: mov     ecx, [edi+1Ch]
0x5842AE: call    sub_58E870
0x5842B3: push    1
0x5842B5: mov     ecx, edi
0x5842B7: call    sub_57D940
0x5842BC: mov     ecx, ds:0B333C4h
0x5842C2: test    ecx, ecx
0x5842C4: jz      short loc_5842DD
0x5842C6: push    0
0x5842C8: call    PlayerCharacter_GetPlayerNode
0x5842CD: test    eax, eax
0x5842CF: jz      short loc_5842DD
0x5842D1: push    0
0x5842D3: push    0
0x5842D5: call    sub_5A6040
0x5842DA: add     esp, 8
0x5842DD: mov     dword ptr [edi+118h], 0
0x5842E7: mov     dword ptr ds:0B3A6E4h, 63h ; 'c'
0x5842F1: pop     edi
0x5842F2: add     esp, 14h
0x5842F5: retn
