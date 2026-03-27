0x5B2B70: push    ebp
0x5B2B71: mov     ebp, esp
0x5B2B73: and     esp, 0FFFFFFC0h
0x5B2B76: push    0FFFFFFFFh
0x5B2B78: push    offset SEH_5B2B70
0x5B2B7D: mov     eax, large fs:0
0x5B2B83: push    eax
0x5B2B84: sub     esp, 1E8h
0x5B2B8A: mov     eax, ds:0B30AACh
0x5B2B8F: xor     eax, esp
0x5B2B91: mov     [esp+1F4h+var_44], eax
0x5B2B98: push    ebx; a3
0x5B2B99: push    esi; a3
0x5B2B9A: push    edi; a3
0x5B2B9B: mov     eax, ds:0B30AACh
0x5B2BA0: xor     eax, esp
0x5B2BA2: push    eax; a3
0x5B2BA3: lea     eax, [esp+204h+var_C]
0x5B2BAA: mov     large fs:0, eax
0x5B2BB0: push    3FEh
0x5B2BB5: call    Menu_GetOpenMenuTile
0x5B2BBA: xor     edi, edi
0x5B2BBC: add     esp, 4
0x5B2BBF: cmp     eax, edi
0x5B2BC1: mov     [esp+204h+var_194], eax
0x5B2BC5: jz      loc_5B3732
0x5B2BCB: mov     ecx, eax
0x5B2BCD: call    Tile_GetParentMenu
0x5B2BD2: cmp     ds:0B14368h, edi
0x5B2BD8: mov     esi, eax
0x5B2BDA: mov     [esp+204h+var_1AC], esi
0x5B2BDE: jz      short loc_5B2C45
0x5B2BE0: mov     eax, ds:0B14360h
0x5B2BE5: mov     ecx, [eax]
0x5B2BE7: cmp     ecx, edi
0x5B2BE9: mov     ds:0B14360h, ecx
0x5B2BEF: jz      short loc_5B2BF6
0x5B2BF1: mov     [ecx+4], edi
0x5B2BF4: jmp     short loc_5B2BFC
0x5B2BF6: mov     ds:0B14364h, edi
0x5B2BFC: mov     esi, [eax+8]
0x5B2BFF: push    eax; a3
0x5B2C00: mov     eax, ds:0B1435Ch
0x5B2C05: mov     edx, [eax+8]
0x5B2C08: mov     ecx, offset g_MagicMenuMagicItemList
0x5B2C0D: call    edx
0x5B2C0F: sub     dword ptr ds:0B14368h, 1
0x5B2C16: cmp     esi, edi
0x5B2C18: jz      short loc_5B2C39
0x5B2C1A: mov     ebx, [esi]
0x5B2C1C: cmp     ebx, edi
0x5B2C1E: jz      short loc_5B2C30
0x5B2C20: mov     ecx, ebx
0x5B2C22: call    ContainerEntryExtraData_DestroyDataTable
0x5B2C27: push    ebx
0x5B2C28: call    FormHeapFree
0x5B2C2D: add     esp, 4
0x5B2C30: push    esi
0x5B2C31: call    FormHeapFree
0x5B2C36: add     esp, 4
0x5B2C39: cmp     ds:0B14368h, edi
0x5B2C3F: jnz     short loc_5B2BE0
0x5B2C41: mov     esi, [esp+204h+var_1AC]
0x5B2C45: mov     ecx, ds:0B333C4h; this
0x5B2C4B: cmp     ecx, edi
0x5B2C4D: jz      loc_5B3732
0x5B2C53: mov     eax, [esi+2Ch]
0x5B2C56: push    edi; a2
0x5B2C57: mov     [esp+208h+var_198], eax
0x5B2C5B: call    Actor_GetActorBaseForm
0x5B2C60: add     eax, 58h ; 'X'
0x5B2C63: push    offset sub_5B2430
0x5B2C68: mov     ecx, eax
0x5B2C6A: mov     [esp+208h+var_1BC], eax
0x5B2C6E: mov     [esi+4Ch], edi
0x5B2C71: call    sub_5B27A0
0x5B2C76: mov     ecx, ds:0B333C4h
0x5B2C7C: push    edi
0x5B2C7D: call    TESObjectREF_GetTotalEntryCountForITem
0x5B2C82: cmp     eax, edi
0x5B2C84: mov     [esp+204h+var_1A8], eax
0x5B2C88: mov     [esp+204h+var_1C0], edi
0x5B2C8C: jle     loc_5B2D9B
0x5B2C92: mov     ecx, [esp+204h+var_1C0]
0x5B2C96: push    edi; a3
0x5B2C97: push    ecx; a2
0x5B2C98: mov     ecx, ds:0B333C4h; this
0x5B2C9E: call    GetInventoryEntryOfItem
0x5B2CA3: mov     ebx, eax
0x5B2CA5: cmp     ebx, edi
0x5B2CA7: jz      loc_5B2D86
0x5B2CAD: mov     eax, [ebx+8]
0x5B2CB0: push    edi; int
0x5B2CB1: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x5B2CB6: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5B2CBB: push    edi; int
0x5B2CBC: push    eax; void *
0x5B2CBD: call    OblivionDynamicCast
0x5B2CC2: add     esp, 14h
0x5B2CC5: cmp     eax, edi
0x5B2CC7: jz      loc_5B2D76
0x5B2CCD: test    byte ptr [eax+88h], 1
0x5B2CD4: jz      loc_5B2D76
0x5B2CDA: cmp     [eax+64h], edi
0x5B2CDD: jz      loc_5B2D76
0x5B2CE3: mov     esi, ds:0B14360h
0x5B2CE9: cmp     esi, edi
0x5B2CEB: jz      short loc_5B2D11
0x5B2CED: lea     ecx, [ecx+0]
0x5B2CF0: lea     eax, [esi+8]
0x5B2CF3: mov     eax, [eax]
0x5B2CF5: mov     eax, [eax]
0x5B2CF7: push    eax
0x5B2CF8: mov     [esp+208h+var_1A4], esi
0x5B2CFC: mov     esi, [esi]
0x5B2CFE: push    ebx
0x5B2CFF: mov     ecx, offset byte_B3B404
0x5B2D04: call    sub_584500
0x5B2D09: test    eax, eax
0x5B2D0B: jle     short loc_5B2D2A
0x5B2D0D: cmp     esi, edi
0x5B2D0F: jnz     short loc_5B2CF0
0x5B2D11: push    8; Size
0x5B2D13: call    FormHeapAlloc
0x5B2D18: add     esp, 4
0x5B2D1B: cmp     eax, edi
0x5B2D1D: jz      short loc_5B2D5F
0x5B2D1F: mov     edx, [esp+204h+var_1C0]
0x5B2D23: mov     [eax], ebx
0x5B2D25: mov     [eax+4], edx
0x5B2D28: jmp     short loc_5B2D61
0x5B2D2A: push    8; Size
0x5B2D2C: call    FormHeapAlloc
0x5B2D31: add     esp, 4
0x5B2D34: cmp     eax, edi
0x5B2D36: jz      short loc_5B2D43
0x5B2D38: mov     edx, [esp+204h+var_1C0]
0x5B2D3C: mov     [eax], ebx
0x5B2D3E: mov     [eax+4], edx
0x5B2D41: jmp     short loc_5B2D45
0x5B2D43: xor     eax, eax
0x5B2D45: mov     ecx, [esp+204h+var_1A4]
0x5B2D49: mov     [esp+204h+var_1B4], eax
0x5B2D4D: lea     eax, [esp+204h+var_1B4]
0x5B2D51: push    eax
0x5B2D52: push    ecx
0x5B2D53: mov     ecx, offset g_MagicMenuMagicItemList
0x5B2D58: call    sub_589640
0x5B2D5D: jmp     short loc_5B2D86
0x5B2D5F: xor     eax, eax
0x5B2D61: mov     [esp+204h+var_1B4], eax
0x5B2D65: lea     eax, [esp+204h+var_1B4]
0x5B2D69: push    eax
0x5B2D6A: mov     ecx, offset g_MagicMenuMagicItemList
0x5B2D6F: call    sub_5B1E20
0x5B2D74: jmp     short loc_5B2D86
0x5B2D76: mov     ecx, ebx
0x5B2D78: call    ContainerEntryExtraData_DestroyDataTable
0x5B2D7D: push    ebx
0x5B2D7E: call    FormHeapFree
0x5B2D83: add     esp, 4
0x5B2D86: mov     eax, [esp+204h+var_1C0]
0x5B2D8A: add     eax, 1
0x5B2D8D: cmp     eax, [esp+204h+var_1A8]
0x5B2D91: mov     [esp+204h+var_1C0], eax
0x5B2D95: jl      loc_5B2C92
0x5B2D9B: mov     esi, [esp+204h+var_1AC]
0x5B2D9F: mov     ecx, [esi+48h]
0x5B2DA2: cmp     ecx, edi
0x5B2DA4: jz      short loc_5B2DC2
0x5B2DA6: mov     ebx, [esi]
0x5B2DA8: push    ecx; a3
0x5B2DA9: push    0FA8h
0x5B2DAE: add     ebx, 14h
0x5B2DB1: call    Tile_GetFloat
0x5B2DB6: call    Double_To_SInt32
0x5B2DBB: mov     edx, [ebx]
0x5B2DBD: push    eax; a3
0x5B2DBE: mov     ecx, esi
0x5B2DC0: call    edx
0x5B2DC2: mov     eax, [esp+204h+var_198]
0x5B2DC6: mov     ebx, [eax+34h]
0x5B2DC9: cmp     ebx, edi
0x5B2DCB: jz      short loc_5B2E10
0x5B2DCD: lea     ecx, [ecx+0]
0x5B2DD0: lea     eax, [ebx+8]
0x5B2DD3: mov     eax, [eax]
0x5B2DD5: mov     ebx, [ebx]
0x5B2DD7: push    0FA8h
0x5B2DDC: mov     ecx, eax
0x5B2DDE: mov     [esp+208h+var_1B4], eax
0x5B2DE2: call    Tile_GetFloat
0x5B2DE7: fcomp   qword ptr ds:0A6C1E0h
0x5B2DED: fnstsw  ax
0x5B2DEF: test    ah, 1
0x5B2DF2: jnz     short loc_5B2E0C
0x5B2DF4: fld     dword ptr ds:0A690E0h
0x5B2DFA: push    ecx
0x5B2DFB: mov     ecx, [esp+208h+var_1B4]; this
0x5B2DFF: fstp    [esp+208h+var_20C+4]; a3
0x5B2E02: push    0FAAh; a2
0x5B2E07: call    Tile_SetFloat
0x5B2E0C: cmp     ebx, edi
0x5B2E0E: jnz     short loc_5B2DD0
0x5B2E10: mov     ecx, [esi+4]; this
0x5B2E13: fld     dword ptr ds:0A53954h
0x5B2E19: push    ecx
0x5B2E1A: fstp    [esp+208h+var_20C+4]; a3
0x5B2E1D: push    0FAFh; a2
0x5B2E22: call    Tile_SetFloat
0x5B2E27: fld     dword ptr ds:0A53954h
0x5B2E2D: mov     ecx, [esi+4]; this
0x5B2E30: push    ecx
0x5B2E31: fstp    [esp+208h+var_20C+4]; a3
0x5B2E34: push    0FB0h; a2
0x5B2E39: call    Tile_SetFloat
0x5B2E3E: fld     dword ptr ds:0A53954h
0x5B2E44: mov     ecx, [esi+4]; this
0x5B2E47: push    ecx
0x5B2E48: fstp    [esp+208h+var_20C+4]; a3
0x5B2E4B: push    0FB1h; a2
0x5B2E50: call    Tile_SetFloat
0x5B2E55: fld     dword ptr ds:0A53954h
0x5B2E5B: mov     ecx, [esi+4]; this
0x5B2E5E: push    ecx
0x5B2E5F: fstp    [esp+208h+var_20C+4]; a3
0x5B2E62: push    0FB2h; a2
0x5B2E67: call    Tile_SetFloat
0x5B2E6C: lea     ecx, [esi+38h]
0x5B2E6F: mov     [esp+204h+var_1C0], edi
0x5B2E73: mov     [esp+204h+var_1A8], 1
0x5B2E7B: mov     [esp+204h+var_1B0], edi
0x5B2E7F: mov     [esp+204h+var_1B8], edi
0x5B2E83: call    BSSimpleList_Clear
0x5B2E88: mov     ecx, esi
0x5B2E8A: call    sub_5B2B30
0x5B2E8F: mov     ecx, ds:0B14360h
0x5B2E95: mov     edx, [esp+204h+var_1BC]
0x5B2E99: lea     eax, [esi+40h]
0x5B2E9C: mov     [esp+204h+var_1A0], eax
0x5B2EA0: mov     [esp+204h+var_1A4], ecx
0x5B2EA4: mov     [esp+204h+var_1B4], edx
0x5B2EA8: mov     esi, [esp+204h+var_1B4]
0x5B2EAC: cmp     esi, edi
0x5B2EAE: jz      short loc_5B2EC6
0x5B2EB0: xor     ecx, ecx
0x5B2EB2: mov     eax, esi
0x5B2EB4: cmp     [eax], edi
0x5B2EB6: jz      short loc_5B2EBB
0x5B2EB8: add     ecx, 1
0x5B2EBB: mov     eax, [eax+4]
0x5B2EBE: cmp     eax, edi
0x5B2EC0: jnz     short loc_5B2EB4
0x5B2EC2: cmp     ecx, edi
0x5B2EC4: jnz     short loc_5B2EF6
0x5B2EC6: cmp     [esp+204h+var_1A4], edi
0x5B2ECA: jnz     short loc_5B2EF6
0x5B2ECC: mov     eax, [esp+204h+var_1A0]
0x5B2ED0: cmp     eax, edi
0x5B2ED2: jz      loc_5B3639
0x5B2ED8: xor     ecx, ecx
0x5B2EDA: lea     ebx, [ebx+0]
0x5B2EE0: cmp     [eax], edi
0x5B2EE2: jz      short loc_5B2EE7
0x5B2EE4: add     ecx, 1
0x5B2EE7: mov     eax, [eax+4]
0x5B2EEA: cmp     eax, edi
0x5B2EEC: jnz     short loc_5B2EE0
0x5B2EEE: cmp     ecx, edi
0x5B2EF0: jz      loc_5B3639
0x5B2EF6: push    edi; a3
0x5B2EF7: push    offset EmptyString; a2
0x5B2EFC: lea     ecx, [esp+20Ch+Str1]; this
0x5B2F00: mov     [esp+20Ch+Str1], edi
0x5B2F04: mov     word ptr [esp+20Ch+var_1C8.m_data], di
0x5B2F09: mov     word ptr [esp+20Ch+var_1C8.m_data+2], di
0x5B2F0E: call    BSStringT_Set
0x5B2F13: cmp     esi, edi
0x5B2F15: mov     [esp+204h+var_4], edi
0x5B2F1C: mov     [esp+204h+var_19C], edi
0x5B2F20: mov     [esp+204h+var_1CD], 0
0x5B2F25: mov     [esp+204h+var_1BC], 0FFFFFFFFh
0x5B2F2D: jz      loc_5B31D9
0x5B2F33: xor     ecx, ecx
0x5B2F35: mov     eax, esi
0x5B2F37: cmp     [eax], edi
0x5B2F39: jz      short loc_5B2F3E
0x5B2F3B: add     ecx, 1
0x5B2F3E: mov     eax, [eax+4]
0x5B2F41: cmp     eax, edi
0x5B2F43: jnz     short loc_5B2F37
0x5B2F45: cmp     ecx, edi
0x5B2F47: jz      loc_5B31D9
0x5B2F4D: mov     eax, [esp+204h+var_1B4]
0x5B2F51: mov     edi, [eax]
0x5B2F53: mov     eax, [eax+4]
0x5B2F56: xor     esi, esi
0x5B2F58: cmp     edi, esi
0x5B2F5A: mov     [esp+204h+var_1B4], eax
0x5B2F5E: jz      loc_5B31AC
0x5B2F64: push    esi
0x5B2F65: lea     ebx, [edi+24h]
0x5B2F68: push    3
0x5B2F6A: mov     ecx, ebx
0x5B2F6C: call    EffectItemList_GetStrongestItem
0x5B2F71: test    eax, eax
0x5B2F73: jz      loc_5B31AC
0x5B2F79: mov     edx, [edi+18h]
0x5B2F7C: mov     eax, [edx+18h]
0x5B2F7F: lea     esi, [edi+18h]
0x5B2F82: mov     ecx, esi
0x5B2F84: call    eax
0x5B2F86: cmp     eax, 1
0x5B2F89: jz      loc_5B31A2
0x5B2F8F: mov     edx, [esi]
0x5B2F91: mov     eax, [edx+18h]
0x5B2F94: mov     ecx, esi
0x5B2F96: call    eax
0x5B2F98: cmp     eax, 4
0x5B2F9B: jz      loc_5B31A2
0x5B2FA1: mov     ecx, [esp+204h+var_1AC]
0x5B2FA5: push    edi
0x5B2FA6: add     ecx, 38h ; '8'
0x5B2FA9: call    BSSimpleList_PushBack
0x5B2FAE: add     [esp+204h+var_1B8], 1
0x5B2FB3: mov     ecx, ebx
0x5B2FB5: call    EffectItemList_HasOnTarget
0x5B2FBA: neg     al
0x5B2FBC: mov     ecx, ebx
0x5B2FBE: sbb     eax, eax
0x5B2FC0: neg     eax
0x5B2FC2: mov     edi, eax
0x5B2FC4: call    EffectItemList_HasOnTarget
0x5B2FC9: test    al, al
0x5B2FCB: jnz     short loc_5B2FDF
0x5B2FCD: mov     ecx, ebx
0x5B2FCF: call    EffectItemList_HasTouchEffect
0x5B2FD4: test    al, al
0x5B2FD6: jz      short loc_5B2FDF
0x5B2FD8: mov     eax, 2
0x5B2FDD: jmp     short loc_5B2FE1
0x5B2FDF: xor     eax, eax
0x5B2FE1: mov     ecx, ebx
0x5B2FE3: add     edi, eax
0x5B2FE5: call    EffectItemList_HasOnTarget
0x5B2FEA: test    al, al
0x5B2FEC: jnz     short loc_5B3000
0x5B2FEE: mov     ecx, ebx
0x5B2FF0: call    EffectItemList_HasTouchEffect
0x5B2FF5: test    al, al
0x5B2FF7: jnz     short loc_5B3000
0x5B2FF9: mov     eax, 4
0x5B2FFE: jmp     short loc_5B3002
0x5B3000: xor     eax, eax
0x5B3002: mov     edx, [esi]
0x5B3004: add     edi, eax
0x5B3006: mov     eax, [edx+18h]
0x5B3009: mov     ecx, esi
0x5B300B: mov     [esp+204h+var_1B0], edi
0x5B300F: call    eax
0x5B3011: mov     edx, [esi]
0x5B3013: xor     ecx, ecx
0x5B3015: cmp     eax, 2
0x5B3018: mov     eax, [edx+18h]
0x5B301B: setz    cl
0x5B301E: mov     edi, ecx
0x5B3020: mov     ecx, esi
0x5B3022: call    eax
0x5B3024: mov     edx, [esi]
0x5B3026: sub     eax, 3
0x5B3029: neg     eax
0x5B302B: sbb     eax, eax
0x5B302D: and     eax, 0FFFFFFFEh
0x5B3030: add     eax, 2
0x5B3033: add     edi, eax
0x5B3035: mov     eax, [edx+18h]
0x5B3038: mov     ecx, esi
0x5B303A: call    eax
0x5B303C: mov     edx, [esi]
0x5B303E: neg     eax
0x5B3040: sbb     eax, eax
0x5B3042: and     eax, 0FFFFFFFCh
0x5B3045: add     eax, 4
0x5B3048: add     edi, eax
0x5B304A: mov     eax, [edx+18h]
0x5B304D: mov     ecx, esi
0x5B304F: call    eax
0x5B3051: sub     eax, 5
0x5B3054: neg     eax
0x5B3056: sbb     eax, eax
0x5B3058: and     eax, 0FFFFFFFCh
0x5B305B: add     eax, 4
0x5B305E: push    0
0x5B3060: add     edi, eax
0x5B3062: push    3
0x5B3064: mov     ecx, ebx
0x5B3066: mov     [esp+20Ch+var_1A8], edi
0x5B306A: call    EffectItemList_GetStrongestItem
0x5B306F: mov     eax, [eax+1Ch]
0x5B3072: mov     eax, [eax+48h]
0x5B3075: test    eax, eax
0x5B3077: jnz     short loc_5B307E
0x5B3079: mov     eax, offset EmptyString
0x5B307E: push    eax
0x5B307F: push    offset aIcons; "Icons"
0x5B3084: lea     ecx, [esp+20Ch+var_150]
0x5B308B: push    offset aSS_2; "%s\\%s"
0x5B3090: push    ecx
0x5B3091: call    __sprintf
0x5B3096: mov     eax, [esi+4]
0x5B3099: add     esp, 10h
0x5B309C: test    eax, eax
0x5B309E: jnz     short loc_5B30A5
0x5B30A0: mov     eax, offset EmptyString
0x5B30A5: push    0; a3
0x5B30A7: push    eax; a2
0x5B30A8: lea     ecx, [esp+20Ch+Str1]; this
0x5B30AC: call    BSStringT_Set
0x5B30B1: mov     edx, [ebx]
0x5B30B3: mov     eax, ds:0B333C4h
0x5B30B8: mov     edx, [edx]
0x5B30BA: push    eax; a3
0x5B30BB: mov     ecx, ebx
0x5B30BD: call    edx
0x5B30BF: call    Double_To_SInt32
0x5B30C4: mov     ecx, ds:0B333C4h
0x5B30CA: mov     [esp+204h+var_19C], eax
0x5B30CE: call    Player_GetCurrentMagicItem
0x5B30D3: cmp     esi, eax
0x5B30D5: setz    [esp+204h+var_1CD]
0x5B30DA: mov     eax, [esp+204h+var_198]
0x5B30DE: mov     ebx, [eax+38h]
0x5B30E1: test    ebx, ebx
0x5B30E3: jz      short loc_5B3145
0x5B30E5: mov     esi, [ebx+8]
0x5B30E8: lea     eax, [ebx+8]
0x5B30EB: mov     ebx, [ebx+4]
0x5B30EE: push    0FAAh
0x5B30F3: mov     ecx, esi
0x5B30F5: call    Tile_GetFloat
0x5B30FA: fcomp   dword ptr ds:0A690E0h
0x5B3100: fnstsw  ax
0x5B3102: test    ah, 44h
0x5B3105: jp      short loc_5B3141
0x5B3107: push    0FAFh
0x5B310C: mov     ecx, esi
0x5B310E: call    sub_588C10
0x5B3113: test    eax, eax
0x5B3115: jz      short loc_5B3141
0x5B3117: mov     edi, [esp+204h+Str1]
0x5B311B: test    edi, edi
0x5B311D: jz      short loc_5B3141
0x5B311F: push    0FAFh
0x5B3124: mov     ecx, esi
0x5B3126: call    sub_588C10
0x5B312B: test    eax, eax
0x5B312D: jz      short loc_5B3141
0x5B312F: push    eax; Str2
0x5B3130: push    edi; Str1
0x5B3131: call    __strcmp
0x5B3136: add     esp, 8
0x5B3139: test    eax, eax
0x5B313B: jz      loc_5B33C9
0x5B3141: test    ebx, ebx
0x5B3143: jnz     short loc_5B30E5
0x5B3145: cmp     [esp+204h+Str1], 0
0x5B314A: jnz     short loc_5B315E
0x5B314C: mov     edx, ds:0B38D30h
0x5B3152: push    0; a3
0x5B3154: push    edx; a2
0x5B3155: lea     ecx, [esp+20Ch+Str1]; this
0x5B3159: call    BSStringT_Set
0x5B315E: mov     eax, [esp+204h+var_1C0]
0x5B3162: mov     ecx, [esp+204h+Str1]
0x5B3166: mov     edi, [esp+204h+var_1AC]
0x5B316A: add     eax, 3E9h
0x5B316F: push    eax
0x5B3170: push    ecx
0x5B3171: mov     ecx, edi
0x5B3173: call    sub_5B2A10
0x5B3178: mov     edx, [esp+204h+var_19C]
0x5B317C: push    edx
0x5B317D: push    0FFFFFFFFh
0x5B317F: mov     esi, eax
0x5B3181: push    0FFFFFFFFh
0x5B3183: push    esi
0x5B3184: mov     ecx, edi
0x5B3186: call    sub_5B1430
0x5B318B: cmp     [esp+204h+var_1BC], 0FFFFFFFFh
0x5B3190: push    ecx
0x5B3191: mov     ecx, esi; this
0x5B3193: jz      loc_5B3558
0x5B3199: fild    [esp+208h+var_1BC]
0x5B319D: jmp     loc_5B355C
0x5B31A2: mov     eax, [esp+204h+Str1]
0x5B31A6: push    eax
0x5B31A7: jmp     loc_5B33A1
0x5B31AC: mov     ecx, [esp+204h+Str1]
0x5B31B0: push    ecx
0x5B31B1: mov     [esp+208h+var_4], 0FFFFFFFFh
0x5B31BC: call    FormHeapFree
0x5B31C1: add     esp, 4
0x5B31C4: mov     [esp+204h+Str1], esi
0x5B31C8: mov     word ptr [esp+204h+var_1C8.m_data+2], si
0x5B31CD: mov     word ptr [esp+204h+var_1C8.m_data], si
0x5B31D2: xor     edi, edi
0x5B31D4: jmp     loc_5B2EA8
0x5B31D9: cmp     [esp+204h+var_1A4], edi
0x5B31DD: jz      loc_5B32E9
0x5B31E3: mov     ecx, [esp+204h+var_1A4]
0x5B31E7: mov     edi, [ecx+8]
0x5B31EA: mov     esi, [edi]
0x5B31EC: mov     edx, [ecx]
0x5B31EE: push    0; int
0x5B31F0: lea     eax, [ecx+8]
0x5B31F3: mov     eax, [esi+8]
0x5B31F6: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x5B31FB: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5B3200: push    0; int
0x5B3202: push    eax; void *
0x5B3203: mov     [esp+218h+var_1A4], edx
0x5B3207: call    OblivionDynamicCast
0x5B320C: mov     dword ptr [esp+218h+var_1C8.m_dataLen], eax
0x5B3210: mov     eax, [eax+64h]
0x5B3213: add     esp, 14h
0x5B3216: test    eax, eax
0x5B3218: jz      loc_5B30DA
0x5B321E: lea     ebx, [eax+24h]
0x5B3221: mov     ecx, ebx
0x5B3223: call    EffectItemList_HasOnTarget
0x5B3228: neg     al
0x5B322A: mov     ecx, ebx
0x5B322C: sbb     eax, eax
0x5B322E: neg     eax
0x5B3230: mov     [esp+204h+var_1B0], eax
0x5B3234: call    EffectItemList_HasOnTarget
0x5B3239: test    al, al
0x5B323B: jnz     short loc_5B324F
0x5B323D: mov     ecx, ebx
0x5B323F: call    EffectItemList_HasTouchEffect
0x5B3244: test    al, al
0x5B3246: jz      short loc_5B324F
0x5B3248: mov     eax, 2
0x5B324D: jmp     short loc_5B3251
0x5B324F: xor     eax, eax
0x5B3251: add     [esp+204h+var_1B0], eax
0x5B3255: mov     ecx, ebx
0x5B3257: call    EffectItemList_HasOnTarget
0x5B325C: test    al, al
0x5B325E: jnz     short loc_5B3272
0x5B3260: mov     ecx, ebx
0x5B3262: call    EffectItemList_HasTouchEffect
0x5B3267: test    al, al
0x5B3269: jnz     short loc_5B3272
0x5B326B: mov     eax, 4
0x5B3270: jmp     short loc_5B3274
0x5B3272: xor     eax, eax
0x5B3274: add     [esp+204h+var_1B0], eax
0x5B3278: mov     eax, ds:0B333C4h
0x5B327D: push    eax
0x5B327E: mov     ecx, esi
0x5B3280: mov     [esp+208h+var_1A8], 8
0x5B3288: call    sub_4851B0
0x5B328D: push    eax
0x5B328E: push    offset aIcons; "Icons"
0x5B3293: lea     ecx, [esp+20Ch+var_150]
0x5B329A: push    offset aSS_2; "%s\\%s"
0x5B329F: push    ecx
0x5B32A0: call    __sprintf
0x5B32A5: add     esp, 10h
0x5B32A8: mov     ecx, esi
0x5B32AA: call    sub_488DF0
0x5B32AF: push    0; a3
0x5B32B1: push    eax; a2
0x5B32B2: lea     ecx, [esp+20Ch+Str1]; this
0x5B32B6: call    BSStringT_Set
0x5B32BB: mov     edx, [edi+4]
0x5B32BE: mov     eax, [ebx]
0x5B32C0: mov     [esp+204h+var_1BC], edx
0x5B32C4: mov     edx, [eax]
0x5B32C6: push    0
0x5B32C8: mov     ecx, ebx
0x5B32CA: call    edx
0x5B32CC: call    Double_To_SInt32
0x5B32D1: mov     ecx, ds:0B333C4h
0x5B32D7: mov     [esp+204h+var_19C], eax
0x5B32DB: call    sub_65D4C0
0x5B32E0: cmp     dword ptr [esp+204h+var_1C8.m_dataLen], eax
0x5B32E4: jmp     loc_5B30D5
0x5B32E9: cmp     [esp+204h+var_1A0], edi
0x5B32ED: jz      loc_5B30DA
0x5B32F3: mov     eax, [esp+204h+var_1A0]
0x5B32F7: mov     eax, [eax]
0x5B32F9: test    eax, eax
0x5B32FB: jz      loc_5B30DA
0x5B3301: mov     ebx, [eax]
0x5B3303: test    ebx, ebx
0x5B3305: mov     edi, [esp+204h+var_1A0]
0x5B3309: jz      loc_5B338D
0x5B330F: mov     ecx, [esp+204h+var_1AC]
0x5B3313: add     [esp+204h+var_1B8], 1
0x5B3318: lea     eax, [ecx+40h]
0x5B331B: cmp     edi, eax
0x5B331D: jnz     short loc_5B3326
0x5B331F: mov     edx, [esp+204h+var_1B8]
0x5B3323: mov     [ecx+54h], edx
0x5B3326: mov     esi, [ebx+0Ch]
0x5B3329: mov     eax, [esi+1Ch]
0x5B332C: mov     eax, [eax+48h]
0x5B332F: test    eax, eax
0x5B3331: mov     [esp+204h+var_1B0], 8
0x5B3339: mov     [esp+204h+var_1A8], 10h
0x5B3341: jnz     short loc_5B3348
0x5B3343: mov     eax, offset EmptyString
0x5B3348: push    eax
0x5B3349: push    offset aIcons; "Icons"
0x5B334E: lea     eax, [esp+20Ch+var_150]
0x5B3355: push    offset aSS_2; "%s\\%s"
0x5B335A: push    eax
0x5B335B: call    __sprintf
0x5B3360: add     esp, 10h
0x5B3363: lea     ecx, [esp+204h+a2]
0x5B3367: push    ecx
0x5B3368: mov     ecx, esi
0x5B336A: call    EffectItem_GetQualifiedName_SkillAttr
0x5B336F: push    0; a3
0x5B3371: lea     edx, [esp+208h+a2]
0x5B3375: push    edx; a2
0x5B3376: lea     ecx, [esp+20Ch+Str1]; this
0x5B337A: call    BSStringT_Set
0x5B337F: mov     eax, [edi]
0x5B3381: mov     eax, [eax+4]
0x5B3384: mov     [esp+204h+var_19C], eax
0x5B3388: mov     [esp+204h+var_1CD], 0
0x5B338D: test    ebx, ebx
0x5B338F: mov     ecx, [edi+4]
0x5B3392: mov     [esp+204h+var_1A0], ecx
0x5B3396: jnz     loc_5B30DA
0x5B339C: mov     edx, [esp+204h+Str1]
0x5B33A0: push    edx
0x5B33A1: mov     [esp+208h+var_4], 0FFFFFFFFh
0x5B33AC: call    FormHeapFree
0x5B33B1: add     esp, 4
0x5B33B4: xor     edi, edi
0x5B33B6: mov     [esp+204h+Str1], edi
0x5B33BA: mov     word ptr [esp+204h+var_1C8.m_data+2], di
0x5B33BF: mov     word ptr [esp+204h+var_1C8.m_data], di
0x5B33C4: jmp     loc_5B2EA8
0x5B33C9: mov     ecx, [esp+204h+var_19C]
0x5B33CD: mov     edi, [esp+204h+var_1AC]
0x5B33D1: push    ecx
0x5B33D2: push    0FFFFFFFFh
0x5B33D4: push    0FFFFFFFFh
0x5B33D6: push    esi
0x5B33D7: mov     ecx, edi
0x5B33D9: call    sub_5B1430
0x5B33DE: cmp     [esp+204h+var_1BC], 0FFFFFFFFh
0x5B33E3: push    ecx
0x5B33E4: mov     ecx, esi; this
0x5B33E6: jz      short loc_5B33EE
0x5B33E8: fild    [esp+208h+var_1BC]
0x5B33EC: jmp     short loc_5B33F2
0x5B33EE: fild    [esp+208h+var_1B8]
0x5B33F2: fstp    [esp+208h+var_20C+4]; a3
0x5B33F5: push    0FBBh; a2
0x5B33FA: call    Tile_SetFloat
0x5B33FF: lea     edx, [esp+204h+var_150]
0x5B3406: push    edx
0x5B3407: push    0FB4h
0x5B340C: mov     ecx, esi
0x5B340E: call    Tile_SetString
0x5B3413: fild    [esp+204h+var_1A8]
0x5B3417: push    ecx
0x5B3418: mov     ecx, esi; this
0x5B341A: fstp    [esp+208h+var_20C+4]; a3
0x5B341D: push    0FB5h; a2
0x5B3422: call    Tile_SetFloat
0x5B3427: fild    [esp+204h+var_1B0]
0x5B342B: push    ecx
0x5B342C: mov     ecx, esi; this
0x5B342E: fstp    [esp+208h+var_20C+4]; a3
0x5B3431: push    0FB7h; a2
0x5B3436: call    Tile_SetFloat
0x5B343B: mov     bl, [esp+204h+var_1CD]
0x5B343F: xor     eax, eax
0x5B3441: test    bl, bl
0x5B3443: setnz   al
0x5B3446: push    ecx
0x5B3447: mov     ecx, esi; this
0x5B3449: add     eax, 1
0x5B344C: mov     dword ptr [esp+208h+var_1C8.m_dataLen], eax
0x5B3450: fild    dword ptr [esp+208h+var_1C8.m_dataLen]
0x5B3454: fstp    [esp+208h+var_20C+4]; a3
0x5B3457: push    0FB8h; a2
0x5B345C: call    Tile_SetFloat
0x5B3461: mov     ecx, [esp+204h+var_1B8]
0x5B3465: add     ecx, 0FFFFFFFFh
0x5B3468: mov     dword ptr [esp+204h+var_1C8.m_dataLen], ecx
0x5B346C: fild    dword ptr [esp+204h+var_1C8.m_dataLen]
0x5B3470: push    ecx
0x5B3471: mov     ecx, esi; this
0x5B3473: fstp    [esp+208h+var_20C+4]; a3
0x5B3476: push    0FB9h; a2
0x5B347B: call    Tile_SetFloat
0x5B3480: fild    [esp+204h+var_1C0]
0x5B3484: push    ecx
0x5B3485: mov     ecx, esi; this
0x5B3487: fstp    [esp+208h+var_20C+4]; a3
0x5B348A: push    0FAAh; a2
0x5B348F: call    Tile_SetFloat
0x5B3494: test    bl, bl
0x5B3496: jz      short loc_5B34DF
0x5B3498: mov     edx, [esp+204h+var_194]
0x5B349C: push    edx
0x5B349D: lea     eax, [esp+208h+var_1BC]
0x5B34A1: push    eax
0x5B34A2: push    1; arg1
0x5B34A4: push    0; canCreate
0x5B34A6: mov     [esp+214h+var_1BC], 80000000h
0x5B34AE: call    InterfaceManager_GetSingleton
0x5B34B3: add     esp, 8
0x5B34B6: mov     ecx, eax
0x5B34B8: call    sub_57DA90
0x5B34BD: mov     ecx, [esp+204h+var_1BC]
0x5B34C1: add     ecx, 1
0x5B34C4: mov     dword ptr [esp+204h+var_1C8.m_dataLen], ecx
0x5B34C8: fild    dword ptr [esp+204h+var_1C8.m_dataLen]
0x5B34CC: push    ecx
0x5B34CD: mov     ecx, esi; this
0x5B34CF: fstp    [esp+208h+var_20C+4]; a3
0x5B34D2: push    0FF0h; a2
0x5B34D7: call    Tile_SetFloat
0x5B34DC: mov     [edi+4Ch], esi
0x5B34DF: mov     eax, [esi+10h]
0x5B34E2: lea     ecx, [eax+30h]
0x5B34E5: mov     eax, [ecx+4]
0x5B34E8: test    eax, eax
0x5B34EA: jz      short loc_5B3500
0x5B34EC: lea     esp, [esp+0]
0x5B34F0: cmp     esi, [eax+8]
0x5B34F3: lea     edx, [eax+8]
0x5B34F6: mov     edi, eax
0x5B34F8: mov     eax, [eax]
0x5B34FA: jz      short loc_5B3502
0x5B34FC: test    eax, eax
0x5B34FE: jnz     short loc_5B34F0
0x5B3500: xor     edi, edi
0x5B3502: test    edi, edi
0x5B3504: mov     dword ptr [esp+204h+var_1C8.m_dataLen], edi
0x5B3508: jz      short loc_5B3514
0x5B350A: lea     edx, [esp+204h+var_1C8.m_dataLen]
0x5B350E: push    edx
0x5B350F: call    sub_7AA860
0x5B3514: mov     edi, [esi+10h]
0x5B3517: mov     eax, [edi+30h]
0x5B351A: mov     edx, [eax+4]
0x5B351D: add     edi, 30h ; '0'
0x5B3520: mov     ecx, edi
0x5B3522: call    edx
0x5B3524: mov     [eax+8], esi
0x5B3527: mov     dword ptr [eax+4], 0
0x5B352E: mov     ecx, [edi+4]
0x5B3531: mov     [eax], ecx
0x5B3533: mov     ecx, [edi+4]
0x5B3536: test    ecx, ecx
0x5B3538: jz      short loc_5B3549
0x5B353A: mov     [ecx+4], eax
0x5B353D: add     dword ptr [edi+0Ch], 1
0x5B3541: mov     [edi+4], eax
0x5B3544: jmp     loc_5B3605
0x5B3549: add     dword ptr [edi+0Ch], 1
0x5B354D: mov     [edi+8], eax
0x5B3550: mov     [edi+4], eax
0x5B3553: jmp     loc_5B3605
0x5B3558: fild    [esp+208h+var_1B8]
0x5B355C: fstp    [esp+208h+var_20C+4]; a3
0x5B355F: push    0FBBh; a2
0x5B3564: call    Tile_SetFloat
0x5B3569: lea     eax, [esp+204h+var_150]
0x5B3570: push    eax
0x5B3571: push    0FB4h
0x5B3576: mov     ecx, esi
0x5B3578: call    Tile_SetString
0x5B357D: fild    [esp+204h+var_1A8]
0x5B3581: push    ecx
0x5B3582: mov     ecx, esi; this
0x5B3584: fstp    [esp+208h+var_20C+4]; a3
0x5B3587: push    0FB5h; a2
0x5B358C: call    Tile_SetFloat
0x5B3591: fild    [esp+204h+var_1B0]
0x5B3595: push    ecx
0x5B3596: mov     ecx, esi; this
0x5B3598: fstp    [esp+208h+var_20C+4]; a3
0x5B359B: push    0FB7h; a2
0x5B35A0: call    Tile_SetFloat
0x5B35A5: mov     bl, [esp+204h+var_1CD]
0x5B35A9: xor     ecx, ecx
0x5B35AB: test    bl, bl
0x5B35AD: setnz   cl
0x5B35B0: add     ecx, 1
0x5B35B3: mov     dword ptr [esp+204h+var_1C8.m_dataLen], ecx
0x5B35B7: fild    dword ptr [esp+204h+var_1C8.m_dataLen]
0x5B35BB: push    ecx
0x5B35BC: mov     ecx, esi; this
0x5B35BE: fstp    [esp+208h+var_20C+4]; a3
0x5B35C1: push    0FB8h; a2
0x5B35C6: call    Tile_SetFloat
0x5B35CB: mov     edx, [esp+204h+var_1B8]
0x5B35CF: add     edx, 0FFFFFFFFh
0x5B35D2: mov     dword ptr [esp+204h+var_1C8.m_dataLen], edx
0x5B35D6: fild    dword ptr [esp+204h+var_1C8.m_dataLen]
0x5B35DA: push    ecx
0x5B35DB: mov     ecx, esi; this
0x5B35DD: fstp    [esp+208h+var_20C+4]; a3
0x5B35E0: push    0FB9h; a2
0x5B35E5: call    Tile_SetFloat
0x5B35EA: fild    [esp+204h+var_1C0]
0x5B35EE: push    ecx
0x5B35EF: mov     ecx, esi; this
0x5B35F1: fstp    [esp+208h+var_20C+4]; a3
0x5B35F4: push    0FAAh; a2
0x5B35F9: call    Tile_SetFloat
0x5B35FE: test    bl, bl
0x5B3600: jz      short loc_5B3605
0x5B3602: mov     [edi+4Ch], esi
0x5B3605: mov     eax, [esp+204h+Str1]
0x5B3609: add     [esp+204h+var_1C0], 1
0x5B360E: push    eax
0x5B360F: mov     [esp+208h+var_4], 0FFFFFFFFh
0x5B361A: call    FormHeapFree
0x5B361F: xor     eax, eax
0x5B3621: add     esp, 4
0x5B3624: mov     [esp+204h+Str1], eax
0x5B3628: mov     word ptr [esp+204h+var_1C8.m_data+2], ax
0x5B362D: mov     word ptr [esp+204h+var_1C8.m_data], ax
0x5B3632: xor     edi, edi
0x5B3634: jmp     loc_5B2EA8
0x5B3639: mov     edx, [esp+204h+var_1C0]
0x5B363D: mov     ebx, [esp+204h+var_1AC]
0x5B3641: mov     ecx, [ebx+2Ch]; this
0x5B3644: add     edx, 0FFFFFFFFh
0x5B3647: mov     dword ptr [esp+204h+var_1C8.m_dataLen], edx
0x5B364B: fild    dword ptr [esp+204h+var_1C8.m_dataLen]
0x5B364F: push    ecx
0x5B3650: fstp    [esp+208h+var_20C+4]; a3
0x5B3653: push    0FAEh; a2
0x5B3658: call    Tile_SetFloat
0x5B365D: mov     eax, [esp+204h+var_198]
0x5B3661: mov     esi, [eax+34h]
0x5B3664: cmp     esi, edi
0x5B3666: jz      short loc_5B369F
0x5B3668: mov     ebx, [esi+8]
0x5B366B: lea     eax, [esi+8]
0x5B366E: mov     esi, [esi]
0x5B3670: push    0FAAh
0x5B3675: mov     ecx, ebx
0x5B3677: call    Tile_GetFloat
0x5B367C: fcomp   dword ptr ds:0A690E0h
0x5B3682: fnstsw  ax
0x5B3684: test    ah, 44h
0x5B3687: jp      short loc_5B3697
0x5B3689: cmp     ebx, edi
0x5B368B: jz      short loc_5B3697
0x5B368D: mov     edx, [ebx]
0x5B368F: mov     eax, [edx]
0x5B3691: push    1
0x5B3693: mov     ecx, ebx
0x5B3695: call    eax
0x5B3697: cmp     esi, edi
0x5B3699: jnz     short loc_5B3668
0x5B369B: mov     ebx, [esp+204h+var_1AC]
0x5B369F: mov     ecx, [ebx+50h]
0x5B36A2: push    ecx
0x5B36A3: mov     ecx, ebx
0x5B36A5: call    sub_5B1A40
0x5B36AA: mov     [esp+204h+Str1], edi
0x5B36AE: mov     word ptr [esp+204h+var_1C8.m_data], di
0x5B36B3: mov     word ptr [esp+204h+var_1C8.m_data+2], di
0x5B36B8: fldz
0x5B36BA: mov     ecx, ds:0B333C4h
0x5B36C0: mov     edx, [ecx+5Ch]
0x5B36C3: mov     eax, [edx+2Ch]
0x5B36C6: mov     esi, ds:0B39518h
0x5B36CC: add     ecx, 5Ch ; '\'
0x5B36CF: push    ecx
0x5B36D0: fstp    [esp+208h+var_20C+4]
0x5B36D3: push    edi
0x5B36D4: mov     [esp+20Ch+var_4], 1
0x5B36DF: call    eax
0x5B36E1: fmul    qword ptr ds:0A309F0h
0x5B36E7: sub     esp, 8
0x5B36EA: lea     ecx, [esp+20Ch+Str1]
0x5B36EE: fstp    qword ptr [esp+20Ch+var_20C]
0x5B36F1: push    esi; ArgList
0x5B36F2: push    offset aS0_0f; "%s: %0.0f%%"
0x5B36F7: push    ecx; int
0x5B36F8: call    BSStringT_Static_Format
0x5B36FD: mov     esi, [esp+218h+Str1]
0x5B3701: mov     ecx, [esp+218h+var_194]
0x5B3708: add     esp, 14h
0x5B370B: push    esi
0x5B370C: push    0FB4h
0x5B3711: call    Tile_SetString
0x5B3716: push    edi
0x5B3717: push    1; arg1
0x5B3719: push    edi; canCreate
0x5B371A: call    InterfaceManager_GetSingleton
0x5B371F: add     esp, 8
0x5B3722: mov     ecx, eax
0x5B3724: call    sub_57D730
0x5B3729: push    esi
0x5B372A: call    FormHeapFree
0x5B372F: add     esp, 4
0x5B3732: mov     ecx, dword ptr [esp+204h+var_C]
0x5B3739: mov     large fs:0, ecx
0x5B3740: pop     ecx
0x5B3741: pop     edi
0x5B3742: pop     esi
0x5B3743: pop     ebx
0x5B3744: mov     ecx, [esp+1F4h+var_44]
0x5B374B: xor     ecx, esp
0x5B374D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5B3752: mov     esp, ebp
0x5B3754: pop     ebp
0x5B3755: retn
