0x5FCAB0: push    0FFFFFFFFh
0x5FCAB2: push    offset Actor_ProcessAction_SEH
0x5FCAB7: mov     eax, large fs:0
0x5FCABD: push    eax
0x5FCABE: sub     esp, 54h
0x5FCAC1: push    ebx
0x5FCAC2: push    ebp
0x5FCAC3: push    esi
0x5FCAC4: push    edi
0x5FCAC5: mov     eax, ds:0B30AACh
0x5FCACA: xor     eax, esp
0x5FCACC: push    eax
0x5FCACD: lea     eax, [esp+74h+var_C]
0x5FCAD1: mov     large fs:0, eax
0x5FCAD7: mov     esi, ecx
0x5FCAD9: mov     eax, [esi]
0x5FCADB: mov     edx, [eax+198h]
0x5FCAE1: xor     ebx, ebx
0x5FCAE3: push    ebx
0x5FCAE4: call    edx
0x5FCAE6: test    al, al
0x5FCAE8: jnz     Actor_ProcessAction___Done
0x5FCAEE: mov     eax, ds:0B333C4h
0x5FCAF3: cmp     esi, eax
0x5FCAF5: jnz     short loc_5FCB03
0x5FCAF7: cmp     [eax+588h], bl
0x5FCAFD: jz      Actor_ProcessAction___Done
0x5FCB03: mov     eax, [esi]
0x5FCB05: mov     edx, [eax+164h]
0x5FCB0B: mov     ecx, esi
0x5FCB0D: call    edx
0x5FCB0F: mov     edi, eax
0x5FCB11: mov     ecx, esi; this
0x5FCB13: mov     [esp+74h+var_60], edi
0x5FCB17: call    MobileObject_GetCharProxy
0x5FCB1C: cmp     edi, ebx
0x5FCB1E: mov     dword ptr [esp+74h+var_28], eax
0x5FCB22: jz      Actor_ProcessAction___Done
0x5FCB28: cmp     [esi+58h], ebx
0x5FCB2B: jz      Actor_ProcessAction___Done
0x5FCB31: cmp     eax, ebx
0x5FCB33: jz      Actor_ProcessAction___Done
0x5FCB39: mov     ecx, [esi+58h]
0x5FCB3C: mov     eax, [ecx]
0x5FCB3E: mov     edx, [eax+8]
0x5FCB41: call    edx
0x5FCB43: test    eax, eax
0x5FCB45: jnz     short loc_5FCB4F
0x5FCB47: mov     ecx, [esi+58h]
0x5FCB4A: call    sub_633460
0x5FCB4F: mov     eax, [esi]
0x5FCB51: mov     edx, [eax+388h]
0x5FCB57: mov     ecx, esi
0x5FCB59: call    edx
0x5FCB5B: cmp     eax, ds:0B333C4h
0x5FCB61: jnz     short loc_5FCB77
0x5FCB63: fld     dword ptr ds:0B14E58h
0x5FCB69: fstp    [esp+74h+arg_0]
0x5FCB6D: fld     dword ptr ds:0B14E5Ch
0x5FCB73: fstp    [esp+74h+arg_4]
0x5FCB77: fld1
0x5FCB79: push    ebx
0x5FCB7A: fstp    [esp+78h+var_50]
0x5FCB7E: mov     ecx, edi
0x5FCB80: fldz
0x5FCB82: mov     [esp+78h+var_5C], ebx
0x5FCB86: fstp    [esp+78h+var_54]
0x5FCB8A: mov     [esp+78h+var_4C], ebx
0x5FCB8E: mov     dword ptr [esp+78h+var_48+4], ebx
0x5FCB92: mov     [esp+78h+var_58], 0FFFFFFFFh
0x5FCB9A: call    sub_4706E0
0x5FCB9F: mov     ebp, eax
0x5FCBA1: mov     eax, [esi]
0x5FCBA3: mov     edx, [eax+168h]
0x5FCBA9: mov     ecx, esi
0x5FCBAB: mov     [esp+74h+var_3C], ebp
0x5FCBAF: call    edx
0x5FCBB1: mov     ecx, esi
0x5FCBB3: mov     edi, eax
0x5FCBB5: call    Actor_GetCurrentAction
0x5FCBBA: cmp     eax, 0FFFFFFFFh
0x5FCBBD: jz      Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FCBC3: mov     ecx, [esi+58h]
0x5FCBC6: mov     eax, [ecx]
0x5FCBC8: mov     edx, [eax+2D4h]
0x5FCBCE: call    edx
0x5FCBD0: test    eax, eax
0x5FCBD2: jz      loc_5FD8B3
0x5FCBD8: mov     ecx, [esi+58h]
0x5FCBDB: mov     eax, [ecx]
0x5FCBDD: mov     edx, [eax+2D4h]
0x5FCBE3: call    edx
0x5FCBE5: cmp     [eax+44h], ebx
0x5FCBE8: jz      loc_5FD8B3
0x5FCBEE: mov     ecx, esi
0x5FCBF0: call    Actor_GetCurrentAction
0x5FCBF5: cmp     eax, 0Ah; switch 11 cases
0x5FCBF8: ja      Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FCBFE: jmp     ds:jpt_5FCBFE[eax*4]; switch jump
0x5FCC05: mov     ecx, [esi+58h]; jumptable 005FCBFE case 2
0x5FCC08: mov     eax, [ecx]
0x5FCC0A: mov     edx, [eax+2D4h]
0x5FCC10: call    edx
0x5FCC12: mov     ecx, [eax+68h]
0x5FCC15: call    TESAnimGroup_GetAnimationGroup
0x5FCC1A: lea     eax, [eax+eax*8]
0x5FCC1D: mov     eax, ds:0B102E8h[eax*4]
0x5FCC24: sub     eax, 1
0x5FCC27: jz      Actor_ProcessAction___Attack_Cast
0x5FCC2D: sub     eax, 2
0x5FCC30: jnz     Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FCC36: mov     ecx, [esp+74h+var_60]
0x5FCC3A: push    3
0x5FCC3C: call    ActorAnimData_GetSomethingFromField8Value
0x5FCC41: cmp     eax, 1
0x5FCC44: jnz     Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FCC4A: mov     ecx, [esp+74h+var_60]
0x5FCC4E: push    3
0x5FCC50: call    ActorAnimData_GetAnimGroupFromField8Value
0x5FCC55: push    eax
0x5FCC56: call    sub_51AA00
0x5FCC5B: lea     ecx, [eax+eax*8]
0x5FCC5E: mov     eax, ds:0B102ECh[ecx*4]
0x5FCC65: add     esp, 4
0x5FCC68: sub     eax, 4
0x5FCC6B: jz      Actor_ProcessAction___Attack_CastEnchantment?
0x5FCC71: sub     eax, 1
0x5FCC74: jz      loc_5FCD49
0x5FCC7A: sub     eax, 1
0x5FCC7D: jnz     Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FCC83: mov     edx, [esi]
0x5FCC85: mov     eax, [edx+0ECh]
0x5FCC8B: mov     ecx, esi
0x5FCC8D: call    eax
0x5FCC8F: fstp    [esp+74h+var_28+4]
0x5FCC93: mov     ecx, offset fCombatDistance
0x5FCC98: call    GameSetting_GetSafeFloatPointer
0x5FCC9D: fld     dword ptr [eax]
0x5FCC9F: fmul    [esp+74h+var_28+4]
0x5FCCA3: push    ecx
0x5FCCA4: fstp    dword ptr [esp+78h+var_30+4]
0x5FCCA8: fld     dword ptr [esp+78h+var_30+4]
0x5FCCAC: fstp    [esp+78h+duration]
0x5FCCAF: push    esi
0x5FCCB0: call    GetActorWithinReach??
0x5FCCB5: mov     edi, eax
0x5FCCB7: add     esp, 8
0x5FCCBA: test    edi, edi
0x5FCCBC: jz      short loc_5FCD25
0x5FCCBE: push    edi
0x5FCCBF: mov     ecx, esi
0x5FCCC1: call    sub_5FC2B0
0x5FCCC6: mov     ecx, edi
0x5FCCC8: call    sub_5F4FD0
0x5FCCCD: mov     ecx, [esi+58h]
0x5FCCD0: mov     edx, [ecx]
0x5FCCD2: mov     eax, [edx+0F8h]
0x5FCCD8: push    1
0x5FCCDA: call    eax
0x5FCCDC: test    eax, eax
0x5FCCDE: jz      short loc_5FCD25
0x5FCCE0: mov     ecx, [esi+58h]
0x5FCCE3: mov     edx, [ecx]
0x5FCCE5: mov     eax, [edx+0F8h]
0x5FCCEB: push    1
0x5FCCED: call    eax
0x5FCCEF: mov     eax, [eax+8]
0x5FCCF2: push    0
0x5FCCF4: push    0
0x5FCCF6: mov     ecx, eax
0x5FCCF8: call    TESObjectARMO_ISHeavyArmor
0x5FCCFD: fld     dword ptr ds:0A2FE7Ch
0x5FCD03: movzx   ecx, al
0x5FCD06: push    ecx
0x5FCD07: push    0FFFFFFFFh
0x5FCD09: push    0FFFFFFFFh
0x5FCD0B: push    edi
0x5FCD0C: sub     esp, 8
0x5FCD0F: fstp    [esp+94h+var_90]
0x5FCD13: fld     dword ptr ds:0A31C80h
0x5FCD19: fstp    [esp+94h+var_94]
0x5FCD1C: push    esi
0x5FCD1D: call    sub_6AF880
0x5FCD22: add     esp, 24h
0x5FCD25: mov     ecx, esi
0x5FCD27: call    sub_5E5640
0x5FCD2C: test    al, al
0x5FCD2E: jz      Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FCD34: mov     ecx, [esi+58h]
0x5FCD37: mov     edx, [ecx]
0x5FCD39: mov     eax, [edx+2D4h]
0x5FCD3F: call    eax
0x5FCD41: push    eax
0x5FCD42: push    6
0x5FCD44: jmp     Actor_ProcessAction___DefaultAction??_
0x5FCD49: cmp     esi, ds:0B333C4h
0x5FCD4F: jz      short loc_5FCD94
0x5FCD51: mov     edx, [esi]
0x5FCD53: mov     eax, [edx+334h]
0x5FCD59: push    1
0x5FCD5B: mov     ecx, esi
0x5FCD5D: call    eax
0x5FCD5F: test    al, al
0x5FCD61: jnz     short loc_5FCD94
0x5FCD63: mov     ecx, [esi+58h]
0x5FCD66: mov     eax, [ecx+8]
0x5FCD69: test    eax, eax
0x5FCD6B: jz      short loc_5FCD8A
0x5FCD6D: cmp     byte ptr [eax+20h], 8
0x5FCD71: jnz     short loc_5FCD8A
0x5FCD73: mov     edx, [ecx]
0x5FCD75: mov     eax, [edx+138h]
0x5FCD7B: call    eax
0x5FCD7D: test    al, al
0x5FCD7F: jnz     short loc_5FCD8A
0x5FCD81: mov     ecx, esi
0x5FCD83: call    sub_5F9620
0x5FCD88: jmp     short loc_5FCDA6
0x5FCD8A: mov     edx, [esi]
0x5FCD8C: mov     eax, [edx+3B0h]
0x5FCD92: jmp     short loc_5FCD9C
0x5FCD94: mov     edx, [esi]
0x5FCD96: mov     eax, [edx+3ACh]
0x5FCD9C: push    0
0x5FCD9E: push    0
0x5FCDA0: push    1
0x5FCDA2: mov     ecx, esi
0x5FCDA4: call    eax
0x5FCDA6: mov     ecx, esi; this
0x5FCDA8: call    Actor_IsCreature
0x5FCDAD: test    al, al
0x5FCDAF: setz    cl
0x5FCDB2: push    ecx
0x5FCDB3: mov     ecx, esi
0x5FCDB5: call    sub_5E4010
0x5FCDBA: mov     ecx, esi
0x5FCDBC: call    sub_5E5640
0x5FCDC1: test    al, al
0x5FCDC3: jz      Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FCDC9: mov     ecx, [esi+58h]
0x5FCDCC: mov     edx, [ecx]
0x5FCDCE: mov     eax, [edx+2D4h]
0x5FCDD4: call    eax
0x5FCDD6: push    eax
0x5FCDD7: push    3
0x5FCDD9: jmp     Actor_ProcessAction___DefaultAction??_
0x5FCDDE: mov     ecx, [esi+58h]
0x5FCDE1: mov     edx, [ecx]
0x5FCDE3: mov     eax, [edx+13Ch]
0x5FCDE9: call    eax
0x5FCDEB: test    al, al
0x5FCDED: jz      short loc_5FCE08
0x5FCDEF: mov     ecx, [esi+58h]
0x5FCDF2: mov     edx, [ecx]
0x5FCDF4: mov     eax, [edx+0ECh]
0x5FCDFA: push    1
0x5FCDFC: call    eax
0x5FCDFE: push    eax
0x5FCDFF: mov     ecx, esi
0x5FCE01: call    sub_5E4920
0x5FCE06: jmp     short loc_5FCDBA
0x5FCE08: mov     edx, [esi+5Ch]
0x5FCE0B: mov     eax, [edx+30h]
0x5FCE0E: lea     edi, [esi+5Ch]
0x5FCE11: mov     ecx, edi
0x5FCE13: call    eax
0x5FCE15: test    eax, eax
0x5FCE17: jz      short loc_5FCE24
0x5FCE19: push    0
0x5FCE1B: mov     ecx, edi
0x5FCE1D: call    MagicCaster_UseActiveMagicItem
0x5FCE22: jmp     short loc_5FCDBA
0x5FCE24: cmp     esi, ds:0B333C4h
0x5FCE2A: jz      short loc_5FCE83
0x5FCE2C: mov     edx, [esi]
0x5FCE2E: mov     eax, [edx+334h]
0x5FCE34: push    1
0x5FCE36: mov     ecx, esi
0x5FCE38: call    eax
0x5FCE3A: test    al, al
0x5FCE3C: jnz     short loc_5FCE83
0x5FCE3E: mov     ecx, [esi+58h]
0x5FCE41: mov     eax, [ecx+8]
0x5FCE44: test    eax, eax
0x5FCE46: jz      short loc_5FCE6A
0x5FCE48: cmp     byte ptr [eax+20h], 8
0x5FCE4C: jnz     short loc_5FCE6A
0x5FCE4E: mov     edx, [ecx]
0x5FCE50: mov     eax, [edx+138h]
0x5FCE56: call    eax
0x5FCE58: test    al, al
0x5FCE5A: jnz     short loc_5FCE6A
0x5FCE5C: mov     ecx, esi
0x5FCE5E: call    sub_5F9620
0x5FCE63: push    0
0x5FCE65: jmp     loc_5FCDB3
0x5FCE6A: mov     edx, [esi]
0x5FCE6C: mov     eax, [edx+3B0h]
0x5FCE72: push    0
0x5FCE74: push    0
0x5FCE76: push    0
0x5FCE78: mov     ecx, esi
0x5FCE7A: call    eax
0x5FCE7C: push    0
0x5FCE7E: jmp     loc_5FCDB3
0x5FCE83: mov     edx, [esi]
0x5FCE85: mov     eax, [edx+3ACh]
0x5FCE8B: push    0
0x5FCE8D: push    0
0x5FCE8F: push    0
0x5FCE91: mov     ecx, esi
0x5FCE93: call    eax
0x5FCE95: push    0
0x5FCE97: jmp     loc_5FCDB3
0x5FCE9C: mov     ecx, [esp+74h+var_60]
0x5FCEA0: push    1
0x5FCEA2: call    ActorAnimData_GetSomethingFromField8Value
0x5FCEA7: cmp     eax, 1
0x5FCEAA: jnz     Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FCEB0: mov     ecx, [esp+74h+var_60]
0x5FCEB4: push    eax
0x5FCEB5: call    ActorAnimData_GetAnimGroupFromField8Value
0x5FCEBA: push    eax
0x5FCEBB: call    sub_51AA00
0x5FCEC0: lea     ecx, [eax+eax*8]
0x5FCEC3: mov     eax, ds:0B102ECh[ecx*4]
0x5FCECA: add     eax, 0FFFFFFFCh
0x5FCECD: add     esp, 4
0x5FCED0: cmp     eax, 1
0x5FCED3: ja      Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FCED9: mov     edx, [esi+5Ch]
0x5FCEDC: mov     eax, [edx+30h]
0x5FCEDF: lea     edi, [esi+5Ch]
0x5FCEE2: mov     ecx, edi
0x5FCEE4: call    eax
0x5FCEE6: test    eax, eax
0x5FCEE8: jz      loc_5FCDC9
0x5FCEEE: fld     dword ptr ds:0A6E688h
0x5FCEF4: push    ecx
0x5FCEF5: mov     ecx, esi; this
0x5FCEF7: fstp    [esp+78h+duration]
0x5FCEFA: call    TESObjectREFR_GetParentCell
0x5FCEFF: mov     edx, [esi]
0x5FCF01: push    eax
0x5FCF02: mov     eax, [edx+174h]
0x5FCF08: mov     ecx, esi
0x5FCF0A: call    eax
0x5FCF0C: push    eax
0x5FCF0D: mov     ecx, esi
0x5FCF0F: call    Actor_IsUnderwater??
0x5FCF14: mov     ecx, esi
0x5FCF16: mov     bl, al
0x5FCF18: call    Actor_IsSwimming
0x5FCF1D: test    al, al
0x5FCF1F: jnz     short loc_5FCF25
0x5FCF21: test    bl, bl
0x5FCF23: jz      short loc_5FCF6A
0x5FCF25: mov     edx, [edi]
0x5FCF27: mov     eax, [edx+30h]
0x5FCF2A: mov     ecx, edi
0x5FCF2C: call    eax
0x5FCF2E: mov     ecx, eax
0x5FCF30: add     ecx, 0Ch
0x5FCF33: call    EffectItemList_HasAssocActorEffect
0x5FCF38: test    al, al
0x5FCF3A: jz      short loc_5FCF6A
0x5FCF3C: cmp     esi, ds:0B333C4h
0x5FCF42: jnz     loc_5FCDC9
0x5FCF48: fld     dword ptr ds:0A30634h
0x5FCF4E: push    ecx
0x5FCF4F: mov     ecx, ds:0B38DE8h
0x5FCF55: fstp    [esp+78h+duration]; duration
0x5FCF58: push    1; unk2
0x5FCF5A: push    0; unk1
0x5FCF5C: push    ecx; string
0x5FCF5D: call    GameUI_QueueMessage
0x5FCF62: add     esp, 10h
0x5FCF65: jmp     loc_5FCDC9
0x5FCF6A: push    0
0x5FCF6C: mov     ecx, edi
0x5FCF6E: call    MagicCaster_UseActiveMagicItem
0x5FCF73: jmp     loc_5FCDC9
0x5FCF78: mov     ecx, [esp+74h+var_60]; jumptable 005FCBFE case 4
0x5FCF7C: push    3
0x5FCF7E: call    ActorAnimData_GetSomethingFromField8Value
0x5FCF83: cmp     eax, 1
0x5FCF86: jnz     Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FCF8C: mov     ecx, ds:0B333C4h
0x5FCF92: cmp     esi, ecx
0x5FCF94: mov     [esp+74h+var_40], edi
0x5FCF98: mov     dword ptr [esp+74h+var_48], eax
0x5FCF9C: jnz     short loc_5FCFD0
0x5FCF9E: mov     dword ptr [esp+74h+var_48], 2
0x5FCFA6: jmp     short loc_5FCFB6
0x5FCFA8: jmp     short loc_5FCFB0
0x5FCFAA: align 10h
0x5FCFB0: mov     ecx, ds:0B333C4h
0x5FCFB6: cmp     esi, ecx
0x5FCFB8: jnz     short loc_5FCFD0
0x5FCFBA: cmp     dword ptr [esp+74h+var_48], 1
0x5FCFBF: jnz     short loc_5FCFD0
0x5FCFC1: push    1
0x5FCFC3: call    sub_6600D0
0x5FCFC8: mov     ebx, eax
0x5FCFCA: mov     [esp+74h+var_40], ebx
0x5FCFCE: jmp     short loc_5FCFD4
0x5FCFD0: mov     ebx, [esp+74h+var_40]
0x5FCFD4: mov     ecx, [esi+58h]
0x5FCFD7: mov     edx, [ecx]
0x5FCFD9: mov     eax, [edx+128h]
0x5FCFDF: push    ebx
0x5FCFE0: call    eax
0x5FCFE2: mov     ecx, [esi+58h]
0x5FCFE5: mov     edx, [ecx]
0x5FCFE7: mov     edi, eax
0x5FCFE9: mov     eax, [edx+12Ch]
0x5FCFEF: push    ebx
0x5FCFF0: call    eax
0x5FCFF2: test    edi, edi
0x5FCFF4: mov     ebp, eax
0x5FCFF6: jz      loc_5FD0DB
0x5FCFFC: test    ebp, ebp
0x5FCFFE: jz      loc_5FD0DB
0x5FD004: mov     edx, [edi]
0x5FD006: mov     eax, [edx+58h]
0x5FD009: push    offset aArrow0; "Arrow:0"
0x5FD00E: mov     ecx, edi
0x5FD010: call    eax
0x5FD012: mov     ebx, eax
0x5FD014: test    ebx, ebx
0x5FD016: jnz     short loc_5FD02A
0x5FD018: push    offset aCouldNotFindAr; "Could not find Arrow:0 on Quiver"
0x5FD01D: call    PrintError
0x5FD022: add     esp, 4
0x5FD025: jmp     loc_5FD0DB
0x5FD02A: mov     ecx, ebx
0x5FD02C: call    sub_700900
0x5FD031: mov     edx, [ebp+0]
0x5FD034: push    1
0x5FD036: push    eax
0x5FD037: mov     eax, [edx+84h]
0x5FD03D: mov     ecx, ebp
0x5FD03F: call    eax
0x5FD041: cmp     esi, ds:0B333C4h
0x5FD047: jnz     loc_5FD0DB
0x5FD04D: call    GetGodMode
0x5FD052: test    al, al
0x5FD054: jnz     loc_5FD0DB
0x5FD05A: mov     ecx, [esi+58h]
0x5FD05D: mov     edx, [ecx]
0x5FD05F: mov     eax, [edx+0F4h]
0x5FD065: push    1
0x5FD067: call    eax
0x5FD069: mov     eax, [eax+8]
0x5FD06C: push    eax
0x5FD06D: mov     ecx, esi
0x5FD06F: call    TESObjectREF_GetItemCount
0x5FD074: cmp     eax, 1
0x5FD077: jnz     short loc_5FD07F
0x5FD079: mov     edi, ebx
0x5FD07B: xor     ebx, ebx
0x5FD07D: jmp     short loc_5FD0D2
0x5FD07F: cmp     eax, ds:0B35588h
0x5FD085: jg      short loc_5FD0DB
0x5FD087: xor     ebx, ebx
0x5FD089: mov     dword ptr [esp+74h+var_28+4], ebx
0x5FD08D: mov     word ptr [esp+74h+var_20], bx
0x5FD092: mov     word ptr [esp+74h+var_20+2], bx
0x5FD097: add     eax, 0FFFFFFFFh
0x5FD09A: push    eax
0x5FD09B: lea     ecx, [esp+78h+var_28+4]
0x5FD09F: push    offset aArrowD; "Arrow%d"
0x5FD0A4: push    ecx
0x5FD0A5: mov     [esp+80h+var_4], ebx
0x5FD0A9: call    BSStringT_Static_Format
0x5FD0AE: mov     edx, [edi]
0x5FD0B0: mov     eax, dword ptr [esp+80h+var_28+4]
0x5FD0B4: mov     edx, [edx+58h]
0x5FD0B7: add     esp, 0Ch
0x5FD0BA: push    eax
0x5FD0BB: mov     ecx, edi
0x5FD0BD: call    edx
0x5FD0BF: lea     ecx, [esp+74h+var_28+4]; void *
0x5FD0C3: mov     edi, eax
0x5FD0C5: mov     [esp+74h+var_4], 0FFFFFFFFh
0x5FD0CD: call    BSStringT_Clear
0x5FD0D2: cmp     edi, ebx
0x5FD0D4: jz      short loc_5FD0DB
0x5FD0D6: or      word ptr [edi+18h], 1
0x5FD0DB: sub     dword ptr [esp+74h+var_48], 1
0x5FD0E0: jnz     loc_5FCFB0
0x5FD0E6: mov     ecx, [esi+58h]
0x5FD0E9: mov     eax, [ecx]
0x5FD0EB: mov     edx, [eax+2D4h]
0x5FD0F1: call    edx
0x5FD0F3: push    eax
0x5FD0F4: push    5
0x5FD0F6: mov     ecx, esi
0x5FD0F8: call    HighPRocess_DoAction?????
0x5FD0FD: mov     ebp, [esp+74h+var_3C]
0x5FD101: jmp     Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FD106: mov     ecx, [esp+74h+var_60]; jumptable 005FCBFE case 5
0x5FD10A: push    3
0x5FD10C: call    ActorAnimData_GetSomethingFromField8Value
0x5FD111: cmp     eax, 3
0x5FD114: jnz     Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FD11A: mov     ecx, ds:0B3F9ACh
0x5FD120: mov     eax, ds:0B3F9A8h
0x5FD125: mov     edx, ds:0B3F9B0h
0x5FD12B: mov     [esp+74h+var_14], ecx
0x5FD12F: mov     ecx, ds:0B333C4h
0x5FD135: cmp     esi, ecx
0x5FD137: mov     [esp+74h+var_40], edi
0x5FD13B: mov     dword ptr [esp+74h+var_48], 1
0x5FD143: mov     [esp+74h+a2], eax
0x5FD147: mov     [esp+74h+var_10], edx
0x5FD14B: jnz     short loc_5FD155
0x5FD14D: mov     dword ptr [esp+74h+var_48], 2
0x5FD155: mov     ebx, [esp+74h+var_40]
0x5FD159: jmp     short loc_5FD166
0x5FD15B: jmp     short loc_5FD160
0x5FD15D: align 10h
0x5FD160: mov     ecx, ds:0B333C4h
0x5FD166: cmp     esi, ecx
0x5FD168: jnz     short loc_5FD17E
0x5FD16A: cmp     dword ptr [esp+74h+var_48], 1
0x5FD16F: jnz     short loc_5FD17E
0x5FD171: push    1
0x5FD173: call    sub_6600D0
0x5FD178: mov     ebx, eax
0x5FD17A: mov     [esp+74h+var_40], ebx
0x5FD17E: mov     ecx, [esi+58h]
0x5FD181: mov     eax, [ecx]
0x5FD183: mov     edx, [eax+12Ch]
0x5FD189: push    ebx
0x5FD18A: call    edx
0x5FD18C: test    eax, eax
0x5FD18E: jz      loc_5FD243
0x5FD194: mov     ecx, [esi+58h]
0x5FD197: mov     eax, [ecx]
0x5FD199: mov     edx, [eax+12Ch]
0x5FD19F: push    ebx
0x5FD1A0: call    edx
0x5FD1A2: mov     ebp, eax
0x5FD1A4: push    0
0x5FD1A6: mov     ecx, ebp
0x5FD1A8: call    sub_405790
0x5FD1AD: mov     edi, eax
0x5FD1AF: test    edi, edi
0x5FD1B1: jz      loc_5FD243
0x5FD1B7: mov     eax, [edi]
0x5FD1B9: mov     edx, [eax+74h]
0x5FD1BC: mov     ecx, edi
0x5FD1BE: call    edx
0x5FD1C0: mov     ecx, ds:0B333C4h
0x5FD1C6: cmp     esi, ecx
0x5FD1C8: jnz     short loc_5FD204
0x5FD1CA: push    1
0x5FD1CC: xor     bl, bl
0x5FD1CE: call    PlayerCharacter_GetPlayerNode
0x5FD1D3: test    eax, eax
0x5FD1D5: jz      short loc_5FD1EC
0x5FD1D7: mov     ecx, ds:0B333C4h
0x5FD1DD: push    1
0x5FD1DF: call    PlayerCharacter_GetPlayerNode
0x5FD1E4: test    byte ptr [eax+18h], 1
0x5FD1E8: jz      short loc_5FD1EC
0x5FD1EA: mov     bl, 1
0x5FD1EC: mov     eax, dword ptr [esp+74h+var_48]
0x5FD1F0: cmp     eax, 1
0x5FD1F3: jnz     short loc_5FD1FB
0x5FD1F5: test    bl, bl
0x5FD1F7: jnz     short loc_5FD222
0x5FD1F9: jmp     short loc_5FD204
0x5FD1FB: cmp     eax, 2
0x5FD1FE: jnz     short loc_5FD222
0x5FD200: test    bl, bl
0x5FD202: jz      short loc_5FD222
0x5FD204: mov     eax, [edi+88h]
0x5FD20A: mov     ecx, [edi+8Ch]
0x5FD210: mov     edx, [edi+90h]
0x5FD216: mov     [esp+74h+a2], eax
0x5FD21A: mov     [esp+74h+var_14], ecx
0x5FD21E: mov     [esp+74h+var_10], edx
0x5FD222: push    0
0x5FD224: call    GetShadowSceneNode
0x5FD229: add     esp, 4
0x5FD22C: push    ebp
0x5FD22D: mov     ecx, eax
0x5FD22F: call    sub_7C5E70
0x5FD234: lea     ecx, [ebp+0ACh]
0x5FD23A: call    sub_477EF0
0x5FD23F: mov     ebx, [esp+74h+var_40]
0x5FD243: sub     dword ptr [esp+74h+var_48], 1
0x5FD248: jnz     loc_5FD160
0x5FD24E: mov     eax, [esi]
0x5FD250: mov     edx, [eax+1E0h]
0x5FD256: mov     ecx, esi
0x5FD258: call    edx
0x5FD25A: fstp    dword ptr [esp+74h+var_30]
0x5FD25E: mov     ecx, esi
0x5FD260: call    sub_4A9720
0x5FD265: fstp    [esp+74h+var_34]
0x5FD269: fld1
0x5FD26B: mov     eax, ds:0B333C4h
0x5FD270: cmp     esi, eax
0x5FD272: fstp    dword ptr [esp+74h+var_48]
0x5FD276: jnz     short loc_5FD2C6
0x5FD278: fld     dword ptr [eax+640h]
0x5FD27E: mov     ecx, offset fArrowBowTimerMult
0x5FD283: fstp    dword ptr [esp+74h+var_30+4]
0x5FD287: call    GameSetting_GetSafeFloatPointer
0x5FD28C: fld     dword ptr [esp+74h+var_30+4]
0x5FD290: mov     ecx, offset fArrowBowTimerBase
0x5FD295: fmul    dword ptr [eax]
0x5FD297: fstp    [esp+74h+var_28+4]
0x5FD29B: call    GameSetting_GetSafeFloatPointer
0x5FD2A0: fld     dword ptr [eax]
0x5FD2A2: sub     esp, 8
0x5FD2A5: fadd    [esp+7Ch+var_28+4]
0x5FD2A9: fstp    dword ptr [esp+7Ch+var_30+4]
0x5FD2AD: fld     dword ptr [esp+7Ch+var_30+4]
0x5FD2B1: fstp    [esp+7Ch+duration]
0x5FD2B5: fld1
0x5FD2B7: fstp    [esp+7Ch+var_7C]
0x5FD2BA: call    sub_4AC760
0x5FD2BF: fstp    dword ptr [esp+7Ch+var_48]
0x5FD2C3: add     esp, 8
0x5FD2C6: mov     ecx, [esi+58h]
0x5FD2C9: mov     eax, [ecx]
0x5FD2CB: mov     edx, [eax+0F4h]
0x5FD2D1: push    1
0x5FD2D3: call    edx
0x5FD2D5: mov     ecx, [esi+58h]
0x5FD2D8: mov     ebp, eax
0x5FD2DA: mov     eax, [ecx]
0x5FD2DC: mov     edx, [eax+0ECh]
0x5FD2E2: push    1
0x5FD2E4: call    edx
0x5FD2E6: xor     ebx, ebx
0x5FD2E8: cmp     ebp, ebx
0x5FD2EA: mov     edi, eax
0x5FD2EC: mov     [esp+74h+var_38], edi
0x5FD2F0: jz      loc_5FD53E
0x5FD2F6: cmp     edi, ebx
0x5FD2F8: jz      loc_5FD53E
0x5FD2FE: mov     ecx, [ebp+8]
0x5FD301: mov     eax, [ecx]
0x5FD303: mov     edx, [eax+78h]
0x5FD306: call    edx
0x5FD308: test    al, al
0x5FD30A: jnz     loc_5FD53E
0x5FD310: mov     eax, [ebp+8]
0x5FD313: cmp     eax, ebx
0x5FD315: mov     [esp+74h+var_40], ebx
0x5FD319: jz      short loc_5FD325
0x5FD31B: cmp     byte ptr [eax+4], 22h ; '"'
0x5FD31F: jnz     short loc_5FD325
0x5FD321: mov     [esp+74h+var_40], eax
0x5FD325: mov     eax, [edi+8]
0x5FD328: cmp     eax, ebx
0x5FD32A: mov     dword ptr [esp+74h+var_30+4], ebx
0x5FD32E: jz      short loc_5FD33A
0x5FD330: cmp     byte ptr [eax+4], 21h ; '!'
0x5FD334: jnz     short loc_5FD33A
0x5FD336: mov     dword ptr [esp+74h+var_30+4], eax
0x5FD33A: cmp     esi, ds:0B333C4h
0x5FD340: jz      loc_5FD3F4
0x5FD346: mov     eax, [esi]
0x5FD348: mov     edx, [eax+330h]
0x5FD34E: mov     ecx, esi
0x5FD350: call    edx
0x5FD352: mov     ebx, eax
0x5FD354: test    ebx, ebx
0x5FD356: jz      short loc_5FD363
0x5FD358: mov     ecx, ebx
0x5FD35A: call    sub_6135F0
0x5FD35F: mov     edi, eax
0x5FD361: jmp     short loc_5FD365
0x5FD363: xor     edi, edi
0x5FD365: mov     eax, [esp+74h+var_40]
0x5FD369: test    eax, eax
0x5FD36B: jz      short loc_5FD372
0x5FD36D: fld     dword ptr [eax+7Ch]
0x5FD370: jmp     short loc_5FD374
0x5FD372: fld1
0x5FD374: mov     ecx, offset flt_B37040
0x5FD379: fstp    [esp+74h+var_40]
0x5FD37D: call    GameSetting_GetSafeFloatPointer
0x5FD382: fld     [esp+74h+var_40]
0x5FD386: fmul    dword ptr [eax]
0x5FD388: push    esi
0x5FD389: fstp    dword ptr [esp+78h+var_28+4]
0x5FD38D: call    sub_608280
0x5FD392: add     esp, 4
0x5FD395: fstp    [esp+74h+var_40]
0x5FD399: test    edi, edi
0x5FD39B: jz      short loc_5FD3F0
0x5FD39D: mov     eax, [ebx+180h]
0x5FD3A3: fld     [esp+74h+var_40]
0x5FD3A7: mov     ecx, [esp+74h+a2]
0x5FD3AB: mov     edx, [esp+74h+var_14]
0x5FD3AF: push    eax
0x5FD3B0: sub     esp, 8
0x5FD3B3: fstp    [esp+80h+var_7C]
0x5FD3B7: fld     dword ptr [esp+80h+var_28+4]
0x5FD3BB: fstp    [esp+80h+var_80]
0x5FD3BE: push    edi
0x5FD3BF: sub     esp, 0Ch
0x5FD3C2: mov     eax, esp
0x5FD3C4: mov     [eax], ecx
0x5FD3C6: mov     ecx, [esp+90h+var_10]
0x5FD3CD: mov     [eax+4], edx
0x5FD3D0: lea     edx, [esp+90h+var_28+4]
0x5FD3D4: push    edx
0x5FD3D5: mov     [eax+8], ecx
0x5FD3D8: call    sub_6159C0
0x5FD3DD: fld     dword ptr [esp+94h+var_28+4]
0x5FD3E1: fstp    [esp+94h+var_34]
0x5FD3E5: add     esp, 20h
0x5FD3E8: fld     [esp+74h+var_1C]
0x5FD3EC: fstp    dword ptr [esp+74h+var_30]
0x5FD3F0: mov     edi, [esp+74h+var_38]
0x5FD3F4: mov     ecx, esi
0x5FD3F6: call    Actor_IsSwimming
0x5FD3FB: test    al, al
0x5FD3FD: jz      short loc_5FD40D
0x5FD3FF: fld     dword ptr [esp+74h+var_48]
0x5FD403: fmul    qword ptr ds:0A2FC80h
0x5FD409: fstp    dword ptr [esp+74h+var_48]
0x5FD40D: mov     eax, ds:0B333C4h
0x5FD412: cmp     esi, eax
0x5FD414: jnz     short loc_5FD423
0x5FD416: cmp     byte ptr [eax+5C0h], 0
0x5FD41D: jnz     loc_5FD53E
0x5FD423: push    9Ch ; 'œ'; Size
0x5FD428: call    FormHeapAlloc
0x5FD42D: add     esp, 4
0x5FD430: mov     dword ptr [esp+74h+var_28+4], eax
0x5FD434: test    eax, eax
0x5FD436: mov     [esp+74h+var_4], 1
0x5FD43E: jz      short loc_5FD483
0x5FD440: fld     dword ptr [esp+74h+var_48]
0x5FD444: mov     ecx, [esp+74h+a2]
0x5FD448: push    edi
0x5FD449: push    ebp
0x5FD44A: sub     esp, 18h
0x5FD44D: fstp    [esp+94h+var_80]
0x5FD451: mov     edx, esp
0x5FD453: fld     [esp+94h+var_34]
0x5FD457: fstp    [esp+94h+var_84]
0x5FD45B: fld     dword ptr [esp+94h+var_30]
0x5FD45F: fstp    [esp+94h+var_88]
0x5FD463: mov     [edx], ecx
0x5FD465: mov     ecx, [esp+94h+var_14]
0x5FD46C: mov     [edx+4], ecx
0x5FD46F: mov     ecx, [esp+94h+var_10]
0x5FD476: mov     [edx+8], ecx
0x5FD479: push    esi
0x5FD47A: mov     ecx, eax
0x5FD47C: call    sub_60C940
0x5FD481: jmp     short loc_5FD485
0x5FD483: xor     eax, eax
0x5FD485: test    eax, eax
0x5FD487: mov     [esp+74h+var_4], 0FFFFFFFFh
0x5FD48F: jz      short loc_5FD4A4
0x5FD491: push    0
0x5FD493: push    0
0x5FD495: push    0
0x5FD497: push    0
0x5FD499: push    eax
0x5FD49A: mov     ecx, offset ActorProcessManager_ptr
0x5FD49F: call    sub_673A90
0x5FD4A4: mov     edx, [esi]
0x5FD4A6: mov     eax, [edx+2E8h]
0x5FD4AC: mov     ecx, esi
0x5FD4AE: call    eax
0x5FD4B0: push    1Ch
0x5FD4B2: mov     ecx, esi
0x5FD4B4: call    Actor_GetSkillMasteryLevel
0x5FD4B9: test    eax, eax
0x5FD4BB: jnz     short loc_5FD4D6
0x5FD4BD: mov     ecx, offset unk_B37020
0x5FD4C2: call    GameSetting_GetSafeFloatPointer
0x5FD4C7: fld     dword ptr [eax]
0x5FD4C9: push    ecx
0x5FD4CA: fchs
0x5FD4CC: mov     ecx, esi
0x5FD4CE: fstp    [esp+78h+duration]
0x5FD4D1: call    Actor_ModFatigue?
0x5FD4D6: mov     edx, [esi]
0x5FD4D8: mov     eax, [edx+284h]
0x5FD4DE: push    2Fh ; '/'
0x5FD4E0: mov     ecx, esi
0x5FD4E2: call    eax
0x5FD4E4: test    eax, eax
0x5FD4E6: jle     short loc_5FD4F7
0x5FD4E8: push    0
0x5FD4EA: push    49564E49h
0x5FD4EF: lea     ecx, [esi+68h]
0x5FD4F2: call    sub_6A24B0
0x5FD4F7: mov     ecx, dword ptr [esp+74h+var_30+4]
0x5FD4FB: mov     edx, [ecx+88h]
0x5FD501: mov     eax, [edx+10h]
0x5FD504: add     ecx, 88h ; 'ˆ'
0x5FD50A: call    eax
0x5FD50C: movzx   ecx, ax
0x5FD50F: mov     dword ptr [esp+74h+var_28+4], ecx
0x5FD513: push    ecx
0x5FD514: fild    dword ptr [esp+78h+var_28+4]
0x5FD518: fstp    [esp+78h+duration]
0x5FD51B: call    Calc_DamageToWeapon
0x5FD520: mov     edx, [esi]
0x5FD522: fstp    dword ptr [esp+78h+var_28+4]
0x5FD526: fld     dword ptr [esp+78h+var_28+4]
0x5FD52A: mov     eax, [edx+2C4h]
0x5FD530: add     esp, 4
0x5FD533: push    0
0x5FD535: push    ecx
0x5FD536: fstp    [esp+7Ch+var_7C]
0x5FD539: push    edi
0x5FD53A: mov     ecx, esi
0x5FD53C: call    eax
0x5FD53E: mov     ecx, [esi+58h]
0x5FD541: mov     edx, [ecx]
0x5FD543: mov     eax, [edx+2D4h]
0x5FD549: call    eax
0x5FD54B: push    eax
0x5FD54C: push    3
0x5FD54E: mov     ecx, esi
0x5FD550: call    HighPRocess_DoAction?????
0x5FD555: mov     ebp, [esp+74h+var_3C]
0x5FD559: jmp     Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FD55E: mov     ecx, [esi+58h]; jumptable 005FCBFE cases 0,1
0x5FD561: mov     edx, [ecx]
0x5FD563: mov     eax, [edx+304h]
0x5FD569: call    eax
0x5FD56B: mov     ecx, esi
0x5FD56D: movzx   ebx, al
0x5FD570: call    Actor_GetCurrentAction
0x5FD575: neg     eax
0x5FD577: sbb     eax, eax
0x5FD579: add     eax, 1
0x5FD57C: cmp     ebx, eax
0x5FD57E: jz      Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FD584: mov     ecx, [esp+74h+var_60]
0x5FD588: push    3
0x5FD58A: call    ActorAnimData_GetSomethingFromField8Value
0x5FD58F: cmp     eax, 1
0x5FD592: jl      Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FD598: cmp     esi, ds:0B333C4h
0x5FD59E: mov     ebx, [esp+74h+var_60]
0x5FD5A2: mov     dword ptr [esp+74h+var_30+4], edi
0x5FD5A6: mov     ebp, 1
0x5FD5AB: jnz     short loc_5FD5B2
0x5FD5AD: mov     ebp, 2
0x5FD5B2: mov     ecx, [esi+58h]
0x5FD5B5: mov     edi, [ecx]
0x5FD5B7: mov     ecx, esi
0x5FD5B9: add     edi, 308h
0x5FD5BF: call    Actor_GetCurrentAction
0x5FD5C4: mov     ecx, [esi+58h]
0x5FD5C7: test    eax, eax
0x5FD5C9: mov     eax, [edi]
0x5FD5CB: setz    dl
0x5FD5CE: push    edx
0x5FD5CF: call    eax
0x5FD5D1: test    ebp, ebp
0x5FD5D3: jz      short loc_5FD627
0x5FD5D5: mov     ecx, ds:0B333C4h; this
0x5FD5DB: cmp     esi, ecx
0x5FD5DD: jnz     short loc_5FD5FC
0x5FD5DF: cmp     ebp, 1
0x5FD5E2: jnz     short loc_5FD5FC
0x5FD5E4: push    ebp; a2
0x5FD5E5: call    Player_GetAnimData
0x5FD5EA: mov     ecx, ds:0B333C4h
0x5FD5F0: push    ebp
0x5FD5F1: mov     ebx, eax
0x5FD5F3: call    sub_6600D0
0x5FD5F8: mov     dword ptr [esp+74h+var_30+4], eax
0x5FD5FC: mov     ecx, [esi+58h]
0x5FD5FF: mov     edi, [ecx]
0x5FD601: mov     edx, dword ptr [esp+74h+var_30+4]
0x5FD605: push    esi
0x5FD606: push    ebx
0x5FD607: push    edx
0x5FD608: mov     ecx, esi
0x5FD60A: add     edi, 150h
0x5FD610: call    Actor_GetCurrentAction
0x5FD615: mov     ecx, [esi+58h]
0x5FD618: mov     edx, [edi]
0x5FD61A: test    eax, eax
0x5FD61C: setz    al
0x5FD61F: push    eax
0x5FD620: call    edx
0x5FD622: sub     ebp, 1
0x5FD625: jnz     short loc_5FD5D5
0x5FD627: mov     ecx, [esi+58h]
0x5FD62A: mov     eax, [ecx]
0x5FD62C: mov     edx, [eax+42Ch]
0x5FD632: push    0
0x5FD634: push    0
0x5FD636: push    1
0x5FD638: push    esi
0x5FD639: call    edx
0x5FD63B: mov     ecx, [esi+58h]
0x5FD63E: mov     eax, [ecx]
0x5FD640: mov     edx, [eax+304h]
0x5FD646: call    edx
0x5FD648: test    al, al
0x5FD64A: jz      Actor_ProcessAction___def_5FD71D; jumptable 005FD71D default case
0x5FD650: mov     ecx, [esi+58h]
0x5FD653: mov     eax, [ecx]
0x5FD655: mov     edx, [eax+41Ch]
0x5FD65B: call    edx
0x5FD65D: test    eax, eax
0x5FD65F: jz      Actor_ProcessAction___def_5FD71D; jumptable 005FD71D default case
0x5FD665: mov     ecx, [esi+58h]
0x5FD668: mov     eax, [ecx]
0x5FD66A: mov     edx, [eax+41Ch]
0x5FD670: call    edx
0x5FD672: push    eax
0x5FD673: push    esi
0x5FD674: mov     ecx, offset ActorProcessManager_ptr
0x5FD679: call    sub_679240
0x5FD67E: test    eax, eax
0x5FD680: jz      short loc_5FD689
0x5FD682: mov     ecx, eax
0x5FD684: call    sub_6A0350
0x5FD689: mov     ecx, [esi+58h]
0x5FD68C: mov     eax, [ecx]
0x5FD68E: mov     edx, [eax+0ECh]
0x5FD694: push    1
0x5FD696: call    edx
0x5FD698: test    eax, eax
0x5FD69A: jz      Actor_ProcessAction___def_5FD71D; jumptable 005FD71D default case
0x5FD6A0: mov     ecx, [esi+58h]
0x5FD6A3: mov     eax, [ecx]
0x5FD6A5: mov     edx, [eax+0ECh]
0x5FD6AB: push    1
0x5FD6AD: xor     edi, edi
0x5FD6AF: call    edx
0x5FD6B1: cmp     [eax+8], edi
0x5FD6B4: jz      short loc_5FD6E0
0x5FD6B6: mov     ecx, [esi+58h]
0x5FD6B9: mov     eax, [ecx]
0x5FD6BB: mov     edx, [eax+0ECh]
0x5FD6C1: push    1
0x5FD6C3: call    edx
0x5FD6C5: mov     eax, [eax+8]
0x5FD6C8: cmp     byte ptr [eax+4], 21h ; '!'
0x5FD6CC: jnz     short loc_5FD6E0
0x5FD6CE: mov     ecx, [esi+58h]
0x5FD6D1: mov     edx, [ecx]
0x5FD6D3: mov     eax, [edx+0ECh]
0x5FD6D9: push    1
0x5FD6DB: call    eax
0x5FD6DD: mov     edi, [eax+8]
0x5FD6E0: push    edi
0x5FD6E1: call    TESEnchantableForm_GetFormEnchantment
0x5FD6E6: add     esp, 4
0x5FD6E9: test    eax, eax
0x5FD6EB: jz      short loc_5FD6F2
0x5FD6ED: add     eax, 18h
0x5FD6F0: jnz     short loc_5FD711
0x5FD6F2: mov     ecx, [esi+58h]
0x5FD6F5: mov     edx, [ecx]
0x5FD6F7: mov     eax, [edx+0ECh]
0x5FD6FD: push    1
0x5FD6FF: call    eax
0x5FD701: mov     ecx, eax
0x5FD703: call    sub_484DF0
0x5FD708: test    eax, eax
0x5FD70A: jz      short Actor_ProcessAction___def_5FD71D; jumptable 005FD71D default case
0x5FD70C: add     eax, 24h ; '$'
0x5FD70F: jz      short Actor_ProcessAction___def_5FD71D; jumptable 005FD71D default case
0x5FD711: movsx   eax, byte ptr [edi+90h]
0x5FD718: cmp     eax, 3; switch 4 cases
0x5FD71B: ja      short Actor_ProcessAction___def_5FD71D; jumptable 005FD71D default case
0x5FD71D: jmp     ds:jpt_5FD71D[eax*4]; switch jump
0x5FD724: push    1; jumptable 005FD71D case 0
0x5FD726: push    102h
0x5FD72B: push    0
0x5FD72D: push    offset aWpnblade1hande; "WPNBlade1HandEquipEnchanted"
0x5FD732: jmp     short loc_5FD762
0x5FD734: push    1; jumptable 005FD71D case 1
0x5FD736: push    102h
0x5FD73B: push    0
0x5FD73D: push    offset aWpnblade2hande; "WPNBlade2HandEquipEnchanted"
0x5FD742: jmp     short loc_5FD762
0x5FD744: push    1; jumptable 005FD71D case 2
0x5FD746: push    102h
0x5FD74B: push    0
0x5FD74D: push    offset aWpnblunt1hande; "WPNBlunt1HandEquipEnchanted"
0x5FD752: jmp     short loc_5FD762
0x5FD754: push    1; jumptable 005FD71D case 3
0x5FD756: push    102h
0x5FD75B: push    0
0x5FD75D: push    offset aWpnblunt2hande; "WPNBlunt2HandEquipEnchanted"
0x5FD762: mov     ecx, esi
0x5FD764: call    sub_65A970
0x5FD769: mov     edi, eax
0x5FD76B: test    edi, edi
0x5FD76D: jz      short Actor_ProcessAction___def_5FD71D; jumptable 005FD71D default case
0x5FD76F: mov     ecx, edi; this
0x5FD771: call    sub_6B73E0
0x5FD776: push    edi
0x5FD777: call    FormHeapFree
0x5FD77C: add     esp, 4
0x5FD77F: push    0; jumptable 005FD71D default case
0x5FD781: push    0
0x5FD783: mov     ecx, esi
0x5FD785: call    HideEquipment
0x5FD78A: mov     ebp, [esp+74h+var_3C]
0x5FD78E: jmp     short Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FD790: mov     edx, [esi]; jumptable 005FCBFE case 10
0x5FD792: mov     eax, [edx+18Ch]
0x5FD798: mov     ecx, esi
0x5FD79A: call    eax
0x5FD79C: test    eax, eax
0x5FD79E: jnz     short Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FD7A0: mov     ecx, dword ptr [esp+74h+var_28]
0x5FD7A4: add     ecx, 1E0h
0x5FD7AA: call    sub_88D370
0x5FD7AF: sub     eax, 0
0x5FD7B2: jz      loc_5FD862
0x5FD7B8: sub     eax, 1
0x5FD7BB: jz      short loc_5FD7D3
0x5FD7BD: sub     eax, 1
0x5FD7C0: jnz     short Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FD7C2: test    ebp, ebp
0x5FD7C4: jz      short Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FD7C6: mov     ecx, [ebp+68h]
0x5FD7C9: call    TESAnimGroup_GetAnimationGroup
0x5FD7CE: cmp     eax, 29h ; ')'
0x5FD7D1: jnz     short Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FD7D3: push    0
0x5FD7D5: push    0FFFFFFFFh
0x5FD7D7: mov     ecx, esi
0x5FD7D9: call    HighPRocess_DoAction?????
0x5FD7DE: mov     edx, [esi]; jumptable 005FCBFE default case, cases 3,6-8
0x5FD7E0: mov     eax, [edx+214h]
0x5FD7E6: mov     ecx, esi
0x5FD7E8: call    eax
0x5FD7EA: mov     edi, [esp+74h+var_58]
0x5FD7EE: mov     ebx, eax
0x5FD7F0: test    ebx, ebx
0x5FD7F2: jz      loc_5FD8FB
0x5FD7F8: cmp     edi, 0FFFFFFFFh
0x5FD7FB: jnz     loc_5FDB2C
0x5FD801: mov     ecx, esi
0x5FD803: call    Actor_GetCurrentAction
0x5FD808: cmp     eax, 2
0x5FD80B: jl      short loc_5FD816
0x5FD80D: cmp     eax, 5
0x5FD810: jle     loc_5FD904
0x5FD816: mov     edx, [esi]
0x5FD818: mov     eax, [edx+21Ch]
0x5FD81E: mov     ecx, esi
0x5FD820: call    eax
0x5FD822: cmp     eax, 48h ; 'H'
0x5FD825: jz      short loc_5FD84A
0x5FD827: fldz
0x5FD829: mov     edi, [esi]
0x5FD82B: mov     edx, [edi+21Ch]
0x5FD831: push    ecx
0x5FD832: fstp    [esp+78h+duration]
0x5FD835: push    0
0x5FD837: mov     ecx, esi
0x5FD839: call    edx
0x5FD83B: push    eax
0x5FD83C: mov     eax, [edi+39Ch]
0x5FD842: mov     ecx, esi
0x5FD844: call    eax
0x5FD846: mov     edi, [esp+74h+var_58]
0x5FD84A: sub     ebx, 1
0x5FD84D: jnz     short loc_5FD816
0x5FD84F: mov     edx, [esi]
0x5FD851: mov     eax, [edx+210h]
0x5FD857: push    0
0x5FD859: mov     ecx, esi
0x5FD85B: call    eax
0x5FD85D: jmp     loc_5FD904
0x5FD862: mov     edx, [esi]
0x5FD864: mov     eax, [edx+27Ch]
0x5FD86A: mov     ecx, esi
0x5FD86C: call    eax
0x5FD86E: test    eax, eax
0x5FD870: jz      Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FD876: mov     ecx, [esi+58h]
0x5FD879: mov     edx, [ecx]
0x5FD87B: mov     eax, [edx+2C0h]
0x5FD881: call    eax
0x5FD883: test    al, 0Fh
0x5FD885: jz      Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FD88B: test    ebp, ebp
0x5FD88D: jz      loc_5FD7D3
0x5FD893: mov     ecx, [ebp+68h]
0x5FD896: call    TESAnimGroup_GetAnimationGroup
0x5FD89B: cmp     eax, 2Ah ; '*'
0x5FD89E: jmp     loc_5FD7D1
0x5FD8A3: mov     ecx, esi; jumptable 005FCBFE case 9
0x5FD8A5: call    sub_5E3590
0x5FD8AA: fstp    [esp+74h+var_54]
0x5FD8AE: jmp     Actor_ProcessAction___Actor_UpdateAnim?_DefaultAction; jumptable 005FCBFE default case, cases 3,6-8
0x5FD8B3: mov     ecx, esi
0x5FD8B5: call    Actor_GetCurrentAction
0x5FD8BA: cmp     eax, 6
0x5FD8BD: jnz     loc_5FD7D3
0x5FD8C3: mov     edi, [esp+74h+var_60]
0x5FD8C7: push    1
0x5FD8C9: mov     ecx, edi
0x5FD8CB: call    ActorAnimData_GetAnimGroupFromField8Value
0x5FD8D0: push    eax
0x5FD8D1: call    sub_51AA00
0x5FD8D6: add     esp, 4
0x5FD8D9: cmp     eax, 1Bh
0x5FD8DC: jnz     loc_5FD7D3
0x5FD8E2: push    1
0x5FD8E4: mov     ecx, edi
0x5FD8E6: mov     [esp+78h+var_58], 6
0x5FD8EE: call    sub_4706E0
0x5FD8F3: push    eax
0x5FD8F4: push    6
0x5FD8F6: jmp     Actor_ProcessAction___DefaultAction??_
0x5FD8FB: cmp     edi, 0FFFFFFFFh
0x5FD8FE: jnz     loc_5FDB2C
0x5FD904: mov     edx, [esi]
0x5FD906: mov     eax, [edx+18Ch]
0x5FD90C: mov     ecx, esi
0x5FD90E: call    eax
0x5FD910: test    eax, eax
0x5FD912: jnz     loc_5FDAAB
0x5FD918: mov     ecx, esi
0x5FD91A: call    Actor_GetCurrentAction
0x5FD91F: cmp     eax, 0FFFFFFFFh
0x5FD922: jz      short loc_5FD930
0x5FD924: add     eax, 0FFFFFFFEh
0x5FD927: cmp     eax, 3
0x5FD92A: ja      loc_5FDA1F
0x5FD930: mov     ebx, dword ptr [esp+74h+var_28]
0x5FD934: lea     ecx, [ebx+1E0h]
0x5FD93A: call    sub_88D370
0x5FD93F: sub     eax, 0
0x5FD942: jz      short loc_5FD9A8
0x5FD944: sub     eax, 1
0x5FD947: jz      short loc_5FD99E
0x5FD949: sub     eax, 1
0x5FD94C: jnz     loc_5FDA1F
0x5FD952: fld     dword ptr [ebx+324h]
0x5FD958: mov     ecx, offset dword_B148EC
0x5FD95D: fstp    dword ptr [esp+74h+var_28+4]
0x5FD961: call    GameSetting_GetSafeFloatPointer
0x5FD966: fld     dword ptr [esp+74h+var_28+4]
0x5FD96A: fld     dword ptr [eax]
0x5FD96C: fcompp
0x5FD96E: fnstsw  ax
0x5FD970: test    ah, 5
0x5FD973: jp      short loc_5FD985
0x5FD975: mov     edx, [esi]
0x5FD977: mov     eax, [edx+380h]
0x5FD97D: mov     ecx, esi
0x5FD97F: call    eax
0x5FD981: test    eax, eax
0x5FD983: jz      short loc_5FD99E
0x5FD985: test    ebp, ebp
0x5FD987: jz      loc_5FDA1F
0x5FD98D: mov     ecx, [ebp+68h]
0x5FD990: call    TESAnimGroup_GetAnimationGroup
0x5FD995: cmp     eax, 29h ; ')'
0x5FD998: jnz     loc_5FDA1F
0x5FD99E: mov     [esp+74h+var_5C], 29h ; ')'
0x5FD9A6: jmp     short loc_5FDA1F
0x5FD9A8: test    ebp, ebp
0x5FD9AA: jz      short loc_5FDA1F
0x5FD9AC: mov     ecx, [ebp+68h]
0x5FD9AF: call    TESAnimGroup_GetAnimationGroup
0x5FD9B4: cmp     eax, 29h ; ')'
0x5FD9B7: jz      short loc_5FD9C6
0x5FD9B9: mov     ecx, [ebp+68h]
0x5FD9BC: call    TESAnimGroup_GetAnimationGroup
0x5FD9C1: cmp     eax, 28h ; '('
0x5FD9C4: jnz     short loc_5FDA1F
0x5FD9C6: mov     edx, [esi]
0x5FD9C8: mov     eax, [edx+27Ch]
0x5FD9CE: mov     ecx, esi
0x5FD9D0: call    eax
0x5FD9D2: test    eax, eax
0x5FD9D4: jz      short loc_5FD9E7
0x5FD9D6: mov     ecx, [esi+58h]
0x5FD9D9: mov     edx, [ecx]
0x5FD9DB: mov     eax, [edx+2C0h]
0x5FD9E1: call    eax
0x5FD9E3: test    al, 0Fh
0x5FD9E5: jnz     short loc_5FDA0F
0x5FD9E7: mov     ecx, esi
0x5FD9E9: call    Actor_GetCurrentAction
0x5FD9EE: cmp     eax, 0FFFFFFFFh
0x5FD9F1: jnz     short loc_5FD9FC
0x5FD9F3: mov     edi, 0Ah
0x5FD9F8: mov     [esp+74h+var_58], edi
0x5FD9FC: mov     ecx, [esp+74h+var_60]
0x5FDA00: mov     [esp+74h+var_5C], 2Ah ; '*'
0x5FDA08: mov     byte ptr [ecx+0C4h], 1
0x5FDA0F: mov     edx, [ebx+214h]
0x5FDA15: push    edx
0x5FDA16: push    esi
0x5FDA17: call    sub_6B1900
0x5FDA1C: add     esp, 8
0x5FDA1F: mov     ecx, [esi+58h]
0x5FDA22: mov     eax, [ecx]
0x5FDA24: mov     edx, [eax+2FCh]
0x5FDA2A: call    edx
0x5FDA2C: test    al, al
0x5FDA2E: jz      short loc_5FDAAB
0x5FDA30: mov     ecx, [esi+58h]
0x5FDA33: mov     eax, [ecx]
0x5FDA35: mov     edx, [eax+304h]
0x5FDA3B: call    edx
0x5FDA3D: test    al, al
0x5FDA3F: jnz     short loc_5FDAAB
0x5FDA41: mov     ecx, esi
0x5FDA43: call    Actor_GetCurrentAction
0x5FDA48: cmp     eax, 0FFFFFFFFh
0x5FDA4B: jnz     short loc_5FDAAB
0x5FDA4D: mov     ecx, esi
0x5FDA4F: call    IsWeaponReady
0x5FDA54: test    al, al
0x5FDA56: jz      short loc_5FDAAB
0x5FDA58: mov     edi, [esp+74h+var_60]
0x5FDA5C: mov     ecx, edi
0x5FDA5E: call    sub_472EA0
0x5FDA63: test    al, al
0x5FDA65: jnz     short loc_5FDA72
0x5FDA67: push    0
0x5FDA69: push    1
0x5FDA6B: mov     ecx, edi
0x5FDA6D: call    sub_475440
0x5FDA72: mov     ecx, [esi+58h]
0x5FDA75: mov     eax, [ecx]
0x5FDA77: mov     edx, [eax+0F0h]
0x5FDA7D: xor     edi, edi
0x5FDA7F: push    1
0x5FDA81: mov     [esp+78h+var_5C], 11h
0x5FDA89: mov     [esp+78h+var_58], edi
0x5FDA8D: call    edx
0x5FDA8F: test    eax, eax
0x5FDA91: jz      short loc_5FDAAB
0x5FDA93: mov     ecx, [esi+58h]
0x5FDA96: mov     eax, [ecx]
0x5FDA98: mov     edx, [eax+138h]
0x5FDA9E: call    edx
0x5FDAA0: test    al, al
0x5FDAA2: jz      short loc_5FDAAB
0x5FDAA4: mov     ecx, esi
0x5FDAA6: call    UnequipLight
0x5FDAAB: mov     ecx, [esi+58h]
0x5FDAAE: mov     eax, [ecx]
0x5FDAB0: mov     edx, [eax+2FCh]
0x5FDAB6: call    edx
0x5FDAB8: test    al, al
0x5FDABA: jnz     short loc_5FDB2C
0x5FDABC: mov     ecx, [esi+58h]
0x5FDABF: mov     eax, [ecx]
0x5FDAC1: mov     edx, [eax+304h]
0x5FDAC7: call    edx
0x5FDAC9: test    al, al
0x5FDACB: jz      short loc_5FDB2C
0x5FDACD: mov     ecx, esi
0x5FDACF: call    Actor_GetCurrentAction
0x5FDAD4: cmp     eax, 0FFFFFFFFh
0x5FDAD7: jnz     short loc_5FDB2C
0x5FDAD9: mov     eax, [esi]
0x5FDADB: mov     edx, [eax+1A0h]
0x5FDAE1: mov     ecx, esi
0x5FDAE3: call    edx
0x5FDAE5: test    al, al
0x5FDAE7: jnz     short loc_5FDB2C
0x5FDAE9: mov     eax, [esi]
0x5FDAEB: mov     edx, [eax+198h]
0x5FDAF1: push    0
0x5FDAF3: mov     ecx, esi
0x5FDAF5: call    edx
0x5FDAF7: test    al, al
0x5FDAF9: jnz     short loc_5FDB2C
0x5FDAFB: mov     eax, [esi]
0x5FDAFD: mov     edx, [eax+19Ch]
0x5FDB03: mov     ecx, esi
0x5FDB05: call    edx
0x5FDB07: test    al, al
0x5FDB09: jnz     short loc_5FDB2C
0x5FDB0B: mov     eax, [esi+0B0h]
0x5FDB11: cmp     eax, 5
0x5FDB14: jz      short loc_5FDB2C
0x5FDB16: cmp     eax, 3
0x5FDB19: jz      short loc_5FDB2C
0x5FDB1B: mov     edi, 1
0x5FDB20: mov     [esp+74h+var_5C], 12h
0x5FDB28: mov     [esp+74h+var_58], edi
0x5FDB2C: mov     eax, [esi]
0x5FDB2E: mov     edx, [eax+27Ch]
0x5FDB34: mov     ecx, esi
0x5FDB36: call    edx
0x5FDB38: test    eax, eax
0x5FDB3A: jnz     short loc_5FDB4E
0x5FDB3C: mov     eax, [esi]
0x5FDB3E: mov     edx, [eax+334h]
0x5FDB44: push    1
0x5FDB46: mov     ecx, esi
0x5FDB48: call    edx
0x5FDB4A: test    al, al
0x5FDB4C: jnz     short loc_5FDB78
0x5FDB4E: mov     eax, [esi]
0x5FDB50: mov     edx, [eax+27Ch]
0x5FDB56: mov     ecx, esi
0x5FDB58: call    edx
0x5FDB5A: test    eax, eax
0x5FDB5C: jz      short loc_5FDB6F
0x5FDB5E: mov     ecx, [esi+58h]
0x5FDB61: mov     eax, [ecx]
0x5FDB63: mov     edx, [eax+304h]
0x5FDB69: call    edx
0x5FDB6B: test    al, al
0x5FDB6D: jnz     short loc_5FDB78
0x5FDB6F: test    edi, edi
0x5FDB71: jz      short loc_5FDB78
0x5FDB73: cmp     edi, 1
0x5FDB76: jnz     short loc_5FDBB9
0x5FDB78: mov     ecx, [esi+58h]
0x5FDB7B: mov     eax, [ecx]
0x5FDB7D: mov     edx, [eax+0ECh]
0x5FDB83: push    1
0x5FDB85: call    edx
0x5FDB87: test    eax, eax
0x5FDB89: jz      short loc_5FDBB1
0x5FDB8B: mov     ecx, [esi+58h]
0x5FDB8E: mov     eax, [ecx]
0x5FDB90: mov     edx, [eax+0ECh]
0x5FDB96: push    1
0x5FDB98: call    edx
0x5FDB9A: mov     eax, [eax+8]
0x5FDB9D: movsx   ecx, byte ptr [eax+90h]
0x5FDBA4: mov     edx, ds:0B086B8h[ecx*4]
0x5FDBAB: mov     dword ptr [esp+74h+var_48+4], edx
0x5FDBAF: jmp     short loc_5FDBB9
0x5FDBB1: mov     dword ptr [esp+74h+var_48+4], 1
0x5FDBB9: mov     ecx, [esi+58h]
0x5FDBBC: mov     eax, [ecx]
0x5FDBBE: mov     edx, [eax+2D0h]
0x5FDBC4: call    edx
0x5FDBC6: cmp     eax, 6
0x5FDBC9: jnz     short loc_5FDC06
0x5FDBCB: mov     ecx, [esi+58h]
0x5FDBCE: mov     eax, [ecx]
0x5FDBD0: mov     edx, [eax+2C0h]
0x5FDBD6: call    edx
0x5FDBD8: test    ax, 200h
0x5FDBDC: jz      short loc_5FDC06
0x5FDBDE: mov     ecx, [esi+58h]
0x5FDBE1: mov     eax, [ecx]
0x5FDBE3: mov     edx, [eax+2C4h]
0x5FDBE9: push    0
0x5FDBEB: push    200h
0x5FDBF0: call    edx
0x5FDBF2: mov     ecx, [esi+58h]
0x5FDBF5: mov     eax, [ecx]
0x5FDBF7: mov     edx, [eax+2C4h]
0x5FDBFD: push    1
0x5FDBFF: push    100h
0x5FDC04: call    edx
0x5FDC06: mov     ecx, [esi+58h]
0x5FDC09: mov     eax, [ecx]
0x5FDC0B: mov     edx, [eax+2C0h]
0x5FDC11: call    edx
0x5FDC13: movzx   ebx, ax
0x5FDC16: test    ebx, 800h
0x5FDC1C: jz      short loc_5FDC28
0x5FDC1E: mov     [esp+74h+var_4C], 2
0x5FDC26: jmp     short loc_5FDC4A
0x5FDC28: test    ebx, 2000h
0x5FDC2E: jz      short loc_5FDC3A
0x5FDC30: mov     [esp+74h+var_4C], 3
0x5FDC38: jmp     short loc_5FDC4A
0x5FDC3A: test    ebx, 400h
0x5FDC40: jz      short loc_5FDC4A
0x5FDC42: mov     [esp+74h+var_4C], 1
0x5FDC4A: mov     ebp, [esp+74h+var_5C]
0x5FDC4E: test    ebp, ebp
0x5FDC50: jnz     loc_5FDDE3
0x5FDC56: mov     eax, [esi]
0x5FDC58: mov     edx, [eax+380h]
0x5FDC5E: mov     ecx, esi
0x5FDC60: call    edx
0x5FDC62: test    eax, eax
0x5FDC64: jnz     short loc_5FDCD8
0x5FDC66: mov     eax, [esi]
0x5FDC68: mov     edx, [eax+18Ch]
0x5FDC6E: mov     ecx, esi
0x5FDC70: call    edx
0x5FDC72: add     eax, 0FFFFFFFDh; switch 8 cases
0x5FDC75: cmp     eax, 7
0x5FDC78: ja      short Actor_ProcessAction___def_5FDC81; jumptable 005FDC81 default case, cases 6,7
0x5FDC7A: movzx   eax, ds:byte_5FE32C[eax]
0x5FDC81: jmp     ds:jpt_5FDC81[eax*4]; switch jump
0x5FDC88: mov     ecx, [esp+74h+var_60]; jumptable 005FDC81 cases 3,8
0x5FDC8C: call    sub_471210
0x5FDC91: test    al, al
0x5FDC93: jnz     short loc_5FDCA2; jumptable 005FDC81 cases 4,5,9,10
0x5FDC95: mov     ecx, [esp+74h+var_60]
0x5FDC99: call    sub_472EA0
0x5FDC9E: test    al, al
0x5FDCA0: jz      short Actor_ProcessAction___def_5FDC81; jumptable 005FDC81 default case, cases 6,7
0x5FDCA2: mov     ebp, 1; jumptable 005FDC81 cases 4,5,9,10
0x5FDCA7: mov     [esp+74h+var_5C], ebp
0x5FDCAB: cmp     esi, ds:0B333C4h; jumptable 005FDC81 default case, cases 6,7
0x5FDCB1: jnz     short loc_5FDCD8
0x5FDCB3: push    40Ch
0x5FDCB8: push    1; arg1
0x5FDCBA: push    0; canCreate
0x5FDCBC: call    InterfaceManager_GetSingleton
0x5FDCC1: add     esp, 8
0x5FDCC4: mov     ecx, eax
0x5FDCC6: call    sub_57CFB0
0x5FDCCB: test    al, al
0x5FDCCD: jz      short loc_5FDCD8
0x5FDCCF: mov     ebp, 1
0x5FDCD4: mov     [esp+74h+var_5C], ebp
0x5FDCD8: test    bl, 0Fh
0x5FDCDB: fld     [esp+74h+arg_0]
0x5FDCDF: fstp    [esp+74h+var_50]
0x5FDCE3: jz      loc_5FDDC9
0x5FDCE9: test    ebx, 200h
0x5FDCEF: jz      short loc_5FDD51
0x5FDCF1: test    bl, 1
0x5FDCF4: jz      short loc_5FDCFD
0x5FDCF6: mov     ebp, 7
0x5FDCFB: jmp     short loc_5FDD1F
0x5FDCFD: test    bl, 2
0x5FDD00: jz      short loc_5FDD09
0x5FDD02: mov     ebp, 8
0x5FDD07: jmp     short loc_5FDD1F
0x5FDD09: test    bl, 4
0x5FDD0C: jz      short loc_5FDD15
0x5FDD0E: mov     ebp, 9
0x5FDD13: jmp     short loc_5FDD1F
0x5FDD15: test    bl, 8
0x5FDD18: jz      short loc_5FDD23
0x5FDD1A: mov     ebp, 0Ah
0x5FDD1F: mov     [esp+74h+var_5C], ebp
0x5FDD23: mov     edx, [esi]
0x5FDD25: mov     eax, [edx+27Ch]
0x5FDD2B: mov     ecx, esi
0x5FDD2D: call    eax
0x5FDD2F: test    eax, eax
0x5FDD31: mov     ecx, esi
0x5FDD33: jnz     short loc_5FDD43
0x5FDD35: call    sub_5E3590
0x5FDD3A: fstp    [esp+74h+var_54]
0x5FDD3E: jmp     loc_5FDDE3
0x5FDD43: call    sub_5E3750
0x5FDD48: fstp    [esp+74h+var_54]
0x5FDD4C: jmp     loc_5FDDE3
0x5FDD51: test    ebx, 0FF00h
0x5FDD57: jz      loc_5FDDE3
0x5FDD5D: test    bl, 1
0x5FDD60: jz      short loc_5FDD78
0x5FDD62: mov     ebp, 3
0x5FDD67: mov     ecx, esi
0x5FDD69: mov     [esp+74h+var_5C], ebp
0x5FDD6D: call    sub_5E3590
0x5FDD72: fstp    [esp+74h+var_54]
0x5FDD76: jmp     short loc_5FDDE3
0x5FDD78: test    bl, 2
0x5FDD7B: jz      short loc_5FDD93
0x5FDD7D: mov     ebp, 4
0x5FDD82: mov     ecx, esi
0x5FDD84: mov     [esp+74h+var_5C], ebp
0x5FDD88: call    sub_5E3590
0x5FDD8D: fstp    [esp+74h+var_54]
0x5FDD91: jmp     short loc_5FDDE3
0x5FDD93: test    bl, 4
0x5FDD96: jz      short loc_5FDDAE
0x5FDD98: mov     ebp, 5
0x5FDD9D: mov     ecx, esi
0x5FDD9F: mov     [esp+74h+var_5C], ebp
0x5FDDA3: call    sub_5E3590
0x5FDDA8: fstp    [esp+74h+var_54]
0x5FDDAC: jmp     short loc_5FDDE3
0x5FDDAE: test    bl, 8
0x5FDDB1: jz      short loc_5FDDBC
0x5FDDB3: mov     ebp, 6
0x5FDDB8: mov     [esp+74h+var_5C], ebp
0x5FDDBC: mov     ecx, esi
0x5FDDBE: call    sub_5E3590
0x5FDDC3: fstp    [esp+74h+var_54]
0x5FDDC7: jmp     short loc_5FDDE3
0x5FDDC9: test    bl, 10h
0x5FDDCC: jz      short loc_5FDDD5
0x5FDDCE: mov     ebp, 0Fh
0x5FDDD3: jmp     short loc_5FDDDF
0x5FDDD5: test    bl, 20h
0x5FDDD8: jz      short loc_5FDDE3
0x5FDDDA: mov     ebp, 10h
0x5FDDDF: mov     [esp+74h+var_5C], ebp
0x5FDDE3: cmp     edi, 0FFFFFFFFh
0x5FDDE6: jz      short loc_5FDDF8
0x5FDDE8: mov     ecx, esi
0x5FDDEA: call    Actor_GetCurrentAction
0x5FDDEF: cmp     eax, 0FFFFFFFFh
0x5FDDF2: jnz     Actor_ProcessAction___Done
0x5FDDF8: fld1
0x5FDDFA: fcomp   [esp+74h+var_54]
0x5FDDFE: fnstsw  ax
0x5FDE00: test    ah, 41h
0x5FDE03: jnz     short loc_5FDE33
0x5FDE05: lea     ecx, [ebp-3]
0x5FDE08: cmp     ecx, 0Dh
0x5FDE0B: ja      short loc_5FDE33
0x5FDE0D: cmp     ebp, 0Fh
0x5FDE10: jz      short loc_5FDE33
0x5FDE12: cmp     ebp, 10h
0x5FDE15: jz      short loc_5FDE33
0x5FDE17: mov     ecx, ds:0B333C4h
0x5FDE1D: cmp     esi, ecx
0x5FDE1F: jnz     short loc_5FDE2B
0x5FDE21: mov     edx, [ecx]
0x5FDE23: mov     eax, [edx+25Ch]
0x5FDE29: call    eax
0x5FDE2B: mov     [esp+74h+var_5C], 0
0x5FDE33: mov     ecx, [esp+74h+var_5C]
0x5FDE37: mov     edx, dword ptr [esp+74h+var_48+4]
0x5FDE3B: mov     eax, [esp+74h+var_4C]
0x5FDE3F: push    0
0x5FDE41: push    ecx
0x5FDE42: push    edx
0x5FDE43: push    eax
0x5FDE44: call    sub_51A9B0
0x5FDE49: mov     edi, [esp+84h+var_60]
0x5FDE4D: add     esp, 0Ch
0x5FDE50: mov     ecx, edi
0x5FDE52: push    eax
0x5FDE53: call    sub_470D20
0x5FDE58: movzx   ebp, ax
0x5FDE5B: push    ebp
0x5FDE5C: call    sub_51AA00
0x5FDE61: add     esp, 4
0x5FDE64: cmp     [esp+74h+var_58], 0FFFFFFFFh
0x5FDE69: mov     ebx, eax
0x5FDE6B: jz      short loc_5FDE7B
0x5FDE6D: cmp     [esp+74h+var_5C], ebx
0x5FDE71: jz      short loc_5FDE7B
0x5FDE73: mov     [esp+74h+var_58], 0FFFFFFFFh
0x5FDE7B: mov     ecx, esi
0x5FDE7D: call    Actor_GetCurrentAction
0x5FDE82: cmp     eax, 0FFFFFFFFh
0x5FDE85: jz      loc_5FDFB3
0x5FDE8B: mov     ecx, [esi+58h]
0x5FDE8E: mov     edx, [ecx]
0x5FDE90: mov     eax, [edx+2D4h]
0x5FDE96: call    eax
0x5FDE98: test    eax, eax
0x5FDE9A: jz      loc_5FDFB3
0x5FDEA0: lea     ecx, [ebx+ebx*8]
0x5FDEA3: mov     edx, ds:0B102E8h[ecx*4]
0x5FDEAA: push    edx
0x5FDEAB: mov     ecx, edi
0x5FDEAD: call    sub_4706E0
0x5FDEB2: mov     ecx, [esi+58h]
0x5FDEB5: mov     [esp+74h+arg_0], eax
0x5FDEB9: mov     eax, [ecx]
0x5FDEBB: mov     edx, [eax+2D4h]
0x5FDEC1: call    edx
0x5FDEC3: cmp     [esp+74h+arg_0], eax
0x5FDEC7: jnz     loc_5FDFB3
0x5FDECD: mov     ecx, esi
0x5FDECF: call    Actor_GetCurrentAction
0x5FDED4: cmp     eax, 0Ch
0x5FDED7: jnz     Actor_ProcessAction___Done
0x5FDEDD: mov     ebx, edi
0x5FDEDF: push    0
0x5FDEE1: mov     ecx, ebx
0x5FDEE3: call    ActorAnimData_GetAnimGroupFromField8Value
0x5FDEE8: movzx   edi, ax
0x5FDEEB: mov     eax, [esi]
0x5FDEED: mov     edx, [eax+27Ch]
0x5FDEF3: mov     ecx, esi
0x5FDEF5: call    edx
0x5FDEF7: test    eax, eax
0x5FDEF9: jz      short loc_5FDF25; jumptable 005FDF13 cases 4-6,11-14
0x5FDEFB: push    edi
0x5FDEFC: call    sub_51AA00
0x5FDF01: add     eax, 0FFFFFFFCh; switch 11 cases
0x5FDF04: add     esp, 4
0x5FDF07: cmp     eax, 0Ah
0x5FDF0A: ja      short Actor_ProcessAction___def_5FDF13; jumptable 005FDF13 default case, case 7
0x5FDF0C: movzx   eax, ds:byte_5FE340[eax]
0x5FDF13: jmp     ds:jpt_5FDF13[eax*4]; switch jump
0x5FDF1A: and     edi, 0FF07h; jumptable 005FDF13 cases 8-10
0x5FDF20: or      edi, 7
0x5FDF23: jmp     short Actor_ProcessAction___def_5FDF13; jumptable 005FDF13 default case, case 7
0x5FDF25: and     edi, 0FF03h; jumptable 005FDF13 cases 4-6,11-14
0x5FDF2B: or      edi, 3
0x5FDF2E: push    edi; jumptable 005FDF13 default case, case 7
0x5FDF2F: call    sub_51AA00
0x5FDF34: add     eax, 0FFFFFFFDh; switch 14 cases
0x5FDF37: add     esp, 4
0x5FDF3A: cmp     eax, 0Dh
0x5FDF3D: ja      short Actor_ProcessAction___def_5FDF46; jumptable 005FDF46 default case
0x5FDF3F: movzx   ecx, ds:byte_5FE358[eax]
0x5FDF46: jmp     ds:jpt_5FDF46[ecx*4]; switch jump
0x5FDF4D: mov     ecx, esi; jumptable 005FDF46 cases 7-10
0x5FDF4F: call    sub_5E3750
0x5FDF54: fstp    [esp+74h+var_54]
0x5FDF58: push    edi; jumptable 005FDF46 default case
0x5FDF59: mov     ecx, ebx
0x5FDF5B: call    sub_472330
0x5FDF60: test    ax, ax
0x5FDF63: jz      short loc_5FDF8C
0x5FDF65: fld     [esp+74h+var_54]
0x5FDF69: push    edi
0x5FDF6A: mov     ecx, ebx
0x5FDF6C: fstp    [esp+78h+var_28+4]
0x5FDF70: call    sub_472330
0x5FDF75: movsx   edx, ax
0x5FDF78: mov     [esp+74h+arg_4], edx
0x5FDF7C: fild    [esp+74h+arg_4]
0x5FDF80: fdivr   [esp+74h+var_28+4]
0x5FDF84: fmul    [esp+74h+var_50]
0x5FDF88: fstp    [esp+74h+var_50]
0x5FDF8C: fld     [esp+74h+var_50]
0x5FDF90: fstp    dword ptr [ebx+0BCh]
0x5FDF96: jmp     Actor_ProcessAction___Done
0x5FDF9B: mov     ecx, esi; jumptable 005FDF46 cases 3-6,11-14
0x5FDF9D: call    sub_5E3590
0x5FDFA2: jmp     short loc_5FDF54
0x5FDFA4: fld     [esp+74h+arg_4]; jumptable 005FDF46 cases 15,16
0x5FDFA8: fstp    dword ptr [ebx+0BCh]
0x5FDFAE: jmp     Actor_ProcessAction___Done
0x5FDFB3: cmp     bp, 0FFh
0x5FDFB8: jz      loc_5FE0B8
0x5FDFBE: cmp     ebx, 0Fh
0x5FDFC1: jz      loc_5FE0AE
0x5FDFC7: cmp     ebx, 10h
0x5FDFCA: jz      loc_5FE0AE
0x5FDFD0: cmp     ebx, 3
0x5FDFD3: jl      loc_5FE076
0x5FDFD9: cmp     ebx, 10h
0x5FDFDC: jg      loc_5FE076
0x5FDFE2: mov     eax, [esi]
0x5FDFE4: mov     edx, [eax+27Ch]
0x5FDFEA: mov     ecx, esi
0x5FDFEC: movzx   edi, bp
0x5FDFEF: call    edx
0x5FDFF1: test    eax, eax
0x5FDFF3: jz      short loc_5FE021; jumptable 005FE00D cases 4-6,11-14
0x5FDFF5: push    ebp
0x5FDFF6: call    sub_51AA00
0x5FDFFB: add     eax, 0FFFFFFFCh; switch 11 cases
0x5FDFFE: add     esp, 4
0x5FE001: cmp     eax, 0Ah
0x5FE004: ja      short Actor_ProcessAction___def_5FE00D; jumptable 005FE00D default case, case 7
0x5FE006: movzx   eax, ds:byte_5FE374[eax]
0x5FE00D: jmp     ds:jpt_5FE00D[eax*4]; switch jump
0x5FE014: mov     edi, ebp; jumptable 005FE00D cases 8-10
0x5FE016: and     edi, 0FF07h
0x5FE01C: or      edi, 7
0x5FE01F: jmp     short Actor_ProcessAction___def_5FE00D; jumptable 005FE00D default case, case 7
0x5FE021: mov     edi, ebp; jumptable 005FE00D cases 4-6,11-14
0x5FE023: and     edi, 0FF03h
0x5FE029: or      edi, 3
0x5FE02C: mov     ecx, [esp+74h+var_60]; jumptable 005FE00D default case, case 7
0x5FE030: push    edi
0x5FE031: call    sub_472330
0x5FE036: test    ax, ax
0x5FE039: jz      short loc_5FE064
0x5FE03B: fld     [esp+74h+var_54]
0x5FE03F: mov     ecx, [esp+74h+var_60]
0x5FE043: push    edi
0x5FE044: fstp    [esp+78h+var_28+4]
0x5FE048: call    sub_472330
0x5FE04D: movsx   ecx, ax
0x5FE050: mov     [esp+74h+arg_4], ecx
0x5FE054: fild    [esp+74h+arg_4]
0x5FE058: fdivr   [esp+74h+var_28+4]
0x5FE05C: fmul    [esp+74h+var_50]
0x5FE060: fstp    [esp+74h+var_50]
0x5FE064: mov     edx, [esp+74h+var_60]
0x5FE068: fld     [esp+74h+var_50]
0x5FE06C: fstp    dword ptr [edx+0BCh]
0x5FE072: mov     edi, edx
0x5FE074: jmp     short loc_5FE0B8
0x5FE076: cmp     ebx, 11h
0x5FE079: jl      short loc_5FE0B8
0x5FE07B: cmp     ebx, 1Ah
0x5FE07E: jg      short loc_5FE0B8
0x5FE080: mov     ecx, [esi+58h]
0x5FE083: mov     eax, [ecx]
0x5FE085: mov     edx, [eax+0ECh]
0x5FE08B: push    1
0x5FE08D: call    edx
0x5FE08F: test    eax, eax
0x5FE091: jz      short loc_5FE0A4
0x5FE093: mov     eax, [eax+8]
0x5FE096: fld     dword ptr [eax+94h]
0x5FE09C: fstp    dword ptr [edi+0C0h]
0x5FE0A2: jmp     short loc_5FE0B8
0x5FE0A4: fld1
0x5FE0A6: fstp    dword ptr [edi+0C0h]
0x5FE0AC: jmp     short loc_5FE0B8
0x5FE0AE: fld     [esp+74h+arg_4]
0x5FE0B2: fstp    dword ptr [edi+0BCh]
0x5FE0B8: lea     eax, [ebx+ebx*8]
0x5FE0BB: mov     ecx, ds:0B102E8h[eax*4]
0x5FE0C2: push    ecx
0x5FE0C3: mov     ecx, edi
0x5FE0C5: call    ActorAnimData_GetAnimGroupFromField8Value
0x5FE0CA: cmp     ax, bp
0x5FE0CD: jz      loc_5FE178
0x5FE0D3: push    ebp
0x5FE0D4: mov     ecx, edi
0x5FE0D6: call    sub_470D00
0x5FE0DB: test    al, al
0x5FE0DD: jz      loc_5FE178
0x5FE0E3: push    0FFFFFFFFh
0x5FE0E5: push    1
0x5FE0E7: push    ebp
0x5FE0E8: mov     ecx, edi
0x5FE0EA: call    ActorAnimData_PlayAnimGroup
0x5FE0EF: cmp     [esp+74h+var_58], 0FFFFFFFFh
0x5FE0F4: jz      short loc_5FE122
0x5FE0F6: push    ebp
0x5FE0F7: call    TESAnimGroup_IsAnimGroupIdle
0x5FE0FC: add     esp, 4
0x5FE0FF: test    al, al
0x5FE101: jnz     short loc_5FE122
0x5FE103: lea     eax, [ebx+ebx*8]
0x5FE106: mov     edx, ds:0B102E8h[eax*4]
0x5FE10D: push    edx
0x5FE10E: mov     ecx, edi
0x5FE110: call    sub_4706E0
0x5FE115: push    eax
0x5FE116: mov     eax, [esp+78h+var_58]
0x5FE11A: push    eax
0x5FE11B: mov     ecx, esi
0x5FE11D: call    HighPRocess_DoAction?????
0x5FE122: mov     edx, [esi]
0x5FE124: mov     eax, [edx+3A4h]
0x5FE12A: push    1
0x5FE12C: push    ebp
0x5FE12D: mov     ecx, esi
0x5FE12F: call    eax
0x5FE131: cmp     ebx, 28h ; '('
0x5FE134: jnz     short loc_5FE178
0x5FE136: mov     ecx, dword ptr [esp+74h+var_48+4]
0x5FE13A: mov     edx, [esp+74h+var_4C]
0x5FE13E: push    0
0x5FE140: push    29h ; ')'
0x5FE142: push    ecx
0x5FE143: push    edx
0x5FE144: call    sub_51A9B0
0x5FE149: mov     ebx, [esp+84h+var_60]
0x5FE14D: add     esp, 0Ch
0x5FE150: mov     ecx, ebx
0x5FE152: push    eax
0x5FE153: call    sub_470D20
0x5FE158: push    0FFFFFFFFh
0x5FE15A: movzx   edi, ax
0x5FE15D: push    0
0x5FE15F: push    edi
0x5FE160: mov     ecx, ebx
0x5FE162: call    ActorAnimData_PlayAnimGroup
0x5FE167: mov     eax, [esi]
0x5FE169: mov     edx, [eax+3A4h]
0x5FE16F: push    0
0x5FE171: push    edi
0x5FE172: mov     ecx, esi
0x5FE174: call    edx
0x5FE176: mov     edi, ebx
0x5FE178: push    2
0x5FE17A: mov     ecx, edi
0x5FE17C: call    sub_4706E0
0x5FE181: mov     ecx, [esi+58h]
0x5FE184: mov     ebx, eax
0x5FE186: mov     eax, [ecx]
0x5FE188: mov     edx, [eax+0F0h]
0x5FE18E: push    1
0x5FE190: call    edx
0x5FE192: test    eax, eax
0x5FE194: jz      loc_5FE21F
0x5FE19A: mov     ecx, ds:0B333C4h; this
0x5FE1A0: cmp     esi, ecx
0x5FE1A2: jnz     short loc_5FE1AD
0x5FE1A4: call    sub_5E6C10
0x5FE1A9: test    al, al
0x5FE1AB: jnz     short loc_5FE21F
0x5FE1AD: mov     eax, dword ptr [esp+74h+var_48+4]
0x5FE1B1: mov     ecx, [esp+74h+var_4C]
0x5FE1B5: push    0
0x5FE1B7: push    21h ; '!'
0x5FE1B9: push    eax
0x5FE1BA: push    ecx
0x5FE1BB: call    sub_51A9B0
0x5FE1C0: mov     ebx, [esp+84h+var_60]
0x5FE1C4: add     esp, 0Ch
0x5FE1C7: mov     ecx, ebx
0x5FE1C9: push    eax
0x5FE1CA: call    sub_470D20
0x5FE1CF: movzx   edi, ax
0x5FE1D2: push    edi
0x5FE1D3: call    sub_51AA00
0x5FE1D8: lea     edx, [eax+eax*8]
0x5FE1DB: mov     eax, ds:0B102E8h[edx*4]
0x5FE1E2: add     esp, 4
0x5FE1E5: push    eax
0x5FE1E6: mov     ecx, ebx
0x5FE1E8: call    ActorAnimData_GetAnimGroupFromField8Value
0x5FE1ED: cmp     ax, di
0x5FE1F0: jz      loc_5FE272
0x5FE1F6: push    edi
0x5FE1F7: mov     ecx, ebx
0x5FE1F9: call    sub_470D00
0x5FE1FE: test    al, al
0x5FE200: jz      short loc_5FE272
0x5FE202: push    0FFFFFFFFh
0x5FE204: push    1
0x5FE206: push    edi
0x5FE207: mov     ecx, ebx
0x5FE209: call    ActorAnimData_PlayAnimGroup
0x5FE20E: mov     edx, [esi]
0x5FE210: mov     eax, [edx+3A4h]
0x5FE216: push    1
0x5FE218: push    edi
0x5FE219: mov     ecx, esi
0x5FE21B: call    eax
0x5FE21D: jmp     short loc_5FE272
0x5FE21F: mov     ecx, [esi+58h]
0x5FE222: mov     edx, [ecx]
0x5FE224: mov     eax, [edx+0F0h]
0x5FE22A: push    1
0x5FE22C: call    eax
0x5FE22E: test    eax, eax
0x5FE230: jnz     short loc_5FE272
0x5FE232: test    ebx, ebx
0x5FE234: jz      short loc_5FE272
0x5FE236: mov     ecx, [ebx+68h]
0x5FE239: call    TESAnimGroup_GetAnimationGroup
0x5FE23E: cmp     eax, 21h ; '!'
0x5FE241: jnz     short loc_5FE272
0x5FE243: fldz
0x5FE245: push    ecx
0x5FE246: fstp    [esp+78h+duration]; float
0x5FE249: mov     ecx, edi
0x5FE24B: push    2; int
0x5FE24D: call    sub_470FC0
0x5FE252: mov     ecx, ds:0B333C4h; this
0x5FE258: cmp     esi, ecx
0x5FE25A: jnz     short loc_5FE272
0x5FE25C: fldz
0x5FE25E: push    ecx
0x5FE25F: fstp    [esp+78h+duration]; float
0x5FE262: push    2; int
0x5FE264: push    1; a2
0x5FE266: call    Player_GetAnimData
0x5FE26B: mov     ecx, eax
0x5FE26D: call    sub_470FC0
0x5FE272: mov     edi, [esp+74h+var_60]
0x5FE276: push    3
0x5FE278: mov     ecx, edi
0x5FE27A: call    sub_4706E0
0x5FE27F: test    eax, eax
0x5FE281: jz      short Actor_ProcessAction___Done
0x5FE283: push    3
0x5FE285: mov     ecx, edi
0x5FE287: call    ActorAnimData_GetAnimGroupFromField8Value
0x5FE28C: push    eax
0x5FE28D: call    sub_51AC80
0x5FE292: add     esp, 4
0x5FE295: test    al, al
0x5FE297: jz      short Actor_ProcessAction___Done
0x5FE299: mov     ecx, [esi+58h]
0x5FE29C: mov     edi, [ecx]
0x5FE29E: lea     edx, [esp+74h+a2]
0x5FE2A2: push    edx; a2
0x5FE2A3: mov     ecx, esi; this
0x5FE2A5: add     edi, 30Ch
0x5FE2AB: call    sub_5E6A40
0x5FE2B0: mov     edx, [eax]
0x5FE2B2: sub     esp, 0Ch
0x5FE2B5: mov     ecx, esp
0x5FE2B7: mov     [ecx], edx
0x5FE2B9: mov     edx, [eax+4]
0x5FE2BC: mov     eax, [eax+8]
0x5FE2BF: mov     [ecx+4], edx
0x5FE2C2: mov     edx, [edi]
0x5FE2C4: mov     [ecx+8], eax
0x5FE2C7: mov     ecx, [esi+58h]
0x5FE2CA: call    edx
0x5FE2CC: mov     ecx, [esp+74h+var_C]
0x5FE2D0: mov     large fs:0, ecx
0x5FE2D7: pop     ecx
0x5FE2D8: pop     edi
0x5FE2D9: pop     esi
0x5FE2DA: pop     ebp
0x5FE2DB: pop     ebx
0x5FE2DC: add     esp, 60h
0x5FE2DF: retn    8
