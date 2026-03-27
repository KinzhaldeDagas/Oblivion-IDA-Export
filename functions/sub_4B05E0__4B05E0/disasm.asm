0x4B05E0: sub     esp, 8
0x4B05E3: mov     eax, [esp+8+arg_8]
0x4B05E7: push    ebx
0x4B05E8: push    esi
0x4B05E9: mov     esi, ecx
0x4B05EB: mov     ecx, [esp+10h+arg_C]
0x4B05EF: mov     dword ptr [eax], 0
0x4B05F5: mov     word ptr [ecx], 0
0x4B05FA: lea     ecx, [esi+24h]
0x4B05FD: mov     [esp+10h+var_4], ecx
0x4B0601: call    TESLeveledList_GetChanceNone
0x4B0606: mov     bl, al
0x4B0608: test    bl, bl
0x4B060A: jbe     short loc_4B0639
0x4B060C: push    0; Seed
0x4B060E: call    GetRandomLargeInteger?
0x4B0613: mov     ecx, eax
0x4B0615: mov     eax, 51EB851Fh
0x4B061A: imul    ecx
0x4B061C: sar     edx, 5
0x4B061F: mov     eax, edx
0x4B0621: shr     eax, 1Fh
0x4B0624: add     eax, edx
0x4B0626: imul    eax, 64h ; 'd'
0x4B0629: movzx   edx, bl
0x4B062C: sub     ecx, eax
0x4B062E: add     esp, 4
0x4B0631: cmp     ecx, edx
0x4B0633: jl      loc_4B075F
0x4B0639: push    ebp
0x4B063A: push    edi
0x4B063B: xor     ebx, ebx
0x4B063D: lea     edi, [esi+28h]
0x4B0640: test    edi, edi
0x4B0642: mov     ebp, 1
0x4B0647: mov     [esp+18h+var_8], ebx
0x4B064B: jz      loc_4B075D
0x4B0651: mov     esi, [edi]
0x4B0653: test    esi, esi
0x4B0655: jz      short loc_4B06C4
0x4B0657: mov     eax, [esi+4]
0x4B065A: push    0; int
0x4B065C: push    offset ??_R0?AVMagicItem@@@8; struct TypeDescriptor *
0x4B0661: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B0666: push    0; int
0x4B0668: push    eax; void *
0x4B0669: call    OblivionDynamicCast
0x4B066E: movzx   esi, word ptr [esi]
0x4B0671: movzx   ecx, word ptr [esp+2Ch+arg_4]
0x4B0676: add     esp, 14h
0x4B0679: cmp     esi, ecx
0x4B067B: jg      short loc_4B06C4
0x4B067D: test    eax, eax
0x4B067F: jz      short loc_4B0698
0x4B0681: lea     ecx, [eax+0Ch]
0x4B0684: call    EffectItemList_GetSchoolAV
0x4B0689: push    eax
0x4B068A: call    Magic_GetSchoolFromSkillAV
0x4B068F: add     esp, 4
0x4B0692: cmp     eax, [esp+18h+arg_0]
0x4B0696: jnz     short loc_4B06C4
0x4B0698: cmp     esi, ebx
0x4B069A: jle     short loc_4B06BA
0x4B069C: test    ebx, ebx
0x4B069E: jz      short loc_4B06AD
0x4B06A0: mov     ecx, [esp+18h+var_4]
0x4B06A4: call    TESLeveledList_GetCalcAllLevels
0x4B06A9: test    al, al
0x4B06AB: jnz     short loc_4B06BA
0x4B06AD: mov     ebp, 1
0x4B06B2: mov     [esp+18h+var_8], edi
0x4B06B6: mov     ebx, esi
0x4B06B8: jmp     short loc_4B06BD
0x4B06BA: add     ebp, 1
0x4B06BD: mov     edi, [edi+4]
0x4B06C0: test    edi, edi
0x4B06C2: jnz     short loc_4B0651
0x4B06C4: cmp     [esp+18h+var_8], 0
0x4B06C9: jz      loc_4B075D
0x4B06CF: push    0; Seed
0x4B06D1: call    GetRandomLargeInteger?
0x4B06D6: cdq
0x4B06D7: idiv    ebp
0x4B06D9: mov     eax, [esp+1Ch+var_8]
0x4B06DD: xor     ebx, ebx
0x4B06DF: add     esp, 4
0x4B06E2: cmp     edx, ebx
0x4B06E4: jz      short loc_4B06F4
0x4B06E6: mov     eax, [eax+4]
0x4B06E9: sub     edx, 1
0x4B06EC: cmp     eax, ebx
0x4B06EE: jz      short loc_4B075D
0x4B06F0: cmp     edx, ebx
0x4B06F2: jnz     short loc_4B06E6
0x4B06F4: mov     eax, [eax]
0x4B06F6: mov     esi, [eax+4]
0x4B06F9: movzx   edi, word ptr [eax+8]
0x4B06FD: push    ebx; int
0x4B06FE: push    offset ??_R0?AVTESLevSpell@@@8; struct TypeDescriptor *
0x4B0703: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B0708: push    ebx; int
0x4B0709: push    esi; void *
0x4B070A: call    OblivionDynamicCast
0x4B070F: add     esp, 14h
0x4B0712: cmp     eax, ebx
0x4B0714: jz      short loc_4B0750
0x4B0716: mov     ecx, [esp+18h+arg_10]
0x4B071A: test    cl, cl
0x4B071C: jz      short loc_4B0750
0x4B071E: push    ecx
0x4B071F: lea     edx, [esp+1Ch+var_8]
0x4B0723: push    edx
0x4B0724: mov     edx, [esp+20h+arg_4]
0x4B0728: lea     ecx, [esp+20h+arg_10]
0x4B072C: push    ecx
0x4B072D: mov     ecx, [esp+24h+arg_0]
0x4B0731: push    edx
0x4B0732: push    ecx
0x4B0733: mov     ecx, eax
0x4B0735: mov     [esp+2Ch+arg_10], ebx
0x4B0739: mov     [esp+2Ch+var_8], ebx
0x4B073D: call    sub_4B05E0
0x4B0742: mov     edx, [esp+18h+var_8]
0x4B0746: mov     esi, [esp+18h+arg_10]
0x4B074A: imul    edx, edi
0x4B074D: movzx   edi, dx
0x4B0750: mov     eax, [esp+18h+arg_8]
0x4B0754: mov     ecx, [esp+18h+arg_C]
0x4B0758: mov     [eax], esi
0x4B075A: mov     [ecx], di
0x4B075D: pop     edi
0x4B075E: pop     ebp
0x4B075F: pop     esi
0x4B0760: pop     ebx
0x4B0761: add     esp, 8
0x4B0764: retn    14h
