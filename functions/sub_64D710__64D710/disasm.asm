0x64D710: sub     esp, 28h
0x64D713: push    ebx
0x64D714: push    ebp
0x64D715: push    esi
0x64D716: push    edi
0x64D717: push    0; int
0x64D719: push    offset ??_R0?AVFleePackage@@@8; struct TypeDescriptor *
0x64D71E: mov     esi, ecx
0x64D720: mov     eax, [esi]
0x64D722: mov     edx, [eax+184h]
0x64D728: push    offset ??_R0?AVTESPackage@@@8; struct _s_RTTICompleteObjectLocator *
0x64D72D: push    0; int
0x64D72F: call    edx
0x64D731: push    eax; void *
0x64D732: call    OblivionDynamicCast
0x64D737: mov     edi, eax
0x64D739: mov     eax, [esi]
0x64D73B: mov     edx, [eax+50h]
0x64D73E: xor     ebx, ebx
0x64D740: add     esp, 14h
0x64D743: mov     ecx, esi
0x64D745: mov     [esp+38h+var_25], bl
0x64D749: call    edx
0x64D74B: test    eax, eax
0x64D74D: mov     ebp, [esp+38h+arg_0]
0x64D751: jz      short loc_64D7A8
0x64D753: mov     eax, [esi]
0x64D755: mov     edx, [eax+50h]
0x64D758: mov     ecx, esi
0x64D75A: call    edx
0x64D75C: mov     ecx, eax
0x64D75E: call    sub_419CF0
0x64D763: test    al, al
0x64D765: jz      loc_64D834
0x64D76B: test    ebp, ebp
0x64D76D: jz      short loc_64D774
0x64D76F: lea     eax, [ebp+68h]
0x64D772: jmp     short loc_64D776
0x64D774: xor     eax, eax
0x64D776: push    0
0x64D778: push    eax
0x64D779: mov     eax, [esi]
0x64D77B: mov     edx, [eax+50h]
0x64D77E: mov     ecx, esi
0x64D780: call    edx
0x64D782: push    eax
0x64D783: lea     ecx, [ebp+5Ch]
0x64D786: call    MagicCaster_CastMagicItem
0x64D78B: mov     eax, [esi]
0x64D78D: mov     edx, [eax+50h]
0x64D790: push    0
0x64D792: mov     ecx, esi
0x64D794: call    edx
0x64D796: mov     ecx, eax
0x64D798: call    sub_419F10
0x64D79D: mov     eax, [esi]
0x64D79F: mov     edx, [eax+54h]
0x64D7A2: push    0
0x64D7A4: mov     ecx, esi
0x64D7A6: call    edx
0x64D7A8: test    edi, edi
0x64D7AA: jz      loc_64DB13
0x64D7B0: mov     ecx, edi
0x64D7B2: call    sub_626DE0
0x64D7B7: mov     ecx, [edi+28h]
0x64D7BA: test    ecx, ecx
0x64D7BC: jz      short loc_64D7D1
0x64D7BE: call    sub_569E60
0x64D7C3: test    eax, eax
0x64D7C5: jz      short loc_64D7D1
0x64D7C7: mov     ecx, [edi+28h]
0x64D7CA: call    sub_569E60
0x64D7CF: mov     ebx, eax
0x64D7D1: cmp     byte ptr [edi+65h], 0
0x64D7D5: jz      short loc_64D7F6
0x64D7D7: mov     eax, [ebp+0]
0x64D7DA: mov     edx, [eax+18Ch]
0x64D7E0: mov     ecx, ebp
0x64D7E2: call    edx
0x64D7E4: cmp     eax, 4
0x64D7E7: jz      short loc_64D7F6
0x64D7E9: mov     eax, [esi]
0x64D7EB: mov     edx, [eax+560h]
0x64D7F1: push    ebp
0x64D7F2: mov     ecx, esi
0x64D7F4: call    edx
0x64D7F6: test    ebx, ebx
0x64D7F8: jz      loc_64DB13
0x64D7FE: fld     dword ptr [edi+4Ch]
0x64D801: push    ebp
0x64D802: mov     ecx, edi
0x64D804: fstp    [esp+3Ch+var_1C]
0x64D808: call    sub_628140
0x64D80D: test    eax, eax
0x64D80F: mov     [esp+38h+var_24], eax
0x64D813: jnz     short loc_64D868
0x64D815: fld     dword ptr [edi+4Ch]
0x64D818: mov     byte ptr [edi+50h], 1
0x64D81C: fadd    dword ptr ds:0B33E9Ch
0x64D822: fstp    dword ptr [edi+4Ch]
0x64D825: fld     [esp+38h+var_1C]
0x64D829: fld     dword ptr ds:0B36C58h
0x64D82F: jmp     loc_64DAFB
0x64D834: mov     eax, [esi]
0x64D836: mov     edx, [eax+50h]
0x64D839: mov     ecx, esi
0x64D83B: call    edx
0x64D83D: mov     ecx, eax
0x64D83F: call    sub_419E50
0x64D844: test    al, al
0x64D846: jnz     loc_64DB13
0x64D84C: mov     eax, [esi]
0x64D84E: mov     edx, [eax+50h]
0x64D851: push    0
0x64D853: mov     ecx, esi
0x64D855: call    edx
0x64D857: mov     ecx, eax
0x64D859: call    sub_41A610
0x64D85E: pop     edi
0x64D85F: pop     esi
0x64D860: pop     ebp
0x64D861: pop     ebx
0x64D862: add     esp, 28h
0x64D865: retn    4
0x64D868: mov     ecx, ebp; this
0x64D86A: call    TESObjectREFR_GetParentCell
0x64D86F: mov     ebx, eax
0x64D871: test    ebx, ebx
0x64D873: mov     [esp+38h+var_20], ebx
0x64D877: jz      loc_64DB13
0x64D87D: fld     dword ptr [edi+4Ch]
0x64D880: mov     eax, [esp+38h+var_24]
0x64D884: fsub    dword ptr ds:0B33E9Ch
0x64D88A: push    0
0x64D88C: push    eax
0x64D88D: mov     ecx, ebp
0x64D88F: fstp    dword ptr [edi+4Ch]
0x64D892: call    TesObjectREF_GetDistance
0x64D897: mov     ecx, [edi+40h]
0x64D89A: fstp    dword ptr [esp+38h+var_18]
0x64D89E: mov     edx, [edi+44h]
0x64D8A1: mov     eax, [edi+48h]
0x64D8A4: mov     [esp+38h+var_C], ecx
0x64D8A8: mov     ecx, ebx; this
0x64D8AA: mov     [esp+38h+var_8], edx
0x64D8AE: mov     [esp+38h+var_4], eax
0x64D8B2: call    TESObjectCELL_IsInterior
0x64D8B7: test    al, al
0x64D8B9: jz      short loc_64D8CC
0x64D8BB: mov     ecx, offset flt_B37030
0x64D8C0: call    GameSetting_GetSafeFloatPointer
0x64D8C5: mov     [esp+38h+var_25], 1
0x64D8CA: jmp     short loc_64D8D6
0x64D8CC: mov     ecx, offset flt_B37028
0x64D8D1: call    GameSetting_GetSafeFloatPointer
0x64D8D6: fld     dword ptr [eax]
0x64D8D8: fstp    [esp+38h+arg_0]
0x64D8DC: fld     dword ptr [esp+38h+var_18]
0x64D8E0: fld     [esp+38h+arg_0]
0x64D8E4: fcompp
0x64D8E6: fnstsw  ax
0x64D8E8: test    ah, 41h
0x64D8EB: jnz     loc_64DA23
0x64D8F1: cmp     byte ptr [esi+0D0h], 0
0x64D8F8: jz      loc_64DA30
0x64D8FE: mov     edx, [ebp+0]
0x64D901: mov     eax, [edx+250h]
0x64D907: mov     ecx, ebp
0x64D909: call    eax
0x64D90B: fcomp   dword ptr ds:0A2FAA8h
0x64D911: fnstsw  ax
0x64D913: test    ah, 44h
0x64D916: jp      short loc_64D920
0x64D918: push    ebp
0x64D919: mov     ecx, edi
0x64D91B: call    sub_627FF0
0x64D920: fldz
0x64D922: mov     ebx, [edi+60h]
0x64D925: fcomp   dword ptr [esi+88h]
0x64D92B: mov     byte ptr [esp+38h+arg_0], 0
0x64D930: fnstsw  ax
0x64D932: test    ah, 1
0x64D935: jnz     short loc_64D93E
0x64D937: mov     byte ptr [esp+38h+arg_0], 1
0x64D93C: jmp     short loc_64D950
0x64D93E: fld     dword ptr [esi+88h]
0x64D944: fsub    dword ptr ds:0B33E9Ch
0x64D94A: fstp    dword ptr [esi+88h]
0x64D950: test    ebx, ebx
0x64D952: jnz     short loc_64D9BC
0x64D954: cmp     [esp+38h+var_25], bl
0x64D958: mov     ecx, [esp+38h+arg_0]
0x64D95C: mov     edx, [esp+38h+var_24]
0x64D960: push    ecx; float
0x64D961: push    edx; int
0x64D962: lea     eax, [esp+40h+var_18]
0x64D966: push    ebp; int
0x64D967: mov     ecx, edi
0x64D969: push    eax; int
0x64D96A: jz      short loc_64D973
0x64D96C: call    sub_627680
0x64D971: jmp     short loc_64D978
0x64D973: call    sub_6279A0
0x64D978: mov     ecx, [eax]
0x64D97A: mov     ebx, [esi]
0x64D97C: mov     [esp+38h+var_C], ecx
0x64D980: mov     edx, [eax+4]
0x64D983: mov     [esp+38h+var_8], edx
0x64D987: mov     eax, [eax+8]
0x64D98A: mov     ecx, ebp; this
0x64D98C: mov     [esp+38h+var_4], eax
0x64D990: call    TESObjectREFR_GetWorldSpace
0x64D995: mov     ecx, [esp+38h+var_20]
0x64D999: mov     edx, [esp+38h+var_C]
0x64D99D: push    eax
0x64D99E: push    ecx
0x64D99F: mov     ecx, [esp+40h+var_8]
0x64D9A3: sub     esp, 0Ch
0x64D9A6: mov     eax, esp
0x64D9A8: mov     [eax], edx
0x64D9AA: mov     edx, [esp+4Ch+var_4]
0x64D9AE: mov     [eax+4], ecx
0x64D9B1: mov     [eax+8], edx
0x64D9B4: mov     eax, [ebx+3DCh]
0x64D9BA: jmp     short loc_64DA05
0x64D9BC: mov     ecx, [esi]
0x64D9BE: mov     edx, [ebx]
0x64D9C0: mov     eax, [edx+174h]
0x64D9C6: mov     dword ptr [esp+38h+var_18], ecx
0x64D9CA: mov     ecx, ebx
0x64D9CC: call    eax
0x64D9CE: mov     ecx, ebx; this
0x64D9D0: mov     [esp+38h+arg_0], eax
0x64D9D4: call    TESObjectREFR_GetWorldSpace
0x64D9D9: push    eax
0x64D9DA: mov     ecx, ebx; this
0x64D9DC: call    TESObjectREFR_GetParentCell
0x64D9E1: mov     ecx, [esp+3Ch+arg_0]
0x64D9E5: mov     edx, [ecx]
0x64D9E7: push    eax
0x64D9E8: sub     esp, 0Ch
0x64D9EB: mov     eax, esp
0x64D9ED: mov     [eax], edx
0x64D9EF: mov     edx, [ecx+4]
0x64D9F2: mov     ecx, [ecx+8]
0x64D9F5: mov     [eax+4], edx
0x64D9F8: mov     edx, dword ptr [esp+4Ch+var_18]
0x64D9FC: mov     [eax+8], ecx
0x64D9FF: mov     eax, [edx+3DCh]
0x64DA05: push    ebp
0x64DA06: mov     ecx, esi
0x64DA08: call    eax
0x64DA0A: test    al, al
0x64DA0C: jz      loc_64DB13
0x64DA12: fld     dword ptr [edi+4Ch]
0x64DA15: mov     ebx, [esp+38h+var_20]
0x64DA19: fsub    dword ptr [edi+4Ch]
0x64DA1C: mov     byte ptr [edi+50h], 0
0x64DA20: fstp    dword ptr [edi+4Ch]
0x64DA23: cmp     byte ptr [esi+0D0h], 0
0x64DA2A: jnz     loc_64DADB
0x64DA30: push    3Ah ; ':'; a1
0x64DA32: call    TESForm_LookupByFormID
0x64DA37: add     esp, 4
0x64DA3A: mov     ecx, offset TimeGlobals
0x64DA3F: mov     edi, eax
0x64DA41: call    TimeGlobals_GetGameHour
0x64DA46: fstp    [esp+38h+arg_0]
0x64DA4A: fld     [esp+38h+arg_0]
0x64DA4E: mov     ecx, ebp; this
0x64DA50: fstp    [esp+38h+var_18]
0x64DA54: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x64DA59: fcomp   [esp+38h+var_18]
0x64DA5D: fnstsw  ax
0x64DA5F: test    ah, 41h
0x64DA62: jnz     short loc_64DA72
0x64DA64: fld     [esp+38h+arg_0]
0x64DA68: fadd    qword ptr ds:0A2F920h
0x64DA6E: fstp    [esp+38h+arg_0]
0x64DA72: fld     [esp+38h+arg_0]
0x64DA76: mov     ecx, ebp; this
0x64DA78: fstp    [esp+38h+var_18]
0x64DA7C: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x64DA81: fsubr   [esp+38h+var_18]
0x64DA85: sub     esp, 8
0x64DA88: mov     ecx, ebp; this
0x64DA8A: fstp    dword ptr [esp+40h+var_18]
0x64DA8E: fld     dword ptr [edi+24h]
0x64DA91: mov     edi, [esi]
0x64DA93: fstp    [esp+40h+arg_0]
0x64DA97: fld     dword ptr ds:0A30634h
0x64DA9D: fstp    [esp+40h+var_3C]
0x64DAA1: fld     [esp+40h+arg_0]
0x64DAA5: fdivr   qword ptr ds:0A2F938h
0x64DAAB: fmul    dword ptr [esp+40h+var_18]
0x64DAAF: fstp    [esp+40h+arg_0]
0x64DAB3: fld     [esp+40h+arg_0]
0x64DAB7: fstp    [esp+40h+var_40]
0x64DABA: call    TESObjectREFR_GetWorldSpace
0x64DABF: mov     edx, [edi+418h]
0x64DAC5: push    eax
0x64DAC6: push    ebx
0x64DAC7: lea     ecx, [esp+48h+var_C]
0x64DACB: push    ecx
0x64DACC: push    ebp
0x64DACD: mov     ecx, esi
0x64DACF: call    edx
0x64DAD1: pop     edi
0x64DAD2: pop     esi
0x64DAD3: pop     ebp
0x64DAD4: pop     ebx
0x64DAD5: add     esp, 28h
0x64DAD8: retn    4
0x64DADB: fld     dword ptr [edi+4Ch]
0x64DADE: mov     byte ptr [edi+50h], 1
0x64DAE2: fadd    dword ptr ds:0B33E9Ch
0x64DAE8: mov     ecx, offset flt_B36C58
0x64DAED: fstp    dword ptr [edi+4Ch]
0x64DAF0: call    GameSetting_GetSafeFloatPointer
0x64DAF5: fld     [esp+38h+var_1C]
0x64DAF9: fld     dword ptr [eax]
0x64DAFB: fcompp
0x64DAFD: fnstsw  ax
0x64DAFF: test    ah, 41h
0x64DB02: jp      short loc_64DB13
0x64DB04: mov     eax, [esi]
0x64DB06: mov     edx, [eax+188h]
0x64DB0C: push    1
0x64DB0E: push    ebp
0x64DB0F: mov     ecx, esi
0x64DB11: call    edx
0x64DB13: pop     edi
0x64DB14: pop     esi
0x64DB15: pop     ebp
0x64DB16: pop     ebx
0x64DB17: add     esp, 28h
0x64DB1A: retn    4
