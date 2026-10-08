0x5E0B70: push    0FFFFFFFFh
0x5E0B72: push    offset SEH_8C8970
0x5E0B77: mov     eax, large fs:0
0x5E0B7D: push    eax
0x5E0B7E: push    ecx
0x5E0B7F: push    esi
0x5E0B80: push    edi
0x5E0B81: mov     eax, ds:0B30AACh
0x5E0B86: xor     eax, esp
0x5E0B88: push    eax
0x5E0B89: lea     eax, [esp+1Ch+var_C]
0x5E0B8D: mov     large fs:0, eax
0x5E0B93: mov     esi, ecx
0x5E0B95: call    Magic_GetAbsorbShader
0x5E0B9A: push    4Ch ; 'L'; Size
0x5E0B9C: mov     edi, eax
0x5E0B9E: call    FormHeapAlloc
0x5E0BA3: add     esp, 4
0x5E0BA6: mov     [esp+1Ch+var_10], eax
0x5E0BAA: test    eax, eax
0x5E0BAC: mov     [esp+1Ch+var_4], 0
0x5E0BB4: jz      short loc_5E0BCC
0x5E0BB6: fldz
0x5E0BB8: push    ecx
0x5E0BB9: fstp    [esp+20h+elapsedSeconds]; elapsedSeconds
0x5E0BBC: add     esi, 0FFFFFF98h
0x5E0BBF: push    edi; effectShader
0x5E0BC0: push    esi; targetReference
0x5E0BC1: mov     ecx, eax; this
0x5E0BC3: call    MagicShaderHitEffect_constr_args2
0x5E0BC8: mov     esi, eax
0x5E0BCA: jmp     short loc_5E0BCE
0x5E0BCC: xor     esi, esi
0x5E0BCE: mov     eax, [esi]
0x5E0BD0: mov     edx, [eax+68h]
0x5E0BD3: mov     ecx, esi
0x5E0BD5: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x5E0BDD: call    edx
0x5E0BDF: test    al, al
0x5E0BE1: jz      short loc_5E0C02
0x5E0BE3: push    esi; effect
0x5E0BE4: mov     ecx, (offset qword_B3BB2C+1D4h); self
0x5E0BE9: call    ActorProcessManager_RegisterTempEffect; [Verified] ActorProcessManager_RegisterTempEffect increments the effect reference and routes GetTypeID 4-6 into extendedTempEffects (+0x48), all other IDs into activeTempEffects (+0x40). Vtable evidence confirms decals 0/1 and particles 2 use the active list. Fallout divergence: its BGSDecalManager updates distinct simple-decal and emitter collections instead of using this per-actor temp-effect routing; one-to-one equivalence is Unknown.
0x5E0BEE: mov     ecx, [esp+1Ch+var_C]
0x5E0BF2: mov     large fs:0, ecx
0x5E0BF9: pop     ecx
0x5E0BFA: pop     edi
0x5E0BFB: pop     esi
0x5E0BFC: add     esp, 10h
0x5E0BFF: retn    8
0x5E0C02: mov     eax, [esi]
0x5E0C04: mov     edx, [eax]
0x5E0C06: push    1
0x5E0C08: mov     ecx, esi
0x5E0C0A: call    edx
0x5E0C0C: mov     ecx, [esp+1Ch+var_C]
0x5E0C10: mov     large fs:0, ecx
0x5E0C17: pop     ecx
0x5E0C18: pop     edi
0x5E0C19: pop     esi
0x5E0C1A: add     esp, 10h
0x5E0C1D: retn    8
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
