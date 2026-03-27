0x688DC0: push    0FFFFFFFFh
0x688DC2: push    offset SEH_688DC0
0x688DC7: mov     eax, large fs:0
0x688DCD: push    eax
0x688DCE: sub     esp, 64h
0x688DD1: push    ebx
0x688DD2: push    ebp
0x688DD3: push    esi
0x688DD4: push    edi
0x688DD5: mov     eax, ds:0B30AACh
0x688DDA: xor     eax, esp
0x688DDC: push    eax
0x688DDD: lea     eax, [esp+84h+var_C]
0x688DE1: mov     large fs:0, eax
0x688DE7: cmp     byte ptr ds:0B3C089h, 0
0x688DEE: jnz     loc_68920D
0x688DF4: mov     esi, [esp+84h+arg_0]
0x688DFB: test    esi, esi
0x688DFD: jz      loc_68920D
0x688E03: mov     ecx, [esi+58h]
0x688E06: test    ecx, ecx
0x688E08: jz      loc_68920D
0x688E0E: mov     eax, [ecx]
0x688E10: mov     edx, [eax+8]
0x688E13: call    edx
0x688E15: test    eax, eax
0x688E17: jnz     loc_68920D
0x688E1D: mov     edi, [esi+58h]
0x688E20: mov     eax, [edi]
0x688E22: mov     edx, [eax+0CCh]
0x688E28: mov     ecx, edi
0x688E2A: call    edx
0x688E2C: cmp     eax, ds:0B333C4h
0x688E32: jz      short loc_688E66
0x688E34: mov     eax, [edi]
0x688E36: mov     edx, [eax+184h]
0x688E3C: mov     ecx, edi
0x688E3E: call    edx
0x688E40: test    eax, eax
0x688E42: jz      loc_688F84
0x688E48: mov     eax, [eax+28h]
0x688E4B: test    eax, eax
0x688E4D: jz      loc_688F84
0x688E53: mov     ecx, eax
0x688E55: call    sub_569E60
0x688E5A: cmp     eax, ds:0B333C4h
0x688E60: jnz     loc_688F84
0x688E66: mov     eax, [esi]
0x688E68: fld     dword ptr ds:0A2FF44h
0x688E6E: mov     edx, [eax+174h]
0x688E74: push    ecx
0x688E75: mov     ecx, esi
0x688E77: fstp    [esp+88h+var_88]; float
0x688E7A: call    edx
0x688E7C: mov     ecx, ds:0B333C4h
0x688E82: push    eax; int
0x688E83: mov     eax, [ecx]
0x688E85: mov     edx, [eax+174h]
0x688E8B: call    edx
0x688E8D: push    eax; int
0x688E8E: call    sub_480520
0x688E93: add     esp, 0Ch
0x688E96: test    eax, eax
0x688E98: jge     loc_688F84
0x688E9E: mov     eax, [esi]
0x688EA0: mov     edx, [eax+174h]
0x688EA6: mov     ecx, esi
0x688EA8: call    edx
0x688EAA: mov     ecx, ds:0B333C4h
0x688EB0: mov     eax, [ecx]
0x688EB2: mov     edx, [eax+174h]
0x688EB8: call    edx
0x688EBA: fld     dword ptr ds:0A31E2Ch
0x688EC0: mov     eax, [esi]
0x688EC2: mov     edx, [eax+174h]
0x688EC8: push    ecx
0x688EC9: mov     ecx, esi
0x688ECB: fstp    [esp+88h+var_88]; float
0x688ECE: call    edx
0x688ED0: mov     edi, [esp+88h+arg_4]
0x688ED7: push    eax; int
0x688ED8: push    edi; int
0x688ED9: call    sub_47D810
0x688EDE: add     esp, 0Ch
0x688EE1: test    al, al
0x688EE3: jz      loc_688F84
0x688EE9: fld     dword ptr ds:0A31E2Ch
0x688EEF: push    ecx
0x688EF0: mov     ecx, ds:0B333C4h
0x688EF6: fstp    [esp+88h+var_88]; float
0x688EF9: mov     eax, [ecx]
0x688EFB: mov     edx, [eax+174h]
0x688F01: call    edx
0x688F03: mov     ebp, [esp+88h+arg_8]
0x688F0A: push    eax; int
0x688F0B: push    ebp; int
0x688F0C: call    sub_47D810
0x688F11: add     esp, 0Ch
0x688F14: test    al, al
0x688F16: jz      short loc_688F84
0x688F18: fld     dword ptr ds:0A31E2Ch
0x688F1E: push    ecx
0x688F1F: fstp    [esp+88h+var_88]; float
0x688F22: push    ebp; int
0x688F23: push    edi; int
0x688F24: call    sub_480520
0x688F29: add     esp, 0Ch
0x688F2C: test    eax, eax
0x688F2E: jl      loc_68920D
0x688F34: lea     eax, [esp+84h+var_6D]
0x688F38: push    eax
0x688F39: push    ebp
0x688F3A: push    edi
0x688F3B: push    esi
0x688F3C: mov     [esp+94h+var_6D], 0
0x688F41: call    sub_6843C0
0x688F46: add     esp, 10h
0x688F49: test    al, al
0x688F4B: jz      short loc_688F65
0x688F4D: mov     al, [esp+84h+var_6D]
0x688F51: mov     ecx, [esp+84h+var_C]
0x688F55: mov     large fs:0, ecx
0x688F5C: pop     ecx
0x688F5D: pop     edi
0x688F5E: pop     esi
0x688F5F: pop     ebp
0x688F60: pop     ebx
0x688F61: add     esp, 70h
0x688F64: retn
0x688F65: mov     eax, ds:0B02C54h
0x688F6A: cmp     ds:0B3C084h, eax
0x688F70: jnz     short loc_688F9A
0x688F72: mov     eax, ds:0B3C080h
0x688F77: add     eax, 1
0x688F7A: cmp     eax, 1
0x688F7D: mov     ds:0B3C080h, eax
0x688F82: jbe     short loc_688FA9
0x688F84: xor     al, al
0x688F86: mov     ecx, [esp+84h+var_C]
0x688F8A: mov     large fs:0, ecx
0x688F91: pop     ecx
0x688F92: pop     edi
0x688F93: pop     esi
0x688F94: pop     ebp
0x688F95: pop     ebx
0x688F96: add     esp, 70h
0x688F99: retn
0x688F9A: mov     ds:0B3C084h, eax
0x688F9F: mov     dword ptr ds:0B3C080h, 1
0x688FA9: mov     ecx, [edi]
0x688FAB: mov     edx, [edi+4]
0x688FAE: mov     eax, [edi+8]
0x688FB1: mov     [esp+84h+var_38], ecx
0x688FB5: mov     ecx, esi
0x688FB7: mov     [esp+84h+var_34], edx
0x688FBB: mov     [esp+84h+var_30], eax
0x688FBF: call    sub_5E0660
0x688FC4: fadd    [esp+84h+var_30]
0x688FC8: mov     ecx, [ebp+0]
0x688FCB: mov     eax, [ebp+8]
0x688FCE: mov     edx, [ebp+4]
0x688FD1: fstp    [esp+84h+var_30]
0x688FD5: mov     [esp+84h+var_3C], eax
0x688FD9: fld     [esp+84h+var_3C]
0x688FDD: fadd    qword ptr ds:0A3AA50h
0x688FE3: mov     [esp+84h+var_44], ecx
0x688FE7: lea     ecx, [esp+84h+var_44]
0x688FEB: mov     [esp+84h+var_40], edx
0x688FEF: push    ecx
0x688FF0: fstp    [esp+88h+var_3C]
0x688FF4: lea     edx, [esp+88h+var_38]
0x688FF8: push    edx
0x688FF9: call    sub_6859A0
0x688FFE: add     esp, 8
0x689001: test    al, al
0x689003: jnz     short loc_689028
0x689005: push    0
0x689007: push    ebp
0x689008: push    edi
0x689009: push    esi
0x68900A: call    sub_685BE0
0x68900F: add     esp, 10h
0x689012: xor     al, al
0x689014: mov     ecx, [esp+84h+var_C]
0x689018: mov     large fs:0, ecx
0x68901F: pop     ecx
0x689020: pop     edi
0x689021: pop     esi
0x689022: pop     ebp
0x689023: pop     ebx
0x689024: add     esp, 70h
0x689027: retn
0x689028: mov     ecx, esi
0x68902A: call    Actor_IsSwimming
0x68902F: test    al, al
0x689031: jz      short loc_689073
0x689033: fld     dword ptr ds:0A6E688h
0x689039: push    ecx
0x68903A: mov     ecx, esi; this
0x68903C: fstp    [esp+88h+var_88]; float
0x68903F: call    TESObjectREFR_GetParentCell
0x689044: push    eax; int
0x689045: push    edi; int
0x689046: mov     ecx, esi
0x689048: call    Actor_IsUnderwater??
0x68904D: test    al, al
0x68904F: jz      short loc_689073
0x689051: fld     dword ptr ds:0A6E688h
0x689057: push    ecx
0x689058: mov     ecx, esi; this
0x68905A: fstp    [esp+88h+var_88]; float
0x68905D: call    TESObjectREFR_GetParentCell
0x689062: push    eax; int
0x689063: push    ebp; int
0x689064: mov     ecx, esi
0x689066: call    Actor_IsUnderwater??
0x68906B: test    al, al
0x68906D: jnz     loc_68920D
0x689073: lea     ecx, [esp+84h+var_20]
0x689077: call    sub_68CB30
0x68907C: cmp     [esp+84h+arg_C], 0
0x689084: mov     [esp+84h+var_4], 0
0x68908F: jnz     short loc_68909E
0x689091: cmp     byte ptr ds:0B15824h, 0
0x689098: jnz     short loc_68909E
0x68909A: xor     al, al
0x68909C: jmp     short loc_6890A3
0x68909E: mov     eax, 1
0x6890A3: push    eax
0x6890A4: push    0
0x6890A6: lea     eax, [esp+8Ch+var_20]
0x6890AA: push    eax
0x6890AB: push    edi
0x6890AC: push    esi
0x6890AD: call    sub_686450
0x6890B2: add     esp, 14h
0x6890B5: lea     ecx, [esp+84h+var_20]
0x6890B9: call    sub_6899C0
0x6890BE: mov     ecx, [eax]
0x6890C0: mov     edx, [eax+4]
0x6890C3: mov     eax, [eax+8]
0x6890C6: mov     [esp+84h+var_5C], ecx
0x6890CA: mov     cl, [esp+84h+arg_C]
0x6890D1: mov     byte ptr [esp+84h+var_6C], cl
0x6890D5: mov     bl, 1
0x6890D7: mov     [esp+84h+var_58], edx
0x6890DB: push    ebp
0x6890DC: lea     edx, [esp+88h+var_5C]
0x6890E0: push    edx
0x6890E1: mov     [esp+8Ch+var_54], eax
0x6890E5: lea     eax, [esp+8Ch+var_50]
0x6890E9: push    esi
0x6890EA: push    eax
0x6890EB: mov     byte ptr ds:0B3C088h, 1
0x6890F2: call    sub_686A40
0x6890F7: fld     [esp+94h+var_50]
0x6890FB: mov     byte ptr ds:0B3C088h, 0
0x689102: fsub    dword ptr [ebp+0]
0x689105: add     esp, 10h
0x689108: lea     ecx, [esp+84h+var_2C]
0x68910C: fstp    [esp+84h+var_68]
0x689110: fld     [esp+84h+var_4C]
0x689114: fsub    dword ptr [ebp+4]
0x689117: fstp    [esp+84h+var_64]
0x68911B: fld     [esp+84h+var_48]
0x68911F: fsub    dword ptr [ebp+8]
0x689122: fstp    [esp+84h+var_60]
0x689126: fld     [esp+84h+var_68]
0x68912A: fstp    [esp+84h+var_2C]
0x68912E: fld     [esp+84h+var_64]
0x689132: fstp    [esp+84h+var_28]
0x689136: fld     [esp+84h+var_60]
0x68913A: fstp    [esp+84h+var_24]
0x68913E: call    sub_404C90
0x689143: fcomp   dword ptr ds:0A56670h
0x689149: fnstsw  ax
0x68914B: test    ah, 5
0x68914E: jp      short loc_689152
0x689150: xor     bl, bl
0x689152: mov     ecx, [esp+84h+var_6C]
0x689156: push    ecx
0x689157: lea     edx, [esp+88h+var_50]
0x68915B: push    edx
0x68915C: lea     eax, [esp+8Ch+var_5C]
0x689160: push    eax
0x689161: push    esi
0x689162: call    sub_687DA0
0x689167: add     esp, 10h
0x68916A: test    al, al
0x68916C: jz      short loc_6891B5
0x68916E: test    bl, bl
0x689170: jz      short loc_689187
0x689172: mov     ecx, [esp+84h+var_50]
0x689176: mov     edx, [esp+84h+var_4C]
0x68917A: mov     eax, [esp+84h+var_48]
0x68917E: mov     [esp+84h+var_5C], ecx
0x689182: jmp     loc_6890D7
0x689187: cmp     byte ptr [esp+84h+var_6C], 0
0x68918C: jnz     short loc_6891EC
0x68918E: cmp     byte ptr ds:0B1581Ch, 0
0x689195: jz      short loc_6891EC
0x689197: cmp     ds:0B333B4h, esi
0x68919D: jnz     short loc_6891EC
0x68919F: mov     ecx, [edi]
0x6891A1: mov     edx, [edi+4]
0x6891A4: mov     eax, [edi+8]
0x6891A7: mov     byte ptr [esp+84h+var_6C], 1
0x6891AC: mov     [esp+84h+var_5C], ecx
0x6891B0: jmp     loc_6890D5
0x6891B5: push    0
0x6891B7: push    ebp
0x6891B8: push    edi
0x6891B9: push    esi
0x6891BA: call    sub_685BE0
0x6891BF: add     esp, 10h
0x6891C2: lea     ecx, [esp+84h+var_20]; void *
0x6891C6: mov     [esp+84h+var_4], 0FFFFFFFFh
0x6891D1: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x6891D6: xor     al, al
0x6891D8: mov     ecx, [esp+84h+var_C]
0x6891DC: mov     large fs:0, ecx
0x6891E3: pop     ecx
0x6891E4: pop     edi
0x6891E5: pop     esi
0x6891E6: pop     ebp
0x6891E7: pop     ebx
0x6891E8: add     esp, 70h
0x6891EB: retn
0x6891EC: lea     ecx, [esp+84h+var_20]; void *
0x6891F0: mov     [esp+84h+var_4], 0FFFFFFFFh
0x6891FB: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x689200: push    1
0x689202: push    ebp
0x689203: push    edi
0x689204: push    esi
0x689205: call    sub_685BE0
0x68920A: add     esp, 10h
0x68920D: mov     al, 1
0x68920F: mov     ecx, [esp+84h+var_C]
0x689213: mov     large fs:0, ecx
0x68921A: pop     ecx
0x68921B: pop     edi
0x68921C: pop     esi
0x68921D: pop     ebp
0x68921E: pop     ebx
0x68921F: add     esp, 70h
0x689222: retn
