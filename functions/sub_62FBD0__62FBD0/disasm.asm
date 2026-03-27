0x62FBD0: sub     esp, 20h
0x62FBD3: push    ebx
0x62FBD4: push    ebp
0x62FBD5: mov     ebp, ecx
0x62FBD7: push    esi
0x62FBD8: push    edi; int
0x62FBD9: mov     edi, [ebp+8]
0x62FBDC: mov     ecx, [edi+28h]
0x62FBDF: mov     [esp+30h+var_1C], ebp
0x62FBE3: mov     [esp+30h+var_1D], 0
0x62FBE8: call    sub_569E60
0x62FBED: mov     esi, [esp+30h+arg_0]
0x62FBF1: mov     ebx, eax
0x62FBF3: lea     ecx, [esi+44h]
0x62FBF6: mov     [esp+30h+var_10], ebx
0x62FBFA: call    ExtraDataList__GetExtraPackage
0x62FBFF: mov     dword ptr [esp+30h+var_8], eax
0x62FC03: mov     eax, ds:0B333C4h
0x62FC08: cmp     ebx, eax
0x62FC0A: jnz     short loc_62FC2D
0x62FC0C: cmp     byte ptr [eax+5C0h], 0
0x62FC13: jz      short loc_62FC2D
0x62FC15: mov     eax, [ebp+0]
0x62FC18: mov     edx, [eax+194h]
0x62FC1E: push    esi
0x62FC1F: mov     ecx, ebp
0x62FC21: call    edx
0x62FC23: pop     edi
0x62FC24: pop     esi
0x62FC25: pop     ebp
0x62FC26: pop     ebx
0x62FC27: add     esp, 20h
0x62FC2A: retn    4
0x62FC2D: mov     eax, [ebp+0]
0x62FC30: mov     edx, [eax+36Ch]
0x62FC36: mov     ecx, ebp
0x62FC38: mov     byte ptr [esp+30h+arg_0], 0
0x62FC3D: call    edx
0x62FC3F: test    eax, eax
0x62FC41: jz      short loc_62FC9F
0x62FC43: mov     eax, [ebp+0]
0x62FC46: mov     edx, [eax+36Ch]
0x62FC4C: mov     ecx, ebp
0x62FC4E: call    edx
0x62FC50: cmp     eax, 4
0x62FC53: jz      short loc_62FC67
0x62FC55: mov     eax, [ebp+0]
0x62FC58: mov     edx, [eax+36Ch]
0x62FC5E: mov     ecx, ebp
0x62FC60: call    edx
0x62FC62: cmp     eax, 9
0x62FC65: jnz     short loc_62FC9F
0x62FC67: mov     eax, [esi]
0x62FC69: mov     edx, [eax+380h]
0x62FC6F: mov     ecx, esi
0x62FC71: call    edx
0x62FC73: test    eax, eax
0x62FC75: mov     eax, [esi]
0x62FC77: mov     ecx, esi
0x62FC79: jz      short loc_62FC8D
0x62FC7B: mov     edx, [eax+230h]
0x62FC81: call    edx
0x62FC83: pop     edi
0x62FC84: pop     esi
0x62FC85: pop     ebp
0x62FC86: pop     ebx
0x62FC87: add     esp, 20h
0x62FC8A: retn    4
0x62FC8D: mov     edx, [eax+320h]
0x62FC93: call    edx
0x62FC95: pop     edi
0x62FC96: pop     esi
0x62FC97: pop     ebp
0x62FC98: pop     ebx
0x62FC99: add     esp, 20h
0x62FC9C: retn    4
0x62FC9F: mov     ecx, esi
0x62FCA1: call    Actor_GetBaseClass
0x62FCA6: mov     ecx, eax
0x62FCA8: call    TESClass__IsGuardClass
0x62FCAD: test    al, al
0x62FCAF: jnz     loc_63006D
0x62FCB5: mov     edi, [edi+3Ch]
0x62FCB8: test    edi, edi
0x62FCBA: mov     [esp+30h+var_14], edi
0x62FCBE: mov     [esp+30h+var_1E], 1
0x62FCC3: jz      loc_62FE88
0x62FCC9: lea     esp, [esp+0]
0x62FCD0: mov     eax, [esp+30h+var_14]
0x62FCD4: mov     edi, [eax]
0x62FCD6: test    edi, edi
0x62FCD8: jz      loc_62FE51
0x62FCDE: mov     ebp, [edi+8]
0x62FCE1: test    ebp, ebp
0x62FCE3: mov     [esp+30h+var_18], 0
0x62FCEB: jz      short loc_62FD02
0x62FCED: mov     edx, [ebp+0]
0x62FCF0: mov     eax, [edx+190h]
0x62FCF6: mov     ecx, ebp
0x62FCF8: call    eax
0x62FCFA: test    al, al
0x62FCFC: jz      short loc_62FD02
0x62FCFE: mov     [esp+30h+var_18], ebp
0x62FD02: cmp     byte ptr [edi+2Ch], 0
0x62FD06: jnz     short loc_62FD1F
0x62FD08: mov     ecx, [esp+30h+var_1C]
0x62FD0C: mov     edx, [ecx]
0x62FD0E: mov     eax, [edx+230h]
0x62FD14: push    edi
0x62FD15: push    ebx
0x62FD16: push    esi
0x62FD17: call    eax
0x62FD19: cmp     byte ptr [edi+2Ch], 0
0x62FD1D: jz      short loc_62FD26
0x62FD1F: mov     [esp+30h+var_1E], 0
0x62FD24: jmp     short loc_62FDA3
0x62FD26: mov     eax, [edi+4]
0x62FD29: test    eax, eax
0x62FD2B: jz      short loc_62FD32
0x62FD2D: cmp     eax, 1
0x62FD30: jnz     short loc_62FDA3
0x62FD32: mov     ecx, ds:0B333C4h
0x62FD38: cmp     [edi+0Ch], ecx
0x62FD3B: jnz     short loc_62FDA3
0x62FD3D: mov     ebp, [edi+24h]
0x62FD40: xor     ebx, ebx
0x62FD42: test    ebp, ebp
0x62FD44: jz      short loc_62FD4E
0x62FD46: cmp     byte ptr [ebp+4], 6
0x62FD4A: jnz     short loc_62FD4E
0x62FD4C: mov     ebx, ebp
0x62FD4E: cmp     eax, 1
0x62FD51: jz      short loc_62FD9A
0x62FD53: mov     edx, [esi]
0x62FD55: mov     eax, [edx+170h]
0x62FD5B: mov     ecx, esi
0x62FD5D: call    eax
0x62FD5F: cmp     eax, ebp
0x62FD61: jz      short loc_62FD9A
0x62FD63: test    ebx, ebx
0x62FD65: jz      short loc_62FD9F
0x62FD67: cmp     esi, ds:0B333C4h
0x62FD6D: setz    cl
0x62FD70: push    ecx
0x62FD71: push    ebx
0x62FD72: push    0; a2
0x62FD74: mov     ecx, esi; this
0x62FD76: call    Actor_GetActorBaseForm
0x62FD7B: mov     ecx, eax
0x62FD7D: add     ecx, 24h ; '$'
0x62FD80: call    TESActorBaseData_GetFactionRank
0x62FD85: mov     [esp+30h+var_C], eax
0x62FD89: fild    [esp+30h+var_C]
0x62FD8D: fcomp   dword ptr ds:0A30634h
0x62FD93: fnstsw  ax
0x62FD95: test    ah, 41h
0x62FD98: jnz     short loc_62FD9F
0x62FD9A: mov     [esp+30h+var_1D], 1
0x62FD9F: mov     ebx, [esp+30h+var_10]
0x62FDA3: cmp     byte ptr [esp+30h+arg_0], 0
0x62FDA8: jnz     loc_62FE3A
0x62FDAE: cmp     dword ptr [edi+4], 2
0x62FDB2: jle     short loc_62FDF4
0x62FDB4: cmp     [esp+30h+var_18], 0
0x62FDB9: jz      short loc_62FE3A
0x62FDBB: push    64h ; 'd'
0x62FDBD: push    0
0x62FDBF: push    0
0x62FDC1: push    1
0x62FDC3: push    0
0x62FDC5: push    ebx
0x62FDC6: mov     ecx, esi
0x62FDC8: call    TesObjectREF_GetDistance
0x62FDCD: mov     edx, [esi]
0x62FDCF: mov     eax, [edx+284h]
0x62FDD5: push    ecx
0x62FDD6: fstp    [esp+44h+var_44]
0x62FDD9: push    21h ; '!'
0x62FDDB: mov     ecx, esi
0x62FDDD: call    eax
0x62FDDF: mov     edx, [esi]
0x62FDE1: mov     edx, [edx+224h]
0x62FDE7: push    eax
0x62FDE8: mov     eax, [esp+48h+var_18]
0x62FDEC: push    eax
0x62FDED: mov     ecx, esi
0x62FDEF: call    edx
0x62FDF1: push    eax
0x62FDF2: jmp     short loc_62FE1B
0x62FDF4: push    64h ; 'd'; responsibility
0x62FDF6: push    0; a7
0x62FDF8: push    0; a6
0x62FDFA: push    0; a5
0x62FDFC: push    0
0x62FDFE: push    ebx
0x62FDFF: mov     ecx, esi
0x62FE01: call    TesObjectREF_GetDistance
0x62FE06: mov     eax, [esi]
0x62FE08: mov     edx, [eax+284h]
0x62FE0E: push    ecx
0x62FE0F: fstp    [esp+44h+var_44]
0x62FE12: push    21h ; '!'
0x62FE14: mov     ecx, esi
0x62FE16: call    edx
0x62FE18: push    eax; distanceToTarget
0x62FE19: push    0; aggressionStat
0x62FE1B: mov     eax, [esi]
0x62FE1D: mov     edx, [eax+224h]
0x62FE23: push    ebx; friendlyFight?
0x62FE24: mov     ecx, esi
0x62FE26: call    edx
0x62FE28: push    eax; disposition
0x62FE29: call    shouldActorFight
0x62FE2E: add     esp, 20h
0x62FE31: test    eax, eax
0x62FE33: jle     short loc_62FE3A
0x62FE35: mov     byte ptr [esp+30h+arg_0], 1
0x62FE3A: mov     eax, [esp+30h+var_14]
0x62FE3E: mov     eax, [eax+4]
0x62FE41: test    eax, eax
0x62FE43: mov     ebp, [esp+30h+var_1C]
0x62FE47: mov     [esp+30h+var_14], eax
0x62FE4B: jnz     loc_62FCD0
0x62FE51: cmp     byte ptr [esp+30h+arg_0], 0
0x62FE56: jz      short loc_62FE88
0x62FE58: mov     ecx, esi; int
0x62FE5A: call    sub_5EAE70
0x62FE5F: mov     edx, [ebp+0]
0x62FE62: mov     eax, [edx+228h]
0x62FE68: push    1
0x62FE6A: push    0
0x62FE6C: push    0
0x62FE6E: push    0
0x62FE70: push    0
0x62FE72: push    0
0x62FE74: push    0
0x62FE76: push    0
0x62FE78: push    ebx
0x62FE79: push    esi
0x62FE7A: mov     ecx, ebp
0x62FE7C: call    eax
0x62FE7E: pop     edi
0x62FE7F: pop     esi
0x62FE80: pop     ebp
0x62FE81: pop     ebx
0x62FE82: add     esp, 20h
0x62FE85: retn    4
0x62FE88: mov     eax, dword ptr [esp+30h+var_8]
0x62FE8C: test    eax, eax
0x62FE8E: jz      short loc_62FE9F
0x62FE90: mov     ecx, [eax+1Ch]
0x62FE93: shr     ecx, 0Ch
0x62FE96: test    cl, 1
0x62FE99: jnz     loc_62FFBC
0x62FE9F: mov     ecx, ds:0B333C4h
0x62FEA5: cmp     ebx, ecx
0x62FEA7: jnz     short loc_62FEB4
0x62FEA9: push    0
0x62FEAB: call    PlayerCharacter_IsPlayerInCombat
0x62FEB0: test    al, al
0x62FEB2: jnz     short loc_62FECA
0x62FEB4: mov     edx, [ebx]
0x62FEB6: mov     eax, [edx+334h]
0x62FEBC: push    1
0x62FEBE: mov     ecx, ebx
0x62FEC0: call    eax
0x62FEC2: test    al, al
0x62FEC4: jz      loc_62FFBC
0x62FECA: push    0
0x62FECC: push    esi
0x62FECD: mov     ecx, ebx
0x62FECF: call    TesObjectREF_GetDistance
0x62FED4: fstp    [esp+30h+var_8]
0x62FED8: mov     ecx, offset flt_B36B08
0x62FEDD: call    GameSetting_GetSafeFloatPointer
0x62FEE2: fld     dword ptr [eax]
0x62FEE4: fcomp   [esp+30h+var_8]
0x62FEE8: fnstsw  ax
0x62FEEA: test    ah, 1
0x62FEED: jnz     loc_62FFBC
0x62FEF3: push    ebx
0x62FEF4: push    0Ch
0x62FEF6: mov     ecx, offset dword_B3BDB0
0x62FEFB: call    sub_67CF50
0x62FF00: mov     edi, eax
0x62FF02: test    edi, edi
0x62FF04: mov     [esp+30h+arg_0], edi
0x62FF08: jz      short loc_62FF3A
0x62FF0A: lea     ebx, [ebx+0]
0x62FF10: mov     ebp, [edi]
0x62FF12: test    ebp, ebp
0x62FF14: jz      short loc_62FF36
0x62FF16: mov     edi, [edi+4]
0x62FF19: mov     ecx, ebp
0x62FF1B: call    sub_67B710
0x62FF20: test    eax, eax
0x62FF22: jz      short loc_62FF32
0x62FF24: push    0
0x62FF26: push    esi
0x62FF27: mov     ecx, ebp
0x62FF29: call    sub_67B6B0
0x62FF2E: test    eax, eax
0x62FF30: jz      short loc_62FF91
0x62FF32: test    edi, edi
0x62FF34: jnz     short loc_62FF10
0x62FF36: mov     ebp, [esp+30h+var_1C]
0x62FF3A: mov     ecx, [esp+30h+arg_0]
0x62FF3E: call    BSSimpleList_Clear
0x62FF43: mov     ecx, [esp+30h+arg_0]
0x62FF47: push    ecx
0x62FF48: call    FormHeapFree
0x62FF4D: add     esp, 4
0x62FF50: lea     ecx, [esi+44h]
0x62FF53: call    ExtraDataList__GetExtraPackage
0x62FF58: cmp     ebx, ds:0B333C4h
0x62FF5E: jz      loc_630032
0x62FF64: test    eax, eax
0x62FF66: jz      short loc_62FF8A
0x62FF68: cmp     byte ptr [eax+20h], 4
0x62FF6C: jnz     short loc_62FF8A
0x62FF6E: fld     dword ptr ds:0A30634h
0x62FF74: push    ecx
0x62FF75: fstp    [esp+34h+var_34]; float
0x62FF78: push    0; char
0x62FF7A: push    esi; int
0x62FF7B: mov     ecx, eax
0x62FF7D: call    sub_566DC0
0x62FF82: test    al, al
0x62FF84: jnz     loc_630026
0x62FF8A: push    4
0x62FF8C: jmp     loc_63006F
0x62FF91: mov     edx, [esi]
0x62FF93: mov     eax, [edx+314h]
0x62FF99: push    ebp
0x62FF9A: mov     ecx, esi
0x62FF9C: call    eax
0x62FF9E: mov     esi, [esp+30h+arg_0]
0x62FFA2: mov     ecx, esi
0x62FFA4: call    BSSimpleList_Clear
0x62FFA9: push    esi
0x62FFAA: call    FormHeapFree
0x62FFAF: add     esp, 4
0x62FFB2: pop     edi
0x62FFB3: pop     esi
0x62FFB4: pop     ebp
0x62FFB5: pop     ebx
0x62FFB6: add     esp, 20h
0x62FFB9: retn    4
0x62FFBC: cmp     [esp+30h+var_1E], 0
0x62FFC1: jz      short loc_62FF50
0x62FFC3: cmp     [esp+30h+var_1D], 0
0x62FFC8: jz      short loc_62FFD1
0x62FFCA: push    3
0x62FFCC: jmp     loc_63006F
0x62FFD1: mov     edx, [ebx]
0x62FFD3: mov     eax, [edx+354h]
0x62FFD9: mov     ecx, ebx
0x62FFDB: call    eax
0x62FFDD: test    al, al
0x62FFDF: jz      short loc_630022
0x62FFE1: mov     ecx, esi; int
0x62FFE3: call    sub_5EAE70
0x62FFE8: lea     ecx, [ebx+44h]
0x62FFEB: call    sub_41FC70
0x62FFF0: mov     edi, eax
0x62FFF2: test    edi, edi
0x62FFF4: jz      short loc_63000B
0x62FFF6: push    0
0x62FFF8: mov     ecx, edi
0x62FFFA: call    sub_67D330
0x62FFFF: fld     dword ptr [edi+3Ch]
0x630002: fadd    qword ptr ds:0A2FC68h
0x630008: fstp    dword ptr [edi+3Ch]
0x63000B: mov     edx, [esi]
0x63000D: mov     eax, [edx+2FCh]
0x630013: push    edi
0x630014: mov     ecx, esi
0x630016: call    eax
0x630018: pop     edi
0x630019: pop     esi
0x63001A: pop     ebp
0x63001B: pop     ebx
0x63001C: add     esp, 20h
0x63001F: retn    4
0x630022: push    2
0x630024: jmp     short loc_63006F
0x630026: cmp     ebx, ds:0B333C4h
0x63002C: jnz     loc_62FF8A
0x630032: mov     edx, [ebx]
0x630034: mov     eax, [edx+354h]
0x63003A: mov     ecx, ebx
0x63003C: call    eax
0x63003E: test    al, al
0x630040: jz      loc_62FF8A
0x630046: mov     ecx, ds:0B333C4h
0x63004C: mov     edx, [ebp+0]
0x63004F: mov     eax, [edx+198h]
0x630055: push    0
0x630057: push    0FFFFFFFFh
0x630059: push    0
0x63005B: mov     [ebp+2Ch], ecx
0x63005E: push    esi
0x63005F: mov     ecx, ebp
0x630061: call    eax
0x630063: pop     edi
0x630064: pop     esi
0x630065: pop     ebp
0x630066: pop     ebx
0x630067: add     esp, 20h
0x63006A: retn    4
0x63006D: push    1
0x63006F: mov     edx, [ebp+0]
0x630072: mov     eax, [edx+188h]
0x630078: push    esi
0x630079: mov     ecx, ebp
0x63007B: call    eax
0x63007D: pop     edi
0x63007E: pop     esi
0x63007F: pop     ebp
0x630080: pop     ebx
0x630081: add     esp, 20h
0x630084: retn    4
