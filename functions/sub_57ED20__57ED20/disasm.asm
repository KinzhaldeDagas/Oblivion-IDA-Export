0x57ED20: push    0FFFFFFFFh
0x57ED22: push    offset SEH_57ED20
0x57ED27: mov     eax, large fs:0
0x57ED2D: push    eax
0x57ED2E: sub     esp, 30h
0x57ED31: push    ebx
0x57ED32: push    ebp
0x57ED33: push    esi
0x57ED34: push    edi
0x57ED35: mov     eax, ds:0B30AACh
0x57ED3A: xor     eax, esp
0x57ED3C: push    eax
0x57ED3D: lea     eax, [esp+50h+var_C]
0x57ED41: mov     large fs:0, eax
0x57ED47: mov     ebx, ecx
0x57ED49: mov     ebp, [esp+50h+arg_0]
0x57ED4D: test    ebp, ebp
0x57ED4F: jnz     short loc_57ED86
0x57ED51: push    0F0h ; 'ð'; Size
0x57ED56: call    FormHeapAlloc
0x57ED5B: add     esp, 4
0x57ED5E: mov     [esp+50h+arg_0], eax
0x57ED62: test    eax, eax
0x57ED64: mov     [esp+50h+var_4], ebp
0x57ED68: jz      short loc_57ED7A
0x57ED6A: mov     ecx, [esp+50h+arg_4]
0x57ED6E: push    ebp
0x57ED6F: push    ebp
0x57ED70: push    ecx
0x57ED71: mov     ecx, eax; this
0x57ED73: call    ??0SceneGraph@@QAE@XZ; SceneGraph::SceneGraph(void)
0x57ED78: jmp     short loc_57ED7C
0x57ED7A: xor     eax, eax
0x57ED7C: mov     [esp+50h+var_4], 0FFFFFFFFh
0x57ED84: mov     ebp, eax
0x57ED86: fldz
0x57ED88: mov     eax, [ebp+0DCh]
0x57ED8E: fst     [esp+50h+var_30]
0x57ED92: lea     edi, [eax+30h]
0x57ED95: fst     [esp+50h+var_2C]
0x57ED99: mov     ecx, 9
0x57ED9E: fld1
0x57EDA0: lea     esi, [esp+50h+var_30]
0x57EDA4: fst     [esp+50h+var_28]
0x57EDA8: push    1Ch; Size
0x57EDAA: fst     [esp+54h+var_24]
0x57EDAE: fstp    [esp+54h+var_14]
0x57EDB2: fst     [esp+54h+var_20]
0x57EDB6: fst     [esp+54h+var_1C]
0x57EDBA: fst     [esp+54h+var_18]
0x57EDBE: fstp    [esp+54h+var_10]
0x57EDC2: rep movsd
0x57EDC4: call    FormHeapAlloc
0x57EDC9: mov     esi, eax
0x57EDCB: add     esp, 4
0x57EDCE: mov     [esp+50h+arg_0], esi
0x57EDD2: test    esi, esi
0x57EDD4: mov     [esp+50h+var_4], 1
0x57EDDC: jz      short loc_57EDF5
0x57EDDE: mov     ecx, esi; this
0x57EDE0: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x57EDE5: mov     dword ptr [esi], offset ??_7NiZBufferProperty@@6B@; const NiZBufferProperty::`vftable'
0x57EDEB: mov     word ptr [esi+18h], 0Fh
0x57EDF1: mov     eax, esi
0x57EDF3: jmp     short loc_57EDF7
0x57EDF5: xor     eax, eax
0x57EDF7: mov     dx, [eax+18h]
0x57EDFB: and     dx, 0FFFDh
0x57EE00: or      dx, 1
0x57EE04: or      edi, 0FFFFFFFFh
0x57EE07: push    eax; a2
0x57EE08: mov     ecx, ebp; this
0x57EE0A: mov     [esp+54h+var_4], edi
0x57EE0E: mov     [eax+18h], dx
0x57EE12: call    sub_405680
0x57EE17: mov     eax, [ebx+78h]
0x57EE1A: push    eax; a2
0x57EE1B: mov     ecx, ebp; this
0x57EE1D: call    sub_405680
0x57EE22: cmp     byte ptr [esp+50h+arg_8], 0
0x57EE27: jnz     loc_57F143
0x57EE2D: fld     dword ptr [ebx+74h]
0x57EE30: push    1; int
0x57EE32: push    ecx
0x57EE33: mov     ecx, ds:0B3A6B0h
0x57EE39: fstp    [esp+58h+a2]; float
0x57EE3C: push    ebp; int
0x57EE3D: call    sub_5730B0
0x57EE42: push    0DCh ; 'Ü'; Size
0x57EE47: call    FormHeapAlloc
0x57EE4C: add     esp, 4
0x57EE4F: mov     [esp+50h+arg_8], eax
0x57EE53: test    eax, eax
0x57EE55: mov     [esp+50h+var_4], 2
0x57EE5D: jz      short loc_57EE6A
0x57EE5F: push    0
0x57EE61: mov     ecx, eax; this
0x57EE63: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x57EE68: jmp     short loc_57EE6C
0x57EE6A: xor     eax, eax
0x57EE6C: test    eax, eax
0x57EE6E: mov     [esp+50h+var_4], edi
0x57EE72: mov     [ebx+54h], eax
0x57EE75: jnz     short loc_57EE8E
0x57EE77: push    0B6Dh
0x57EE7C: push    offset a_InterfaceInte; ".\\Interface\\InterfaceManager.cpp"
0x57EE81: push    offset EmptyString
0x57EE86: call    nullsub_return0_0arg
0x57EE8B: add     esp, 0Ch
0x57EE8E: mov     ecx, [ebx+54h]
0x57EE91: push    offset aInterfacemanag; "InterfaceManager: Main Root"
0x57EE96: call    NiObjectNET_SetName
0x57EE9B: mov     ecx, [ebx+54h]
0x57EE9E: mov     eax, [ebp+0]
0x57EEA1: mov     edx, [eax+84h]
0x57EEA7: push    0
0x57EEA9: push    ecx
0x57EEAA: mov     ecx, ebp
0x57EEAC: call    edx
0x57EEAE: fld     dword ptr [ebx+74h]
0x57EEB1: mov     eax, [ebx+54h]
0x57EEB4: fstp    [esp+50h+arg_8]
0x57EEB8: fldz
0x57EEBA: push    114h; Size
0x57EEBF: fst     [esp+54h+var_3C]
0x57EEC3: fld     [esp+54h+arg_8]
0x57EEC7: mov     ecx, [esp+54h+var_3C]
0x57EECB: fstp    [esp+54h+var_38]
0x57EECF: mov     [eax+54h], ecx
0x57EED2: mov     edx, [esp+54h+var_38]
0x57EED6: mov     [eax+58h], edx
0x57EED9: fstp    [esp+54h+var_34]
0x57EEDD: mov     ecx, [esp+54h+var_34]
0x57EEE1: mov     [eax+5Ch], ecx
0x57EEE4: call    FormHeapAlloc
0x57EEE9: add     esp, 4
0x57EEEC: mov     [esp+50h+arg_8], eax
0x57EEF0: test    eax, eax
0x57EEF2: mov     [esp+50h+var_4], 3
0x57EEFA: jz      short loc_57EF07
0x57EEFC: mov     ecx, eax
0x57EEFE: call    sub_719760
0x57EF03: mov     esi, eax
0x57EF05: jmp     short loc_57EF09
0x57EF07: xor     esi, esi
0x57EF09: push    offset aMainscenelight; "MainSceneLight"
0x57EF0E: mov     ecx, esi
0x57EF10: mov     [esp+54h+var_4], edi
0x57EF14: call    NiObjectNET_SetName
0x57EF19: fld1
0x57EF1B: add     dword ptr [esi+0B8h], 1
0x57EF22: fst     [esp+50h+var_3C]
0x57EF26: mov     edx, [esp+50h+var_3C]
0x57EF2A: fst     [esp+50h+var_38]
0x57EF2E: mov     eax, [esp+50h+var_38]
0x57EF32: fstp    [esp+50h+var_34]
0x57EF36: mov     ecx, [esp+50h+var_34]
0x57EF3A: mov     [esi+0E0h], edx
0x57EF40: mov     [esi+0E4h], eax
0x57EF46: mov     [esi+0E8h], ecx
0x57EF4C: mov     edx, [ebx+54h]
0x57EF4F: push    edx
0x57EF50: mov     ecx, esi
0x57EF52: call    sub_708E40
0x57EF57: mov     ecx, [ebx+54h]
0x57EF5A: mov     eax, [ecx]
0x57EF5C: mov     edx, [eax+84h]
0x57EF62: push    1
0x57EF64: push    esi
0x57EF65: call    edx
0x57EF67: push    1Ch; Size
0x57EF69: call    FormHeapAlloc
0x57EF6E: mov     esi, eax
0x57EF70: add     esp, 4
0x57EF73: mov     [esp+50h+arg_8], esi
0x57EF77: test    esi, esi
0x57EF79: mov     [esp+50h+var_4], 4
0x57EF81: jz      short loc_57EF98
0x57EF83: mov     ecx, esi; this
0x57EF85: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x57EF8A: mov     dword ptr [esi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x57EF90: mov     word ptr [esi+18h], 8
0x57EF96: jmp     short loc_57EF9A
0x57EF98: xor     esi, esi
0x57EF9A: mov     ax, [esi+18h]
0x57EF9E: and     ax, 0FFEFh
0x57EFA2: or      ax, 28h
0x57EFA6: mov     [esi+18h], ax
0x57EFAA: mov     ecx, [ebx+54h]; this
0x57EFAD: push    esi; a2
0x57EFAE: mov     [esp+54h+var_4], edi
0x57EFB2: call    sub_405680
0x57EFB7: push    0DCh ; 'Ü'; Size
0x57EFBC: call    FormHeapAlloc
0x57EFC1: add     esp, 4
0x57EFC4: mov     [esp+50h+arg_8], eax
0x57EFC8: test    eax, eax
0x57EFCA: mov     [esp+50h+var_4], 5
0x57EFD2: jz      short loc_57EFDF
0x57EFD4: push    0
0x57EFD6: mov     ecx, eax; this
0x57EFD8: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x57EFDD: jmp     short loc_57EFE1
0x57EFDF: xor     eax, eax
0x57EFE1: test    eax, eax
0x57EFE3: mov     [esp+50h+var_4], edi
0x57EFE7: mov     [ebx+58h], eax
0x57EFEA: jnz     short loc_57F003
0x57EFEC: push    0B7Fh
0x57EFF1: push    offset a_InterfaceInte; ".\\Interface\\InterfaceManager.cpp"
0x57EFF6: push    offset EmptyString
0x57EFFB: call    nullsub_return0_0arg
0x57F000: add     esp, 0Ch
0x57F003: mov     ecx, [ebx+58h]
0x57F006: push    offset aInterfaceman_0; "InterfaceManager: Cursor Root"
0x57F00B: call    NiObjectNET_SetName
0x57F010: mov     edx, [ebp+0]
0x57F013: mov     eax, [ebx+58h]
0x57F016: mov     edx, [edx+84h]
0x57F01C: push    0
0x57F01E: push    eax
0x57F01F: mov     ecx, ebp
0x57F021: call    edx
0x57F023: fld     dword ptr [ebx+74h]
0x57F026: mov     eax, [ebx+58h]
0x57F029: fstp    [esp+50h+arg_8]
0x57F02D: fldz
0x57F02F: push    114h; Size
0x57F034: fst     [esp+54h+var_3C]
0x57F038: fld     [esp+54h+arg_8]
0x57F03C: mov     ecx, [esp+54h+var_3C]
0x57F040: fstp    [esp+54h+var_38]
0x57F044: mov     [eax+54h], ecx
0x57F047: mov     edx, [esp+54h+var_38]
0x57F04B: mov     [eax+58h], edx
0x57F04E: fstp    [esp+54h+var_34]
0x57F052: mov     ecx, [esp+54h+var_34]
0x57F056: mov     [eax+5Ch], ecx
0x57F059: call    FormHeapAlloc
0x57F05E: add     esp, 4
0x57F061: mov     [esp+50h+arg_8], eax
0x57F065: test    eax, eax
0x57F067: mov     [esp+50h+var_4], 6
0x57F06F: jz      short loc_57F07C
0x57F071: mov     ecx, eax
0x57F073: call    sub_719760
0x57F078: mov     esi, eax
0x57F07A: jmp     short loc_57F07E
0x57F07C: xor     esi, esi
0x57F07E: push    offset aCursorscenelig; "CursorSceneLight"
0x57F083: mov     ecx, esi
0x57F085: mov     [esp+54h+var_4], edi
0x57F089: call    NiObjectNET_SetName
0x57F08E: fld1
0x57F090: add     dword ptr [esi+0B8h], 1
0x57F097: fst     [esp+50h+var_3C]
0x57F09B: mov     edx, [esp+50h+var_3C]
0x57F09F: fst     [esp+50h+var_38]
0x57F0A3: mov     eax, [esp+50h+var_38]
0x57F0A7: fstp    [esp+50h+var_34]
0x57F0AB: mov     ecx, [esp+50h+var_34]
0x57F0AF: mov     [esi+0E0h], edx
0x57F0B5: mov     [esi+0E4h], eax
0x57F0BB: mov     [esi+0E8h], ecx
0x57F0C1: mov     edx, [ebx+58h]
0x57F0C4: push    edx
0x57F0C5: mov     ecx, esi
0x57F0C7: call    sub_708E40
0x57F0CC: mov     ecx, [ebx+58h]
0x57F0CF: mov     eax, [ecx]
0x57F0D1: mov     edx, [eax+84h]
0x57F0D7: push    1
0x57F0D9: push    esi
0x57F0DA: call    edx
0x57F0DC: push    1Ch; Size
0x57F0DE: call    FormHeapAlloc
0x57F0E3: mov     esi, eax
0x57F0E5: add     esp, 4
0x57F0E8: mov     [esp+50h+arg_8], esi
0x57F0EC: test    esi, esi
0x57F0EE: mov     [esp+50h+var_4], 7
0x57F0F6: jz      short loc_57F10D
0x57F0F8: mov     ecx, esi; this
0x57F0FA: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x57F0FF: mov     dword ptr [esi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x57F105: mov     word ptr [esi+18h], 8
0x57F10B: jmp     short loc_57F10F
0x57F10D: xor     esi, esi
0x57F10F: mov     ax, [esi+18h]
0x57F113: and     ax, 0FFEFh
0x57F117: or      ax, 28h
0x57F11B: mov     [esi+18h], ax
0x57F11F: mov     ecx, [ebx+58h]; this
0x57F122: push    esi; a2
0x57F123: mov     [esp+54h+var_4], edi
0x57F127: call    sub_405680
0x57F12C: fld     dword ptr [ebx+74h]
0x57F12F: push    0; int
0x57F131: push    ecx
0x57F132: mov     ecx, ds:0B3A6B0h
0x57F138: fstp    [esp+58h+a2]; float
0x57F13B: push    ebp; int
0x57F13C: call    sub_5730B0
0x57F141: jmp     short loc_57F156
0x57F143: fld     dword ptr ds:0A56F44h
0x57F149: push    0; a3
0x57F14B: push    ecx
0x57F14C: mov     ecx, ebp; this
0x57F14E: fstp    [esp+58h+a2]; a2
0x57F151: call    SetCameraFOV_0
0x57F156: mov     eax, ebp
0x57F158: mov     ecx, [esp+50h+var_C]
0x57F15C: mov     large fs:0, ecx
0x57F163: pop     ecx
0x57F164: pop     edi
0x57F165: pop     esi
0x57F166: pop     ebp
0x57F167: pop     ebx
0x57F168: add     esp, 3Ch
0x57F16B: retn    0Ch
