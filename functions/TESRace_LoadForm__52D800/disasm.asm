0x52D800: push    ebp
0x52D801: mov     ebp, esp
0x52D803: sub     esp, 30h
0x52D806: mov     eax, ds:0B30AACh
0x52D80B: xor     eax, ebp
0x52D80D: mov     [ebp+var_4], eax
0x52D810: push    ebx
0x52D811: push    esi
0x52D812: mov     esi, [ebp+a2]
0x52D815: push    edi
0x52D816: mov     ebx, ecx
0x52D818: xor     edi, edi
0x52D81A: mov     ecx, esi
0x52D81C: mov     [ebp+var_20], ebx
0x52D81F: mov     [ebp+var_1C], edi
0x52D822: mov     [ebp+var_18], edi
0x52D825: mov     [ebp+var_5], 0
0x52D829: call    TESFile_GetRecordType
0x52D82E: cmp     eax, 9
0x52D831: jz      short loc_52D83A
0x52D833: xor     al, al
0x52D835: jmp     loc_52DD6A
0x52D83A: push    ebx
0x52D83B: mov     ecx, esi
0x52D83D: call    TESFile_InitializeFormFromRecord
0x52D842: mov     ecx, esi
0x52D844: call    TESFile_GetChunkType
0x52D849: mov     esi, eax
0x52D84B: cmp     esi, edi
0x52D84D: jz      loc_52DD68
0x52D853: mov     edi, [ebp+a2]
0x52D856: cmp     esi, 4D414E43h
0x52D85C: jg      loc_52D96A
0x52D862: jz      loc_52D955
0x52D868: cmp     esi, 41544144h
0x52D86E: jg      short loc_52D8BF
0x52D870: jz      short loc_52D8AC
0x52D872: cmp     esi, 304D414Eh
0x52D878: jz      short loc_52D8A3
0x52D87A: cmp     esi, 314D414Eh
0x52D880: jz      short loc_52D89A
0x52D882: cmp     esi, 41474746h
0x52D888: jnz     def_52D992; jumptable 0052D992 default case, cases 1296125511,1296125513-1296125516,1296125518,1296125519,1296125521,1296125522,1296125524,1296125527
0x52D88E: xor     eax, eax
0x52D890: mov     ecx, 1
0x52D895: jmp     loc_52DCA9
0x52D89A: mov     [ebp+var_5], 0
0x52D89E: jmp     loc_52DD4C
0x52D8A3: mov     [ebp+var_5], 1
0x52D8A7: jmp     loc_52DD4C
0x52D8AC: push    24h ; '$'; a4
0x52D8AE: lea     eax, [ebx+50h]
0x52D8B1: push    eax; Dst
0x52D8B2: push    edi; a2
0x52D8B3: mov     ecx, ebx; this
0x52D8B5: call    TESForm_LoadGenericComponents
0x52D8BA: jmp     loc_52DD4C
0x52D8BF: cmp     esi, 43534544h
0x52D8C5: jz      short loc_52D92E
0x52D8C7: cmp     esi, 44494445h
0x52D8CD: jz      short loc_52D902
0x52D8CF: cmp     esi, 4C4C5546h
0x52D8D5: jnz     def_52D992; jumptable 0052D992 default case, cases 1296125511,1296125513-1296125516,1296125518,1296125519,1296125521,1296125522,1296125524,1296125527
0x52D8DB: test    ebx, ebx
0x52D8DD: jz      short loc_52D8F1
0x52D8DF: lea     eax, [ebx+18h]
0x52D8E2: push    edi
0x52D8E3: push    eax
0x52D8E4: call    TESFullname_Load
0x52D8E9: add     esp, 8
0x52D8EC: jmp     loc_52DD4C
0x52D8F1: xor     eax, eax
0x52D8F3: push    edi
0x52D8F4: push    eax
0x52D8F5: call    TESFullname_Load
0x52D8FA: add     esp, 8
0x52D8FD: jmp     loc_52DD4C
0x52D902: mov     eax, [edi+254h]
0x52D908: call    __alloca?
0x52D90D: mov     esi, esp
0x52D90F: push    200h; a4
0x52D914: push    esi; Dst
0x52D915: mov     ecx, edi; a1
0x52D917: call    TESFile_GetChunkData
0x52D91C: mov     edx, [ebx]
0x52D91E: mov     eax, [edx+0D8h]
0x52D924: push    esi
0x52D925: mov     ecx, ebx
0x52D927: call    eax
0x52D929: jmp     loc_52DD4C
0x52D92E: test    ebx, ebx
0x52D930: jz      short loc_52D944
0x52D932: lea     eax, [ebx+24h]
0x52D935: push    edi
0x52D936: push    eax
0x52D937: call    TESDescription_Load
0x52D93C: add     esp, 8
0x52D93F: jmp     loc_52DD4C
0x52D944: xor     eax, eax
0x52D946: push    edi
0x52D947: push    eax
0x52D948: call    TESDescription_Load
0x52D94D: add     esp, 8
0x52D950: jmp     loc_52DD4C
0x52D955: push    1; a4
0x52D957: lea     ecx, [ebx+9Ch]
0x52D95D: push    ecx; Dst
0x52D95E: mov     ecx, edi; a1
0x52D960: call    TESFile_GetChunkData
0x52D965: jmp     loc_52DD4C
0x52D96A: cmp     esi, 4F4C5053h
0x52D970: jg      loc_52DC49
0x52D976: jz      loc_52DC26
0x52D97C: lea     eax, [esi-4D414E44h]; switch 21 cases
0x52D982: cmp     eax, 14h
0x52D985: ja      def_52D992; jumptable 0052D992 default case, cases 1296125511,1296125513-1296125516,1296125518,1296125519,1296125521,1296125522,1296125524,1296125527
0x52D98B: movzx   edx, ds:byte_52DEAC[eax]
0x52D992: jmp     ds:jpt_52D992[edx*4]; switch jump
0x52D999: push    8; jumptable 0052D992 case 1296125528
0x52D99B: call    FormHeapAlloc
0x52D9A0: add     esp, 4
0x52D9A3: mov     esi, eax
0x52D9A5: push    8; a4
0x52D9A7: push    esi; Dst
0x52D9A8: mov     ecx, edi; a1
0x52D9AA: call    TESFile_GetChunkData
0x52D9AF: push    esi
0x52D9B0: lea     ecx, [ebx+44h]
0x52D9B3: call    BSSimpleList_PushBack
0x52D9B8: jmp     loc_52DD4C
0x52D9BD: mov     eax, [edi+254h]; jumptable 0052D992 case 1296125526
0x52D9C3: cmp     eax, 4
0x52D9C6: jnz     short loc_52D9DB
0x52D9C8: xor     eax, eax
0x52D9CA: mov     [ebx+300h], eax
0x52D9D0: mov     [ebx+304h], eax
0x52D9D6: jmp     loc_52DD4C
0x52D9DB: cmp     eax, 8
0x52D9DE: jnz     loc_52DD4C
0x52D9E4: push    eax; a4
0x52D9E5: lea     eax, [ebp+Dst]
0x52D9E8: push    eax; Dst
0x52D9E9: mov     ecx, edi; a1
0x52D9EB: call    TESFile_GetChunkData
0x52D9F0: mov     ecx, dword ptr [ebp+Dst]
0x52D9F3: mov     edx, [ebp+var_24]
0x52D9F6: mov     [ebx+300h], ecx
0x52D9FC: mov     [ebx+304h], edx
0x52DA02: jmp     loc_52DD4C
0x52DA07: lea     eax, [ebx+0A0h]; jumptable 0052D992 case 1296125520
0x52DA0D: push    eax
0x52DA0E: mov     ecx, edi
0x52DA10: call    TESFile_GetChunkData4
0x52DA15: jmp     loc_52DD4C
0x52DA1A: lea     ecx, [ebx+0A4h]; jumptable 0052D992 case 1296125525
0x52DA20: push    ecx
0x52DA21: mov     ecx, edi
0x52DA23: call    TESFile_GetChunkData4
0x52DA28: jmp     loc_52DD4C
0x52DA2D: push    8; jumptable 0052D992 case 1296125508
0x52DA2F: lea     edx, [ebp+var_30]
0x52DA32: push    edx; Dst
0x52DA33: mov     ecx, edi; a1
0x52DA35: call    TESFile_GetChunkData
0x52DA3A: mov     eax, dword ptr [ebp+var_30]
0x52DA3D: mov     ecx, [ebp+var_2C]
0x52DA40: mov     [ebx+94h], eax
0x52DA46: mov     [ebx+98h], ecx
0x52DA4C: jmp     loc_52DD4C
0x52DA51: mov     [ebp+var_1C], 1; jumptable 0052D992 case 1296125510
0x52DA58: jmp     loc_52DD4C
0x52DA5D: mov     [ebp+var_1C], 0; jumptable 0052D992 case 1296125517
0x52DA64: jmp     loc_52DD4C
0x52DA69: cmp     dword ptr [edi+254h], 2; jumptable 0052D992 case 1296125523
0x52DA70: jb      loc_52DD4C
0x52DA76: lea     edx, [ebx+2FCh]
0x52DA7C: push    edx
0x52DA7D: mov     ecx, edi
0x52DA7F: call    TESFile_GetChunkData2
0x52DA84: jmp     loc_52DD4C
0x52DA89: mov     eax, [edi+254h]; jumptable 0052D992 case 1296125512
0x52DA8F: test    al, 3
0x52DA91: mov     [ebp+a4], eax
0x52DA94: jnz     loc_52DD4C
0x52DA9A: shr     eax, 2
0x52DA9D: mov     [ebp+var_C], eax
0x52DAA0: jz      loc_52DD4C
0x52DAA6: xor     ecx, ecx
0x52DAA8: mov     edx, 4
0x52DAAD: mul     edx
0x52DAAF: seto    cl
0x52DAB2: neg     ecx
0x52DAB4: or      ecx, eax
0x52DAB6: push    ecx; Size
0x52DAB7: call    FormHeapAlloc
0x52DABC: mov     edi, [ebp+a2]
0x52DABF: mov     esi, eax
0x52DAC1: mov     eax, [ebp+a4]
0x52DAC4: add     esp, 4
0x52DAC7: push    eax; a4
0x52DAC8: push    esi; Dst
0x52DAC9: mov     ecx, edi; a1
0x52DACB: mov     [ebp+var_10], esi
0x52DACE: call    TESFile_GetChunkData
0x52DAD3: cmp     [ebp+var_C], 0
0x52DAD7: jbe     short loc_52DB48
0x52DAD9: mov     ecx, [ebp+var_C]
0x52DADC: mov     [ebp+var_C], ecx
0x52DADF: nop
0x52DAE0: push    edi; a2
0x52DAE1: push    esi; a1
0x52DAE2: call    TESForm_ResolveFormID
0x52DAE7: mov     edx, [esi]
0x52DAE9: mov     ecx, ds:0B33A98h
0x52DAEF: add     esp, 8
0x52DAF2: push    0; int
0x52DAF4: push    offset ??_R0?AVTESHair@@@8; struct TypeDescriptor *
0x52DAF9: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52DAFE: push    0; int
0x52DB00: push    edx
0x52DB01: call    TESDataHandler_LookupFormByID
0x52DB06: push    eax; void *
0x52DB07: call    OblivionDynamicCast
0x52DB0C: add     esp, 14h
0x52DB0F: test    eax, eax
0x52DB11: mov     ecx, ebx
0x52DB13: jz      short loc_52DB1D
0x52DB15: push    eax
0x52DB16: call    sub_52B550
0x52DB1B: jmp     short loc_52DB3C
0x52DB1D: mov     eax, [ebx+0Ch]
0x52DB20: push    eax
0x52DB21: mov     eax, [ebx]
0x52DB23: mov     edx, [eax+0D4h]
0x52DB29: call    edx
0x52DB2B: push    eax
0x52DB2C: mov     eax, [esi]
0x52DB2E: push    eax; ArgList
0x52DB2F: push    offset aCouldNotFind_2; "Could not find hair (%08X) for race '%s"...
0x52DB34: call    PrintError
0x52DB39: add     esp, 10h
0x52DB3C: add     esi, 4
0x52DB3F: sub     [ebp+var_C], 1
0x52DB43: jnz     short loc_52DAE0
0x52DB45: mov     esi, [ebp+var_10]
0x52DB48: push    esi
0x52DB49: call    FormHeapFree
0x52DB4E: add     esp, 4
0x52DB51: jmp     loc_52DD4C
0x52DB56: mov     eax, [edi+254h]; jumptable 0052D992 case 1296125509
0x52DB5C: test    al, 3
0x52DB5E: mov     [ebp+var_10], eax
0x52DB61: jnz     loc_52DD4C
0x52DB67: shr     eax, 2
0x52DB6A: mov     [ebp+var_C], eax
0x52DB6D: jz      loc_52DD4C
0x52DB73: xor     ecx, ecx
0x52DB75: mov     edx, 4
0x52DB7A: mul     edx
0x52DB7C: seto    cl
0x52DB7F: neg     ecx
0x52DB81: or      ecx, eax
0x52DB83: push    ecx; Size
0x52DB84: call    FormHeapAlloc
0x52DB89: mov     edi, [ebp+a2]
0x52DB8C: mov     esi, eax
0x52DB8E: mov     eax, [ebp+var_10]
0x52DB91: add     esp, 4
0x52DB94: push    eax; a4
0x52DB95: push    esi; Dst
0x52DB96: mov     ecx, edi; a1
0x52DB98: mov     [ebp+a4], esi
0x52DB9B: call    TESFile_GetChunkData
0x52DBA0: cmp     [ebp+var_C], 0
0x52DBA4: jbe     short loc_52DC18
0x52DBA6: mov     ecx, [ebp+var_C]
0x52DBA9: mov     [ebp+var_10], ecx
0x52DBAC: lea     esp, [esp+0]
0x52DBB0: push    edi; a2
0x52DBB1: push    esi; a1
0x52DBB2: call    TESForm_ResolveFormID
0x52DBB7: mov     edx, [esi]
0x52DBB9: mov     ecx, ds:0B33A98h
0x52DBBF: add     esp, 8
0x52DBC2: push    0; int
0x52DBC4: push    offset ??_R0?AVTESEyes@@@8; struct TypeDescriptor *
0x52DBC9: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52DBCE: push    0; int
0x52DBD0: push    edx
0x52DBD1: call    TESDataHandler_LookupFormByID
0x52DBD6: push    eax; void *
0x52DBD7: call    OblivionDynamicCast
0x52DBDC: add     esp, 14h
0x52DBDF: test    eax, eax
0x52DBE1: mov     ecx, ebx
0x52DBE3: jz      short loc_52DBED
0x52DBE5: push    eax
0x52DBE6: call    sub_52B610
0x52DBEB: jmp     short loc_52DC0C
0x52DBED: mov     eax, [ebx+0Ch]
0x52DBF0: push    eax
0x52DBF1: mov     eax, [ebx]
0x52DBF3: mov     edx, [eax+0D4h]
0x52DBF9: call    edx
0x52DBFB: push    eax
0x52DBFC: mov     eax, [esi]
0x52DBFE: push    eax; ArgList
0x52DBFF: push    offset aCouldNotFind_3; "Could not find eyes (%08X) for race '%s"...
0x52DC04: call    PrintError
0x52DC09: add     esp, 10h
0x52DC0C: add     esi, 4
0x52DC0F: sub     [ebp+var_10], 1
0x52DC13: jnz     short loc_52DBB0
0x52DC15: mov     esi, [ebp+a4]
0x52DC18: push    esi
0x52DC19: call    FormHeapFree
0x52DC1E: add     esp, 4
0x52DC21: jmp     loc_52DD4C
0x52DC26: lea     ecx, [ebp+a4]
0x52DC29: push    ecx
0x52DC2A: mov     ecx, edi
0x52DC2C: mov     [ebp+a4], 0
0x52DC33: call    TESFile_GetChunkData4
0x52DC38: mov     edx, [ebp+a4]
0x52DC3B: push    edx
0x52DC3C: lea     ecx, [ebx+2Ch]
0x52DC3F: call    TESSpellList_AddFormToSpellList
0x52DC44: jmp     loc_52DD4C
0x52DC49: cmp     esi, 53544746h
0x52DC4F: jg      loc_52DD80
0x52DC55: jz      short loc_52DCA2
0x52DC57: cmp     esi, 52545441h
0x52DC5D: jz      short loc_52DC6F
0x52DC5F: cmp     esi, 53474746h
0x52DC65: jnz     def_52D992; jumptable 0052D992 default case, cases 1296125511,1296125513-1296125516,1296125518,1296125519,1296125521,1296125522,1296125524,1296125527
0x52DC6B: xor     eax, eax
0x52DC6D: jmp     short loc_52DCA7
0x52DC6F: mov     eax, 10h
0x52DC74: call    __alloca_probe_8
0x52DC79: mov     esi, esp
0x52DC7B: push    10h; a4
0x52DC7D: push    esi; Dst
0x52DC7E: mov     ecx, edi; a1
0x52DC80: call    TESFile_GetChunkData
0x52DC85: push    esi
0x52DC86: lea     ecx, [ebx+74h]
0x52DC89: call    sub_468CA0
0x52DC8E: add     esi, 8
0x52DC91: push    esi
0x52DC92: lea     ecx, [ebx+80h]
0x52DC98: call    sub_468CA0
0x52DC9D: jmp     loc_52DD4C
0x52DCA2: mov     eax, 1
0x52DCA7: xor     ecx, ecx
0x52DCA9: mov     edx, [ebp+a2]
0x52DCAC: fldz
0x52DCAE: mov     edi, [edx+254h]
0x52DCB4: lea     eax, [ecx+eax*2]
0x52DCB7: push    ecx
0x52DCB8: lea     eax, [eax+eax*2]
0x52DCBB: fstp    [esp+40h+anonymous_0]; int
0x52DCBE: lea     esi, [ebx+eax*8+29Ch]
0x52DCC5: mov     [ebp+var_C], edi
0x52DCC8: shr     edi, 2
0x52DCCB: push    edi; int
0x52DCCC: lea     ecx, [esi+8]; int
0x52DCCF: mov     [esi], edi
0x52DCD1: mov     dword ptr [esi+4], 1
0x52DCD8: call    sub_527160
0x52DCDD: mov     eax, [ebp+var_C]
0x52DCE0: call    __alloca?
0x52DCE5: mov     ecx, [ebp+var_C]
0x52DCE8: mov     eax, esp
0x52DCEA: push    ecx
0x52DCEB: push    0
0x52DCED: push    eax
0x52DCEE: mov     [ebp+a4], eax
0x52DCF1: call    __memset
0x52DCF6: mov     edx, [ebp+var_C]
0x52DCF9: mov     eax, [ebp+a4]
0x52DCFC: mov     ecx, [ebp+a2]; a1
0x52DCFF: add     esp, 0Ch
0x52DD02: push    edx; a4
0x52DD03: push    eax; Dst
0x52DD04: call    TESFile_GetChunkData
0x52DD09: test    edi, edi
0x52DD0B: mov     [ebp+var_10], 0
0x52DD12: jbe     short loc_52DD49
0x52DD14: mov     ebx, [ebp+var_10]
0x52DD17: mov     eax, [esi+0Ch]
0x52DD1A: test    eax, eax
0x52DD1C: jz      short loc_52DD28
0x52DD1E: mov     ecx, [esi+10h]
0x52DD21: sub     ecx, eax
0x52DD23: sar     ecx, 2
0x52DD26: jnz     short loc_52DD2D
0x52DD28: call    __invalid_parameter_noinfo
0x52DD2D: mov     edx, [esi+4]
0x52DD30: mov     ecx, [ebp+a4]
0x52DD33: imul    edx, ebx
0x52DD36: fld     dword ptr [ecx+ebx*4]
0x52DD39: mov     eax, [esi+0Ch]
0x52DD3C: add     ebx, 1
0x52DD3F: cmp     ebx, edi
0x52DD41: fstp    dword ptr [eax+edx*4]
0x52DD44: jb      short loc_52DD17
0x52DD46: mov     ebx, [ebp+var_20]
0x52DD49: mov     edi, [ebp+a2]
0x52DD4C: mov     ecx, edi
0x52DD4E: call    TESFile_GetNextChunk
0x52DD53: test    al, al
0x52DD55: jz      short loc_52DD68
0x52DD57: mov     ecx, edi
0x52DD59: call    TESFile_GetChunkType
0x52DD5E: mov     esi, eax
0x52DD60: test    esi, esi
0x52DD62: jnz     loc_52D856
0x52DD68: mov     al, 1
0x52DD6A: lea     esp, [ebp-3Ch]
0x52DD6D: pop     edi
0x52DD6E: pop     esi
0x52DD6F: pop     ebx
0x52DD70: mov     ecx, [ebp+var_4]
0x52DD73: xor     ecx, ebp
0x52DD75: call    @__security_check_cookie@4; __security_check_cookie(x)
0x52DD7A: mov     esp, ebp
0x52DD7C: pop     ebp
0x52DD7D: retn    4
0x52DD80: cmp     esi, 58444E49h
0x52DD86: jz      loc_52DE36
0x52DD8C: push    esi; jumptable 0052D992 default case, cases 1296125511,1296125513-1296125516,1296125518,1296125519,1296125521,1296125522,1296125524,1296125527
0x52DD8D: call    sub_46FF00
0x52DD92: add     esp, 4
0x52DD95: cmp     [ebp+var_5], 0
0x52DD99: jz      short loc_52DDE1
0x52DD9B: test    al, al
0x52DD9D: jz      short loc_52DDB8
0x52DD9F: mov     eax, [ebp+var_18]
0x52DDA2: lea     edx, [eax+eax*2]
0x52DDA5: lea     eax, [ebx+edx*4+1B8h]
0x52DDAC: push    edi
0x52DDAD: push    eax
0x52DDAE: call    TESTexture_Load
0x52DDB3: add     esp, 8
0x52DDB6: jmp     short loc_52DD4C
0x52DDB8: push    esi
0x52DDB9: call    sub_46D3D0
0x52DDBE: add     esp, 4
0x52DDC1: test    al, al
0x52DDC3: jz      short loc_52DD4C
0x52DDC5: mov     eax, [ebp+var_18]
0x52DDC8: lea     ecx, [eax+eax*2]
0x52DDCB: lea     edx, [ebx+ecx*8+0E0h]
0x52DDD2: push    edi
0x52DDD3: push    edx
0x52DDD4: call    TESModel_Load
0x52DDD9: add     esp, 8
0x52DDDC: jmp     loc_52DD4C
0x52DDE1: test    al, al
0x52DDE3: jz      short loc_52DE09
0x52DDE5: mov     ecx, [ebp+var_1C]
0x52DDE8: mov     eax, [ebp+var_18]
0x52DDEB: lea     eax, [eax+ecx*4]
0x52DDEE: add     eax, ecx
0x52DDF0: lea     ecx, [eax+eax*2]
0x52DDF3: lea     edx, [ebx+ecx*4+224h]
0x52DDFA: push    edi
0x52DDFB: push    edx
0x52DDFC: call    TESTexture_Load
0x52DE01: add     esp, 8
0x52DE04: jmp     loc_52DD4C
0x52DE09: push    esi
0x52DE0A: call    sub_46D3D0
0x52DE0F: add     esp, 4
0x52DE12: test    al, al
0x52DE14: jz      loc_52DD4C
0x52DE1A: mov     eax, [ebp+var_1C]
0x52DE1D: lea     eax, [eax+eax*2]
0x52DE20: lea     ecx, [ebx+eax*8+0B0h]
0x52DE27: push    edi
0x52DE28: push    ecx
0x52DE29: call    TESModel_Load
0x52DE2E: add     esp, 8
0x52DE31: jmp     loc_52DD4C
0x52DE36: lea     edx, [ebp+var_18]
0x52DE39: push    edx
0x52DE3A: mov     ecx, edi
0x52DE3C: call    TESFile_GetChunkData4
0x52DE41: cmp     [ebp+var_5], 0
0x52DE45: jz      loc_52DD4C
0x52DE4B: mov     eax, [ebp+var_18]
0x52DE4E: lea     eax, [eax+eax*2]
0x52DE51: mov     edx, [ebx+eax*8+0E0h]
0x52DE58: lea     ecx, [ebx+eax*8+0E0h]
0x52DE5F: mov     eax, [edx]
0x52DE61: call    eax
0x52DE63: mov     eax, [ebp+var_18]
0x52DE66: lea     ecx, [eax+eax*2]
0x52DE69: mov     edx, [ebx+ecx*4+1B8h]
0x52DE70: mov     eax, [edx]
0x52DE72: lea     ecx, [ebx+ecx*4+1B8h]
0x52DE79: call    eax
0x52DE7B: jmp     loc_52DD4C
