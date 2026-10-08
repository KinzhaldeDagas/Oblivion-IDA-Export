0x5F5870: push    0FFFFFFFFh
0x5F5872: push    offset Actor_CastOnTarget_SEH
0x5F5877: mov     eax, large fs:0
0x5F587D: push    eax
0x5F587E: push    ecx
0x5F587F: push    ebp
0x5F5880: push    esi
0x5F5881: push    edi
0x5F5882: mov     eax, ds:0B30AACh
0x5F5887: xor     eax, esp
0x5F5889: push    eax
0x5F588A: lea     eax, [esp+20h+var_C]
0x5F588E: mov     large fs:0, eax
0x5F5894: mov     ebp, ecx
0x5F5896: mov     eax, [esp+20h+arg_0]
0x5F589A: xor     edi, edi
0x5F589C: push    edi; int
0x5F589D: push    offset ??_R0?AVMagicItemForm@@@8; struct TypeDescriptor *
0x5F58A2: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x5F58A7: push    edi; int
0x5F58A8: push    eax; void *
0x5F58A9: call    OblivionDynamicCast
0x5F58AE: push    3Ch ; '<'; Size
0x5F58B0: mov     [esp+38h+arg_0], eax
0x5F58B4: call    FormHeapAlloc
0x5F58B9: add     esp, 18h
0x5F58BC: mov     [esp+20h+var_10], eax
0x5F58C0: cmp     eax, edi
0x5F58C2: mov     [esp+20h+var_4], edi
0x5F58C6: jz      short loc_5F58D3
0x5F58C8: mov     ecx, eax; this
0x5F58CA: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x5F58CF: mov     esi, eax
0x5F58D1: jmp     short loc_5F58D5
0x5F58D3: xor     esi, esi
0x5F58D5: push    1Ah
0x5F58D7: mov     ecx, esi
0x5F58D9: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5F58E1: call    TESPackage_SetType?
0x5F58E6: or      dword ptr [esi+1Ch], 6
0x5F58EA: push    0Ch; Size
0x5F58EC: call    FormHeapAlloc
0x5F58F1: add     esp, 4
0x5F58F4: mov     [esp+20h+var_10], eax
0x5F58F8: cmp     eax, edi
0x5F58FA: mov     [esp+20h+var_4], 1
0x5F5902: jz      short loc_5F590D
0x5F5904: mov     ecx, eax
0x5F5906: call    TESPackage_LocationData_constr
0x5F590B: mov     edi, eax
0x5F590D: push    0
0x5F590F: mov     ecx, edi
0x5F5911: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5F5919: call    TESPackage_LocationData_SetType
0x5F591E: push    0
0x5F5920: mov     ecx, edi
0x5F5922: call    TESPackage_LocationData_SetRadius
0x5F5927: mov     ecx, [esp+20h+arg_4]
0x5F592B: push    ecx
0x5F592C: mov     ecx, edi
0x5F592E: call    TESPackage_LocationData_SetReference
0x5F5933: push    edi
0x5F5934: mov     ecx, esi
0x5F5936: call    TESPackage_SetLocation; 3DTheft decode: TESPackage_SetLocation allocates package->location when needed and copies a 0x0C LocationData record; null source clears location data.
0x5F593B: test    edi, edi
0x5F593D: jz      short loc_5F594F
0x5F593F: mov     ecx, edi
0x5F5941: call    TESPackage_LocationData_destr
0x5F5946: push    edi
0x5F5947: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5F594C: add     esp, 4
0x5F594F: push    0Ch; Size
0x5F5951: call    FormHeapAlloc
0x5F5956: add     esp, 4
0x5F5959: mov     [esp+20h+arg_4], eax
0x5F595D: test    eax, eax
0x5F595F: mov     [esp+20h+var_4], 2
0x5F5967: jz      short loc_5F5974
0x5F5969: mov     ecx, eax
0x5F596B: call    TESPackage_TargetData_constr; 3DTheft decode: TESPackage_TargetData constructor initializes targetType=2, target/object=0, count=0.
0x5F5970: mov     edi, eax
0x5F5972: jmp     short loc_5F5976
0x5F5974: xor     edi, edi
0x5F5976: push    edi
0x5F5977: mov     ecx, esi
0x5F5979: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5F5981: call    TESPackage_SetTarget; 3DTheft decode: TESPackage_SetTarget allocates package->target when needed, copies a 0x0C TargetData record, and leaves later callers to set target type/ref/count fields.
0x5F5986: test    edi, edi
0x5F5988: jz      short loc_5F599A
0x5F598A: mov     ecx, edi; this
0x5F598C: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x5F5991: push    edi
0x5F5992: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5F5997: add     esp, 4
0x5F599A: mov     ecx, esi
0x5F599C: call    sub_5672A0; 3DTheft decode: TESPackage procedure-array resolver is a mutator. It writes TESPackage+0x18/procedureArrayIndex directly; callers should not use EAX as the row result.
0x5F59A1: mov     ecx, [esi+28h]
0x5F59A4: push    1
0x5F59A6: call    TESPackage_TargetData_SetType; 3DTheft decode: TargetData_SetType writes targetType and clears the target/object field for refr/base/type target modes.
0x5F59AB: mov     edx, [esp+20h+arg_0]
0x5F59AF: mov     ecx, [esi+28h]
0x5F59B2: push    edx
0x5F59B3: call    TESPackage_TargetData_SetTargetForm
0x5F59B8: push    1; a4
0x5F59BA: push    1; a3
0x5F59BC: push    esi; a2
0x5F59BD: mov     ecx, ebp; this
0x5F59BF: call    Actor_AddPackage?; 3DTheft: xrefs ignore this function's return value; use current package/process state after call, not AL/EAX, as the package assignment result.
0x5F59C4: mov     ecx, [esp+20h+var_C]
0x5F59C8: mov     large fs:0, ecx
0x5F59CF: pop     ecx
0x5F59D0: pop     edi
0x5F59D1: pop     esi
0x5F59D2: pop     ebp
0x5F59D3: add     esp, 10h
0x5F59D6: retn    8
0x9C2940: mov     eax, [ebp-10h]
0x9C2943: push    eax
0x9C2944: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C2949: pop     ecx
0x9C294A: retn
0x9C294B: mov     eax, [ebp-10h]
0x9C294E: push    eax
0x9C294F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C2954: pop     ecx
0x9C2955: retn
0x9C2956: mov     eax, [ebp+8]
0x9C2959: push    eax
0x9C295A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C295F: pop     ecx
0x9C2960: retn
0x9C2961: mov     edx, [esp+arg_4]
0x9C2965: lea     eax, [edx-10h]
0x9C2968: mov     ecx, [edx-14h]
0x9C296B: xor     ecx, eax
0x9C296D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C2972: mov     eax, offset stru_AEB72C
0x9C2977: jmp     ___CxxFrameHandler3
