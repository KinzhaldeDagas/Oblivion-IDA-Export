0x591DC0: push    0FFFFFFFFh
0x591DC2: push    offset SEH_591DC0
0x591DC7: mov     eax, large fs:0
0x591DCD: push    eax
0x591DCE: sub     esp, 30h
0x591DD1: push    ebx
0x591DD2: push    ebp
0x591DD3: push    esi
0x591DD4: push    edi
0x591DD5: mov     eax, ds:0B30AACh
0x591DDA: xor     eax, esp
0x591DDC: push    eax
0x591DDD: lea     eax, [esp+50h+var_C]
0x591DE1: mov     large fs:0, eax
0x591DE7: mov     esi, ecx
0x591DE9: call    sub_5894D0
0x591DEE: push    0FADh
0x591DF3: mov     ecx, esi
0x591DF5: mov     dword ptr [esp+54h+canCreate], eax
0x591DF9: call    Tile_GetFloat
0x591DFE: fstp    [esp+50h+var_20]
0x591E02: push    0FACh
0x591E07: mov     ecx, esi
0x591E09: call    Tile_GetFloat
0x591E0E: fchs
0x591E10: push    0FCBh
0x591E15: fstp    [esp+54h+var_1C]
0x591E19: mov     ecx, esi
0x591E1B: call    Tile_GetFloat
0x591E20: fstp    [esp+50h+var_34]
0x591E24: push    0FCAh
0x591E29: mov     ecx, esi
0x591E2B: call    Tile_GetFloat
0x591E30: fstp    [esp+50h+var_38]
0x591E34: push    0FCCh
0x591E39: mov     ecx, esi
0x591E3B: call    Tile_GetFloat
0x591E40: fmul    qword ptr ds:0A46050h
0x591E46: push    0FCDh
0x591E4B: mov     ecx, esi
0x591E4D: fstp    [esp+54h+var_2C]
0x591E51: call    Tile_GetFloat
0x591E56: fmul    qword ptr ds:0A46050h
0x591E5C: push    0FCEh
0x591E61: mov     ecx, esi
0x591E63: fstp    [esp+54h+var_28]
0x591E67: call    Tile_GetFloat
0x591E6C: fmul    qword ptr ds:0A46050h
0x591E72: push    0FA7h
0x591E77: mov     ecx, esi
0x591E79: fstp    [esp+54h+var_24]
0x591E7D: call    Tile_GetFloat
0x591E82: fmul    qword ptr ds:0A46050h
0x591E88: push    30h ; '0'; Size
0x591E8A: fstp    [esp+54h+var_30]
0x591E8E: call    FormHeapAlloc
0x591E93: push    0Ch; Size
0x591E95: mov     edi, eax
0x591E97: call    FormHeapAlloc
0x591E9C: fldz
0x591E9E: fst     [esp+58h+var_18]
0x591EA2: mov     ebp, eax
0x591EA4: mov     eax, [esp+58h+var_18]
0x591EA8: fst     [esp+58h+var_14]
0x591EAC: mov     ecx, [esp+58h+var_14]
0x591EB0: fst     [esp+58h+var_10]
0x591EB4: mov     edx, [esp+58h+var_10]
0x591EB8: fst     [esp+58h+var_18]
0x591EBC: fst     [esp+58h+var_14]
0x591EC0: mov     [edi], eax
0x591EC2: fld     [esp+58h+var_38]
0x591EC6: mov     eax, [esp+58h+var_18]
0x591ECA: fchs
0x591ECC: mov     [edi+4], ecx
0x591ECF: mov     ecx, [esp+58h+var_14]
0x591ED3: fstp    [esp+58h+var_38]
0x591ED7: fld     [esp+58h+var_38]
0x591EDB: mov     [edi+8], edx
0x591EDE: fst     [esp+58h+var_10]
0x591EE2: mov     [edi+0Ch], eax
0x591EE5: fld     [esp+58h+var_34]
0x591EE9: mov     edx, [esp+58h+var_10]
0x591EED: fst     [esp+58h+var_18]
0x591EF1: mov     [edi+10h], ecx
0x591EF4: mov     eax, [esp+58h+var_18]
0x591EF8: fxch    st(2)
0x591EFA: fst     [esp+58h+var_14]
0x591EFE: mov     [edi+14h], edx
0x591F01: mov     ecx, [esp+58h+var_14]
0x591F05: fst     [esp+58h+var_10]
0x591F09: mov     edx, [esp+58h+var_10]
0x591F0D: fxch    st(2)
0x591F0F: mov     [edi+18h], eax
0x591F12: mov     [edi+1Ch], ecx
0x591F15: add     esp, 8
0x591F18: mov     [edi+20h], edx
0x591F1B: fstp    [esp+50h+var_18]
0x591F1F: mov     eax, [esp+50h+var_18]
0x591F23: mov     [edi+24h], eax
0x591F26: fxch    st(1)
0x591F28: fstp    [esp+50h+var_14]
0x591F2C: mov     ecx, [esp+50h+var_14]
0x591F30: mov     [edi+28h], ecx
0x591F33: fstp    [esp+50h+var_10]
0x591F37: mov     edx, [esp+50h+var_10]
0x591F3B: mov     [edi+2Ch], edx
0x591F3E: mov     eax, 1
0x591F43: mov     ebx, 2
0x591F48: push    0FC8h
0x591F4D: mov     ecx, esi
0x591F4F: mov     word ptr [ebp+0], 0
0x591F55: mov     [ebp+2], ax
0x591F59: mov     [ebp+4], bx
0x591F5D: mov     [ebp+6], bx
0x591F61: mov     [ebp+8], ax
0x591F65: mov     word ptr [ebp+0Ah], 3
0x591F6B: call    Tile_GetFloat
0x591F70: fcomp   dword ptr ds:0A379B4h
0x591F76: fnstsw  ax
0x591F78: test    ah, 44h
0x591F7B: jp      short loc_591FD6
0x591F7D: push    0D0h ; 'Ð'; Size
0x591F82: call    FormHeapAlloc
0x591F87: mov     ebx, eax
0x591F89: add     esp, 4
0x591F8C: mov     [esp+50h+var_34], ebx
0x591F90: xor     eax, eax
0x591F92: cmp     ebx, eax
0x591F94: mov     [esp+50h+var_4], eax
0x591F98: jz      short loc_591FCB
0x591F9A: call    sub_57D7F0
0x591F9F: call    Double_To_SInt32
0x591FA4: push    eax
0x591FA5: call    sub_57D7A0
0x591FAA: call    Double_To_SInt32
0x591FAF: push    eax
0x591FB0: push    0
0x591FB2: push    0
0x591FB4: push    ebp
0x591FB5: push    2
0x591FB7: push    0
0x591FB9: push    0
0x591FBB: push    0
0x591FBD: push    0
0x591FBF: push    0
0x591FC1: push    edi
0x591FC2: push    4
0x591FC4: mov     ecx, ebx
0x591FC6: call    sub_4A1780
0x591FCB: mov     byte ptr [esi+40h], 1
0x591FCF: mov     ebx, 2
0x591FD4: jmp     short loc_592011
0x591FD6: push    0C0h ; 'À'; Size
0x591FDB: call    FormHeapAlloc
0x591FE0: add     esp, 4
0x591FE3: mov     [esp+50h+var_34], eax
0x591FE7: test    eax, eax
0x591FE9: mov     [esp+50h+var_4], 1
0x591FF1: jz      short loc_59200B
0x591FF3: push    ebp
0x591FF4: push    ebx
0x591FF5: push    0
0x591FF7: push    0
0x591FF9: push    0
0x591FFB: push    0
0x591FFD: push    0
0x591FFF: push    edi
0x592000: push    4
0x592002: mov     ecx, eax
0x592004: call    sub_7174B0
0x592009: jmp     short loc_59200D
0x59200B: xor     eax, eax
0x59200D: mov     byte ptr [esi+40h], 0
0x592011: push    5Ch ; '\'; Size
0x592013: mov     edi, eax
0x592015: mov     [esp+54h+var_4], 0FFFFFFFFh
0x59201D: call    FormHeapAlloc
0x592022: add     esp, 4
0x592025: mov     [esp+50h+var_34], eax
0x592029: test    eax, eax
0x59202B: mov     [esp+50h+var_4], ebx
0x59202F: jz      short loc_59203A
0x592031: mov     ecx, eax; this
0x592033: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x592038: jmp     short loc_59203C
0x59203A: xor     eax, eax
0x59203C: fld     [esp+50h+var_30]
0x592040: mov     ebx, 3
0x592045: add     [eax+54h], ebx
0x592048: fstp    dword ptr [eax+50h]
0x59204B: fld     [esp+50h+var_2C]
0x59204F: push    eax; a2
0x592050: fstp    [esp+54h+var_18]
0x592054: mov     ecx, [esp+54h+var_18]
0x592058: fld     [esp+54h+var_28]
0x59205C: mov     [eax+1Ch], ecx
0x59205F: mov     [eax+28h], ecx
0x592062: fstp    [esp+54h+var_14]
0x592066: fld     [esp+54h+var_24]
0x59206A: mov     edx, [esp+54h+var_14]
0x59206E: mov     ecx, [eax+54h]
0x592071: fstp    [esp+54h+var_10]
0x592075: mov     ebp, [esp+54h+var_10]
0x592079: mov     [eax+20h], edx
0x59207C: mov     [eax+2Ch], edx
0x59207F: mov     [eax+24h], ebp
0x592082: mov     [eax+30h], ebp
0x592085: mov     edx, ds:0B25AC4h
0x59208B: mov     [eax+34h], edx
0x59208E: mov     edx, ds:0B25AC8h
0x592094: mov     [eax+38h], edx
0x592097: mov     edx, ds:0B25ACCh
0x59209D: add     ecx, 1
0x5920A0: mov     [eax+54h], ecx
0x5920A3: mov     ecx, edi; this
0x5920A5: mov     [esp+54h+var_4], 0FFFFFFFFh
0x5920AD: mov     [eax+3Ch], edx
0x5920B0: call    sub_405680
0x5920B5: push    0FABh
0x5920BA: mov     ecx, esi
0x5920BC: call    Tile_GetFloat
0x5920C1: fmul    qword ptr ds:0A68FD0h
0x5920C7: push    0DCh ; 'Ü'; Size
0x5920CC: fstp    [esp+54h+var_24]
0x5920D0: fld     [esp+54h+var_20]
0x5920D4: fstp    [esp+54h+var_18]
0x5920D8: mov     eax, [esp+54h+var_18]
0x5920DC: fld     [esp+54h+var_24]
0x5920E0: mov     [edi+54h], eax
0x5920E3: fstp    [esp+54h+var_14]
0x5920E7: mov     ecx, [esp+54h+var_14]
0x5920EB: fld     [esp+54h+var_1C]
0x5920EF: mov     [edi+58h], ecx
0x5920F2: fstp    [esp+54h+var_10]
0x5920F6: mov     edx, [esp+54h+var_10]
0x5920FA: mov     [edi+5Ch], edx
0x5920FD: call    FormHeapAlloc
0x592102: add     esp, 4
0x592105: mov     [esp+50h+var_1C], eax
0x592109: test    eax, eax
0x59210B: mov     [esp+50h+var_4], ebx
0x59210F: jz      short loc_59211C
0x592111: push    0
0x592113: mov     ecx, eax; this
0x592115: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x59211A: jmp     short loc_59211E
0x59211C: xor     eax, eax
0x59211E: mov     [esi+24h], eax
0x592121: mov     edx, [eax]
0x592123: push    1
0x592125: mov     ecx, eax
0x592127: mov     eax, [edx+84h]
0x59212D: or      ebx, 0FFFFFFFFh
0x592130: push    edi
0x592131: mov     [esp+58h+var_4], ebx
0x592135: call    eax
0x592137: mov     ecx, dword ptr [esp+50h+canCreate]
0x59213B: test    ecx, ecx
0x59213D: jnz     short loc_592151
0x59213F: push    1; arg1
0x592141: push    ecx; canCreate
0x592142: call    InterfaceManager_GetSingleton
0x592147: mov     ecx, [eax+54h]
0x59214A: add     esp, 8
0x59214D: mov     dword ptr [esp+50h+canCreate], ecx
0x592151: mov     edx, [ecx]
0x592153: mov     eax, [esi+24h]
0x592156: mov     edx, [edx+84h]
0x59215C: push    1
0x59215E: push    eax
0x59215F: call    edx
0x592161: mov     eax, [esi+8]
0x592164: mov     ecx, [esi+24h]
0x592167: push    eax; Src
0x592168: call    NiObjectNET_SetName
0x59216D: push    0FA1h
0x592172: mov     ecx, esi
0x592174: call    Tile_GetFloat
0x592179: fcomp   dword ptr ds:0A2F948h
0x59217F: fnstsw  ax
0x592181: test    ah, 44h
0x592184: jp      short loc_59218A
0x592186: mov     cl, 1
0x592188: jmp     short loc_59218C
0x59218A: xor     cl, cl
0x59218C: test    cl, cl
0x59218E: mov     eax, [esi+24h]
0x592191: jz      short loc_59219A
0x592193: or      word ptr [eax+18h], 1
0x592198: jmp     short loc_5921A0
0x59219A: and     word ptr [eax+18h], 0FFFEh
0x5921A0: mov     ecx, [esi+24h]
0x5921A3: call    NiNode_UpdateDynamicEffectState
0x5921A8: mov     ecx, [esi+24h]; this
0x5921AB: call    NiAVObject_InitializePropertyState
0x5921B0: push    1; arg1
0x5921B2: push    0; canCreate
0x5921B4: call    InterfaceManager_GetSingleton
0x5921B9: push    14h; Size
0x5921BB: mov     byte ptr [eax+7Ch], 1
0x5921BF: call    FormHeapAlloc
0x5921C4: add     esp, 0Ch
0x5921C7: mov     [esp+50h+var_1C], eax
0x5921CB: test    eax, eax
0x5921CD: mov     [esp+50h+var_4], 4
0x5921D5: jz      short loc_5921E5
0x5921D7: mov     ecx, [esi+24h]
0x5921DA: push    ecx
0x5921DB: push    esi
0x5921DC: mov     ecx, eax; this
0x5921DE: call    ??0Extra@Tile@@QAE@XZ; Tile::Extra::Extra(void)
0x5921E3: jmp     short loc_5921E7
0x5921E5: xor     eax, eax
0x5921E7: mov     ecx, [esi+24h]
0x5921EA: push    eax
0x5921EB: mov     [esp+54h+var_4], ebx
0x5921EF: call    NiNode_AddNiExtraData
0x5921F4: push    0; int
0x5921F6: push    0FADh
0x5921FB: mov     ecx, esi
0x5921FD: call    Tile_GetFloat
0x592202: push    ecx
0x592203: fstp    [esp+58h+var_58]; float
0x592206: push    0FADh; int
0x59220B: mov     ecx, esi
0x59220D: call    sub_58B2F0
0x592212: push    0; int
0x592214: push    0FACh
0x592219: mov     ecx, esi
0x59221B: call    Tile_GetFloat
0x592220: push    ecx
0x592221: fstp    [esp+58h+var_58]; float
0x592224: push    0FACh; int
0x592229: mov     ecx, esi
0x59222B: call    sub_58B2F0
0x592230: mov     eax, [esi+24h]
0x592233: mov     ecx, dword ptr [esp+50h+var_C]
0x592237: mov     large fs:0, ecx
0x59223E: pop     ecx
0x59223F: pop     edi
0x592240: pop     esi
0x592241: pop     ebp
0x592242: pop     ebx
0x592243: add     esp, 3Ch
0x592246: retn
