0x98B194: push    2Ch
0x98B196: push    offset stru_AFFD20
0x98B19B: call    __SEH_prolog4
0x98B1A0: mov     ebx, ecx
0x98B1A2: mov     edi, [ebp+arg_4]
0x98B1A5: mov     esi, [ebp+arg_0]
0x98B1A8: mov     [ebp+var_1C], ebx
0x98B1AB: and     [ebp+var_34], 0
0x98B1AF: mov     eax, [edi-4]
0x98B1B2: mov     [ebp+var_24], eax
0x98B1B5: push    dword ptr [esi+18h]
0x98B1B8: lea     eax, [ebp+var_3C]
0x98B1BB: push    eax
0x98B1BC: call    __CreateFrameInfo
0x98B1C1: pop     ecx
0x98B1C2: pop     ecx
0x98B1C3: mov     [ebp+var_28], eax
0x98B1C6: call    __getptd
0x98B1CB: mov     eax, [eax+88h]
0x98B1D1: mov     [ebp+var_2C], eax
0x98B1D4: call    __getptd
0x98B1D9: mov     eax, [eax+8Ch]
0x98B1DF: mov     [ebp+var_30], eax
0x98B1E2: call    __getptd
0x98B1E7: mov     [eax+88h], esi
0x98B1ED: call    __getptd
0x98B1F2: mov     ecx, [ebp+arg_8]
0x98B1F5: mov     [eax+8Ch], ecx
0x98B1FB: and     [ebp+ms_exc.registration.TryLevel], 0
0x98B1FF: xor     eax, eax
0x98B201: inc     eax
0x98B202: mov     [ebp+arg_8], eax
0x98B205: mov     [ebp+ms_exc.registration.TryLevel], eax
0x98B208: push    [ebp+arg_14]; unsigned int
0x98B20B: push    [ebp+arg_10]; int
0x98B20E: push    ebx; void *
0x98B20F: push    [ebp+arg_C]; struct _s_FuncInfo *
0x98B212: push    edi; struct EHRegistrationNode *
0x98B213: call    ?_CallCatchBlock2@@YAPAXPAUEHRegistrationNode@@PBU_s_FuncInfo@@PAXHK@Z
0x98B218: add     esp, 14h
0x98B21B: mov     [ebp+var_1C], eax
0x98B21E: and     [ebp+ms_exc.registration.TryLevel], 0
0x98B222: jmp     short loc_98B293
0x98B224: mov     eax, [ebp+ms_exc.exc_ptr]
0x98B227: call    ?ExFilterRethrow@@YAHPAU_EXCEPTION_POINTERS@@@Z
0x98B22C: retn
0x98B22D: mov     esp, [ebp+ms_exc.old_esp]
0x98B230: call    __getptd
0x98B235: and     dword ptr [eax+20Ch], 0
0x98B23C: mov     esi, [ebp+arg_C]
0x98B23F: mov     edi, [ebp+arg_4]
0x98B242: cmp     dword ptr [esi+4], 80h ; '€'
0x98B249: jg      short loc_98B251
0x98B24B: movsx   ecx, byte ptr [edi+8]
0x98B24F: jmp     short loc_98B254
0x98B251: mov     ecx, [edi+8]
0x98B254: mov     ebx, [esi+10h]
0x98B257: and     [ebp+var_20], 0
0x98B25B: mov     eax, [ebp+var_20]
0x98B25E: cmp     eax, [esi+0Ch]
0x98B261: jnb     short loc_98B27B
0x98B263: imul    eax, 14h
0x98B266: add     eax, ebx
0x98B268: mov     edx, [eax+4]
0x98B26B: cmp     ecx, edx
0x98B26D: jle     short loc_98B2AF
0x98B26F: cmp     ecx, [eax+8]
0x98B272: jg      short loc_98B2AF
0x98B274: mov     eax, [esi+8]
0x98B277: mov     ecx, [eax+edx*8+8]
0x98B27B: push    ecx
0x98B27C: push    esi
0x98B27D: push    0
0x98B27F: push    edi
0x98B280: call    ___FrameUnwindToState
0x98B285: add     esp, 10h
0x98B288: and     [ebp+var_1C], 0
0x98B28C: and     [ebp+ms_exc.registration.TryLevel], 0
0x98B290: mov     esi, [ebp+arg_0]
0x98B293: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98B29A: mov     [ebp+arg_8], 0
0x98B2A1: call    ?CallCatchBlock@@YAPAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PBU_s_FuncInfo@@PAXHK@Z___$LN16_3
0x98B2A6: mov     eax, [ebp+var_1C]
0x98B2A9: call    __SEH_epilog4
0x98B2AE: retn
0x98B2AF: inc     [ebp+var_20]
0x98B2B2: jmp     short loc_98B25B
0x98B2B4: mov     edi, [ebp+arg_4]
0x98B2B7: mov     esi, [ebp+arg_0]
0x98B2BA: mov     eax, [ebp+var_24]
0x98B2BD: mov     [edi-4], eax
0x98B2C0: push    [ebp+var_28]
0x98B2C3: call    __FindAndUnlinkFrame
0x98B2C8: pop     ecx
0x98B2C9: call    __getptd
0x98B2CE: mov     ecx, [ebp+var_2C]
0x98B2D1: mov     [eax+88h], ecx
0x98B2D7: call    __getptd
0x98B2DC: mov     ecx, [ebp+var_30]
0x98B2DF: mov     [eax+8Ch], ecx
0x98B2E5: cmp     dword ptr [esi], 0E06D7363h
0x98B2EB: jnz     short ?CallCatchBlock@@YAPAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PBU_s_FuncInfo@@PAXHK@Z___$LN15_2
0x98B2ED: cmp     dword ptr [esi+10h], 3
0x98B2F1: jnz     short ?CallCatchBlock@@YAPAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PBU_s_FuncInfo@@PAXHK@Z___$LN15_2
0x98B2F3: mov     eax, [esi+14h]
0x98B2F6: cmp     eax, 19930520h
0x98B2FB: jz      short loc_98B30B
0x98B2FD: cmp     eax, 19930521h
0x98B302: jz      short loc_98B30B
0x98B304: cmp     eax, 19930522h
0x98B309: jnz     short ?CallCatchBlock@@YAPAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PBU_s_FuncInfo@@PAXHK@Z___$LN15_2
0x98B30B: cmp     [ebp+var_34], 0
0x98B30F: jnz     short ?CallCatchBlock@@YAPAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PBU_s_FuncInfo@@PAXHK@Z___$LN15_2
0x98B311: cmp     [ebp+var_1C], 0
0x98B315: jz      short ?CallCatchBlock@@YAPAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PBU_s_FuncInfo@@PAXHK@Z___$LN15_2
0x98B317: push    dword ptr [esi+18h]
0x98B31A: call    __IsExceptionObjectToBeDestroyed
0x98B31F: pop     ecx
0x98B320: test    eax, eax
0x98B322: jz      short ?CallCatchBlock@@YAPAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PBU_s_FuncInfo@@PAXHK@Z___$LN15_2
0x98B324: push    [ebp+arg_8]
0x98B327: push    esi
0x98B328: call    ___DestructExceptionObject
0x98B32D: pop     ecx
0x98B32E: pop     ecx
0x98B32F: retn
