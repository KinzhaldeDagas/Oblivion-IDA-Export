0x6A0D90: sub     esp, 10h
0x6A0D93: push    ebx
0x6A0D94: push    ebp
0x6A0D95: push    esi
0x6A0D96: mov     esi, ecx
0x6A0D98: mov     eax, [esi+2Ch]
0x6A0D9B: cmp     eax, 45574944h
0x6A0DA0: push    edi
0x6A0DA1: setz    [esp+20h+var_E]
0x6A0DA6: cmp     eax, 52414944h
0x6A0DAB: mov     eax, [esi+1Ch]
0x6A0DAE: setz    bl
0x6A0DB1: xor     edi, edi
0x6A0DB3: push    edi; int
0x6A0DB4: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6A0DB9: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x6A0DBE: push    edi; int
0x6A0DBF: push    eax; void *
0x6A0DC0: mov     [esp+34h+var_D], 0
0x6A0DC5: call    OblivionDynamicCast
0x6A0DCA: add     esp, 14h
0x6A0DCD: xor     ebp, ebp
0x6A0DCF: test    eax, eax
0x6A0DD1: jz      short loc_6A0E11
0x6A0DD3: mov     ecx, ds:0B333C4h
0x6A0DD9: cmp     eax, ecx
0x6A0DDB: jz      short loc_6A0DEB
0x6A0DDD: mov     edx, [eax]
0x6A0DDF: mov     ecx, eax
0x6A0DE1: mov     eax, [edx+168h]
0x6A0DE7: call    eax
0x6A0DE9: jmp     short loc_6A0E0F
0x6A0DEB: cmp     [ecx+5D8h], edi
0x6A0DF1: jz      short loc_6A0E02
0x6A0DF3: cmp     [ecx+5E0h], esi
0x6A0DF9: jnz     short loc_6A0E02
0x6A0DFB: mov     [esp+20h+var_D], 1
0x6A0E00: jmp     short loc_6A0E11
0x6A0E02: cmp     byte ptr [esi+44h], 0
0x6A0E06: setz    dl
0x6A0E09: push    edx
0x6A0E0A: call    sub_6600D0
0x6A0E0F: mov     ebp, eax
0x6A0E11: cmp     byte ptr [esi+28h], 0
0x6A0E15: jnz     loc_6A0F3A
0x6A0E1B: cmp     [esp+20h+var_E], 0
0x6A0E20: jnz     loc_6A0F3A
0x6A0E26: test    bl, bl
0x6A0E28: jz      loc_6A0EB2
0x6A0E2E: mov     eax, [esi+18h]
0x6A0E31: push    0; int
0x6A0E33: push    offset ??_R0?AVDisintegrateArmorEffect@@@8; struct TypeDescriptor *
0x6A0E38: push    offset ??_R0?AVActiveEffect@@@8; struct _s_RTTICompleteObjectLocator *
0x6A0E3D: push    0; int
0x6A0E3F: push    eax; void *
0x6A0E40: call    OblivionDynamicCast
0x6A0E45: add     esp, 14h
0x6A0E48: test    eax, eax
0x6A0E4A: jz      short loc_6A0E59
0x6A0E4C: mov     eax, [eax+38h]
0x6A0E4F: test    eax, eax
0x6A0E51: jz      short loc_6A0E59
0x6A0E53: mov     eax, [eax+8]
0x6A0E56: mov     [esi+30h], eax
0x6A0E59: mov     ecx, [esi+1Ch]
0x6A0E5C: test    ecx, ecx
0x6A0E5E: jz      loc_6A1098
0x6A0E64: mov     edx, [ecx]
0x6A0E66: mov     eax, [edx+190h]
0x6A0E6C: call    eax
0x6A0E6E: test    al, al
0x6A0E70: jz      loc_6A1098
0x6A0E76: mov     esi, [esi+30h]
0x6A0E79: test    esi, esi
0x6A0E7B: jz      loc_6A1098
0x6A0E81: test    ebp, ebp
0x6A0E83: jz      loc_6A1098
0x6A0E89: push    esi
0x6A0E8A: mov     ecx, ebp
0x6A0E8C: call    sub_477E90
0x6A0E91: test    eax, eax
0x6A0E93: jz      loc_6A1098
0x6A0E99: mov     edi, [eax+8]
0x6A0E9C: mov     edx, [esp+20h+arg_C]
0x6A0EA0: mov     eax, [esp+20h+arg_10]
0x6A0EA4: mov     [edx], edi
0x6A0EA6: mov     [eax], edi
0x6A0EA8: pop     edi
0x6A0EA9: pop     esi
0x6A0EAA: pop     ebp
0x6A0EAB: pop     ebx
0x6A0EAC: add     esp, 10h
0x6A0EAF: retn    14h
0x6A0EB2: mov     ecx, [esi+1Ch]
0x6A0EB5: test    ecx, ecx
0x6A0EB7: jz      loc_6A1098
0x6A0EBD: mov     edx, [ecx]
0x6A0EBF: mov     eax, [edx+154h]
0x6A0EC5: call    eax
0x6A0EC7: mov     ecx, [esi+1Ch]
0x6A0ECA: mov     edx, [ecx]
0x6A0ECC: mov     edi, eax
0x6A0ECE: mov     eax, [edx+190h]
0x6A0ED4: call    eax
0x6A0ED6: test    al, al
0x6A0ED8: jz      short loc_6A0F11
0x6A0EDA: mov     ecx, ds:0B333C4h
0x6A0EE0: cmp     [esi+1Ch], ecx
0x6A0EE3: jnz     short loc_6A0EF4
0x6A0EE5: cmp     byte ptr [esi+44h], 0
0x6A0EE9: setz    dl
0x6A0EEC: push    edx
0x6A0EED: call    PlayerCharacter_GetPlayerNode
0x6A0EF2: mov     edi, eax
0x6A0EF4: mov     eax, [esp+20h+arg_0]
0x6A0EF8: mov     edx, [esp+20h+arg_C]
0x6A0EFC: mov     byte ptr [eax], 1
0x6A0EFF: mov     eax, [esp+20h+arg_10]
0x6A0F03: mov     [edx], edi
0x6A0F05: mov     [eax], edi
0x6A0F07: pop     edi
0x6A0F08: pop     esi
0x6A0F09: pop     ebp
0x6A0F0A: pop     ebx
0x6A0F0B: add     esp, 10h
0x6A0F0E: retn    14h
0x6A0F11: mov     ecx, [esi+1Ch]
0x6A0F14: mov     edx, [ecx]
0x6A0F16: mov     eax, [edx+170h]
0x6A0F1C: push    0; int
0x6A0F1E: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x6A0F23: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6A0F28: push    0; int
0x6A0F2A: call    eax
0x6A0F2C: push    eax; void *
0x6A0F2D: call    OblivionDynamicCast
0x6A0F32: add     esp, 14h
0x6A0F35: jmp     loc_6A103C
0x6A0F3A: mov     ecx, [esi+1Ch]
0x6A0F3D: test    ecx, ecx
0x6A0F3F: jz      loc_6A1098
0x6A0F45: mov     edx, [ecx]
0x6A0F47: mov     eax, [edx+190h]
0x6A0F4D: call    eax
0x6A0F4F: test    al, al
0x6A0F51: jz      loc_6A1098
0x6A0F57: mov     ecx, [esi+1Ch]
0x6A0F5A: mov     esi, [ecx+58h]
0x6A0F5D: test    esi, esi
0x6A0F5F: jz      loc_6A1098
0x6A0F65: mov     edx, [esi]
0x6A0F67: mov     eax, [edx+0ECh]
0x6A0F6D: push    1
0x6A0F6F: mov     ecx, esi
0x6A0F71: call    eax
0x6A0F73: test    eax, eax
0x6A0F75: jz      loc_6A1098
0x6A0F7B: cmp     [esp+20h+var_E], 0
0x6A0F80: jnz     short loc_6A0F96
0x6A0F82: mov     edx, [esi]
0x6A0F84: mov     eax, [edx+13Ch]
0x6A0F8A: mov     ecx, esi
0x6A0F8C: call    eax
0x6A0F8E: test    al, al
0x6A0F90: jnz     loc_6A1098
0x6A0F96: cmp     [esp+20h+var_D], 0
0x6A0F9B: mov     edx, [esi]
0x6A0F9D: jz      short loc_6A0FD6
0x6A0F9F: mov     ecx, ds:0B333C4h
0x6A0FA5: mov     edi, [ecx+5D8h]
0x6A0FAB: mov     eax, [edx+138h]
0x6A0FB1: mov     ecx, esi
0x6A0FB3: call    eax
0x6A0FB5: mov     edx, [edi]
0x6A0FB7: test    al, al
0x6A0FB9: mov     eax, [edx+58h]
0x6A0FBC: mov     ecx, edi
0x6A0FBE: jz      short loc_6A0FCB
0x6A0FC0: push    offset aTorch; "Torch"
0x6A0FC5: call    eax
0x6A0FC7: mov     edi, eax
0x6A0FC9: jmp     short loc_6A1010
0x6A0FCB: push    offset aWeapon; "Weapon"
0x6A0FD0: call    eax
0x6A0FD2: mov     edi, eax
0x6A0FD4: jmp     short loc_6A1010
0x6A0FD6: mov     eax, [edx+304h]
0x6A0FDC: mov     ecx, esi
0x6A0FDE: call    eax
0x6A0FE0: test    al, al
0x6A0FE2: mov     edx, [esi]
0x6A0FE4: push    ebp
0x6A0FE5: mov     ecx, esi
0x6A0FE7: jz      short loc_6A0FF5
0x6A0FE9: mov     eax, [edx+118h]
0x6A0FEF: call    eax
0x6A0FF1: mov     edi, eax
0x6A0FF3: jmp     short loc_6A1010
0x6A0FF5: mov     eax, [edx+124h]
0x6A0FFB: call    eax
0x6A0FFD: test    eax, eax
0x6A0FFF: jz      short loc_6A100E
0x6A1001: push    0
0x6A1003: mov     ecx, eax
0x6A1005: call    sub_405790
0x6A100A: mov     edi, eax
0x6A100C: jmp     short loc_6A1010
0x6A100E: xor     edi, edi
0x6A1010: mov     edx, [esi]
0x6A1012: mov     eax, [edx+0ECh]
0x6A1018: push    1
0x6A101A: mov     ecx, esi
0x6A101C: call    eax
0x6A101E: mov     eax, [eax+8]
0x6A1021: push    0; int
0x6A1023: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x6A1028: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6A102D: push    0; int
0x6A102F: push    eax; void *
0x6A1030: call    OblivionDynamicCast
0x6A1035: add     esp, 14h
0x6A1038: test    edi, edi
0x6A103A: jz      short loc_6A1098
0x6A103C: test    eax, eax
0x6A103E: jz      short loc_6A1098
0x6A1040: mov     al, [eax+90h]
0x6A1046: cmp     al, 1
0x6A1048: jz      short loc_6A104E
0x6A104A: test    al, al
0x6A104C: jnz     short loc_6A1098
0x6A104E: mov     ecx, [esp+20h+arg_4]
0x6A1052: fldz
0x6A1054: mov     byte ptr [ecx], 1
0x6A1057: fcom    dword ptr [edi+2Ch]
0x6A105A: fnstsw  ax
0x6A105C: test    ah, 1
0x6A105F: jnz     short loc_6A1070
0x6A1061: push    0; a3
0x6A1063: push    ecx
0x6A1064: mov     ecx, edi; this
0x6A1066: fstp    [esp+28h+a2]; a2
0x6A1069: call    NiAVObject_UpdateNiAVObject
0x6A106E: jmp     short loc_6A1072
0x6A1070: fstp    st
0x6A1072: lea     edx, [edi+88h]
0x6A1078: push    edx
0x6A1079: lea     eax, [esp+24h+var_C]
0x6A107D: push    eax
0x6A107E: lea     ecx, [edi+20h]
0x6A1081: call    sub_4121A0
0x6A1086: lea     ecx, [esp+20h+var_C]
0x6A108A: call    sub_404C90
0x6A108F: fadd    dword ptr [edi+2Ch]
0x6A1092: mov     ecx, [esp+20h+arg_8]
0x6A1096: fstp    dword ptr [ecx]
0x6A1098: mov     edx, [esp+20h+arg_C]
0x6A109C: mov     eax, [esp+20h+arg_10]
0x6A10A0: mov     [edx], edi
0x6A10A2: mov     [eax], edi
0x6A10A4: pop     edi
0x6A10A5: pop     esi
0x6A10A6: pop     ebp
0x6A10A7: pop     ebx
0x6A10A8: add     esp, 10h
0x6A10AB: retn    14h
