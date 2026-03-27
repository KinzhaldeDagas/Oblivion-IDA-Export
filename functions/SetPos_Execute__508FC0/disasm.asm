0x508FC0: sub     esp, 18h
0x508FC3: mov     edx, [esp+18h+l]
0x508FC7: fldz
0x508FC9: push    ebx
0x508FCA: fstp    [esp+1Ch+var_14]
0x508FCE: push    ebp
0x508FCF: push    esi
0x508FD0: mov     esi, [esp+24h+a4]
0x508FD4: push    edi
0x508FD5: lea     eax, [esp+28h+var_14]
0x508FD9: push    eax; a4
0x508FDA: mov     eax, [esp+2Ch+arg_10]
0x508FDE: lea     ecx, [esp+2Ch+anonymous_0+3]
0x508FE2: push    ecx; a3
0x508FE3: mov     ecx, [esp+30h+arg_C]
0x508FE7: push    edx; a2
0x508FE8: mov     edx, [esp+34h+a3]
0x508FEC: push    eax; a6
0x508FED: mov     eax, [esp+38h+arg_4]
0x508FF1: push    ecx; a5
0x508FF2: mov     ecx, [esp+3Ch+a1]
0x508FF6: push    esi; a4
0x508FF7: push    edx; a3
0x508FF8: push    eax; a2
0x508FF9: push    ecx; a1
0x508FFA: call    Script_ExtractArgs
0x508FFF: add     esp, 24h
0x509002: test    al, al
0x509004: jnz     short loc_50900E
0x509006: pop     edi
0x509007: pop     esi
0x509008: pop     ebp
0x509009: pop     ebx
0x50900A: add     esp, 18h
0x50900D: retn
0x50900E: test    esi, esi
0x509010: jz      loc_509103
0x509016: mov     edx, [esi]
0x509018: mov     eax, [edx+174h]
0x50901E: mov     ecx, esi
0x509020: call    eax
0x509022: mov     edi, [eax]
0x509024: mov     ebx, [eax+4]
0x509027: mov     ebp, [eax+8]
0x50902A: movsx   eax, byte ptr [esp+28h+anonymous_0+3]
0x50902F: sub     eax, 58h ; 'X'
0x509032: mov     [esp+28h+a2], edi
0x509036: mov     [esp+28h+var_8], ebx
0x50903A: mov     [esp+28h+var_4], ebp
0x50903E: jz      short loc_509066
0x509040: sub     eax, 1
0x509043: jz      short loc_509058
0x509045: sub     eax, 1
0x509048: jnz     short loc_509072
0x50904A: fld     [esp+28h+var_14]
0x50904E: fstp    [esp+28h+var_4]
0x509052: mov     ebp, [esp+28h+var_4]
0x509056: jmp     short loc_509072
0x509058: fld     [esp+28h+var_14]
0x50905C: fstp    [esp+28h+var_8]
0x509060: mov     ebx, [esp+28h+var_8]
0x509064: jmp     short loc_509072
0x509066: fld     [esp+28h+var_14]
0x50906A: fstp    [esp+28h+a2]
0x50906E: mov     edi, [esp+28h+a2]
0x509072: sub     esp, 0Ch
0x509075: mov     eax, esp
0x509077: mov     [eax], edi
0x509079: mov     [eax+4], ebx
0x50907C: mov     ecx, esi; this
0x50907E: mov     [eax+8], ebp
0x509081: call    TESObjectREFR_SetPosition
0x509086: push    0; int
0x509088: push    offset ??_R0?AVMobileObject@@@8; struct TypeDescriptor *
0x50908D: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x509092: push    0; int
0x509094: push    esi; void *
0x509095: call    OblivionDynamicCast
0x50909A: add     esp, 14h
0x50909D: test    eax, eax
0x50909F: jz      short loc_5090CE
0x5090A1: mov     ecx, eax; this
0x5090A3: call    MobileObject_GetCharProxy
0x5090A8: test    eax, eax
0x5090AA: mov     [esp+28h+var_10], eax
0x5090AE: jz      short loc_5090CE
0x5090B0: lea     ecx, [eax+1E0h]
0x5090B6: call    sub_88D370
0x5090BB: cmp     eax, 4
0x5090BE: jz      short loc_5090CE
0x5090C0: lea     ecx, [esp+28h+a2]
0x5090C4: push    ecx; a2
0x5090C5: mov     ecx, [esp+2Ch+var_10]; this
0x5090C9: call    sub_452A10
0x5090CE: mov     edx, [esi]
0x5090D0: mov     eax, [edx+154h]
0x5090D6: mov     ecx, esi
0x5090D8: call    eax
0x5090DA: mov     esi, eax
0x5090DC: test    esi, esi
0x5090DE: jz      short loc_509103
0x5090E0: mov     [esi+54h], edi
0x5090E3: push    1
0x5090E5: mov     [esi+58h], ebx
0x5090E8: push    esi
0x5090E9: mov     [esi+5Ch], ebp
0x5090EC: call    sub_897A20
0x5090F1: fldz
0x5090F3: add     esp, 8
0x5090F6: push    0; a3
0x5090F8: push    ecx
0x5090F9: mov     ecx, esi; this
0x5090FB: fstp    [esp+30h+var_30]; a2
0x5090FE: call    NiAVObject_UpdateNiAVObject
0x509103: pop     edi
0x509104: pop     esi
0x509105: pop     ebp
0x509106: mov     al, 1
0x509108: pop     ebx
0x509109: add     esp, 18h
0x50910C: retn
