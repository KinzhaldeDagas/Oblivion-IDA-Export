0x508E20: sub     esp, 2Ch
0x508E23: fldz
0x508E25: push    esi
0x508E26: mov     esi, [esp+30h+arg_8]
0x508E2A: fst     dword ptr [esp+30h+var_28]
0x508E2E: lea     eax, [esp+30h+var_2C]
0x508E32: fst     [esp+30h+var_24]
0x508E36: push    eax; a4
0x508E37: fst     [esp+34h+a2]
0x508E3B: lea     ecx, [esp+34h+var_1C]
0x508E3F: fstp    [esp+34h+var_1C]
0x508E43: push    ecx; a3
0x508E44: lea     edx, [esp+38h+a2]
0x508E48: push    edx; a2
0x508E49: mov     edx, [esp+3Ch+l]
0x508E4D: lea     eax, [esp+3Ch+var_24]
0x508E51: push    eax; int
0x508E52: mov     eax, [esp+40h+arg_10]
0x508E56: lea     ecx, [esp+40h+var_28]
0x508E5A: push    ecx; int
0x508E5B: mov     ecx, [esp+44h+arg_C]
0x508E5F: push    edx; l
0x508E60: mov     edx, [esp+48h+a3]
0x508E64: push    eax; a6
0x508E65: mov     eax, [esp+4Ch+arg_4]
0x508E69: push    ecx; a5
0x508E6A: mov     ecx, [esp+50h+a1]
0x508E6E: push    esi; a4
0x508E6F: push    edx; a3
0x508E70: push    eax; a2
0x508E71: push    ecx; a1
0x508E72: mov     [esp+60h+var_2C], 0
0x508E7A: call    Script_ExtractArgs
0x508E7F: add     esp, 30h
0x508E82: test    al, al
0x508E84: jnz     short loc_508E8B
0x508E86: pop     esi
0x508E87: add     esp, 2Ch
0x508E8A: retn
0x508E8B: fld     dword ptr [esp+30h+var_28]
0x508E8F: mov     ecx, esi; this
0x508E91: fstp    [esp+30h+var_18]
0x508E95: fld     [esp+30h+var_24]
0x508E99: fstp    [esp+30h+var_14]
0x508E9D: fld     [esp+30h+a2]
0x508EA1: fstp    [esp+30h+var_10]
0x508EA5: fldz
0x508EA7: fst     [esp+30h+var_C]
0x508EAB: fstp    [esp+30h+var_8]
0x508EAF: fld     [esp+30h+var_1C]
0x508EB3: fstp    [esp+30h+var_4]
0x508EB7: call    TESObjectREFR_GetParentCell
0x508EBC: mov     ecx, [esp+30h+var_2C]
0x508EC0: cmp     ecx, eax
0x508EC2: jz      loc_508FAB
0x508EC8: mov     edx, ds:0B333C4h
0x508ECE: cmp     esi, edx
0x508ED0: jnz     short loc_508F29
0x508ED2: test    ecx, ecx
0x508ED4: jz      loc_508F9F
0x508EDA: push    1; char
0x508EDC: push    ecx; int
0x508EDD: mov     ecx, [esp+38h+var_C]
0x508EE1: sub     esp, 0Ch
0x508EE4: mov     eax, esp
0x508EE6: mov     [eax], ecx
0x508EE8: mov     ecx, [esp+44h+var_8]
0x508EEC: mov     [eax+4], ecx
0x508EEF: mov     ecx, [esp+44h+var_4]
0x508EF3: mov     [eax+8], ecx
0x508EF6: mov     ecx, [esp+44h+var_18]
0x508EFA: sub     esp, 0Ch
0x508EFD: mov     eax, esp
0x508EFF: mov     [eax], ecx
0x508F01: mov     ecx, [esp+50h+var_14]
0x508F05: mov     [eax+4], ecx
0x508F08: mov     ecx, [esp+50h+var_10]
0x508F0C: mov     [eax+8], ecx
0x508F0F: mov     ecx, edx; int
0x508F11: call    sub_66EAF0
0x508F16: mov     ecx, ds:0B333C4h
0x508F1C: push    esi
0x508F1D: call    sub_665260
0x508F22: mov     al, 1
0x508F24: pop     esi
0x508F25: add     esp, 2Ch
0x508F28: retn
0x508F29: mov     edx, [esp+30h+var_18]
0x508F2D: mov     ecx, [esp+30h+var_14]
0x508F31: sub     esp, 0Ch
0x508F34: mov     eax, esp
0x508F36: mov     [eax], edx
0x508F38: mov     edx, [esp+3Ch+var_10]
0x508F3C: mov     [eax+4], ecx
0x508F3F: mov     ecx, esi; this
0x508F41: mov     [eax+8], edx
0x508F44: call    TESObjectREFR_SetPosition
0x508F49: mov     eax, [esp+30h+var_2C]
0x508F4D: test    eax, eax
0x508F4F: jz      short loc_508F76
0x508F51: mov     ecx, ds:0B333A0h
0x508F57: push    0; a2
0x508F59: push    eax; a1
0x508F5A: call    TESObjectCELL_IsProcessLevel?LowHigh
0x508F5F: test    al, al
0x508F61: jz      short loc_508F76
0x508F63: fld     [esp+30h+var_4]
0x508F67: push    ecx
0x508F68: mov     ecx, esi
0x508F6A: fstp    [esp+34h+var_34]; float
0x508F6D: call    sub_4D8A10
0x508F72: fldz
0x508F74: jmp     short loc_508F84
0x508F76: cmp     esi, ds:0B333C4h
0x508F7C: jz      short loc_508F8F
0x508F7E: fld     dword ptr ds:0A32048h
0x508F84: push    ecx
0x508F85: mov     ecx, esi
0x508F87: fstp    [esp+38h+var_38]; float
0x508F8A: call    sub_4D89D0
0x508F8F: mov     eax, [esp+38h+var_34]
0x508F93: push    0; int
0x508F95: push    eax; int
0x508F96: push    esi; Concurrency::details::SchedulerBase *
0x508F97: call    sub_4DD4B0
0x508F9C: add     esp, 0Ch
0x508F9F: mov     ecx, ds:0B333C4h
0x508FA5: push    esi
0x508FA6: call    sub_665260
0x508FAB: mov     al, 1
0x508FAD: pop     esi
0x508FAE: add     esp, 2Ch
0x508FB1: retn
