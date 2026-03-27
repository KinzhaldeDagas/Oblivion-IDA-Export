0x41D320: push    esi
0x41D321: push    edi
0x41D322: mov     edi, ecx
0x41D324: mov     eax, [edi-0Ch]
0x41D327: mov     edx, [eax+18h]
0x41D32A: lea     esi, [edi-0Ch]
0x41D32D: mov     ecx, esi
0x41D32F: call    edx
0x41D331: cmp     eax, 2
0x41D334: jz      short loc_41D34A
0x41D336: mov     eax, [esi]
0x41D338: mov     edx, [eax+18h]
0x41D33B: mov     ecx, esi
0x41D33D: call    edx
0x41D33F: cmp     eax, 3
0x41D342: jz      short loc_41D34A
0x41D344: mov     esi, [esp+8+arg_0]
0x41D348: jmp     short loc_41D34C
0x41D34A: xor     esi, esi
0x41D34C: test    byte ptr [edi+1Ch], 1
0x41D350: jz      short SpellItem_EffectItemList_GetMagickaCost___AutoCalc
0x41D352: test    esi, esi
0x41D354: fild    dword ptr [edi+14h]
0x41D357: fstp    [esp+8+arg_0]
0x41D35B: jz      short SpellItem_EffectItemList_GetMagickaCost___Return
0x41D35D: push    ebx
0x41D35E: mov     ebx, [esi]
0x41D360: mov     eax, ebx
0x41D362: mov     edx, [eax+284h]
0x41D368: push    7
0x41D36A: mov     ecx, esi
0x41D36C: call    edx
0x41D36E: push    eax
0x41D36F: mov     ecx, edi
0x41D371: call    EffectItemList_GetSchoolAV
0x41D376: push    eax; int
0x41D377: mov     eax, [ebx+284h]
0x41D37D: mov     ecx, esi
0x41D37F: call    eax
0x41D381: fld     [esp+10h+arg_0]
0x41D385: push    eax; int
0x41D386: push    ecx
0x41D387: fstp    [esp+18h+var_18]; float
0x41D38A: call    Calc_SkillModifiedMagickaCost
0x41D38F: add     esp, 0Ch
0x41D392: fstp    [esp+0Ch+arg_0]
0x41D396: fld     [esp+0Ch+arg_0]
0x41D39A: pop     ebx
0x41D39B: pop     edi
0x41D39C: pop     esi
0x41D39D: retn    4
