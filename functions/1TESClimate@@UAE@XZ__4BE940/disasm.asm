0x4BE940: push    0FFFFFFFFh; Verified: TESClimate destructor destroys both textures, clears the weather EntryData list at +0x30, then destroys model and TESForm base.
0x4BE942: push    offset ??1TESClimate@@UAE@XZ_SEH
0x4BE947: mov     eax, large fs:0
0x4BE94D: push    eax
0x4BE94E: push    ecx
0x4BE94F: push    esi
0x4BE950: mov     eax, ds:0B30AACh
0x4BE955: xor     eax, esp
0x4BE957: push    eax
0x4BE958: lea     eax, [esp+18h+var_C]
0x4BE95C: mov     large fs:0, eax
0x4BE962: mov     esi, ecx
0x4BE964: mov     [esp+18h+var_10], esi
0x4BE968: mov     dword ptr [esi], offset ??_7TESClimate@@6B@; const TESClimate::`vftable'
0x4BE96E: mov     [esp+18h+var_4], 3
0x4BE976: call    j_TESForm_ClearComponentReferences
0x4BE97B: push    offset TESTexture_destr; void (__thiscall *)(void *)
0x4BE980: push    2; int
0x4BE982: push    0Ch; unsigned int
0x4BE984: lea     eax, [esi+38h]
0x4BE987: push    eax; void *
0x4BE988: mov     byte ptr [esp+28h+var_4], 2
0x4BE98D: call    $LN21
0x4BE992: lea     ecx, [esi+30h]
0x4BE995: mov     byte ptr [esp+18h+var_4], 1
0x4BE99A: call    sub_4EED70
0x4BE99F: lea     ecx, [esi+18h]; this
0x4BE9A2: mov     byte ptr [esp+18h+var_4], 0
0x4BE9A7: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x4BE9AC: mov     ecx, esi; this
0x4BE9AE: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4BE9B6: call    TESForm_destr
0x4BE9BB: mov     ecx, [esp+18h+var_C]
0x4BE9BF: mov     large fs:0, ecx
0x4BE9C6: pop     ecx
0x4BE9C7: pop     esi
0x4BE9C8: add     esp, 10h
0x4BE9CB: retn
0x9B45C0: mov     ecx, [ebp-10h]; this
0x9B45C3: jmp     TESForm_destr
0x9B45C8: mov     ecx, [ebp-10h]
0x9B45CB: add     ecx, 18h; this
0x9B45CE: jmp     ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x9B45D3: mov     ecx, [ebp-10h]
0x9B45D6: add     ecx, 30h ; '0'
0x9B45D9: jmp     sub_4EED70
0x9B45DE: push    offset TESTexture_destr; void (__thiscall *)(void *)
0x9B45E3: push    2; int
0x9B45E5: push    0Ch; unsigned int
0x9B45E7: mov     eax, [ebp-10h]
0x9B45EA: add     eax, 38h ; '8'
0x9B45ED: push    eax; void *
0x9B45EE: call    $LN21
0x9B45F3: retn
0x9B45F4: mov     edx, [esp+arg_4]
0x9B45F8: lea     eax, [edx-8]
0x9B45FB: mov     ecx, [edx-0Ch]
0x9B45FE: xor     ecx, eax
0x9B4600: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B4605: mov     eax, offset stru_ADFC70
0x9B460A: jmp     ___CxxFrameHandler3
