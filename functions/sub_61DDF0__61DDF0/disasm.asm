0x61DDF0: fldz
0x61DDF2: mov     eax, [esp+arg_8]
0x61DDF6: sub     esp, 14h
0x61DDF9: fstp    dword ptr [eax]
0x61DDFB: push    esi
0x61DDFC: mov     esi, [esp+18h+arg_0]
0x61DE00: test    esi, esi
0x61DE02: jz      loc_61E0E6
0x61DE08: cmp     [esp+18h+arg_4], 0
0x61DE0D: jz      loc_61E0E6
0x61DE13: mov     edx, [esi]
0x61DE15: mov     eax, [edx+330h]
0x61DE1B: mov     ecx, esi
0x61DE1D: call    eax
0x61DE1F: test    eax, eax
0x61DE21: jz      loc_61E0E6
0x61DE27: mov     ecx, [esi+58h]
0x61DE2A: mov     edx, [ecx]
0x61DE2C: mov     eax, [edx+0F4h]
0x61DE32: push    ebx
0x61DE33: push    ebp
0x61DE34: push    edi
0x61DE35: push    1
0x61DE37: xor     bl, bl
0x61DE39: call    eax
0x61DE3B: mov     ecx, [esi+58h]
0x61DE3E: mov     edx, [ecx]
0x61DE40: mov     ebp, eax
0x61DE42: mov     eax, [edx+13Ch]
0x61DE48: call    eax
0x61DE4A: test    al, al
0x61DE4C: jz      short loc_61DE61
0x61DE4E: mov     ecx, [esi+58h]
0x61DE51: mov     edx, [ecx]
0x61DE53: mov     eax, [edx+0ECh]
0x61DE59: push    1
0x61DE5B: call    eax
0x61DE5D: mov     edi, eax
0x61DE5F: jmp     short loc_61DE63
0x61DE61: xor     edi, edi
0x61DE63: mov     edx, [esi]
0x61DE65: mov     eax, [edx+330h]
0x61DE6B: mov     ecx, esi
0x61DE6D: call    eax
0x61DE6F: mov     edx, [esi]
0x61DE71: mov     eax, [edx+330h]
0x61DE77: mov     ecx, esi
0x61DE79: call    eax
0x61DE7B: mov     eax, [eax+70h]
0x61DE7E: cmp     eax, 2
0x61DE81: jz      short loc_61DE8C
0x61DE83: cmp     eax, 4
0x61DE86: jnz     loc_61DFF8
0x61DE8C: fldz
0x61DE8E: mov     edx, [esi]
0x61DE90: mov     eax, [edx+330h]
0x61DE96: fst     dword ptr [esp+24h+var_18+4]
0x61DE9A: mov     ecx, esi
0x61DE9C: fstp    [esp+24h+arg_0]
0x61DEA0: call    eax
0x61DEA2: cmp     dword ptr [eax+70h], 4
0x61DEA6: jnz     short loc_61DEF2
0x61DEA8: mov     edx, [esi]
0x61DEAA: mov     eax, [edx+330h]
0x61DEB0: mov     ecx, esi
0x61DEB2: call    eax
0x61DEB4: mov     eax, [eax+80h]
0x61DEBA: test    eax, eax
0x61DEBC: jz      short loc_61DED0
0x61DEBE: mov     ecx, [eax]
0x61DEC0: push    2
0x61DEC2: call    MagicItem_GetFXEffect
0x61DEC7: test    eax, eax
0x61DEC9: jz      short loc_61DED0
0x61DECB: fld     dword ptr [eax+74h]
0x61DECE: jmp     short loc_61DED2
0x61DED0: fld1
0x61DED2: mov     ecx, offset flt_B37EE8
0x61DED7: fstp    [esp+24h+arg_0]
0x61DEDB: call    GameSetting_GetSafeFloatPointer
0x61DEE0: fld     [esp+24h+arg_0]
0x61DEE4: fmul    dword ptr [eax]
0x61DEE6: mov     bl, 1
0x61DEE8: fstp    dword ptr [esp+24h+var_18+4]
0x61DEEC: fldz
0x61DEEE: fstp    [esp+24h+arg_0]
0x61DEF2: test    edi, edi
0x61DEF4: jz      short loc_61DF58
0x61DEF6: mov     eax, [edi+8]
0x61DEF9: test    eax, eax
0x61DEFB: jz      short loc_61DF58
0x61DEFD: push    0; int
0x61DEFF: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x61DF04: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x61DF09: push    0; int
0x61DF0B: push    eax; void *
0x61DF0C: call    OblivionDynamicCast
0x61DF11: add     esp, 14h
0x61DF14: test    eax, eax
0x61DF16: jz      short loc_61DF1D
0x61DF18: mov     eax, [eax+4]
0x61DF1B: jmp     short loc_61DF1F
0x61DF1D: xor     eax, eax
0x61DF1F: test    eax, eax
0x61DF21: jz      short loc_61DF36
0x61DF23: push    2
0x61DF25: lea     ecx, [eax+18h]
0x61DF28: call    MagicItem_GetFXEffect
0x61DF2D: test    eax, eax
0x61DF2F: jz      short loc_61DF36
0x61DF31: fld     dword ptr [eax+74h]
0x61DF34: jmp     short loc_61DF38
0x61DF36: fld1
0x61DF38: mov     ecx, offset flt_B37EE8
0x61DF3D: fstp    [esp+24h+arg_0]
0x61DF41: call    GameSetting_GetSafeFloatPointer
0x61DF46: fld     [esp+24h+arg_0]
0x61DF4A: fmul    dword ptr [eax]
0x61DF4C: fstp    dword ptr [esp+24h+var_18+4]
0x61DF50: fldz
0x61DF52: fstp    [esp+24h+arg_0]
0x61DF56: jmp     short loc_61DFB0
0x61DF58: test    ebp, ebp
0x61DF5A: jz      short loc_61DFAC
0x61DF5C: mov     eax, [ebp+8]
0x61DF5F: test    eax, eax
0x61DF61: jz      short loc_61DFAC
0x61DF63: push    0; int
0x61DF65: push    offset ??_R0?AVTESAmmo@@@8; struct TypeDescriptor *
0x61DF6A: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x61DF6F: push    0; int
0x61DF71: push    eax; void *
0x61DF72: call    OblivionDynamicCast
0x61DF77: add     esp, 14h
0x61DF7A: test    eax, eax
0x61DF7C: jz      short loc_61DF83
0x61DF7E: fld     dword ptr [eax+7Ch]
0x61DF81: jmp     short loc_61DF85
0x61DF83: fld1
0x61DF85: mov     ecx, offset flt_B37040
0x61DF8A: fstp    [esp+24h+arg_0]
0x61DF8E: call    GameSetting_GetSafeFloatPointer
0x61DF93: fld     dword ptr [eax]
0x61DF95: fmul    [esp+24h+arg_0]
0x61DF99: push    esi
0x61DF9A: fstp    dword ptr [esp+28h+var_18+4]
0x61DF9E: call    sub_608280
0x61DFA3: fstp    [esp+28h+arg_0]
0x61DFA7: add     esp, 4
0x61DFAA: jmp     short loc_61DFB0
0x61DFAC: test    bl, bl
0x61DFAE: jz      short loc_61DFF8
0x61DFB0: mov     ecx, [esp+24h+arg_C]
0x61DFB4: fld     [esp+24h+arg_0]
0x61DFB8: mov     edx, [esp+24h+arg_4]
0x61DFBC: push    ecx; int
0x61DFBD: sub     esp, 8
0x61DFC0: fstp    [esp+30h+var_2C]; float
0x61DFC4: lea     eax, [esp+30h+var_C]
0x61DFC8: fld     dword ptr [esp+30h+var_18+4]
0x61DFCC: fstp    [esp+30h+var_30]; float
0x61DFCF: push    edx; int
0x61DFD0: push    esi; int
0x61DFD1: push    eax; int
0x61DFD2: call    sub_6199F0
0x61DFD7: fld     [esp+3Ch+var_4]
0x61DFDB: mov     ecx, [esp+3Ch+arg_8]
0x61DFDF: fstp    [esp+3Ch+arg_0]
0x61DFE3: fld     [esp+3Ch+var_C]
0x61DFE7: add     esp, 18h
0x61DFEA: pop     edi
0x61DFEB: fstp    dword ptr [ecx]
0x61DFED: fld     [esp+20h+arg_0]
0x61DFF1: pop     ebp
0x61DFF2: pop     ebx
0x61DFF3: pop     esi
0x61DFF4: add     esp, 14h
0x61DFF7: retn
0x61DFF8: mov     edx, [esi]
0x61DFFA: mov     eax, [edx+174h]
0x61E000: mov     ecx, esi
0x61E002: call    eax
0x61E004: mov     ecx, [esp+24h+arg_4]
0x61E008: mov     edx, [ecx]
0x61E00A: mov     edi, eax
0x61E00C: mov     eax, [edx+174h]
0x61E012: call    eax
0x61E014: fld     dword ptr [eax+4]
0x61E017: fsub    dword ptr [edi+4]
0x61E01A: lea     ecx, [esp+24h+var_C]
0x61E01E: fstp    [esp+24h+arg_8]
0x61E022: fld     dword ptr [eax+8]
0x61E025: fsub    dword ptr [edi+8]
0x61E028: fstp    [esp+24h+arg_0]
0x61E02C: fld     dword ptr [eax]
0x61E02E: fsub    dword ptr [edi]
0x61E030: fstp    [esp+24h+var_C]
0x61E034: fld     [esp+24h+arg_8]
0x61E038: fstp    [esp+24h+var_8]
0x61E03C: fld     [esp+24h+arg_0]
0x61E040: fstp    [esp+24h+var_4]
0x61E044: call    sub_43F350
0x61E049: lea     ecx, [esp+24h+var_C]
0x61E04D: fstp    st
0x61E04F: push    ecx
0x61E050: call    sub_683CB0
0x61E055: fstp    [esp+28h+arg_8]
0x61E059: mov     edx, [esi]
0x61E05B: fld     [esp+28h+arg_8]
0x61E05F: mov     eax, [edx+1E0h]
0x61E065: fstp    [esp+28h+var_18+4]
0x61E069: add     esp, 4
0x61E06C: mov     ecx, esi
0x61E06E: call    eax
0x61E070: fsubr   [esp+24h+var_18+4]
0x61E074: fstp    [esp+24h+arg_0]
0x61E078: fldz
0x61E07A: fld     st
0x61E07C: fld     [esp+24h+arg_0]
0x61E080: fucom   st(1)
0x61E082: fnstsw  ax
0x61E084: fstp    st(1)
0x61E086: test    ah, 44h
0x61E089: jnp     short loc_61E0DC
0x61E08B: fcom    st(1)
0x61E08D: fnstsw  ax
0x61E08F: fstp    st(1)
0x61E091: test    ah, 5
0x61E094: jp      short loc_61E0B9
0x61E096: fcom    qword ptr ds:0A491E0h
0x61E09C: fnstsw  ax
0x61E09E: test    ah, 41h
0x61E0A1: jp      short loc_61E0DE
0x61E0A3: fadd    qword ptr ds:0A3D5B0h
0x61E0A9: pop     edi
0x61E0AA: pop     ebp
0x61E0AB: pop     ebx
0x61E0AC: fstp    [esp+18h+arg_0]
0x61E0B0: pop     esi
0x61E0B1: fld     [esp+14h+arg_0]
0x61E0B5: add     esp, 14h
0x61E0B8: retn
0x61E0B9: fcom    qword ptr ds:0A3D5B8h
0x61E0BF: fnstsw  ax
0x61E0C1: test    ah, 41h
0x61E0C4: jnz     short loc_61E0DE
0x61E0C6: fsubr   qword ptr ds:0A3D5B0h
0x61E0CC: pop     edi
0x61E0CD: pop     ebp
0x61E0CE: pop     ebx
0x61E0CF: fstp    [esp+18h+arg_0]
0x61E0D3: pop     esi
0x61E0D4: fld     [esp+14h+arg_0]
0x61E0D8: add     esp, 14h
0x61E0DB: retn
0x61E0DC: fstp    st(1)
0x61E0DE: pop     edi
0x61E0DF: pop     ebp
0x61E0E0: pop     ebx
0x61E0E1: pop     esi
0x61E0E2: add     esp, 14h
0x61E0E5: retn
0x61E0E6: fldz
0x61E0E8: pop     esi
0x61E0E9: add     esp, 14h
0x61E0EC: retn
