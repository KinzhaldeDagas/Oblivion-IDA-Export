0x599EE0: push    ecx
0x599EE1: push    ebp; a3
0x599EE2: mov     ebp, [esp+8+arg_0]
0x599EE6: test    ebp, ebp
0x599EE8: push    esi
0x599EE9: jz      loc_599F9A
0x599EEF: mov     eax, [ebp+0]
0x599EF2: mov     edx, [eax+170h]
0x599EF8: mov     ecx, ebp
0x599EFA: call    edx
0x599EFC: movzx   eax, byte ptr [eax+4]
0x599F00: cmp     eax, 17h
0x599F03: jz      short loc_599F4A
0x599F05: add     eax, 0FFFFFFDDh
0x599F08: cmp     eax, 1
0x599F0B: ja      loc_599F9A
0x599F11: mov     eax, [ebp+0]
0x599F14: mov     edx, [eax+198h]
0x599F1A: push    0
0x599F1C: mov     ecx, ebp
0x599F1E: call    edx
0x599F20: test    al, al
0x599F22: jz      short loc_599F9A
0x599F24: push    0; int
0x599F26: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x599F2B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x599F30: push    0; int
0x599F32: push    offset aDrsbodyopen; "DRSBodyOpen"
0x599F37: call    sub_46B280
0x599F3C: add     esp, 4
0x599F3F: push    eax; void *
0x599F40: call    OblivionDynamicCast
0x599F45: add     esp, 14h
0x599F48: jmp     short loc_599F5A
0x599F4A: mov     eax, [ebp+0]
0x599F4D: mov     edx, [eax+170h]
0x599F53: mov     ecx, ebp
0x599F55: call    edx
0x599F57: mov     eax, [eax+70h]
0x599F5A: test    eax, eax
0x599F5C: jz      short loc_599F9A
0x599F5E: mov     ecx, ds:0B33398h
0x599F64: mov     ecx, [ecx+24h]
0x599F67: test    ecx, ecx
0x599F69: jz      short loc_599F9A
0x599F6B: mov     eax, [eax+0Ch]
0x599F6E: push    0
0x599F70: push    121h
0x599F75: push    eax
0x599F76: call    OSGLobals_PlaySound
0x599F7B: mov     esi, eax
0x599F7D: test    esi, esi
0x599F7F: jz      short loc_599F9A
0x599F81: push    0
0x599F83: mov     ecx, esi
0x599F85: call    sub_6B7190
0x599F8A: mov     ecx, esi; this
0x599F8C: call    sub_6B73E0
0x599F91: push    esi
0x599F92: call    FormHeapFree
0x599F97: add     esp, 4
0x599F9A: push    3F0h
0x599F9F: call    Menu_GetOpenMenuTile
0x599FA4: add     esp, 4
0x599FA7: test    eax, eax
0x599FA9: jz      short loc_599FB5
0x599FAB: mov     edx, [eax]
0x599FAD: mov     ecx, eax
0x599FAF: mov     eax, [edx]
0x599FB1: push    1; a3
0x599FB3: call    eax
0x599FB5: push    1; arg1
0x599FB7: push    0; canCreate
0x599FB9: call    InterfaceManager_GetSingleton
0x599FBE: add     esp, 8
0x599FC1: mov     esi, eax
0x599FC3: call    InterfaceManager_GetDepth
0x599FC8: fstp    [esp+0Ch+arg_0]; a3
0x599FCC: cmp     ebp, ds:0B3BAD4h
0x599FD2: mov     byte ptr ds:0B3B27Ah, 0
0x599FD9: jnz     short loc_59A03D
0x599FDB: lea     ecx, [ebp+44h]; this
0x599FDE: mov     byte ptr ds:0B3B279h, 0
0x599FE5: call    ExtraDataList_GetContainerChanges
0x599FEA: test    eax, eax
0x599FEC: jz      short loc_59A00B
0x599FEE: movzx   ecx, byte ptr ds:0B3B279h
0x599FF5: mov     edx, ds:0B333C4h
0x599FFB: push    0
0x599FFD: push    0
0x599FFF: push    ecx
0x59A000: push    edx
0x59A001: push    ebp
0x59A002: mov     ecx, eax
0x59A004: call    sub_492E70
0x59A009: fstp    st
0x59A00B: push    1Dh; int
0x59A00D: call    sub_57DE50
0x59A012: fld     dword ptr ds:0A30634h
0x59A018: mov     eax, ds:0B38B10h
0x59A01D: fstp    [esp+10h+var_10]; duration
0x59A020: push    1; unk2
0x59A022: push    0; unk1
0x59A024: push    eax; string
0x59A025: call    GameUI_QueueMessage
0x59A02A: add     esp, 10h
0x59A02D: pop     esi
0x59A02E: mov     dword ptr ds:0B3BAD4h, 0
0x59A038: xor     eax, eax
0x59A03A: pop     ebp
0x59A03B: pop     ecx
0x59A03C: retn
0x59A03D: mov     ecx, [esi+68h]; TileWindow *
0x59A040: push    edi; a3
0x59A041: push    offset aDataMenusConta; "Data\\Menus\\container_menu.xml"
0x59A046: call    Menu_LoadXML
0x59A04B: mov     esi, eax
0x59A04D: mov     ecx, esi
0x59A04F: call    Tile_GetParentMenu
0x59A054: mov     edi, eax
0x59A056: test    edi, edi
0x59A058: mov     [esp+10h+var_4], edi; a3
0x59A05C: jz      loc_59A3F5
0x59A062: mov     edx, [edi]
0x59A064: mov     eax, [edx+34h]
0x59A067: mov     ecx, edi
0x59A069: call    eax
0x59A06B: cmp     eax, 3F0h
0x59A070: jnz     loc_59A3E5
0x59A076: push    0; int
0x59A078: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x59A07D: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x59A082: push    0; int
0x59A084: push    esi; void *
0x59A085: call    OblivionDynamicCast
0x59A08A: add     esp, 14h
0x59A08D: push    eax
0x59A08E: mov     ecx, edi
0x59A090: call    Menu_SetTileMenu
0x59A095: push    0; int
0x59A097: push    offset ??_R0?AVContainerMenu@@@8; struct TypeDescriptor *
0x59A09C: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x59A0A1: push    0; int
0x59A0A3: push    edi; void *
0x59A0A4: call    OblivionDynamicCast
0x59A0A9: mov     edi, eax
0x59A0AB: add     esp, 14h
0x59A0AE: cmp     dword ptr [edi+28h], 0
0x59A0B2: jz      short loc_59A0CC
0x59A0B4: cmp     dword ptr [edi+2Ch], 0
0x59A0B8: jz      short loc_59A0CC
0x59A0BA: cmp     dword ptr [edi+30h], 0
0x59A0BE: jz      short loc_59A0CC
0x59A0C0: cmp     dword ptr [edi+34h], 0
0x59A0C4: jz      short loc_59A0CC
0x59A0C6: cmp     dword ptr [edi+38h], 0
0x59A0CA: jnz     short loc_59A0EE
0x59A0CC: test    esi, esi
0x59A0CE: jz      short loc_59A0DA
0x59A0D0: mov     edx, [esi]
0x59A0D2: mov     eax, [edx]
0x59A0D4: push    1
0x59A0D6: mov     ecx, esi
0x59A0D8: call    eax
0x59A0DA: push    offset aContainerMenuC; "Container Menu Creation Failed... Are y"...
0x59A0DF: call    PrintError
0x59A0E4: add     esp, 4
0x59A0E7: pop     edi
0x59A0E8: pop     esi
0x59A0E9: xor     eax, eax
0x59A0EB: pop     ebp
0x59A0EC: pop     ecx
0x59A0ED: retn
0x59A0EE: push    0FA5h
0x59A0F3: mov     ecx, esi
0x59A0F5: call    Tile_GetFloat
0x59A0FA: fcomp   dword ptr ds:0A69770h
0x59A100: fnstsw  ax
0x59A102: test    ah, 44h
0x59A105: jnp     short loc_59A120
0x59A107: push    0FA5h
0x59A10C: mov     ecx, esi
0x59A10E: call    Tile_GetFloat
0x59A113: fcomp   qword ptr ds:0A69778h
0x59A119: fnstsw  ax
0x59A11B: test    ah, 44h
0x59A11E: jp      short loc_59A134
0x59A120: fld     [esp+10h+arg_0]
0x59A124: push    ecx
0x59A125: fstp    [esp+14h+var_14]; a3
0x59A128: push    0FABh; a2
0x59A12D: mov     ecx, esi; this
0x59A12F: call    Tile_SetFloat
0x59A134: mov     ecx, ds:0B33398h
0x59A13A: mov     ecx, [ecx+20h]; this
0x59A13D: push    ebx; a3
0x59A13E: call    InputGlobals__PollAndUpdateInputState
0x59A143: fld     dword ptr ds:0A53954h
0x59A149: push    ecx
0x59A14A: fstp    [esp+18h+var_18]; a3
0x59A14D: push    0FAFh; a2
0x59A152: mov     ecx, esi; this
0x59A154: call    Tile_SetFloat
0x59A159: fld     dword ptr ds:0A53954h
0x59A15F: push    ecx
0x59A160: fstp    [esp+18h+var_18]; a3
0x59A163: push    0FB0h; a2
0x59A168: mov     ecx, esi; this
0x59A16A: call    Tile_SetFloat
0x59A16F: fld     dword ptr ds:0A53954h
0x59A175: push    ecx
0x59A176: fstp    [esp+18h+var_18]; a3
0x59A179: push    0FB1h; a2
0x59A17E: mov     ecx, esi; this
0x59A180: call    Tile_SetFloat
0x59A185: fld     dword ptr ds:0A53954h
0x59A18B: push    ecx
0x59A18C: fstp    [esp+18h+var_18]; a3
0x59A18F: push    0FB2h; a2
0x59A194: mov     ecx, esi; this
0x59A196: call    Tile_SetFloat
0x59A19B: fldz
0x59A19D: push    ecx
0x59A19E: fstp    [esp+18h+var_18]; a3
0x59A1A1: push    0FB3h; a2
0x59A1A6: mov     ecx, esi; this
0x59A1A8: call    Tile_SetFloat
0x59A1AD: fldz
0x59A1AF: push    ecx
0x59A1B0: fstp    [esp+18h+var_18]; a3
0x59A1B3: push    0FB4h; a2
0x59A1B8: mov     ecx, esi; this
0x59A1BA: call    Tile_SetFloat
0x59A1BF: fld     dword ptr ds:0A379B4h
0x59A1C5: push    ecx
0x59A1C6: fstp    [esp+18h+var_18]; a3
0x59A1C9: push    0FB5h; a2
0x59A1CE: mov     ecx, esi; this
0x59A1D0: call    Tile_SetFloat
0x59A1D5: fld     dword ptr ds:0A379B4h
0x59A1DB: push    ecx
0x59A1DC: fstp    [esp+18h+var_18]; a3
0x59A1DF: push    0FB6h; a2
0x59A1E4: mov     ecx, esi; this
0x59A1E6: call    Tile_SetFloat
0x59A1EB: fld     dword ptr ds:0A379B4h
0x59A1F1: push    ecx
0x59A1F2: fstp    [esp+18h+var_18]; a3
0x59A1F5: push    0FB7h; a2
0x59A1FA: mov     ecx, esi; this
0x59A1FC: call    Tile_SetFloat
0x59A201: fld     dword ptr ds:0A6906Ch
0x59A207: push    ecx
0x59A208: mov     ecx, [edi+28h]; this
0x59A20B: fstp    [esp+18h+var_18]; a3
0x59A20E: push    0FB3h; a2
0x59A213: call    Tile_SetFloat
0x59A218: fldz
0x59A21A: push    ecx
0x59A21B: fstp    [esp+18h+var_18]; a3
0x59A21E: mov     ecx, [edi+28h]; this
0x59A221: push    0FB3h; a2
0x59A226: call    Tile_SetFloat
0x59A22B: mov     bl, byte ptr [esp+14h+arg_4]
0x59A22F: test    bl, bl
0x59A231: mov     dl, byte ptr [esp+14h+arg_C]
0x59A235: mov     [edi+61h], bl
0x59A238: mov     [edi+63h], dl
0x59A23B: mov     byte ptr ds:0B13E90h, 1
0x59A242: jnz     short loc_59A273
0x59A244: mov     eax, [ebp+0]
0x59A247: mov     edx, [eax+190h]
0x59A24D: mov     ecx, ebp
0x59A24F: call    edx
0x59A251: test    al, al
0x59A253: jz      short loc_59A273
0x59A255: mov     ecx, ebp; this
0x59A257: call    Actor_IsNPC
0x59A25C: test    al, al
0x59A25E: jz      short loc_59A273
0x59A260: mov     eax, [ebp+0]
0x59A263: mov     edx, [eax+198h]
0x59A269: push    0; a3
0x59A26B: mov     ecx, ebp
0x59A26D: call    edx
0x59A26F: test    al, al
0x59A271: jz      short loc_59A2A2
0x59A273: mov     ecx, ebp; this
0x59A275: call    TESObjectREFR_GetOwner
0x59A27A: test    eax, eax
0x59A27C: jz      short loc_59A2AB
0x59A27E: mov     eax, ds:0B333C4h
0x59A283: push    1
0x59A285: push    eax
0x59A286: mov     ecx, ebp
0x59A288: call    TESOBjectREFR_IsOwnedBy
0x59A28D: test    al, al
0x59A28F: jnz     short loc_59A2AB
0x59A291: mov     edx, [ebp+0]
0x59A294: mov     eax, [edx+190h]
0x59A29A: mov     ecx, ebp
0x59A29C: call    eax
0x59A29E: test    al, al
0x59A2A0: jnz     short loc_59A2AB
0x59A2A2: mov     byte ptr ds:0B3B279h, 1
0x59A2A9: jmp     short loc_59A2B2
0x59A2AB: mov     byte ptr ds:0B3B279h, 0
0x59A2B2: cmp     byte ptr [esp+14h+arg_C], 0
0x59A2B7: fld1
0x59A2B9: jz      short loc_59A2CD
0x59A2BB: push    ecx
0x59A2BC: fstp    [esp+18h+var_18]; a3
0x59A2BF: push    0FB6h; a2
0x59A2C4: mov     ecx, esi; this
0x59A2C6: call    Tile_SetFloat
0x59A2CB: fld1
0x59A2CD: test    bl, bl
0x59A2CF: push    ecx
0x59A2D0: fstp    [esp+18h+var_18]; a3
0x59A2D3: mov     ecx, esi; this
0x59A2D5: jz      loc_59A35D
0x59A2DB: push    0FB6h; a2
0x59A2E0: call    Tile_SetFloat
0x59A2E5: mov     ecx, ds:0B33A98h
0x59A2EB: push    ebp
0x59A2EC: call    sub_448F40
0x59A2F1: mov     ecx, ds:0B333C4h
0x59A2F7: mov     dl, byte ptr [esp+14h+arg_8]
0x59A2FB: push    1
0x59A2FD: mov     byte ptr [ecx+124h], 1
0x59A304: push    5
0x59A306: mov     [edi+62h], dl
0x59A309: call    TESTopic__GEtTopic
0x59A30E: push    0; int
0x59A310: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x59A315: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x59A31A: push    0; int
0x59A31C: push    ebp; void *
0x59A31D: mov     [esp+30h+arg_0], eax
0x59A321: call    OblivionDynamicCast
0x59A326: mov     ebx, eax
0x59A328: add     esp, 1Ch
0x59A32B: test    ebx, ebx
0x59A32D: jz      short loc_59A367
0x59A32F: mov     eax, ds:0B33398h
0x59A334: mov     ecx, [eax+24h]
0x59A337: call    sub_6AC3D0
0x59A33C: mov     eax, ds:0B333C4h
0x59A341: mov     ecx, [esp+14h+arg_0]
0x59A345: mov     edx, [ebx]
0x59A347: mov     edx, [edx+0DCh]
0x59A34D: push    0; a3
0x59A34F: push    1
0x59A351: push    1
0x59A353: push    eax
0x59A354: push    ecx
0x59A355: mov     ecx, ebx
0x59A357: call    edx
0x59A359: fstp    st
0x59A35B: jmp     short loc_59A367
0x59A35D: push    0FB7h; a2
0x59A362: call    Tile_SetFloat
0x59A367: xor     eax, eax
0x59A369: cmp     [edi+64h], al
0x59A36C: push    ecx
0x59A36D: setnz   al
0x59A370: mov     ecx, esi; this
0x59A372: mov     [edi+44h], ebp
0x59A375: add     eax, 1
0x59A378: mov     [esp+18h+arg_0], eax
0x59A37C: fild    [esp+18h+arg_0]
0x59A380: fstp    [esp+18h+var_18]; a3
0x59A383: push    0FB5h; a2
0x59A388: call    Tile_SetFloat
0x59A38D: fldz
0x59A38F: push    ecx
0x59A390: fstp    [esp+18h+var_18]; a3
0x59A393: mov     ecx, [edi+28h]; this
0x59A396: push    0FB3h; a2
0x59A39B: call    Tile_SetFloat
0x59A3A0: cmp     byte ptr [edi+61h], 0
0x59A3A4: pop     ebx
0x59A3A5: jz      short loc_59A3C3
0x59A3A7: mov     ecx, [edi+44h]
0x59A3AA: add     ecx, 44h ; 'D'
0x59A3AD: call    sub_422DC0
0x59A3B2: call    Double_To_SInt32
0x59A3B7: mov     ecx, ds:0B333C4h
0x59A3BD: mov     [ecx+11Ch], eax
0x59A3C3: call    ContainerMenu_Update
0x59A3C8: push    0
0x59A3CA: push    1
0x59A3CC: mov     ecx, edi
0x59A3CE: call    sub_599200
0x59A3D3: mov     ecx, [esp+10h+var_4]; int
0x59A3D7: push    0; char
0x59A3D9: call    EnableMenu
0x59A3DE: pop     edi
0x59A3DF: mov     eax, esi
0x59A3E1: pop     esi
0x59A3E2: pop     ebp
0x59A3E3: pop     ecx
0x59A3E4: retn
0x59A3E5: cmp     dword ptr [edi+4], 0
0x59A3E9: jz      short loc_59A3F5
0x59A3EB: mov     edx, [edi]
0x59A3ED: mov     eax, [edx]
0x59A3EF: push    1
0x59A3F1: mov     ecx, edi
0x59A3F3: call    eax
0x59A3F5: pop     edi
0x59A3F6: pop     esi
0x59A3F7: xor     eax, eax
0x59A3F9: pop     ebp
0x59A3FA: pop     ecx
0x59A3FB: retn
