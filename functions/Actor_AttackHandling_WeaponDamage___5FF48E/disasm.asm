0x5FF48E: mov     ebp, 1Ch
0x5FF493: mov     [esp+arg_60], ebp
0x5FF497: jmp     short loc_5FF4A8
0x5FF499: mov     ecx, [esp+arg_28]
0x5FF49D: call    TESObjectWEAP_GetWeaponSkillAV
0x5FF4A2: mov     ebp, eax
0x5FF4A4: mov     [esp+arg_60], eax
0x5FF4A8: mov     eax, [edi]
0x5FF4AA: mov     edx, [eax+170h]
0x5FF4B0: mov     ecx, edi
0x5FF4B2: call    edx
0x5FF4B4: cmp     byte ptr [eax+4], 24h ; '$'
0x5FF4B8: jz      short loc_5FF4F1
0x5FF4BA: mov     ecx, edi
0x5FF4BC: call    Actor_IsSneaking
0x5FF4C1: test    al, al
0x5FF4C3: jnz     short loc_5FF4F1
0x5FF4C5: cmp     [esp+arg_1E0], al
0x5FF4CC: jz      short loc_5FF4EB
0x5FF4CE: mov     eax, [esp+arg_4C]
0x5FF4D2: mov     edx, [edi]
0x5FF4D4: push    eax
0x5FF4D5: mov     eax, [edx+284h]
0x5FF4DB: push    ebp
0x5FF4DC: mov     ecx, edi
0x5FF4DE: call    eax
0x5FF4E0: push    eax
0x5FF4E1: call    Calc_PowerAttackBonus
0x5FF4E6: add     esp, 8
0x5FF4E9: jmp     short loc_5FF4ED
0x5FF4EB: fld1
0x5FF4ED: fstp    [esp+arg_30]
0x5FF4F1: cmp     [esp+arg_20], 0
0x5FF4F6: jz      short loc_5FF503
0x5FF4F8: mov     ecx, [esp+arg_20]
0x5FF4FC: call    sub_4B9F60
0x5FF501: jmp     short loc_5FF515
0x5FF503: fld     [esp+arg_30]
0x5FF507: push    ecx
0x5FF508: mov     ecx, [esp+4+arg_2C]
0x5FF50C: fstp    [esp+4+var_4]
0x5FF50F: push    edi
0x5FF510: call    EquippedWeaponData_GetDamage
0x5FF515: fstp    [esp+arg_14]
