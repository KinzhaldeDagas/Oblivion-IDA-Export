0x584980: sub     esp, 14h
0x584983: fldz
0x584985: push    esi
0x584986: push    edi; a3
0x584987: fstp    [esp+1Ch+var_14]
0x58498B: push    1; arg1
0x58498D: push    0; canCreate
0x58498F: call    InterfaceManager_GetSingleton
0x584994: mov     eax, [eax+68h]
0x584997: mov     edi, [eax+34h]
0x58499A: add     esp, 8
0x58499D: test    edi, edi
0x58499F: jz      loc_584A4E
0x5849A5: mov     esi, [edi+8]
0x5849A8: test    esi, esi
0x5849AA: lea     eax, [edi+8]
0x5849AD: mov     edi, [edi]
0x5849AF: jz      loc_584A46
0x5849B5: mov     ecx, esi
0x5849B7: call    Tile_GetParentMenu
0x5849BC: test    eax, eax
0x5849BE: jz      loc_584A46
0x5849C4: mov     ecx, esi
0x5849C6: call    Tile_GetParentMenu
0x5849CB: mov     edx, [eax]
0x5849CD: mov     ecx, eax
0x5849CF: mov     eax, [edx+34h]
0x5849D2: call    eax
0x5849D4: cmp     eax, 400h
0x5849D9: jz      short loc_584A46
0x5849DB: mov     ecx, esi
0x5849DD: call    Tile_GetParentMenu
0x5849E2: mov     edx, [eax]
0x5849E4: mov     ecx, eax
0x5849E6: mov     eax, [edx+34h]
0x5849E9: call    eax
0x5849EB: cmp     eax, 3EDh
0x5849F0: jz      short loc_584A46
0x5849F2: mov     ecx, esi
0x5849F4: call    Tile_GetParentMenu
0x5849F9: mov     edx, [eax]
0x5849FB: mov     ecx, eax
0x5849FD: mov     eax, [edx+34h]
0x584A00: call    eax
0x584A02: cmp     eax, 3F2h
0x584A07: jz      short loc_584A46
0x584A09: mov     ecx, esi
0x584A0B: call    Tile_GetParentMenu
0x584A10: mov     ecx, [eax+18h]
0x584A13: mov     [esp+1Ch+a3], ecx
0x584A17: push    0FABh
0x584A1C: mov     ecx, esi
0x584A1E: call    Tile_GetFloat
0x584A23: fiadd   [esp+1Ch+a3]
0x584A27: fstp    [esp+1Ch+a3]
0x584A2B: fld     [esp+1Ch+var_14]
0x584A2F: fld     [esp+1Ch+a3]
0x584A33: fcom    st(1)
0x584A35: fnstsw  ax
0x584A37: fstp    st(1)
0x584A39: test    ah, 5
0x584A3C: jnp     short loc_584A44
0x584A3E: fstp    [esp+1Ch+var_14]
0x584A42: jmp     short loc_584A46
0x584A44: fstp    st
0x584A46: test    edi, edi
0x584A48: jnz     loc_5849A5
0x584A4E: fld     [esp+1Ch+var_14]
0x584A52: call    Double_To_SInt32
0x584A57: mov     [esp+1Ch+a3], eax
0x584A5B: fild    [esp+1Ch+a3]
0x584A5F: fstp    [esp+1Ch+a3]
0x584A63: fld     [esp+1Ch+a3]
0x584A67: fcom    qword ptr ds:0A3F3E8h
0x584A6D: fnstsw  ax
0x584A6F: test    ah, 5
0x584A72: jp      short loc_584A7C
0x584A74: fstp    st
0x584A76: fld     dword ptr ds:0A31C80h
0x584A7C: fstp    [esp+1Ch+a3]
0x584A80: push    1; arg1
0x584A82: fld     [esp+20h+a3]
0x584A86: push    0; canCreate
0x584A88: fadd    qword ptr ds:0A309F0h
0x584A8E: fstp    [esp+24h+a3]; a3
0x584A92: call    InterfaceManager_GetSingleton
0x584A97: mov     esi, eax
0x584A99: mov     ecx, [esi+1Ch]; this
0x584A9C: add     esp, 8
0x584A9F: test    ecx, ecx
0x584AA1: jz      short loc_584AE3
0x584AA3: fld     [esp+1Ch+a3]
0x584AA7: push    ecx
0x584AA8: fstp    [esp+20h+a2]; a3
0x584AAB: push    0FABh; a2
0x584AB0: call    Tile_SetFloat
0x584AB5: fld     [esp+1Ch+a3]
0x584AB9: mov     esi, [esi+1Ch]
0x584ABC: fmul    qword ptr ds:0A68FD0h
0x584AC2: mov     eax, [esi+24h]
0x584AC5: mov     edx, [eax+58h]
0x584AC8: mov     ecx, [eax+54h]
0x584ACB: mov     [esp+1Ch+var_8], edx
0x584ACF: fstp    [esp+1Ch+var_8]
0x584AD3: mov     edx, [eax+5Ch]
0x584AD6: mov     [eax+54h], ecx
0x584AD9: mov     ecx, [esp+1Ch+var_8]
0x584ADD: mov     [eax+58h], ecx
0x584AE0: mov     [eax+5Ch], edx
0x584AE3: push    3F2h
0x584AE8: call    Menu_GetOpenMenuTile
0x584AED: add     esp, 4
0x584AF0: test    eax, eax
0x584AF2: pop     edi
0x584AF3: pop     esi
0x584AF4: jz      short loc_584B18
0x584AF6: fld     [esp+14h+a3]
0x584AFA: push    ecx
0x584AFB: fsub    qword ptr ds:0A3F3E8h
0x584B01: mov     ecx, eax; this
0x584B03: fstp    [esp+18h+a3]
0x584B07: fld     [esp+18h+a3]
0x584B0B: fstp    [esp+18h+var_18]; a3
0x584B0E: push    0FABh; a2
0x584B13: call    Tile_SetFloat
0x584B18: fld     [esp+14h+var_14]
0x584B1B: fadd    qword ptr ds:0A3D0C0h
0x584B21: fstp    [esp+14h+a3]
0x584B25: fld     [esp+14h+a3]
0x584B29: add     esp, 14h
0x584B2C: retn
