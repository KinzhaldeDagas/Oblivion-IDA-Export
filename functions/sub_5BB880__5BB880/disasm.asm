0x5BB880: push    ebp
0x5BB881: mov     ebp, esp; char
0x5BB883: and     esp, 0FFFFFFF8h
0x5BB886: push    0FFFFFFFFh
0x5BB888: push    offset SEH_5BB880
0x5BB88D: mov     eax, large fs:0
0x5BB893: push    eax
0x5BB894: sub     esp, 28h
0x5BB897: push    ebx; a3
0x5BB898: push    esi; a3
0x5BB899: push    edi; a3
0x5BB89A: mov     eax, ds:0B30AACh
0x5BB89F: xor     eax, esp
0x5BB8A1: push    eax; a3
0x5BB8A2: lea     eax, [esp+44h+var_C]
0x5BB8A6: mov     large fs:0, eax
0x5BB8AC: mov     esi, ecx
0x5BB8AE: mov     edi, [ebp+arg_0]
0x5BB8B1: cmp     edi, 15h
0x5BB8B4: jnz     short loc_5BB8C6
0x5BB8B6: mov     edi, [esi+0F4h]
0x5BB8BC: test    edi, edi
0x5BB8BE: jz      loc_5BC166
0x5BB8C4: jmp     short loc_5BB8D2
0x5BB8C6: cmp     edi, 2Bh ; '+'
0x5BB8C9: jnz     loc_5BBA64
0x5BB8CF: mov     edi, [ebp+arg_4]
0x5BB8D2: test    edi, edi
0x5BB8D4: jz      loc_5BC166
0x5BB8DA: mov     eax, [edi+10h]
0x5BB8DD: cmp     eax, [esi+58h]
0x5BB8E0: jnz     loc_5BB9D6
0x5BB8E6: push    0FB4h
0x5BB8EB: mov     ecx, edi
0x5BB8ED: call    Tile_GetFloat
0x5BB8F2: fcomp   dword ptr ds:0A379B4h
0x5BB8F8: fnstsw  ax
0x5BB8FA: test    ah, 44h
0x5BB8FD: jp      loc_5BB9D6
0x5BB903: mov     ecx, ds:0B333C4h
0x5BB909: call    sub_6640D0
0x5BB90E: test    al, al
0x5BB910: jz      loc_5BB9D6
0x5BB916: mov     eax, [esi]
0x5BB918: mov     edx, [eax+14h]
0x5BB91B: push    edi
0x5BB91C: push    2Bh ; '+'
0x5BB91E: mov     ecx, esi
0x5BB920: call    edx
0x5BB922: push    0FB2h
0x5BB927: mov     ecx, edi
0x5BB929: lea     ebx, [esi+0B0h]
0x5BB92F: call    sub_588C10
0x5BB934: push    eax
0x5BB935: mov     ecx, ebx
0x5BB937: call    sub_488810
0x5BB93C: push    0FAFh
0x5BB941: mov     ecx, edi
0x5BB943: call    sub_588B50
0x5BB948: fld     dword ptr [eax+4]
0x5BB94B: fstp    [esp+4Ch+var_3C]
0x5BB94F: push    0FB0h
0x5BB954: fld     [esp+50h+var_3C]
0x5BB958: mov     ecx, edi
0x5BB95A: fstp    dword ptr [esi+0B8h]
0x5BB960: call    sub_588B50
0x5BB965: fld     dword ptr [eax+4]
0x5BB968: xor     eax, eax
0x5BB96A: fstp    [esp+4Ch+var_3C]
0x5BB96E: mov     [esp+4Ch+var_38], eax
0x5BB972: fld     [esp+4Ch+var_3C]
0x5BB976: mov     word ptr [esp+4Ch+var_34], ax
0x5BB97B: fstp    dword ptr [esi+0BCh]
0x5BB981: mov     word ptr [esp+4Ch+var_34+2], ax
0x5BB986: mov     ebx, [ebx]
0x5BB988: mov     [esp+4Ch+var_C], eax
0x5BB98C: mov     eax, ds:0B38C60h
0x5BB991: push    ebx
0x5BB992: push    eax; ArgList
0x5BB993: lea     ecx, [esp+54h+var_38]
0x5BB997: push    offset aSS?; "%s %s?"
0x5BB99C: push    ecx; int
0x5BB99D: call    BSStringT_Static_Format
0x5BB9A2: mov     edx, ds:0B38D00h
0x5BB9A8: mov     eax, ds:0B38CF8h
0x5BB9AD: mov     ecx, [esp+5Ch+var_38]
0x5BB9B1: push    0
0x5BB9B3: push    edx
0x5BB9B4: push    eax
0x5BB9B5: push    1
0x5BB9B7: push    offset sub_5B8DC0
0x5BB9BC: push    ecx
0x5BB9BD: call    ShowUIMessageBox
0x5BB9C2: add     esp, 28h
0x5BB9C5: lea     ecx, [esp+4Ch+var_38]; void *
0x5BB9C9: mov     [esp+4Ch+var_C], 0FFFFFFFFh
0x5BB9D1: call    BSStringT_Clear
0x5BB9D6: mov     eax, [edi+10h]
0x5BB9D9: cmp     eax, [esi+58h]
0x5BB9DC: jnz     loc_5BC166
0x5BB9E2: push    0FB4h
0x5BB9E7: mov     ecx, edi
0x5BB9E9: call    Tile_GetFloat
0x5BB9EE: fcomp   dword ptr ds:0A2F948h
0x5BB9F4: fnstsw  ax
0x5BB9F6: test    ah, 44h
0x5BB9F9: jp      loc_5BC166
0x5BB9FF: xor     esi, esi
0x5BBA01: mov     [esp+4Ch+var_38], esi
0x5BBA05: mov     word ptr [esp+4Ch+var_34], si
0x5BBA0A: mov     word ptr [esp+4Ch+var_34+2], si
0x5BBA0F: mov     edx, ds:0B38C90h
0x5BBA15: push    edx; ArgList
0x5BBA16: lea     eax, [esp+50h+var_38]
0x5BBA1A: push    offset aS; "%s"
0x5BBA1F: push    eax; int
0x5BBA20: mov     [esp+58h+var_C], 1
0x5BBA28: call    BSStringT_Static_Format
0x5BBA2D: fld     dword ptr ds:0A30634h
0x5BBA33: add     esp, 0Ch
0x5BBA36: push    esi; int
0x5BBA37: push    esi; int
0x5BBA38: mov     esi, [esp+54h+var_38]
0x5BBA3C: push    ecx
0x5BBA3D: fstp    [esp+58h+var_58]; float
0x5BBA40: push    esi; int
0x5BBA41: call    QueueUIMessage
0x5BBA46: push    esi
0x5BBA47: call    FormHeapFree
0x5BBA4C: add     esp, 14h
0x5BBA4F: mov     ecx, [esp+4Ch+var_20+0Ch]
0x5BBA53: mov     large fs:0, ecx
0x5BBA5A: pop     ecx
0x5BBA5B: pop     edi
0x5BBA5C: pop     esi
0x5BBA5D: pop     ebx
0x5BBA5E: mov     esp, ebp
0x5BBA60: pop     ebp
0x5BBA61: retn    8
0x5BBA64: cmp     edi, 1
0x5BBA67: jl      short loc_5BBA81
0x5BBA69: cmp     edi, 5
0x5BBA6C: jg      short loc_5BBA81
0x5BBA6E: mov     ebx, [ebp+arg_4]
0x5BBA71: mov     edx, [esi]
0x5BBA73: mov     eax, [edx+14h]
0x5BBA76: push    ebx
0x5BBA77: push    edi
0x5BBA78: call    eax
0x5BBA7A: push    ebx
0x5BBA7B: push    edi
0x5BBA7C: jmp     loc_5BC15F
0x5BBA81: cmp     edi, 7
0x5BBA84: jz      loc_5BC0FA
0x5BBA8A: cmp     edi, 8
0x5BBA8D: jz      loc_5BC0FA
0x5BBA93: cmp     edi, 33h ; '3'
0x5BBA96: jnz     loc_5BBB2C
0x5BBA9C: mov     ecx, [ebp+arg_4]
0x5BBA9F: push    0FAAh
0x5BBAA4: call    Tile_GetFloat
0x5BBAA9: fadd    qword ptr ds:0A2F928h
0x5BBAAF: call    Double_To_SInt32
0x5BBAB4: xor     ebx, ebx
0x5BBAB6: push    1
0x5BBAB8: push    ebx
0x5BBAB9: lea     ecx, [esp+4Ch+var_30]
0x5BBABD: push    ebx
0x5BBABE: push    ecx
0x5BBABF: mov     edi, eax
0x5BBAC1: mov     [esp+54h+var_30], ebx
0x5BBAC5: mov     [esp+54h+var_2C], ebx
0x5BBAC9: call    sub_52A8A0
0x5BBACE: add     esp, 10h
0x5BBAD1: lea     eax, [esp+44h+var_30]
0x5BBAD5: mov     ecx, 1
0x5BBADA: lea     ebx, [ebx+0]
0x5BBAE0: mov     edx, [eax]
0x5BBAE2: cmp     edx, ebx
0x5BBAE4: jz      short loc_5BBB0E
0x5BBAE6: cmp     edi, ecx
0x5BBAE8: mov     eax, [eax+4]
0x5BBAEB: jz      short loc_5BBAF6
0x5BBAED: add     ecx, 1
0x5BBAF0: cmp     eax, ebx
0x5BBAF2: jnz     short loc_5BBAE0
0x5BBAF4: jmp     short loc_5BBB0E
0x5BBAF6: mov     edx, [edx+68h]
0x5BBAF9: mov     ecx, ds:0B333C4h
0x5BBAFF: push    edx
0x5BBB00: call    sub_660450
0x5BBB05: push    ebx
0x5BBB06: call    sub_5BACB0
0x5BBB0B: add     esp, 4
0x5BBB0E: lea     ecx, [esp+44h+var_30]
0x5BBB12: call    BSSimpleList_Clear
0x5BBB17: push    0Bh; int
0x5BBB19: call    sub_57DE50
0x5BBB1E: mov     eax, [esi+34h]
0x5BBB21: add     esp, 4
0x5BBB24: push    eax
0x5BBB25: push    3
0x5BBB27: jmp     loc_5BC15F
0x5BBB2C: cmp     edi, 34h ; '4'
0x5BBB2F: jnz     loc_5BBBEE
0x5BBB35: mov     ecx, [ebp+arg_4]
0x5BBB38: push    0FAAh
0x5BBB3D: call    Tile_GetFloat
0x5BBB42: fadd    qword ptr ds:0A2F928h
0x5BBB48: call    Double_To_SInt32
0x5BBB4D: push    1
0x5BBB4F: xor     edi, edi
0x5BBB51: push    1
0x5BBB53: lea     ecx, [esp+4Ch+var_30]
0x5BBB57: push    edi
0x5BBB58: push    ecx
0x5BBB59: mov     ebx, eax
0x5BBB5B: mov     [esp+54h+var_30], edi
0x5BBB5F: mov     [esp+54h+var_2C], edi
0x5BBB63: call    sub_52A8A0
0x5BBB68: add     esp, 10h
0x5BBB6B: lea     eax, [esp+44h+var_30]
0x5BBB6F: mov     edx, 1
0x5BBB74: mov     ecx, [eax]
0x5BBB76: test    ecx, ecx
0x5BBB78: jz      short loc_5BBB98
0x5BBB7A: cmp     ebx, edx
0x5BBB7C: mov     eax, [eax+4]
0x5BBB7F: mov     edi, ecx
0x5BBB81: jz      short loc_5BBB8C
0x5BBB83: add     edx, 1
0x5BBB86: test    eax, eax
0x5BBB88: jnz     short loc_5BBB74
0x5BBB8A: jmp     short loc_5BBB98
0x5BBB8C: mov     edx, [edi+68h]
0x5BBB8F: push    edx
0x5BBB90: call    sub_5BACB0
0x5BBB95: add     esp, 4
0x5BBB98: fld     dword ptr ds:0A379B4h
0x5BBB9E: push    ecx
0x5BBB9F: mov     ecx, [esi+54h]; this
0x5BBBA2: fstp    [esp+48h+a2]; a3
0x5BBBA5: push    0FA1h; a2
0x5BBBAA: call    Tile_SetFloat
0x5BBBAF: mov     eax, [edi+68h]
0x5BBBB2: add     eax, 30h ; '0'
0x5BBBB5: mov     eax, [eax+4]
0x5BBBB8: test    eax, eax
0x5BBBBA: jnz     short loc_5BBBC1
0x5BBBBC: mov     eax, offset EmptyString
0x5BBBC1: mov     ecx, [esi+4]
0x5BBBC4: push    eax
0x5BBBC5: push    0FB1h
0x5BBBCA: call    Tile_SetString
0x5BBBCF: push    1; int
0x5BBBD1: call    sub_57DE50
0x5BBBD6: add     esp, 4
0x5BBBD9: mov     ecx, [esp+44h+var_C]
0x5BBBDD: mov     large fs:0, ecx
0x5BBBE4: pop     ecx
0x5BBBE5: pop     edi
0x5BBBE6: pop     esi
0x5BBBE7: pop     ebx
0x5BBBE8: mov     esp, ebp
0x5BBBEA: pop     ebp
0x5BBBEB: retn    8
0x5BBBEE: cmp     edi, 29h ; ')'
0x5BBBF1: jnz     loc_5BBD5F
0x5BBBF7: fld     dword ptr [esi+0E4h]
0x5BBBFD: mov     ecx, [esi+58h]
0x5BBC00: push    0FDAh
0x5BBC05: fstp    qword ptr [esp+48h+var_20]
0x5BBC09: call    Tile_GetFloat
0x5BBC0E: fcomp   qword ptr [esp+44h+var_20]
0x5BBC12: fnstsw  ax
0x5BBC14: test    ah, 44h
0x5BBC17: jp      loc_5BC166
0x5BBC1D: fld     dword ptr [esi+0E8h]
0x5BBC23: mov     ecx, [esi+58h]
0x5BBC26: push    0FD9h
0x5BBC2B: fstp    qword ptr [esp+48h+var_20]
0x5BBC2F: call    Tile_GetFloat
0x5BBC34: fcomp   qword ptr [esp+44h+var_20]
0x5BBC38: fnstsw  ax
0x5BBC3A: test    ah, 44h
0x5BBC3D: jp      loc_5BC166
0x5BBC43: push    1; arg1
0x5BBC45: push    0; canCreate
0x5BBC47: call    InterfaceManager_GetSingleton
0x5BBC4C: mov     eax, [eax+118h]
0x5BBC52: shr     eax, 2
0x5BBC55: add     esp, 8
0x5BBC58: test    al, 1
0x5BBC5A: jz      loc_5BC166
0x5BBC60: mov     eax, [ebp+arg_4]
0x5BBC63: mov     edx, [esi]
0x5BBC65: mov     edx, [edx+14h]
0x5BBC68: push    eax
0x5BBC69: push    edi
0x5BBC6A: mov     ecx, esi
0x5BBC6C: call    edx
0x5BBC6E: push    1; arg1
0x5BBC70: push    0; canCreate
0x5BBC72: mov     byte ptr [esi+0DCh], 0
0x5BBC79: call    InterfaceManager_GetSingleton
0x5BBC7E: add     esp, 8
0x5BBC81: mov     ecx, eax
0x5BBC83: call    sub_5952D0
0x5BBC88: mov     ecx, [esi+58h]
0x5BBC8B: mov     [esp+4Ch+var_3C], eax
0x5BBC8F: fild    [esp+4Ch+var_3C]
0x5BBC93: fstp    qword ptr [esp+4Ch+a3]
0x5BBC97: call    sub_588C50
0x5BBC9C: fsubr   qword ptr [esp+4Ch+a3]
0x5BBCA0: mov     ecx, [esi+58h]
0x5BBCA3: push    0FDAh
0x5BBCA8: fstp    qword ptr [esp+50h+a3]
0x5BBCAC: call    Tile_GetFloat
0x5BBCB1: fadd    qword ptr [esp+4Ch+a3]
0x5BBCB5: push    1; arg1
0x5BBCB7: push    0; canCreate
0x5BBCB9: fstp    dword ptr [esi+0D4h]
0x5BBCBF: call    InterfaceManager_GetSingleton
0x5BBCC4: add     esp, 8
0x5BBCC7: mov     ecx, eax
0x5BBCC9: call    sub_593020
0x5BBCCE: mov     ecx, [esi+58h]
0x5BBCD1: mov     [esp+4Ch+var_3C], eax
0x5BBCD5: fild    [esp+4Ch+var_3C]
0x5BBCD9: fstp    qword ptr [esp+4Ch+a3]
0x5BBCDD: call    sub_588CF0
0x5BBCE2: fsubr   qword ptr [esp+4Ch+a3]
0x5BBCE6: mov     ecx, [esi+58h]
0x5BBCE9: push    0FD9h
0x5BBCEE: fstp    qword ptr [esp+50h+a3]
0x5BBCF2: call    Tile_GetFloat
0x5BBCF7: fadd    qword ptr [esp+4Ch+a3]
0x5BBCFB: push    offset Vector3_InitValue?
0x5BBD00: fstp    dword ptr [esi+0D8h]
0x5BBD06: mov     ecx, ds:0B333C4h
0x5BBD0C: lea     eax, [esp+50h+a3]
0x5BBD10: push    eax
0x5BBD11: call    sub_5A5790
0x5BBD16: mov     ecx, eax
0x5BBD18: call    sub_8AA350
0x5BBD1D: test    al, al
0x5BBD1F: push    0
0x5BBD21: jz      loc_5BBE26
0x5BBD27: mov     ecx, ds:0B38D00h
0x5BBD2D: mov     edx, ds:0B38CF8h
0x5BBD33: mov     eax, ds:0B38C68h
0x5BBD38: push    ecx
0x5BBD39: push    edx
0x5BBD3A: push    1
0x5BBD3C: push    offset sub_5BB350
0x5BBD41: push    eax
0x5BBD42: call    ShowUIMessageBox
0x5BBD47: add     esp, 18h
0x5BBD4A: mov     ecx, [esp+4Ch+var_20+0Ch]
0x5BBD4E: mov     large fs:0, ecx
0x5BBD55: pop     ecx
0x5BBD56: pop     edi
0x5BBD57: pop     esi
0x5BBD58: pop     ebx
0x5BBD59: mov     esp, ebp
0x5BBD5B: pop     ebp
0x5BBD5C: retn    8
0x5BBD5F: cmp     edi, 2Dh ; '-'
0x5BBD62: jnz     loc_5BBE65
0x5BBD68: push    1; arg1
0x5BBD6A: push    0; canCreate
0x5BBD6C: call    InterfaceManager_GetSingleton
0x5BBD71: mov     edx, [eax+118h]
0x5BBD77: shr     edx, 2
0x5BBD7A: add     esp, 8
0x5BBD7D: test    dl, 1
0x5BBD80: jz      loc_5BC166
0x5BBD86: mov     ecx, [ebp+arg_4]
0x5BBD89: mov     eax, [esi]
0x5BBD8B: mov     edx, [eax+14h]
0x5BBD8E: push    ecx
0x5BBD8F: push    edi
0x5BBD90: mov     ecx, esi
0x5BBD92: call    edx
0x5BBD94: push    1; arg1
0x5BBD96: push    0; canCreate
0x5BBD98: mov     byte ptr [esi+0DCh], 1
0x5BBD9F: call    InterfaceManager_GetSingleton
0x5BBDA4: add     esp, 8
0x5BBDA7: mov     ecx, eax
0x5BBDA9: call    sub_5952D0
0x5BBDAE: mov     ecx, [esi+64h]
0x5BBDB1: mov     [esp+4Ch+var_3C], eax
0x5BBDB5: fild    [esp+4Ch+var_3C]
0x5BBDB9: fstp    qword ptr [esp+4Ch+a3]
0x5BBDBD: call    sub_588C50
0x5BBDC2: fsubr   qword ptr [esp+4Ch+a3]
0x5BBDC6: mov     ecx, [esi+64h]
0x5BBDC9: push    0FDAh
0x5BBDCE: fstp    qword ptr [esp+50h+a3]
0x5BBDD2: call    Tile_GetFloat
0x5BBDD7: fadd    qword ptr [esp+4Ch+a3]
0x5BBDDB: push    1; arg1
0x5BBDDD: push    0; canCreate
0x5BBDDF: fstp    dword ptr [esi+0D4h]
0x5BBDE5: call    InterfaceManager_GetSingleton
0x5BBDEA: add     esp, 8
0x5BBDED: mov     ecx, eax
0x5BBDEF: call    sub_593020
0x5BBDF4: mov     ecx, [esi+64h]
0x5BBDF7: mov     [esp+4Ch+var_3C], eax
0x5BBDFB: fild    [esp+4Ch+var_3C]
0x5BBDFF: fstp    qword ptr [esp+4Ch+a3]
0x5BBE03: call    sub_588CF0
0x5BBE08: fsubr   qword ptr [esp+4Ch+a3]
0x5BBE0C: mov     ecx, [esi+64h]
0x5BBE0F: push    0FD9h
0x5BBE14: fstp    qword ptr [esp+50h+a3]
0x5BBE18: call    Tile_GetFloat
0x5BBE1D: fadd    qword ptr [esp+4Ch+a3]
0x5BBE21: jmp     loc_5BBCFB
0x5BBE26: mov     ecx, ds:0B38C88h
0x5BBE2C: mov     edx, ds:0B38C80h
0x5BBE32: mov     eax, ds:0B38C78h
0x5BBE37: push    ecx
0x5BBE38: mov     ecx, ds:0B38C70h
0x5BBE3E: push    edx
0x5BBE3F: push    eax
0x5BBE40: push    1
0x5BBE42: push    offset sub_5BB350
0x5BBE47: push    ecx
0x5BBE48: call    ShowUIMessageBox
0x5BBE4D: add     esp, 1Ch
0x5BBE50: mov     ecx, [esp+4Ch+var_20+0Ch]
0x5BBE54: mov     large fs:0, ecx
0x5BBE5B: pop     ecx
0x5BBE5C: pop     edi
0x5BBE5D: pop     esi
0x5BBE5E: pop     ebx
0x5BBE5F: mov     esp, ebp
0x5BBE61: pop     ebp
0x5BBE62: retn    8
0x5BBE65: cmp     edi, 20h ; ' '
0x5BBE68: jnz     short loc_5BBEB5
0x5BBE6A: push    0
0x5BBE6C: call    sub_5BACB0
0x5BBE71: fld1
0x5BBE73: mov     ecx, [esi+54h]; this
0x5BBE76: fstp    [esp+48h+a2]; a3
0x5BBE79: push    0FA1h; a2
0x5BBE7E: call    Tile_SetFloat
0x5BBE83: fld1
0x5BBE85: push    ecx
0x5BBE86: fstp    [esp+48h+a2]; a3
0x5BBE89: mov     ecx, [esi+50h]; this
0x5BBE8C: push    0FA1h; a2
0x5BBE91: call    Tile_SetFloat
0x5BBE96: push    2; int
0x5BBE98: call    sub_57DE50
0x5BBE9D: add     esp, 4
0x5BBEA0: mov     ecx, [esp+44h+var_C]
0x5BBEA4: mov     large fs:0, ecx
0x5BBEAB: pop     ecx
0x5BBEAC: pop     edi
0x5BBEAD: pop     esi
0x5BBEAE: pop     ebx
0x5BBEAF: mov     esp, ebp
0x5BBEB1: pop     ebp
0x5BBEB2: retn    8
0x5BBEB5: cmp     edi, 1Fh
0x5BBEB8: jnz     loc_5BC166
0x5BBEBE: push    5; int
0x5BBEC0: call    sub_57DE50
0x5BBEC5: mov     edx, [esi+48h]
0x5BBEC8: mov     eax, [edx+34h]
0x5BBECB: xor     edi, edi
0x5BBECD: add     esp, 4
0x5BBED0: cmp     eax, edi
0x5BBED2: jz      loc_5BC166
0x5BBED8: mov     ecx, [eax+8]
0x5BBEDB: push    0FAFh
0x5BBEE0: call    sub_588C10
0x5BBEE5: push    eax
0x5BBEE6: lea     ecx, [esp+48h+var_20]
0x5BBEEA: call    BSStringT_constr_str
0x5BBEEF: push    1
0x5BBEF1: push    edi
0x5BBEF2: lea     eax, [esp+4Ch+a3]
0x5BBEF6: push    edi
0x5BBEF7: push    eax
0x5BBEF8: mov     [esp+54h+var_4], 2
0x5BBF00: mov     [esp+54h+a3], edi; a3
0x5BBF04: mov     [esp+54h+a3+4], edi; a3
0x5BBF08: call    sub_52A8A0
0x5BBF0D: add     esp, 10h
0x5BBF10: lea     edi, [esp+44h+a3]
0x5BBF14: mov     ebx, [edi]
0x5BBF16: test    ebx, ebx
0x5BBF18: jz      loc_5BC0CB
0x5BBF1E: mov     eax, [ebx+68h]
0x5BBF21: mov     eax, [eax+34h]
0x5BBF24: test    eax, eax
0x5BBF26: mov     edi, [edi+4]
0x5BBF29: jnz     short loc_5BBF30
0x5BBF2B: mov     eax, offset EmptyString
0x5BBF30: push    eax
0x5BBF31: lea     ecx, [esp+48h+var_20]
0x5BBF35: call    sub_5755D0
0x5BBF3A: test    al, al
0x5BBF3C: jnz     short loc_5BBF47
0x5BBF3E: test    edi, edi
0x5BBF40: jnz     short loc_5BBF14
0x5BBF42: jmp     loc_5BC0CB
0x5BBF47: mov     ebx, [ebx+68h]
0x5BBF4A: mov     ecx, ds:0B333C4h
0x5BBF50: push    ebx
0x5BBF51: call    sub_660450
0x5BBF56: fld1
0x5BBF58: mov     ecx, [esi+4Ch]; this
0x5BBF5B: push    ecx
0x5BBF5C: fstp    [esp+48h+a2]; a3
0x5BBF5F: push    0FA1h; a2
0x5BBF64: call    Tile_SetFloat
0x5BBF69: fld     dword ptr ds:0A379B4h
0x5BBF6F: mov     ecx, [esi+28h]; this
0x5BBF72: push    ecx
0x5BBF73: fstp    [esp+48h+a2]; a3
0x5BBF76: push    0FAEh; a2
0x5BBF7B: call    Tile_SetFloat
0x5BBF80: push    1; arg1
0x5BBF82: push    0; canCreate
0x5BBF84: call    InterfaceManager_GetSingleton
0x5BBF89: fld1
0x5BBF8B: add     esp, 4
0x5BBF8E: fstp    [esp+48h+a2]; a3
0x5BBF91: mov     byte ptr [eax+0Dh], 2
0x5BBF95: mov     ecx, [esi+5Ch]; this
0x5BBF98: push    0FA1h; a2
0x5BBF9D: call    Tile_SetFloat
0x5BBFA2: mov     ecx, [esi+5Ch]
0x5BBFA5: push    offset word_A36430
0x5BBFAA: push    0FDEh
0x5BBFAF: call    Tile_SetString
0x5BBFB4: mov     ecx, [esi+0F4h]; this
0x5BBFBA: test    ecx, ecx
0x5BBFBC: jz      short loc_5BBFCE
0x5BBFBE: fldz
0x5BBFC0: push    ecx
0x5BBFC1: fstp    [esp+48h+a2]; a3
0x5BBFC4: push    0FB5h; a2
0x5BBFC9: call    Tile_SetFloat
0x5BBFCE: mov     dword ptr [esi+0F4h], 0
0x5BBFD8: call    sub_5B91E0
0x5BBFDD: fld     dword ptr ds:0A6B618h
0x5BBFE3: mov     ecx, [esi+44h]; this
0x5BBFE6: push    ecx
0x5BBFE7: fstp    [esp+48h+a2]; a3
0x5BBFEA: push    0FB7h; a2
0x5BBFEF: call    Tile_SetFloat
0x5BBFF4: fldz
0x5BBFF6: mov     ecx, [esi+44h]; this
0x5BBFF9: push    ecx
0x5BBFFA: fstp    [esp+48h+a2]; a3
0x5BBFFD: push    0FB7h; a2
0x5BC002: call    Tile_SetFloat
0x5BC007: fld1
0x5BC009: mov     ecx, [esi+54h]; this
0x5BC00C: push    ecx
0x5BC00D: fstp    [esp+48h+a2]; a3
0x5BC010: push    0FA1h; a2
0x5BC015: call    Tile_SetFloat
0x5BC01A: fld1
0x5BC01C: mov     ecx, [esi+50h]; this
0x5BC01F: push    ecx
0x5BC020: fstp    [esp+48h+a2]; a3
0x5BC023: push    0FA1h; a2
0x5BC028: call    Tile_SetFloat
0x5BC02D: mov     ecx, [esi+58h]
0x5BC030: mov     edi, [ecx+34h]
0x5BC033: test    edi, edi
0x5BC035: jz      loc_5BC0CB
0x5BC03B: jmp     short loc_5BC040
0x5BC03D: align 10h
0x5BC040: mov     ebx, [edi+8]
0x5BC043: lea     eax, [edi+8]
0x5BC046: mov     edi, [edi]
0x5BC048: push    0FB3h
0x5BC04D: mov     ecx, ebx
0x5BC04F: call    Tile_GetFloat
0x5BC054: fcomp   dword ptr ds:0A6BF7Ch
0x5BC05A: fnstsw  ax
0x5BC05C: test    ah, 44h
0x5BC05F: jp      short loc_5BC07A
0x5BC061: push    0FB4h
0x5BC066: mov     ecx, ebx
0x5BC068: call    Tile_GetFloat
0x5BC06D: fcomp   dword ptr ds:0A379B4h
0x5BC073: fnstsw  ax
0x5BC075: test    ah, 44h
0x5BC078: jnp     short loc_5BC080
0x5BC07A: test    edi, edi
0x5BC07C: jnz     short loc_5BC040
0x5BC07E: jmp     short loc_5BC0CB
0x5BC080: push    0FAFh
0x5BC085: mov     ecx, ebx
0x5BC087: call    Tile_GetFloat
0x5BC08C: fstp    [esp+44h+var_34]
0x5BC090: push    0FB0h
0x5BC095: mov     ecx, ebx
0x5BC097: call    Tile_GetFloat
0x5BC09C: fstp    [esp+44h+var_30]
0x5BC0A0: mov     esi, [esi+58h]
0x5BC0A3: fld     [esp+44h+var_34]
0x5BC0A7: push    ecx
0x5BC0A8: fstp    [esp+48h+a2]; a3
0x5BC0AB: push    0FB8h; a2
0x5BC0B0: mov     ecx, esi; this
0x5BC0B2: call    Tile_SetFloat
0x5BC0B7: fld     [esp+44h+var_30]
0x5BC0BB: push    ecx
0x5BC0BC: fstp    [esp+48h+a2]; a3
0x5BC0BF: push    0FB9h; a2
0x5BC0C4: mov     ecx, esi; this
0x5BC0C6: call    Tile_SetFloat
0x5BC0CB: lea     ecx, [esp+44h+a3]
0x5BC0CF: call    BSSimpleList_Clear
0x5BC0D4: lea     ecx, [esp+44h+var_20]; void *
0x5BC0D8: mov     [esp+44h+var_4], 0FFFFFFFFh
0x5BC0E0: call    BSStringT_Clear
0x5BC0E5: mov     ecx, [esp+44h+var_C]
0x5BC0E9: mov     large fs:0, ecx
0x5BC0F0: pop     ecx
0x5BC0F1: pop     edi
0x5BC0F2: pop     esi
0x5BC0F3: pop     ebx
0x5BC0F4: mov     esp, ebp
0x5BC0F6: pop     ebp
0x5BC0F7: retn    8
0x5BC0FA: mov     ecx, [esi+28h]
0x5BC0FD: push    0FAEh
0x5BC102: call    Tile_GetFloat
0x5BC107: call    Double_To_SInt32
0x5BC10C: cmp     edi, 7
0x5BC10F: mov     ebx, eax
0x5BC111: jnz     short loc_5BC118
0x5BC113: sub     ebx, 1
0x5BC116: jmp     short loc_5BC11B
0x5BC118: add     ebx, 1
0x5BC11B: cmp     ebx, 1
0x5BC11E: mov     [esp+44h+var_34], ebx
0x5BC122: jge     short loc_5BC12B
0x5BC124: mov     ebx, 5
0x5BC129: jmp     short loc_5BC135
0x5BC12B: cmp     ebx, 5
0x5BC12E: jle     short loc_5BC139
0x5BC130: mov     ebx, 1
0x5BC135: mov     [esp+44h+var_34], ebx
0x5BC139: fild    [esp+44h+var_34]
0x5BC13D: push    ecx
0x5BC13E: mov     ecx, [esi+28h]; this
0x5BC141: fstp    [esp+48h+a2]; a3
0x5BC144: push    0FAEh; a2
0x5BC149: call    Tile_SetFloat
0x5BC14E: mov     eax, [ebp+arg_4]
0x5BC151: mov     edx, [esi]
0x5BC153: mov     edx, [edx+14h]
0x5BC156: push    eax
0x5BC157: push    edi
0x5BC158: mov     ecx, esi
0x5BC15A: call    edx
0x5BC15C: push    0
0x5BC15E: push    ebx
0x5BC15F: mov     ecx, esi
0x5BC161: call    sub_5BB210
0x5BC166: mov     ecx, [esp+4Ch+var_20+0Ch]
0x5BC16A: mov     large fs:0, ecx
0x5BC171: pop     ecx
0x5BC172: pop     edi
0x5BC173: pop     esi
0x5BC174: pop     ebx
0x5BC175: mov     esp, ebp
0x5BC177: pop     ebp
0x5BC178: retn    8
