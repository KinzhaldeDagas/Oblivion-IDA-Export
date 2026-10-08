0x51EB80: push    0FFFFFFFFh
0x51EB82: push    offset TESCreature_constr_SEH
0x51EB87: mov     eax, large fs:0
0x51EB8D: push    eax
0x51EB8E: push    ecx
0x51EB8F: push    ebx
0x51EB90: push    ebp
0x51EB91: push    esi
0x51EB92: push    edi
0x51EB93: mov     eax, ds:0B30AACh
0x51EB98: xor     eax, esp
0x51EB9A: push    eax
0x51EB9B: lea     eax, [esp+24h+var_C]
0x51EB9F: mov     large fs:0, eax
0x51EBA5: mov     esi, ecx
0x51EBA7: mov     [esp+24h+var_10], esi
0x51EBAB: call    TESActorBase_constr
0x51EBB0: lea     ebp, [esi+0E4h]
0x51EBB6: mov     ecx, ebp
0x51EBB8: mov     [esp+24h+var_4], 0
0x51EBC0: call    TESAttackDamageForm_constr
0x51EBC5: lea     ecx, [esi+0ECh]
0x51EBCB: mov     byte ptr [esp+24h+var_4], 1
0x51EBD0: call    sub_46DBC0
0x51EBD5: lea     edi, [esi+24h]
0x51EBD8: lea     ebx, [esi+68h]
0x51EBDB: lea     ecx, [esi+11Ch]; this
0x51EBE1: mov     dword ptr [esi], offset ??_7TESCreature@@6BTESCreature@@@; const TESCreature::`vftable'{for `TESCreature'}
0x51EBE7: mov     dword ptr [edi], offset ??_7TESCreature@@6BTESActorBaseData@@@; Verified typed prefix through +0x50 only; complete table extends further. Blood slots +0x28/+0x30 are independent disable flags; +0x38/+0x40 are texture/particle getters. TESCreature ctor 0x51EB80 installs its component vtable at complete-object +0x24. Unknown slots intentionally remain untyped.
0x51EBED: mov     dword ptr [esi+44h], offset ??_7TESCreature@@6BTESContainer@@@; const TESCreature::`vftable'{for `TESContainer'}
0x51EBF4: mov     dword ptr [esi+54h], offset ??_7TESCreature@@6BTESSpellList@@@; const TESCreature::`vftable'{for `TESSpellList'}
0x51EBFB: mov     dword ptr [ebx], offset ??_7TESCreature@@6BTESAIForm@@@; const TESCreature::`vftable'{for `TESAIForm'}
0x51EC01: mov     dword ptr [esi+80h], offset ??_7TESCreature@@6BTESHealthForm@@@; const TESCreature::`vftable'{for `TESHealthForm'}
0x51EC0B: mov     dword ptr [esi+88h], offset ??_7TESCreature@@6BTESAttributes@@@; const TESCreature::`vftable'{for `TESAttributes'}
0x51EC15: mov     dword ptr [esi+94h], offset ??_7TESCreature@@6BTESAnimation@@@; const TESCreature::`vftable'{for `TESAnimation'}
0x51EC1F: mov     dword ptr [esi+0A0h], offset ??_7TESCreature@@6BTESFullName@@@; const TESCreature::`vftable'{for `TESFullName'}
0x51EC29: mov     dword ptr [esi+0ACh], offset ??_7TESCreature@@6BTESModel@@@; const TESCreature::`vftable'{for `TESModel'}
0x51EC33: mov     dword ptr [esi+0C4h], offset ??_7TESCreature@@6BTESScriptableForm@@@; const TESCreature::`vftable'{for `TESScriptableForm'}
0x51EC3D: mov     dword ptr [ebp+0], offset ??_7TESCreature@@6BTESAttackDamageForm@@@; const TESCreature::`vftable'{for `TESAttackDamageForm'}
0x51EC44: mov     dword ptr [esi+0ECh], offset ??_7TESCreature@@6BTESModelList@@@; const TESCreature::`vftable'{for `TESModelList'}
0x51EC4E: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x51EC53: lea     ecx, [esi+134h]
0x51EC59: mov     byte ptr [esp+24h+var_4], 2
0x51EC5E: call    TESTexture_constr
0x51EC63: mov     ecx, esi; self
0x51EC65: mov     byte ptr [esp+24h+var_4], 3
0x51EC6A: mov     byte ptr [esi+4], 24h ; '$'
0x51EC6E: call    TESCreature_InitializeDefaults
0x51EC73: push    32h ; '2'
0x51EC75: mov     ecx, ebx
0x51EC77: call    TESAIForm_SetResponsibility
0x51EC7C: push    46h ; 'F'
0x51EC7E: mov     ecx, ebx
0x51EC80: call    TESAIForm_SetAggression
0x51EC85: push    32h ; '2'
0x51EC87: mov     ecx, ebx
0x51EC89: call    TESAIForm_SetConfidence
0x51EC8E: push    32h ; '2'
0x51EC90: mov     ecx, ebx
0x51EC92: call    TESAIForm_SetEnergy
0x51EC97: push    32h ; '2'; char
0x51EC99: push    6; int
0x51EC9B: lea     ecx, [esi+88h]; int
0x51ECA1: call    TESAttributes_SetAVi; TESAttributes_SetAVi: attributes are stored as single bytes in TESAttributes. AVU base-AV guards clamp attributes to 0..configuredLimit before player integer base setters/modifiers reach this storage.
0x51ECA6: mov     eax, [edi]
0x51ECA8: mov     edx, [eax+50h]
0x51ECAB: or      dword ptr [edi+4], 4000h
0x51ECB2: push    10h
0x51ECB4: mov     ecx, edi
0x51ECB6: call    edx
0x51ECB8: mov     eax, ds:0BA9DE4h
0x51ECBD: mov     ecx, large fs:2Ch
0x51ECC4: mov     edx, [ecx+eax*4]
0x51ECC7: cmp     byte ptr [edx+184h], 0
0x51ECCE: jnz     short loc_51ECDF
0x51ECD0: mov     eax, ds:0B36298h
0x51ECD5: push    0
0x51ECD7: push    eax
0x51ECD8: mov     ecx, edi
0x51ECDA: call    TESActorBaseData_SetFactionRank
0x51ECDF: mov     eax, esi
0x51ECE1: mov     ecx, dword ptr [esp+24h+var_C]
0x51ECE5: mov     large fs:0, ecx
0x51ECEC: pop     ecx
0x51ECED: pop     edi
0x51ECEE: pop     esi
0x51ECEF: pop     ebp
0x51ECF0: pop     ebx
0x51ECF1: add     esp, 10h
0x51ECF4: retn
0x9B7A40: mov     ecx, [ebp-10h]; this
0x9B7A43: jmp     ??1TESActorBase@@UAE@XZ; TESActorBase::~TESActorBase(void)
0x9B7A48: mov     ecx, [ebp-10h]
0x9B7A4B: add     ecx, 0E4h ; 'ä'
0x9B7A51: jmp     TESAttackDamageForm_destr
0x9B7A56: mov     ecx, [ebp-10h]
0x9B7A59: add     ecx, 11Ch; this
0x9B7A5F: jmp     ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x9B7A64: mov     ecx, [ebp-10h]
0x9B7A67: add     ecx, 134h; void *
0x9B7A6D: jmp     TESTexture_destr
0x9B7A72: mov     edx, [esp+arg_4]
0x9B7A76: lea     eax, [edx-14h]
0x9B7A79: mov     ecx, [edx-18h]
0x9B7A7C: xor     ecx, eax
0x9B7A7E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B7A83: mov     eax, offset stru_AE23B4
0x9B7A88: jmp     ___CxxFrameHandler3
