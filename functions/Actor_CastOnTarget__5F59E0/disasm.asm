0x5F59E0: push    0FFFFFFFFh
0x5F59E2: push    offset Actor_CastOnTarget_SEH
0x5F59E7: mov     eax, large fs:0
0x5F59ED: push    eax
0x5F59EE: push    ecx
0x5F59EF: push    ebp
0x5F59F0: push    esi
0x5F59F1: push    edi
0x5F59F2: mov     eax, ds:0B30AACh
0x5F59F7: xor     eax, esp
0x5F59F9: push    eax
0x5F59FA: lea     eax, [esp+20h+var_C]
0x5F59FE: mov     large fs:0, eax
0x5F5A04: mov     ebp, ecx
0x5F5A06: mov     eax, [esp+20h+arg_0]
0x5F5A0A: xor     edi, edi
0x5F5A0C: push    edi; int
0x5F5A0D: push    offset ??_R0?AVMagicItemForm@@@8; struct TypeDescriptor *
0x5F5A12: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x5F5A17: push    edi; int
0x5F5A18: push    eax; void *
0x5F5A19: call    OblivionDynamicCast
0x5F5A1E: push    3Ch ; '<'; Size
0x5F5A20: mov     [esp+38h+arg_0], eax
0x5F5A24: call    FormHeapAlloc
0x5F5A29: add     esp, 18h
0x5F5A2C: mov     [esp+20h+var_10], eax
0x5F5A30: cmp     eax, edi
0x5F5A32: mov     [esp+20h+var_4], edi
0x5F5A36: jz      short loc_5F5A43
0x5F5A38: mov     ecx, eax; this
0x5F5A3A: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x5F5A3F: mov     esi, eax
0x5F5A41: jmp     short loc_5F5A45
0x5F5A43: xor     esi, esi
0x5F5A45: push    19h
0x5F5A47: mov     ecx, esi
0x5F5A49: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5F5A51: call    TESPackage_SetType?
0x5F5A56: mov     ecx, [esi+1Ch]
0x5F5A59: and     ecx, 0FFFFFFFDh
0x5F5A5C: or      ecx, 4
0x5F5A5F: push    0Ch; Size
0x5F5A61: mov     [esi+1Ch], ecx
0x5F5A64: call    FormHeapAlloc
0x5F5A69: add     esp, 4
0x5F5A6C: mov     [esp+20h+var_10], eax
0x5F5A70: cmp     eax, edi
0x5F5A72: mov     [esp+20h+var_4], 1
0x5F5A7A: jz      short loc_5F5A85
0x5F5A7C: mov     ecx, eax
0x5F5A7E: call    TESPackage_LocationData_constr
0x5F5A83: mov     edi, eax
0x5F5A85: push    0
0x5F5A87: mov     ecx, edi
0x5F5A89: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5F5A91: call    TESPackage_LocationData_SetType
0x5F5A96: mov     edx, [esp+20h+arg_4]
0x5F5A9A: push    edx
0x5F5A9B: mov     ecx, edi
0x5F5A9D: call    TESPackage_LocationData_SetReference
0x5F5AA2: push    78h ; 'x'
0x5F5AA4: mov     ecx, edi
0x5F5AA6: call    TESPackage_LocationData_SetRadius
0x5F5AAB: push    edi
0x5F5AAC: mov     ecx, esi
0x5F5AAE: call    TESPackage_SetLocation
0x5F5AB3: test    edi, edi
0x5F5AB5: jz      short loc_5F5AC7
0x5F5AB7: mov     ecx, edi
0x5F5AB9: call    TESPackage_LocationData_destr
0x5F5ABE: push    edi
0x5F5ABF: call    FormHeapFree
0x5F5AC4: add     esp, 4
0x5F5AC7: push    0Ch; Size
0x5F5AC9: call    FormHeapAlloc
0x5F5ACE: add     esp, 4
0x5F5AD1: mov     [esp+20h+arg_4], eax
0x5F5AD5: test    eax, eax
0x5F5AD7: mov     [esp+20h+var_4], 2
0x5F5ADF: jz      short loc_5F5AEC
0x5F5AE1: mov     ecx, eax
0x5F5AE3: call    TESPackage_TargetData_constr
0x5F5AE8: mov     edi, eax
0x5F5AEA: jmp     short loc_5F5AEE
0x5F5AEC: xor     edi, edi
0x5F5AEE: push    edi
0x5F5AEF: mov     ecx, esi
0x5F5AF1: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5F5AF9: call    TESPackage_SetTarget
0x5F5AFE: test    edi, edi
0x5F5B00: jz      short loc_5F5B12
0x5F5B02: mov     ecx, edi; void *
0x5F5B04: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x5F5B09: push    edi
0x5F5B0A: call    FormHeapFree
0x5F5B0F: add     esp, 4
0x5F5B12: mov     ecx, esi
0x5F5B14: call    sub_5672A0
0x5F5B19: mov     ecx, [esi+28h]
0x5F5B1C: push    1
0x5F5B1E: call    TESPackage_TargetData_SetType
0x5F5B23: mov     eax, [esp+20h+arg_0]
0x5F5B27: mov     ecx, [esi+28h]
0x5F5B2A: push    eax
0x5F5B2B: call    TESPackage_TargetData_SetTargetForm
0x5F5B30: push    1; a4
0x5F5B32: push    1; a3
0x5F5B34: push    esi; a2
0x5F5B35: mov     ecx, ebp; this
0x5F5B37: call    Actor_AddPackage?
0x5F5B3C: cmp     [esp+20h+arg_8], 0
0x5F5B41: jz      short loc_5F5B53
0x5F5B43: mov     ecx, [ebp+58h]
0x5F5B46: mov     edx, [ecx]
0x5F5B48: mov     eax, [edx+188h]
0x5F5B4E: push    1
0x5F5B50: push    ebp
0x5F5B51: call    eax
0x5F5B53: mov     ecx, dword ptr [esp+20h+var_C]
0x5F5B57: mov     large fs:0, ecx
0x5F5B5E: pop     ecx
0x5F5B5F: pop     edi
0x5F5B60: pop     esi
0x5F5B61: pop     ebp
0x5F5B62: add     esp, 10h
0x5F5B65: retn    0Ch
