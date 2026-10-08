0x51E9A0: push    0FFFFFFFFh
0x51E9A2: push    offset SEH_51E9A0
0x51E9A7: mov     eax, large fs:0
0x51E9AD: push    eax
0x51E9AE: sub     esp, 8
0x51E9B1: push    esi
0x51E9B2: push    edi
0x51E9B3: mov     eax, ds:0B30AACh
0x51E9B8: xor     eax, esp
0x51E9BA: push    eax
0x51E9BB: lea     eax, [esp+20h+var_C]
0x51E9BF: mov     large fs:0, eax
0x51E9C5: mov     esi, ecx
0x51E9C7: mov     [esp+20h+var_10], esi
0x51E9CB: lea     edi, [esi+0E4h]
0x51E9D1: mov     dword ptr [esi], offset ??_7TESCreature@@6BTESCreature@@@; const TESCreature::`vftable'{for `TESCreature'}
0x51E9D7: mov     dword ptr [esi+24h], offset ??_7TESCreature@@6BTESActorBaseData@@@; Verified typed prefix through +0x50 only; complete table extends further. Blood slots +0x28/+0x30 are independent disable flags; +0x38/+0x40 are texture/particle getters. TESCreature ctor 0x51EB80 installs its component vtable at complete-object +0x24. Unknown slots intentionally remain untyped.
0x51E9DE: mov     dword ptr [esi+44h], offset ??_7TESCreature@@6BTESContainer@@@; const TESCreature::`vftable'{for `TESContainer'}
0x51E9E5: mov     dword ptr [esi+54h], offset ??_7TESCreature@@6BTESSpellList@@@; const TESCreature::`vftable'{for `TESSpellList'}
0x51E9EC: mov     dword ptr [esi+68h], offset ??_7TESCreature@@6BTESAIForm@@@; const TESCreature::`vftable'{for `TESAIForm'}
0x51E9F3: mov     dword ptr [esi+80h], offset ??_7TESCreature@@6BTESHealthForm@@@; const TESCreature::`vftable'{for `TESHealthForm'}
0x51E9FD: mov     dword ptr [esi+88h], offset ??_7TESCreature@@6BTESAttributes@@@; const TESCreature::`vftable'{for `TESAttributes'}
0x51EA07: mov     dword ptr [esi+94h], offset ??_7TESCreature@@6BTESAnimation@@@; const TESCreature::`vftable'{for `TESAnimation'}
0x51EA11: mov     dword ptr [esi+0A0h], offset ??_7TESCreature@@6BTESFullName@@@; const TESCreature::`vftable'{for `TESFullName'}
0x51EA1B: mov     dword ptr [esi+0ACh], offset ??_7TESCreature@@6BTESModel@@@; const TESCreature::`vftable'{for `TESModel'}
0x51EA25: mov     dword ptr [esi+0C4h], offset ??_7TESCreature@@6BTESScriptableForm@@@; const TESCreature::`vftable'{for `TESScriptableForm'}
0x51EA2F: mov     dword ptr [edi], offset ??_7TESCreature@@6BTESAttackDamageForm@@@; const TESCreature::`vftable'{for `TESAttackDamageForm'}
0x51EA35: mov     dword ptr [esi+0ECh], offset ??_7TESCreature@@6BTESModelList@@@; const TESCreature::`vftable'{for `TESModelList'}
0x51EA3F: mov     [esp+20h+var_4], 3
0x51EA47: call    TESCreature_ClearAllComponentRefs
0x51EA4C: lea     ecx, [esi+134h]; void *
0x51EA52: mov     byte ptr [esp+20h+var_4], 2
0x51EA57: call    TESTexture_destr
0x51EA5C: lea     ecx, [esi+11Ch]; this
0x51EA62: mov     byte ptr [esp+20h+var_4], 1
0x51EA67: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x51EA6C: mov     ecx, edi
0x51EA6E: mov     byte ptr [esp+20h+var_4], 0
0x51EA73: call    TESAttackDamageForm_destr
0x51EA78: mov     ecx, esi; this
0x51EA7A: mov     [esp+20h+var_4], 0FFFFFFFFh
0x51EA82: call    ??1TESActorBase@@UAE@XZ; TESActorBase::~TESActorBase(void)
0x51EA87: mov     ecx, [esp+20h+var_C]
0x51EA8B: mov     large fs:0, ecx
0x51EA92: pop     ecx
0x51EA93: pop     edi
0x51EA94: pop     esi
0x51EA95: add     esp, 14h
0x51EA98: retn
0x9B79D0: mov     ecx, [ebp-10h]; this
0x9B79D3: jmp     ??1TESActorBase@@UAE@XZ; TESActorBase::~TESActorBase(void)
0x9B79D8: cmp     dword ptr [ebp-10h], 0
0x9B79DC: jz      loc_9B79F2
0x9B79E2: mov     eax, [ebp-10h]
0x9B79E5: add     eax, 0E4h ; 'ä'
0x9B79EA: mov     [ebp-14h], eax
0x9B79ED: jmp     loc_9B79F9
0x9B79F2: mov     dword ptr [ebp-14h], 0
0x9B79F9: mov     ecx, [ebp-14h]
0x9B79FC: jmp     TESAttackDamageForm_destr
0x9B7A01: mov     ecx, [ebp-10h]
0x9B7A04: add     ecx, 11Ch; this
0x9B7A0A: jmp     ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x9B7A0F: mov     ecx, [ebp-10h]
0x9B7A12: add     ecx, 134h; void *
0x9B7A18: jmp     TESTexture_destr
0x9B7A1D: mov     edx, [esp+arg_4]
0x9B7A21: lea     eax, [edx-10h]
0x9B7A24: mov     ecx, [edx-14h]
0x9B7A27: xor     ecx, eax
0x9B7A29: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B7A2E: mov     eax, offset stru_AE2370
0x9B7A33: jmp     ___CxxFrameHandler3
