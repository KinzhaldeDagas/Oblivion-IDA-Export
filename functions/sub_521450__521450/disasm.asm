0x521450: push    0FFFFFFFFh; Idle root lookup for actor model path; rejects final candidate when ANAM high bit is set but model path is not .kf.
0x521452: push    offset SEH_616530
0x521457: mov     eax, large fs:0
0x52145D: push    eax
0x52145E: sub     esp, 0Ch
0x521461: push    ebx
0x521462: push    ebp
0x521463: push    esi
0x521464: push    edi
0x521465: mov     eax, ds:0B30AACh
0x52146A: xor     eax, esp
0x52146C: push    eax
0x52146D: lea     eax, [esp+2Ch+var_C]
0x521471: mov     large fs:0, eax
0x521477: mov     [esp+2Ch+var_18], ecx
0x52147B: mov     ebp, [esp+2Ch+arg_0]
0x52147F: xor     ebx, ebx
0x521481: xor     edi, edi
0x521483: cmp     ebp, ebx
0x521485: jz      loc_52155D
0x52148B: mov     [esp+2Ch+var_14], ebx
0x52148F: mov     [esp+2Ch+var_10], bx
0x521494: mov     [esp+2Ch+var_E], bx
0x521499: mov     edx, [ebp+0]
0x52149C: lea     eax, [esp+2Ch+var_14]
0x5214A0: push    eax
0x5214A1: mov     eax, [edx+170h]
0x5214A7: mov     ecx, ebp
0x5214A9: mov     [esp+30h+var_4], ebx
0x5214AD: call    eax
0x5214AF: push    eax
0x5214B0: call    GetFormModelPAth
0x5214B5: add     esp, 4
0x5214B8: push    eax
0x5214B9: call    TESIdleForm_BuildIdleAnimsRoot; Builds IdleAnims lookup root from actor model path: preserves existing IdleAnims prefix or appends IdleAnims to model directory.
0x5214BE: mov     esi, [esp+34h+var_14]
0x5214C2: add     esp, 8
0x5214C5: cmp     esi, ebx
0x5214C7: jz      short loc_52152E
0x5214C9: cmp     byte ptr [esi], 0
0x5214CC: jz      short loc_52152E
0x5214CE: lea     ecx, [esp+2Ch+arg_0]
0x5214D2: push    ecx
0x5214D3: mov     ecx, [esp+30h+var_18]
0x5214D7: push    esi
0x5214D8: mov     [esp+34h+arg_0], ebx
0x5214DC: call    NiTMap_GetAt
0x5214E1: test    al, al
0x5214E3: jz      short loc_52152E
0x5214E5: mov     ebx, [esp+2Ch+arg_0]
0x5214E9: test    ebx, ebx
0x5214EB: jz      short loc_52152C
0x5214ED: mov     eax, [ebx+0Ch]
0x5214F0: xor     esi, esi
0x5214F2: test    eax, eax
0x5214F4: mov     [esp+2Ch+arg_0], eax
0x5214F8: jbe     short loc_521528
0x5214FA: lea     ebx, [ebx+0]
0x521500: push    esi
0x521501: mov     ecx, ebx
0x521503: call    sub_494ED0
0x521508: test    eax, eax
0x52150A: jz      short loc_52151F
0x52150C: mov     edx, [esp+2Ch+arg_4]
0x521510: push    edx
0x521511: push    ebp
0x521512: mov     ecx, eax
0x521514: call    TESIdleForm_FindCandidateRecursive; Recursive idle candidate search: a node is a fallback if ANAM high bit is set or model path is .kf; child matches override parent fallback.
0x521519: mov     edi, eax
0x52151B: test    edi, edi
0x52151D: jnz     short loc_521528
0x52151F: add     esi, 1
0x521522: cmp     esi, [esp+2Ch+arg_0]
0x521526: jb      short loc_521500
0x521528: mov     esi, [esp+2Ch+var_14]
0x52152C: xor     ebx, ebx
0x52152E: push    esi
0x52152F: mov     [esp+30h+var_4], 0FFFFFFFFh
0x521537: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x52153C: add     esp, 4
0x52153F: cmp     edi, ebx
0x521541: jz      short loc_52155D
0x521543: mov     ecx, edi
0x521545: call    TESIdleForm_GetHighBitFlag; TESIdleForm ANAM high bit test: returns ANAM >> 7.
0x52154A: test    al, al
0x52154C: jz      short loc_52155D
0x52154E: mov     ecx, edi
0x521550: call    TESIdleForm_ModelPathIsKF; TESIdleForm model path extension test: true only when the model path extension is exactly .kf.
0x521555: test    al, al
0x521557: jnz     short loc_52155D
0x521559: xor     eax, eax
0x52155B: jmp     short loc_52155F
0x52155D: mov     eax, edi
0x52155F: mov     ecx, [esp+2Ch+var_C]
0x521563: mov     large fs:0, ecx
0x52156A: pop     ecx
0x52156B: pop     edi
0x52156C: pop     esi
0x52156D: pop     ebp
0x52156E: pop     ebx
0x52156F: add     esp, 18h
0x521572: retn    8
0x9C2A40: lea     ecx, [ebp-14h]; void *
0x9C2A43: jmp     BSStringT_Clear
0x9C2A48: mov     edx, [esp+arg_4]
0x9C2A4C: lea     eax, [edx-1Ch]
0x9C2A4F: mov     ecx, [edx-20h]
0x9C2A52: xor     ecx, eax
0x9C2A54: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C2A59: mov     eax, offset stru_AEB7F4
0x9C2A5E: jmp     ___CxxFrameHandler3
