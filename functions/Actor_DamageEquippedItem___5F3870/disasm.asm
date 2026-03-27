0x5F3870: sub     esp, 18h
0x5F3873: push    esi
0x5F3874: push    edi
0x5F3875: mov     edi, [esp+20h+arg_0]
0x5F3879: mov     esi, ecx
0x5F387B: xor     cl, cl
0x5F387D: test    edi, edi
0x5F387F: jz      Actor_DamageEquippedItem?___Done
0x5F3885: fldz
0x5F3887: fld     [esp+20h+arg_4]
0x5F388B: fcom    st(1)
0x5F388D: fnstsw  ax
0x5F388F: fstp    st(1)
0x5F3891: test    ah, 41h
0x5F3894: jnz     Actor_DamageEquippedItem?___Done_
0x5F389A: mov     eax, [edi+8]
0x5F389D: fstp    [esp+20h+arg_0]
0x5F38A1: push    ebp
0x5F38A2: xor     ebp, ebp
0x5F38A4: test    eax, eax
0x5F38A6: jz      loc_5F392F
0x5F38AC: cmp     byte ptr [eax+4], 14h
0x5F38B0: jnz     short loc_5F392F
0x5F38B2: cmp     byte ptr [esp+24h+arg_8], cl
0x5F38B6: mov     ebp, eax
0x5F38B8: jnz     short loc_5F392F
0x5F38BA: mov     ecx, ebp
0x5F38BC: call    TESObjectARMO_ISHeavyArmor
0x5F38C1: cmp     al, 1
0x5F38C3: jnz     short loc_5F38EE
0x5F38C5: push    12h
0x5F38C7: mov     ecx, esi
0x5F38C9: call    Actor_GetSkillMasteryLevel
0x5F38CE: cmp     eax, 2
0x5F38D1: jl      short loc_5F38DA
0x5F38D3: mov     ecx, offset fPerkHeavyArmorJourneymanDamageMult
0x5F38D8: jmp     short loc_5F3920
0x5F38DA: push    12h
0x5F38DC: mov     ecx, esi
0x5F38DE: call    Actor_GetSkillMasteryLevel
0x5F38E3: test    eax, eax
0x5F38E5: jnz     short loc_5F392F
0x5F38E7: mov     ecx, offset fPerkHeavyArmorNoviceDamageMult
0x5F38EC: jmp     short loc_5F3920
0x5F38EE: mov     ecx, ebp
0x5F38F0: call    TESObjectARMO_ISHeavyArmor
0x5F38F5: test    al, al
0x5F38F7: jnz     short loc_5F392F
0x5F38F9: push    1Bh
0x5F38FB: mov     ecx, esi
0x5F38FD: call    Actor_GetSkillMasteryLevel
0x5F3902: cmp     eax, 2
0x5F3905: jl      short loc_5F390E
0x5F3907: mov     ecx, offset fPerkLightArmorJourneymanDamageMult
0x5F390C: jmp     short loc_5F3920
0x5F390E: push    1Bh
0x5F3910: mov     ecx, esi
0x5F3912: call    Actor_GetSkillMasteryLevel
0x5F3917: test    eax, eax
0x5F3919: jnz     short loc_5F392F
0x5F391B: mov     ecx, offset fPerkLightArmorNoviceDamageMult
0x5F3920: call    GameSetting_GetSafeFloatPointer
0x5F3925: fld     dword ptr [eax]
0x5F3927: fmul    [esp+24h+arg_4]
0x5F392B: fstp    [esp+24h+arg_0]
0x5F392F: push    0
0x5F3931: mov     ecx, edi
0x5F3933: call    ContainerEntryExtraData_GetHealth
0x5F3938: fsub    [esp+24h+arg_0]
0x5F393C: fstp    [esp+24h+arg_8]
0x5F3940: fld1
0x5F3942: fcomp   [esp+24h+arg_8]
0x5F3946: fnstsw  ax
0x5F3948: test    ah, 41h
0x5F394B: jnz     short loc_5F3953
0x5F394D: fldz
0x5F394F: fstp    [esp+24h+arg_8]
0x5F3953: cmp     byte ptr ds:0B3B908h, 0
0x5F395A: push    ebx
0x5F395B: jz      short loc_5F39A4
0x5F395D: test    ebp, ebp
0x5F395F: jz      short loc_5F39A4
0x5F3961: mov     eax, [ebp+28h]
0x5F3964: test    eax, eax
0x5F3966: mov     ebx, eax
0x5F3968: jnz     short loc_5F396F
0x5F396A: mov     ebx, offset EmptyString
0x5F396F: push    0
0x5F3971: mov     ecx, edi
0x5F3973: call    ContainerEntryExtraData_GetHealth
0x5F3978: sub     esp, 18h
0x5F397B: fstp    [esp+40h+var_30]
0x5F397F: mov     ecx, esi; this
0x5F3981: fld     [esp+40h+arg_8]
0x5F3985: fstp    qword ptr [esp+40h+var_38]
0x5F3989: fld     [esp+40h+arg_0]
0x5F398D: fstp    [esp+40h+var_40]
0x5F3990: push    ebx
0x5F3991: call    TESObjectREFR_GetName
0x5F3996: push    eax
0x5F3997: push    offset a_20sSSTakes_2f; "%.20s's %s takes %.2f points of damage "...
0x5F399C: call    Interface_ConsolePrint
0x5F39A1: add     esp, 24h
0x5F39A4: mov     eax, [edi]
0x5F39A6: mov     eax, [eax]
0x5F39A8: push    1; int
0x5F39AA: push    eax; int
0x5F39AB: lea     ecx, [esi+44h]; this
0x5F39AE: call    ExtraDataList_GetContainerChanges
0x5F39B3: fld     [esp+30h+arg_8]
0x5F39B7: push    eax; int
0x5F39B8: push    ecx
0x5F39B9: mov     ecx, edi
0x5F39BB: fstp    [esp+38h+var_38]; float
0x5F39BE: call    sub_488830
0x5F39C3: test    ebp, ebp
0x5F39C5: jz      short loc_5F39D3
0x5F39C7: mov     edx, [esi]
0x5F39C9: mov     eax, [edx+2C0h]
0x5F39CF: mov     ecx, esi
0x5F39D1: call    eax
0x5F39D3: fldz
0x5F39D5: fcomp   [esp+28h+arg_8]
0x5F39D9: fnstsw  ax
0x5F39DB: test    ah, 1
0x5F39DE: jnz     loc_5F3B31
0x5F39E4: mov     eax, [edi+8]
0x5F39E7: test    eax, eax
0x5F39E9: jz      short loc_5F3A08
0x5F39EB: cmp     byte ptr [eax+4], 21h ; '!'
0x5F39EF: jnz     short loc_5F3A08
0x5F39F1: cmp     dword ptr [esi+58h], 0
0x5F39F5: jz      short loc_5F3A08
0x5F39F7: mov     ecx, [esi+58h]
0x5F39FA: mov     edx, [ecx]
0x5F39FC: mov     eax, [edx+304h]
0x5F3A02: call    eax
0x5F3A04: test    al, al
0x5F3A06: jnz     short loc_5F3A3B
0x5F3A08: test    ebp, ebp
0x5F3A0A: jz      loc_5F3B25
0x5F3A10: push    0
0x5F3A12: push    0Dh
0x5F3A14: lea     ecx, [ebp+64h]
0x5F3A17: call    TESBipedModelForm_CoversSlot
0x5F3A1C: test    al, al
0x5F3A1E: jz      loc_5F3B25
0x5F3A24: mov     ecx, [esi+58h]
0x5F3A27: mov     edx, [ecx]
0x5F3A29: mov     eax, [edx+0F8h]
0x5F3A2F: push    1
0x5F3A31: call    eax
0x5F3A33: test    eax, eax
0x5F3A35: jz      loc_5F3B25
0x5F3A3B: cmp     esi, ds:0B333C4h
0x5F3A41: jz      loc_5F3B0D
0x5F3A47: mov     ecx, [edi+8]
0x5F3A4A: mov     edx, [ecx]
0x5F3A4C: mov     eax, [edx+78h]
0x5F3A4F: call    eax
0x5F3A51: test    al, al
0x5F3A53: jnz     loc_5F3B0D
0x5F3A59: test    ebp, ebp
0x5F3A5B: mov     edx, [esi]
0x5F3A5D: jz      short loc_5F3A76
0x5F3A5F: mov     ecx, [esi+58h]
0x5F3A62: mov     ebx, [ecx]
0x5F3A64: mov     eax, [edx+168h]
0x5F3A6A: mov     ecx, esi
0x5F3A6C: call    eax
0x5F3A6E: mov     edx, [ebx+120h]
0x5F3A74: jmp     short loc_5F3A8B
0x5F3A76: mov     eax, [esi+58h]
0x5F3A79: mov     ebx, [eax]
0x5F3A7B: mov     eax, [edx+168h]
0x5F3A81: mov     ecx, esi
0x5F3A83: call    eax
0x5F3A85: mov     edx, [ebx+118h]
0x5F3A8B: mov     ecx, [esi+58h]
0x5F3A8E: push    eax
0x5F3A8F: call    edx
0x5F3A91: mov     ebx, eax
0x5F3A93: test    ebx, ebx
0x5F3A95: jz      short loc_5F3A9F
0x5F3A97: lea     eax, [ebx+88h]
0x5F3A9D: jmp     short loc_5F3AAB
0x5F3A9F: mov     eax, [esi]
0x5F3AA1: mov     edx, [eax+174h]
0x5F3AA7: mov     ecx, esi
0x5F3AA9: call    edx
0x5F3AAB: mov     ecx, [eax]
0x5F3AAD: mov     [esp+20h+var_4], ecx
0x5F3AB1: mov     edx, [eax+4]
0x5F3AB4: mov     [esp+20h], edx
0x5F3AB8: mov     eax, [eax+8]
0x5F3ABB: lea     ecx, [esp+20h+var_C]
0x5F3ABF: push    ecx
0x5F3AC0: lea     edx, [esp+24h+var_10]
0x5F3AC4: mov     [esp+24h+arg_0], eax
0x5F3AC8: push    edx
0x5F3AC9: lea     eax, [esp+28h+var_8]
0x5F3ACD: push    eax
0x5F3ACE: lea     ecx, [ebx+64h]
0x5F3AD1: call    sub_711440
0x5F3AD6: mov     ecx, [edi]
0x5F3AD8: mov     eax, [ecx]
0x5F3ADA: mov     edi, [edi+8]
0x5F3ADD: mov     edx, [esi]
0x5F3ADF: mov     edx, [edx+2C8h]
0x5F3AE5: lea     ecx, [esp+20h+var_10]
0x5F3AE9: push    ecx
0x5F3AEA: lea     ecx, [esp+24h+var_4]
0x5F3AEE: push    ecx
0x5F3AEF: push    1
0x5F3AF1: push    eax
0x5F3AF2: push    edi
0x5F3AF3: mov     ecx, esi
0x5F3AF5: call    edx
0x5F3AF7: push    eax
0x5F3AF8: push    esi
0x5F3AF9: call    sub_4DC000
0x5F3AFE: add     esp, 8
0x5F3B01: pop     ebx
0x5F3B02: pop     ebp
0x5F3B03: pop     edi
0x5F3B04: mov     al, 1
0x5F3B06: pop     esi
0x5F3B07: add     esp, 18h
0x5F3B0A: retn    0Ch
0x5F3B0D: mov     eax, [edi]
0x5F3B0F: mov     ecx, [eax]
0x5F3B11: mov     edx, [edi+8]
0x5F3B14: push    0
0x5F3B16: push    1
0x5F3B18: push    0
0x5F3B1A: push    ecx
0x5F3B1B: push    1
0x5F3B1D: push    edx
0x5F3B1E: mov     ecx, esi
0x5F3B20: call    Actor_UnequipItem
0x5F3B25: pop     ebx
0x5F3B26: pop     ebp
0x5F3B27: pop     edi
0x5F3B28: mov     al, 1
0x5F3B2A: pop     esi
0x5F3B2B: add     esp, 18h
0x5F3B2E: retn    0Ch
0x5F3B31: pop     ebx
0x5F3B32: pop     ebp
0x5F3B33: pop     edi
0x5F3B34: xor     al, al
0x5F3B36: pop     esi
0x5F3B37: add     esp, 18h
0x5F3B3A: retn    0Ch
