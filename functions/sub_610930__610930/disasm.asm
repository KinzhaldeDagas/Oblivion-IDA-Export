0x610930: push    0FFFFFFFFh
0x610932: push    offset SEH_610930
0x610937: mov     eax, large fs:0
0x61093D: push    eax
0x61093E: sub     esp, 27Ch
0x610944: mov     eax, ds:0B30AACh
0x610949: xor     eax, esp
0x61094B: mov     [esp+288h+var_10], eax
0x610952: push    ebx
0x610953: push    ebp
0x610954: push    esi
0x610955: push    edi
0x610956: mov     eax, ds:0B30AACh
0x61095B: xor     eax, esp
0x61095D: push    eax
0x61095E: lea     eax, [esp+29Ch+var_C]
0x610965: mov     large fs:0, eax
0x61096B: mov     edi, [esp+29Ch+arg_0]
0x610972: xor     ebx, ebx
0x610974: push    ebx; int
0x610975: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x61097A: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x61097F: mov     ebp, ecx
0x610981: push    ebx; int
0x610982: push    edi; void *
0x610983: mov     [esp+2B0h+var_26C], ebp
0x610987: mov     [esp+2B0h+var_278], edi
0x61098B: call    OblivionDynamicCast
0x610990: add     esp, 14h
0x610993: mov     ecx, ebp
0x610995: mov     esi, eax
0x610997: call    Actor__GetRaceIfNPC
0x61099C: test    byte ptr [eax+70h], 1
0x6109A0: jnz     short loc_6109B1
0x6109A2: mov     ecx, ebp; this
0x6109A4: call    sub_5E6C60
0x6109A9: test    al, al
0x6109AB: jz      loc_610E7A
0x6109B1: mov     ecx, ds:0B333C4h
0x6109B7: push    ebx
0x6109B8: call    PlayerCharacter_IsPlayerInCombat
0x6109BD: test    al, al
0x6109BF: jnz     short loc_6109D8
0x6109C1: mov     ecx, ds:0B333C4h; this
0x6109C7: cmp     esi, ecx
0x6109C9: jnz     short loc_6109D8
0x6109CB: call    PlayerCharacter__IsJailed; Check the meaning of JailedState
0x6109D0: test    al, al
0x6109D2: jnz     loc_610E7A
0x6109D8: mov     eax, [ebp+0]
0x6109DB: mov     edx, [eax+354h]
0x6109E1: mov     ecx, ebp
0x6109E3: call    edx
0x6109E5: test    al, al
0x6109E7: jnz     loc_610E7A
0x6109ED: mov     ecx, esi; this
0x6109EF: call    Actor_IsNPC
0x6109F4: test    al, al
0x6109F6: jz      loc_610E7A
0x6109FC: mov     ecx, esi
0x6109FE: call    Actor__GetRaceIfNPC
0x610A03: test    byte ptr [eax+70h], 1
0x610A07: jz      loc_610E7A
0x610A0D: mov     ecx, esi; this
0x610A0F: call    sub_5E6C60
0x610A14: test    al, al
0x610A16: jnz     loc_610E7A
0x610A1C: mov     ecx, ebp
0x610A1E: call    sub_5E8A90
0x610A23: test    al, al
0x610A25: jz      short loc_610A3A
0x610A27: cmp     esi, ebx
0x610A29: jz      short loc_610A3A
0x610A2B: mov     ecx, esi
0x610A2D: call    sub_5E8A90
0x610A32: test    al, al
0x610A34: jnz     loc_610E7A
0x610A3A: mov     ecx, esi; this
0x610A3C: call    sub_5E6C60
0x610A41: test    al, al
0x610A43: jnz     loc_610E7A
0x610A49: cmp     esi, ebx
0x610A4B: jz      short loc_610A77
0x610A4D: cmp     esi, ds:0B333C4h
0x610A53: jz      short loc_610A77
0x610A55: mov     eax, [esi]
0x610A57: mov     edx, [eax+284h]
0x610A5D: push    1Fh
0x610A5F: mov     ecx, esi
0x610A61: call    edx
0x610A63: cmp     eax, 64h ; 'd'
0x610A66: jnz     short loc_610A77
0x610A68: mov     ecx, esi
0x610A6A: call    Actor_IsSneaking
0x610A6F: test    al, al
0x610A71: jnz     loc_610E7A
0x610A77: push    30h ; '0'; Size
0x610A79: call    FormHeapAlloc
0x610A7E: add     esp, 4
0x610A81: mov     dword ptr [esp+29Ch+var_274], eax
0x610A85: cmp     eax, ebx
0x610A87: mov     [esp+29Ch+var_4], ebx
0x610A8E: jz      short loc_610AA0
0x610A90: push    ebx
0x610A91: push    ebx
0x610A92: push    ebx
0x610A93: push    edi
0x610A94: push    ebp
0x610A95: push    3
0x610A97: mov     ecx, eax
0x610A99: call    sub_6070B0
0x610A9E: mov     ebx, eax
0x610AA0: mov     eax, ds:0B333C4h
0x610AA5: cmp     [ebx+0Ch], eax
0x610AA8: mov     [esp+29Ch+var_4], 0FFFFFFFFh
0x610AB3: jnz     short loc_610ABC
0x610AB5: add     dword ptr [eax+6D4h], 1
0x610ABC: push    ebx
0x610ABD: mov     ecx, offset ActorProcessManager_ptr
0x610AC2: call    sub_67A290
0x610AC7: mov     esi, eax
0x610AC9: test    esi, esi
0x610ACB: mov     dword ptr [esp+29Ch+var_288+4], esi
0x610ACF: jnz     short loc_610B03
0x610AD1: mov     ecx, ebp; this
0x610AD3: call    sub_5E6C60
0x610AD8: test    al, al
0x610ADA: jz      short loc_610B03
0x610ADC: push    8; Size
0x610ADE: call    FormHeapAlloc
0x610AE3: add     esp, 4
0x610AE6: test    eax, eax
0x610AE8: jz      short loc_610AF1
0x610AEA: mov     [eax], esi
0x610AEC: mov     [eax+4], esi
0x610AEF: jmp     short loc_610AF3
0x610AF1: xor     eax, eax
0x610AF3: push    ebp
0x610AF4: mov     ecx, eax
0x610AF6: mov     dword ptr [esp+2A0h+var_288+4], eax
0x610AFA: call    BSSimpleList_PushFront
0x610AFF: mov     esi, dword ptr [esp+29Ch+var_288+4]
0x610B03: test    esi, esi
0x610B05: mov     dword ptr [esp+29Ch+var_274], esi
0x610B09: jz      loc_610E17
0x610B0F: mov     byte ptr [esp+29Ch+var_288+3], 0
0x610B14: jmp     short loc_610B1A
0x610B16: mov     esi, dword ptr [esp+29Ch+var_288+4]
0x610B1A: mov     esi, [esi]
0x610B1C: test    esi, esi
0x610B1E: jz      loc_610DBC
0x610B24: mov     eax, [esi+8]
0x610B27: shr     eax, 0Bh
0x610B2A: test    al, 1
0x610B2C: jz      short loc_610B44
0x610B2E: mov     edx, [esi]
0x610B30: mov     eax, [edx+334h]
0x610B36: push    1
0x610B38: mov     ecx, esi
0x610B3A: call    eax
0x610B3C: test    al, al
0x610B3E: jnz     loc_610DA9
0x610B44: mov     ecx, ebp
0x610B46: call    sub_4DB760
0x610B4B: test    al, al
0x610B4D: jz      short loc_610B5E
0x610B4F: mov     ecx, esi
0x610B51: call    sub_4DB760
0x610B56: test    al, al
0x610B58: jz      loc_610CE5
0x610B5E: mov     ecx, [ebx+8]; this
0x610B61: cmp     esi, ecx
0x610B63: mov     byte ptr [esp+29Ch+var_270], 0
0x610B68: jz      short loc_610B73
0x610B6A: call    TESObjectREFR_GetOwner
0x610B6F: cmp     eax, esi
0x610B71: jnz     short loc_610B78
0x610B73: mov     byte ptr [esp+29Ch+var_270], 1
0x610B78: cmp     byte ptr [esp+29Ch+arg_4], 0
0x610B80: jnz     short loc_610B8D
0x610B82: mov     ecx, esi; this
0x610B84: call    sub_5E6C60
0x610B89: test    al, al
0x610B8B: jnz     short loc_610BBE
0x610B8D: mov     ecx, [esp+29Ch+var_270]
0x610B91: push    ecx
0x610B92: push    esi
0x610B93: mov     ecx, ebx
0x610B95: call    sub_605F60
0x610B9A: mov     edx, [esi]
0x610B9C: mov     edx, [edx+374h]
0x610BA2: mov     dword ptr [esp+29Ch+var_280], eax
0x610BA6: fild    dword ptr [esp+29Ch+var_280]
0x610BAA: mov     eax, [ebx+0Ch]
0x610BAD: push    ecx
0x610BAE: mov     ecx, esi
0x610BB0: fstp    dword ptr [esp+2A0h+var_280]
0x610BB4: fld     dword ptr [esp+2A0h+var_280]
0x610BB8: fstp    [esp+2A0h+var_2A0]
0x610BBB: push    eax
0x610BBC: call    edx
0x610BBE: mov     ecx, esi; this
0x610BC0: call    sub_5E6C60
0x610BC5: test    al, al
0x610BC7: jnz     short loc_610C36
0x610BC9: mov     eax, [ebx+0Ch]
0x610BCC: mov     edx, [esi]
0x610BCE: push    esi
0x610BCF: push    eax
0x610BD0: mov     eax, [edx+224h]
0x610BD6: mov     ecx, esi
0x610BD8: call    eax
0x610BDA: push    eax
0x610BDB: mov     ecx, ebx
0x610BDD: call    sub_605E20
0x610BE2: test    al, al
0x610BE4: jnz     short loc_610C36
0x610BE6: mov     edx, [ebp+0]
0x610BE9: mov     eax, [edx+170h]
0x610BEF: mov     ecx, ebp
0x610BF1: call    eax
0x610BF3: mov     ds:0B361C4h, eax
0x610BF8: mov     ecx, [ebx+0Ch]
0x610BFB: push    0Bh
0x610BFD: push    2
0x610BFF: mov     [esi+0E4h], ecx
0x610C05: call    TESTopic__GEtTopic
0x610C0A: mov     ecx, [esi+58h]
0x610C0D: mov     edx, [ecx]
0x610C0F: add     esp, 8
0x610C12: push    1
0x610C14: push    0
0x610C16: push    0
0x610C18: push    eax
0x610C19: mov     eax, [edx+1A4h]
0x610C1F: push    esi
0x610C20: call    eax
0x610C22: mov     dword ptr ds:0B361C4h, 0
0x610C2C: mov     byte ptr [esp+29Ch+var_288+3], 1
0x610C31: jmp     loc_610CF0
0x610C36: mov     ecx, ebp
0x610C38: call    sub_4DB760
0x610C3D: test    al, al
0x610C3F: jnz     loc_610CC8
0x610C45: mov     edx, [ebp+0]
0x610C48: mov     eax, [edx+170h]
0x610C4E: mov     ecx, ebp
0x610C50: call    eax
0x610C52: mov     ds:0B361C4h, eax
0x610C57: mov     ecx, [ebx+0Ch]
0x610C5A: push    8
0x610C5C: push    2
0x610C5E: mov     [esi+0E4h], ecx
0x610C64: call    TESTopic__GEtTopic
0x610C69: mov     edi, eax
0x610C6B: mov     eax, [ebx+0Ch]
0x610C6E: add     esp, 8
0x610C71: test    eax, eax
0x610C73: jz      short loc_610C9D
0x610C75: push    eax
0x610C76: mov     ecx, esi
0x610C78: call    sub_5EA050
0x610C7D: test    al, al
0x610C7F: jz      short loc_610C9D
0x610C81: mov     edx, [esi]
0x610C83: mov     eax, [ebx+0Ch]
0x610C86: mov     edx, [edx+32Ch]
0x610C8C: push    1
0x610C8E: push    0
0x610C90: push    0
0x610C92: push    0
0x610C94: push    0
0x610C96: push    eax
0x610C97: mov     ecx, esi
0x610C99: call    edx
0x610C9B: jmp     short loc_610CB2
0x610C9D: mov     ecx, [esi+58h]
0x610CA0: mov     eax, [ecx]
0x610CA2: mov     edx, [eax+1A4h]
0x610CA8: push    1
0x610CAA: push    0
0x610CAC: push    0
0x610CAE: push    edi
0x610CAF: push    esi
0x610CB0: call    edx
0x610CB2: push    ebp
0x610CB3: mov     ecx, ebx
0x610CB5: call    sub_605F00
0x610CBA: mov     edi, [esp+29Ch+var_278]
0x610CBE: mov     dword ptr ds:0B361C4h, 0
0x610CC8: mov     eax, [esi]
0x610CCA: mov     edx, [eax+310h]
0x610CD0: push    0
0x610CD2: push    1
0x610CD4: push    0
0x610CD6: push    ebx
0x610CD7: mov     ecx, esi
0x610CD9: call    edx
0x610CDB: mov     byte ptr [esp+29Ch+var_288+3], 0
0x610CE0: jmp     loc_610DA9
0x610CE5: cmp     byte ptr [esp+29Ch+var_288+3], 0
0x610CEA: jz      loc_610DA9
0x610CF0: cmp     ebp, esi
0x610CF2: jnz     short loc_610D1C
0x610CF4: cmp     esi, edi
0x610CF6: jz      loc_610DA9
0x610CFC: mov     ecx, esi
0x610CFE: call    sub_5E0380
0x610D03: test    eax, eax
0x610D05: jz      short loc_610D1C
0x610D07: mov     ecx, esi
0x610D09: call    sub_5E0380
0x610D0E: mov     eax, [eax+1Ch]
0x610D11: shr     eax, 0Ch
0x610D14: test    al, 1
0x610D16: jnz     loc_610DA9
0x610D1C: push    0
0x610D1E: push    esi
0x610D1F: mov     ecx, edi
0x610D21: call    TesObjectREF_GetDistance
0x610D26: fstp    [esp+29Ch+var_280]
0x610D2A: mov     ecx, offset flt_B36B08
0x610D2F: call    GameSetting_GetSafeFloatPointer
0x610D34: fld     dword ptr [eax]
0x610D36: fcomp   [esp+29Ch+var_280]
0x610D3A: fnstsw  ax
0x610D3C: test    ah, 1
0x610D3F: jnz     short loc_610DA9
0x610D41: push    edi
0x610D42: push    0Ch
0x610D44: mov     ecx, offset dword_B3BDB0
0x610D49: call    sub_67CF50
0x610D4E: mov     edi, eax
0x610D50: test    edi, edi
0x610D52: mov     dword ptr [esp+29Ch+var_280], edi
0x610D56: jz      short loc_610D8F
0x610D58: mov     ebp, [edi]
0x610D5A: test    ebp, ebp
0x610D5C: jz      short loc_610D8B
0x610D5E: mov     edi, [edi+4]
0x610D61: mov     ecx, ebp
0x610D63: call    sub_67B710
0x610D68: test    eax, eax
0x610D6A: jz      short loc_610D87
0x610D6C: push    0
0x610D6E: push    esi
0x610D6F: mov     ecx, ebp
0x610D71: call    sub_67B6B0
0x610D76: test    eax, eax
0x610D78: jnz     short loc_610D87
0x610D7A: mov     edx, [esi]
0x610D7C: mov     eax, [edx+314h]
0x610D82: push    ebp
0x610D83: mov     ecx, esi
0x610D85: call    eax
0x610D87: test    edi, edi
0x610D89: jnz     short loc_610D58
0x610D8B: mov     ebp, [esp+29Ch+var_26C]
0x610D8F: mov     ecx, dword ptr [esp+29Ch+var_280]
0x610D93: call    BSSimpleList_Clear
0x610D98: mov     ecx, dword ptr [esp+29Ch+var_280]
0x610D9C: push    ecx
0x610D9D: call    FormHeapFree
0x610DA2: mov     edi, [esp+2A0h+var_278]
0x610DA6: add     esp, 4
0x610DA9: mov     edx, dword ptr [esp+29Ch+var_288+4]
0x610DAD: mov     eax, [edx+4]
0x610DB0: test    eax, eax
0x610DB2: mov     dword ptr [esp+29Ch+var_288+4], eax
0x610DB6: jnz     loc_610B16
0x610DBC: mov     ecx, ebx
0x610DBE: call    sub_605F30
0x610DC3: test    eax, eax
0x610DC5: jnz     short loc_610E06
0x610DC7: mov     ecx, ebx
0x610DC9: call    sub_605E80
0x610DCE: push    ebx
0x610DCF: call    FormHeapFree
0x610DD4: add     esp, 4
0x610DD7: mov     ecx, edi; this
0x610DD9: call    TESObjectREFR_GetName
0x610DDE: push    eax
0x610DDF: mov     ecx, ebp; this
0x610DE1: call    TESObjectREFR_GetName
0x610DE6: push    eax
0x610DE7: lea     eax, [esp+2A4h+Format]
0x610DEB: push    offset aSAttackingSNoO; "%s attacking %s no one cared"
0x610DF0: push    eax
0x610DF1: call    __sprintf
0x610DF6: lea     ecx, [esp+2ACh+Format]
0x610DFA: push    ecx; Format
0x610DFB: call    Interface_ConsolePrint
0x610E00: mov     esi, dword ptr [esp+2B0h+var_288+4]
0x610E04: jmp     short loc_610E56
0x610E06: push    ebx
0x610E07: mov     ecx, offset ActorProcessManager_ptr
0x610E0C: call    sub_675B30
0x610E11: mov     esi, dword ptr [esp+29Ch+var_288+4]
0x610E15: jmp     short loc_610E59
0x610E17: mov     ecx, ebx
0x610E19: call    sub_605E80
0x610E1E: push    ebx
0x610E1F: call    FormHeapFree
0x610E24: add     esp, 4
0x610E27: mov     ecx, edi; this
0x610E29: call    TESObjectREFR_GetName
0x610E2E: push    eax
0x610E2F: mov     ecx, ebp; this
0x610E31: call    TESObjectREFR_GetName
0x610E36: push    eax
0x610E37: lea     edx, [esp+2A4h+var_13C]
0x610E3E: push    offset aSGotAwayWithAt; "%s got away with attacking %s"
0x610E43: push    edx
0x610E44: call    __sprintf
0x610E49: lea     eax, [esp+2ACh+var_13C]
0x610E50: push    eax; Format
0x610E51: call    Interface_ConsolePrint
0x610E56: add     esp, 14h
0x610E59: mov     edi, dword ptr [esp+29Ch+var_274]
0x610E5D: test    edi, edi
0x610E5F: jz      short loc_610E71
0x610E61: mov     ecx, edi
0x610E63: call    BSSimpleList_Clear
0x610E68: push    edi
0x610E69: call    FormHeapFree
0x610E6E: add     esp, 4
0x610E71: push    esi
0x610E72: call    FormHeapFree
0x610E77: add     esp, 4
0x610E7A: mov     ecx, dword ptr [esp+29Ch+var_C]
0x610E81: mov     large fs:0, ecx
0x610E88: pop     ecx
0x610E89: pop     edi
0x610E8A: pop     esi
0x610E8B: pop     ebp
0x610E8C: pop     ebx
0x610E8D: mov     ecx, [esp+288h+var_10]
0x610E94: xor     ecx, esp
0x610E96: call    @__security_check_cookie@4; __security_check_cookie(x)
0x610E9B: add     esp, 288h
0x610EA1: retn    8
