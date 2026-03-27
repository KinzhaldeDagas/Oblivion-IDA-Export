0x5E52F5: mov     eax, [esp+arg_10]
0x5E52F9: push    0; int
0x5E52FB: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5E5300: push    offset ??_R0?AVMagicCaster@@@8; struct _s_RTTICompleteObjectLocator *
0x5E5305: push    0; int
0x5E5307: push    eax; void *
0x5E5308: call    OblivionDynamicCast
0x5E530D: mov     esi, eax
0x5E530F: add     esp, 14h
0x5E5312: add     edi, 0FFFFFF98h
0x5E5315: test    esi, esi
0x5E5317: jz      short loc_5E533B
0x5E5319: mov     ecx, [ebp+0Ch]
0x5E531C: mov     ebp, [esi]
0x5E531E: call    EffectItem_GetSchool
0x5E5323: push    eax
0x5E5324: call    Magic_GetSkillAVFromSchool
0x5E5329: mov     edx, [ebp+284h]
0x5E532F: add     esp, 4
0x5E5332: push    eax
0x5E5333: mov     ecx, esi
0x5E5335: call    edx
0x5E5337: mov     ebp, eax
0x5E5339: jmp     short Actor_MagicTarget_CalcResFactor___GetTargetMagicItemResistance
0x5E533B: mov     ebp, 64h ; 'd'
