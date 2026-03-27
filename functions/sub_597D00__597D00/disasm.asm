0x597D00: sub     esp, 20h
0x597D03: push    ebx; a3
0x597D04: mov     ebx, [esp+24h+arg_0]
0x597D08: cmp     ebx, 33h ; '3'
0x597D0B: push    esi; a3
0x597D0C: mov     esi, ecx
0x597D0E: jz      short loc_597D1C
0x597D10: lea     eax, [ebx-10h]
0x597D13: cmp     eax, 4
0x597D16: ja      loc_598179
0x597D1C: push    ebp; a3
0x597D1D: push    edi; a3
0x597D1E: mov     edi, [esp+30h+arg_4]
0x597D22: xor     ebp, ebp
0x597D24: cmp     edi, ebp
0x597D26: jz      loc_598177
0x597D2C: cmp     ebx, 10h
0x597D2F: jnz     short loc_597D65
0x597D31: mov     ecx, edi
0x597D33: call    sub_5893B0
0x597D38: test    al, al
0x597D3A: jnz     short loc_597D65
0x597D3C: push    offset aCont_p4p5_head; "cont_p4p5_header_text"
0x597D41: push    edi; int
0x597D42: call    sub_58B800
0x597D47: add     esp, 8
0x597D4A: push    ebp
0x597D4B: push    0FDDh
0x597D50: mov     edi, eax
0x597D52: push    edi
0x597D53: push    1; arg1
0x597D55: push    ebp; canCreate
0x597D56: call    InterfaceManager_GetSingleton
0x597D5B: add     esp, 8
0x597D5E: mov     ecx, eax
0x597D60: call    sub_57F9F0
0x597D65: mov     [esi+3Ch], ebp
0x597D68: call    sub_57BD80
0x597D6D: cmp     edi, ebp
0x597D6F: jz      loc_59814D
0x597D75: cmp     [esi+34h], ebp
0x597D78: jz      loc_59814D
0x597D7E: push    4; int
0x597D80: call    sub_57DE50
0x597D85: add     esp, 4
0x597D88: push    0FE0h
0x597D8D: mov     ecx, edi
0x597D8F: call    Tile_GetFloat
0x597D94: call    Double_To_SInt32
0x597D99: mov     ebp, eax
0x597D9B: push    0FD1h
0x597DA0: mov     ecx, edi
0x597DA2: mov     [esp+34h+a3], ebp; a3
0x597DA6: call    Tile_GetFloat
0x597DAB: fcomp   dword ptr ds:0A379B4h
0x597DB1: fnstsw  ax
0x597DB3: test    ah, 44h
0x597DB6: jp      short loc_597DCC
0x597DB8: push    0FCBh
0x597DBD: mov     ecx, edi
0x597DBF: call    Tile_GetFloat
0x597DC4: fmul    qword ptr ds:0A2FAA0h
0x597DCA: jmp     short loc_597DCE
0x597DCC: fldz
0x597DCE: mov     ecx, edi
0x597DD0: fstp    [esp+30h+var_10]
0x597DD4: call    sub_588D90
0x597DD9: fsub    qword ptr ds:0A2FAA0h
0x597DDF: mov     ecx, [esi+34h]
0x597DE2: fstp    qword ptr [esp+30h+var_18]; a3
0x597DE6: call    sub_589390
0x597DEB: mov     ecx, eax
0x597DED: call    sub_588D90
0x597DF2: fsubr   qword ptr [esp+30h+var_18]
0x597DF6: push    ecx
0x597DF7: mov     ecx, [esi+34h]; this
0x597DFA: fstp    [esp+34h+arg_0]
0x597DFE: fld     [esp+34h+arg_0]
0x597E02: fstp    [esp+34h+a2]; a3
0x597E05: push    0FABh; a2
0x597E0A: call    Tile_SetFloat
0x597E0F: lea     ecx, [ebp+ebp+0]
0x597E13: mov     [esp+30h+arg_0], ecx
0x597E17: fild    [esp+30h+arg_0]
0x597E1B: push    0FCBh
0x597E20: mov     ecx, edi
0x597E22: fstp    [esp+34h+arg_0]
0x597E26: call    Tile_GetFloat
0x597E2B: fsub    [esp+30h+arg_0]
0x597E2F: push    ecx
0x597E30: mov     ecx, [esi+34h]; this
0x597E33: fstp    [esp+34h+arg_4]
0x597E37: fld     [esp+34h+arg_4]
0x597E3B: fstp    [esp+34h+a2]; a3
0x597E3E: push    0FCBh; a2
0x597E43: call    Tile_SetFloat
0x597E48: push    0FCAh
0x597E4D: mov     ecx, edi
0x597E4F: call    Tile_GetFloat
0x597E54: fsub    [esp+30h+arg_0]
0x597E58: push    ecx
0x597E59: mov     ecx, [esi+34h]; this
0x597E5C: fstp    [esp+34h+arg_0]
0x597E60: fld     [esp+34h+arg_0]
0x597E64: fstp    [esp+34h+a2]; a3
0x597E67: push    0FCAh; a2
0x597E6C: call    Tile_SetFloat
0x597E71: fild    [esp+30h+a3]
0x597E75: mov     ecx, edi
0x597E77: fstp    [esp+30h+arg_0]
0x597E7B: call    sub_588C50
0x597E80: fadd    [esp+30h+arg_0]
0x597E84: fld     [esp+30h+var_10]
0x597E88: call    Double_To_SInt32
0x597E8D: mov     [esp+30h+arg_4], eax
0x597E91: fisub   [esp+30h+arg_4]
0x597E95: push    ecx
0x597E96: mov     ecx, [esi+34h]; this
0x597E99: fstp    [esp+34h+arg_4]
0x597E9D: fld     [esp+34h+arg_4]
0x597EA1: fstp    [esp+34h+a2]; a3
0x597EA4: push    0FADh; a2
0x597EA9: call    Tile_SetFloat
0x597EAE: mov     ecx, edi
0x597EB0: call    sub_588CF0
0x597EB5: fadd    [esp+30h+arg_0]
0x597EB9: push    ecx
0x597EBA: mov     ecx, [esi+34h]; this
0x597EBD: fstp    [esp+34h+arg_0]
0x597EC1: fld     [esp+34h+arg_0]
0x597EC5: fstp    [esp+34h+a2]; a3
0x597EC8: push    0FACh; a2
0x597ECD: call    Tile_SetFloat
0x597ED2: fld     dword ptr ds:0A379B4h
0x597ED8: push    ecx
0x597ED9: mov     ecx, [esi+34h]; this
0x597EDC: fstp    [esp+34h+a2]; a3
0x597EDF: push    0FA1h; a2
0x597EE4: call    Tile_SetFloat
0x597EE9: cmp     ebx, 33h ; '3'
0x597EEC: mov     [esi+3Ch], edi
0x597EEF: jnz     loc_598177
0x597EF5: cmp     byte ptr [esi+64h], 0
0x597EF9: push    0FAAh
0x597EFE: mov     ecx, edi
0x597F00: jz      short loc_597F11
0x597F02: call    Tile_GetFloat
0x597F07: call    Double_To_SInt32
0x597F0C: mov     [esi+5Ch], eax
0x597F0F: jmp     short loc_597F1E
0x597F11: call    Tile_GetFloat
0x597F16: call    Double_To_SInt32
0x597F1B: mov     [esi+58h], eax
0x597F1E: push    0FB9h
0x597F23: mov     ecx, edi
0x597F25: call    Tile_GetFloat
0x597F2A: call    Double_To_SInt32
0x597F2F: cmp     byte ptr [esi+64h], 0
0x597F33: jnz     short loc_597F3F
0x597F35: mov     ecx, ds:0B333C4h
0x597F3B: push    0
0x597F3D: jmp     short loc_597F47
0x597F3F: movzx   edx, byte ptr [esi+61h]
0x597F43: mov     ecx, [esi+44h]; this
0x597F46: push    edx; a3
0x597F47: push    eax; a2
0x597F48: call    GetInventoryEntryOfItem
0x597F4D: mov     ebp, eax
0x597F4F: test    ebp, ebp
0x597F51: jz      loc_598114
0x597F57: mov     eax, [ebp+8]
0x597F5A: push    0; int
0x597F5C: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x597F61: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x597F66: push    0; int
0x597F68: push    eax; void *
0x597F69: call    OblivionDynamicCast
0x597F6E: push    0; int
0x597F70: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x597F75: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x597F7A: mov     [esp+50h+var_1C], eax
0x597F7E: mov     eax, [ebp+8]
0x597F81: push    0; int
0x597F83: push    eax; void *
0x597F84: call    OblivionDynamicCast
0x597F89: push    0; int
0x597F8B: push    offset ??_R0?AVMagicItem@@@8; struct TypeDescriptor *
0x597F90: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x597F95: mov     [esp+64h+var_18], eax
0x597F99: mov     eax, [ebp+8]
0x597F9C: push    0; int
0x597F9E: push    eax; void *
0x597F9F: call    OblivionDynamicCast
0x597FA4: mov     ecx, [esi+4]
0x597FA7: add     esp, 3Ch
0x597FAA: push    0FB8h
0x597FAF: mov     dword ptr [esp+34h+var_10], eax
0x597FB3: call    Tile_GetFloat
0x597FB8: fstp    [esp+30h+a3]
0x597FBC: mov     ebx, [esi+4]
0x597FBF: push    0FC5h
0x597FC4: mov     ecx, ebx
0x597FC6: call    Tile_GetFloat
0x597FCB: fstp    [esp+30h+var_8]
0x597FCF: mov     ecx, ebx
0x597FD1: call    sub_588D90
0x597FD6: fadd    [esp+30h+var_8]
0x597FDA: push    1; arg1
0x597FDC: push    0; canCreate
0x597FDE: fstp    [esp+38h+arg_0]
0x597FE2: call    InterfaceManager_GetSingleton
0x597FE7: mov     esi, [esi+4]
0x597FEA: add     esp, 8
0x597FED: call    sub_57D7F0
0x597FF2: fstp    [esp+30h+var_8]
0x597FF6: push    0FC4h
0x597FFB: mov     ecx, esi
0x597FFD: call    Tile_GetFloat
0x598002: fsubr   [esp+30h+var_8]
0x598006: mov     eax, [esp+30h+var_1C]
0x59800A: test    eax, eax
0x59800C: fstp    [esp+30h+arg_4]
0x598010: jz      short loc_59802E
0x598012: test    byte ptr [eax+88h], 1
0x598019: jz      short loc_59802E
0x59801B: mov     esi, [eax+64h]
0x59801E: test    esi, esi
0x598020: jz      short loc_59802E
0x598022: fld     [esp+30h+arg_0]
0x598026: push    ecx
0x598027: fstp    [esp+34h+a2]
0x59802A: push    0
0x59802C: jmp     short loc_598046
0x59802E: mov     eax, [esp+30h+var_18]
0x598032: test    eax, eax
0x598034: jz      short loc_598074
0x598036: mov     esi, [eax+4]
0x598039: test    esi, esi
0x59803B: jz      short loc_598074
0x59803D: fld     [esp+30h+arg_0]
0x598041: push    ecx
0x598042: fstp    [esp+34h+a2]; float
0x598045: push    ebp; int
0x598046: fld     [esp+38h+arg_4]
0x59804A: push    ecx
0x59804B: mov     ecx, edi
0x59804D: fstp    [esp+3Ch+var_3C]; float
0x598050: call    sub_588CF0
0x598055: sub     esp, 8
0x598058: fstp    [esp+44h+var_40]; float
0x59805C: add     esi, 18h
0x59805F: fld     [esp+44h+a3]
0x598063: fstp    [esp+44h+var_44]; float
0x598066: push    esi; int
0x598067: call    sub_57BB20
0x59806C: add     esp, 18h
0x59806F: jmp     loc_5980FA
0x598074: mov     esi, dword ptr [esp+30h+var_10]
0x598078: test    esi, esi
0x59807A: jz      short loc_5980AD
0x59807C: fld     [esp+30h+arg_0]
0x598080: push    ecx
0x598081: fstp    [esp+34h+a2]; float
0x598084: push    ebp; int
0x598085: fld     [esp+38h+arg_4]
0x598089: push    ecx
0x59808A: mov     ecx, edi
0x59808C: fstp    [esp+3Ch+var_3C]; float
0x59808F: call    sub_588CF0
0x598094: sub     esp, 8
0x598097: fstp    [esp+44h+var_40]; float
0x59809B: fld     [esp+44h+a3]
0x59809F: fstp    [esp+44h+var_44]; float
0x5980A2: push    esi; int
0x5980A3: call    sub_57BB20
0x5980A8: add     esp, 18h
0x5980AB: jmp     short loc_5980FA
0x5980AD: mov     eax, [ebp+8]
0x5980B0: mov     al, [eax+4]
0x5980B3: cmp     al, 26h ; '&'
0x5980B5: jz      short loc_5980CA
0x5980B7: cmp     al, 2Ah ; '*'
0x5980B9: jz      short loc_5980CA
0x5980BB: cmp     al, 21h ; '!'
0x5980BD: jz      short loc_5980CA
0x5980BF: cmp     al, 14h
0x5980C1: jz      short loc_5980CA
0x5980C3: call    sub_57BD80
0x5980C8: jmp     short loc_5980FA
0x5980CA: fld     [esp+30h+arg_0]
0x5980CE: sub     esp, 8
0x5980D1: fstp    [esp+38h+a2]; float
0x5980D5: mov     ecx, edi
0x5980D7: fld     [esp+38h+arg_4]
0x5980DB: fstp    [esp+38h+var_38]; float
0x5980DE: call    sub_588CF0
0x5980E3: sub     esp, 8
0x5980E6: fstp    [esp+40h+var_3C]; float
0x5980EA: fld     [esp+40h+a3]
0x5980EE: fstp    [esp+40h+var_40]; float
0x5980F1: push    ebp; int
0x5980F2: call    sub_57BCC0
0x5980F7: add     esp, 14h
0x5980FA: mov     ecx, ebp
0x5980FC: call    ContainerEntryExtraData_DestroyDataTable
0x598101: push    ebp
0x598102: call    FormHeapFree
0x598107: add     esp, 4
0x59810A: pop     edi
0x59810B: pop     ebp
0x59810C: pop     esi
0x59810D: pop     ebx
0x59810E: add     esp, 20h
0x598111: retn    8
0x598114: mov     esi, [esi+34h]
0x598117: test    esi, esi
0x598119: jz      short loc_598177
0x59811B: fld1
0x59811D: push    ecx
0x59811E: fstp    [esp+34h+a2]; a3
0x598121: mov     ecx, esi; this
0x598123: push    0FA1h; a2
0x598128: call    Tile_SetFloat
0x59812D: push    1; arg1
0x59812F: push    0; canCreate
0x598131: call    InterfaceManager_GetSingleton
0x598136: add     esp, 8
0x598139: pop     edi
0x59813A: pop     ebp
0x59813B: pop     esi
0x59813C: mov     dword ptr [eax+88h], 0
0x598146: pop     ebx
0x598147: add     esp, 20h
0x59814A: retn    8
0x59814D: mov     esi, [esi+34h]
0x598150: cmp     esi, ebp
0x598152: jz      short loc_598177
0x598154: fld1
0x598156: push    ecx
0x598157: fstp    [esp+34h+a2]; a3
0x59815A: mov     ecx, esi; this
0x59815C: push    0FA1h; a2
0x598161: call    Tile_SetFloat
0x598166: push    1; arg1
0x598168: push    ebp; canCreate
0x598169: call    InterfaceManager_GetSingleton
0x59816E: mov     [eax+88h], ebp
0x598174: add     esp, 8
0x598177: pop     edi
0x598178: pop     ebp
0x598179: pop     esi
0x59817A: pop     ebx
0x59817B: add     esp, 20h
0x59817E: retn    8
