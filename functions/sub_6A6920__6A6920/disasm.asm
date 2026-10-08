0x6A6920: push    0FFFFFFFFh
0x6A6922: push    offset SEH_8094D0
0x6A6927: mov     eax, large fs:0
0x6A692D: push    eax
0x6A692E: push    ebx
0x6A692F: push    ebp
0x6A6930: push    esi
0x6A6931: push    edi
0x6A6932: mov     eax, ds:0B30AACh
0x6A6937: xor     eax, esp
0x6A6939: push    eax
0x6A693A: lea     eax, [esp+20h+var_C]
0x6A693E: mov     large fs:0, eax
0x6A6944: mov     esi, ecx
0x6A6946: mov     eax, [esi+0Ch]
0x6A6949: mov     eax, [eax+1Ch]
0x6A694C: mov     ebp, [eax+78h]
0x6A694F: xor     ebx, ebx
0x6A6951: cmp     ebp, ebx
0x6A6953: jz      loc_6A6A85
0x6A6959: cmp     [esi+20h], ebx
0x6A695C: jz      loc_6A6A85
0x6A6962: cmp     dword ptr [esi+28h], 4
0x6A6966: jnz     loc_6A6A85
0x6A696C: cmp     byte ptr [esp+20h+arg_0], bl
0x6A6970: jz      loc_6A6A32
0x6A6976: mov     edi, [esi+34h]
0x6A6979: cmp     edi, ebx
0x6A697B: jz      short loc_6A69A6
0x6A697D: mov     ecx, edi
0x6A697F: call    BSSimpleList_IsEmpty
0x6A6984: test    al, al
0x6A6986: jz      loc_6A6A85
0x6A698C: cmp     edi, ebx
0x6A698E: jz      short loc_6A69A6
0x6A6990: mov     ecx, edi
0x6A6992: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x6A6997: mov     eax, [esi+34h]
0x6A699A: push    eax
0x6A699B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6A69A0: add     esp, 4
0x6A69A3: mov     [esi+34h], ebx
0x6A69A6: push    4Ch ; 'L'; Size
0x6A69A8: call    FormHeapAlloc
0x6A69AD: mov     edi, eax
0x6A69AF: add     esp, 4
0x6A69B2: mov     [esp+20h+arg_0], edi
0x6A69B6: cmp     edi, ebx
0x6A69B8: mov     [esp+20h+var_4], ebx
0x6A69BC: jz      short loc_6A69DF
0x6A69BE: mov     ecx, [esi+20h]
0x6A69C1: fld     dword ptr ds:0A30634h
0x6A69C7: mov     edx, [ecx]
0x6A69C9: mov     eax, [edx+4]
0x6A69CC: push    ecx
0x6A69CD: fstp    [esp+24h+elapsedSeconds]; elapsedSeconds
0x6A69D0: push    ebp; effectShader
0x6A69D1: call    eax
0x6A69D3: push    eax; targetReference
0x6A69D4: mov     ecx, edi; this
0x6A69D6: call    MagicShaderHitEffect_constr_args2
0x6A69DB: mov     edi, eax
0x6A69DD: jmp     short loc_6A69E1
0x6A69DF: xor     edi, edi
0x6A69E1: mov     edx, [edi]
0x6A69E3: mov     eax, [edx+68h]
0x6A69E6: mov     ecx, edi
0x6A69E8: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6A69F0: call    eax
0x6A69F2: test    al, al
0x6A69F4: jz      short loc_6A6A26
0x6A69F6: push    edi; effect
0x6A69F7: mov     ecx, (offset qword_B3BB2C+1D4h); self
0x6A69FC: call    ActorProcessManager_RegisterTempEffect; [Verified] ActorProcessManager_RegisterTempEffect increments the effect reference and routes GetTypeID 4-6 into extendedTempEffects (+0x48), all other IDs into activeTempEffects (+0x40). Vtable evidence confirms decals 0/1 and particles 2 use the active list. Fallout divergence: its BGSDecalManager updates distinct simple-decal and emitter collections instead of using this per-actor temp-effect routing; one-to-one equivalence is Unknown.
0x6A6A01: push    8; Size
0x6A6A03: call    FormHeapAlloc
0x6A6A08: add     esp, 4
0x6A6A0B: cmp     eax, ebx
0x6A6A0D: jz      short loc_6A6A1C
0x6A6A0F: mov     [eax], edi
0x6A6A11: mov     [eax+4], ebx
0x6A6A14: mov     [esi+34h], eax
0x6A6A17: mov     [edi+18h], esi
0x6A6A1A: jmp     short loc_6A6A85
0x6A6A1C: xor     eax, eax
0x6A6A1E: mov     [esi+34h], eax
0x6A6A21: mov     [edi+18h], esi
0x6A6A24: jmp     short loc_6A6A85
0x6A6A26: mov     edx, [edi]
0x6A6A28: mov     eax, [edx]
0x6A6A2A: push    1
0x6A6A2C: mov     ecx, edi
0x6A6A2E: call    eax
0x6A6A30: jmp     short loc_6A6A85
0x6A6A32: mov     eax, [esi+34h]
0x6A6A35: cmp     eax, ebx
0x6A6A37: jz      short loc_6A6A85
0x6A6A39: mov     dl, 1
0x6A6A3B: jmp     short loc_6A6A40
0x6A6A40: cmp     [eax+4], ebx
0x6A6A43: jnz     short loc_6A6A49
0x6A6A45: cmp     [eax], ebx
0x6A6A47: jz      short loc_6A6A58
0x6A6A49: mov     ecx, [eax]
0x6A6A4B: mov     [ecx+24h], dl
0x6A6A4E: mov     [ecx+18h], ebx
0x6A6A51: mov     eax, [eax+4]
0x6A6A54: cmp     eax, ebx
0x6A6A56: jnz     short loc_6A6A40
0x6A6A58: mov     ecx, [esi+34h]
0x6A6A5B: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x6A6A60: mov     ecx, [esi+34h]
0x6A6A63: push    ecx
0x6A6A64: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6A6A69: mov     ecx, [esi+20h]
0x6A6A6C: mov     [esi+34h], ebx
0x6A6A6F: mov     edx, [ecx]
0x6A6A71: mov     eax, [edx+4]
0x6A6A74: add     esp, 4
0x6A6A77: push    ebp; effectShader
0x6A6A78: call    eax
0x6A6A7A: push    eax; targetReference
0x6A6A7B: mov     ecx, (offset qword_B3BB2C+1D4h); this
0x6A6A80: call    ActorProcessManager_FinishShaderEffectsForTarget; Verified (Oblivion): walks the temp-effect RTTI chain to NiRTTI_MagicShaderHitEffect and marks matching targetReference/TESEffectShader effects finished.
0x6A6A85: mov     ecx, [esp+20h+var_C]
0x6A6A89: mov     large fs:0, ecx
0x6A6A90: pop     ecx
0x6A6A91: pop     edi
0x6A6A92: pop     esi
0x6A6A93: pop     ebp
0x6A6A94: pop     ebx
0x6A6A95: add     esp, 0Ch
0x6A6A98: retn    4
0x9C6200: mov     eax, [ebp+4]
0x9C6203: push    eax
0x9C6204: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C6209: pop     ecx
0x9C620A: retn
0x9C620B: mov     edx, [esp+arg_4]
0x9C620F: lea     eax, [edx-10h]
0x9C6212: mov     ecx, [edx-14h]
0x9C6215: xor     ecx, eax
0x9C6217: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C621C: mov     eax, offset stru_AEE7E8
0x9C6221: jmp     ___CxxFrameHandler3
