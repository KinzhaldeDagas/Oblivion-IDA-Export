0x46A0F2: push    14h; Size
0x46A0F4: call    FormHeapAlloc
0x46A0F9: add     esp, 4
0x46A0FC: mov     [esp+arg_10], eax
0x46A100: xor     esi, esi
0x46A102: cmp     eax, esi
0x46A104: mov     [esp+arg_13C], esi
0x46A10B: jz      short loc_46A116
0x46A10D: mov     ecx, eax
0x46A10F: call    ExtraDataList_constr
0x46A114: mov     esi, eax
0x46A116: push    1
0x46A118: mov     ecx, esi
0x46A11A: mov     [esp+4+arg_13C], 0FFFFFFFFh
0x46A125: call    ExtraDataList_SetExtraCount
0x46A12A: test    esi, esi
0x46A12C: jz      TESContainer_CopyContentsToRef___AddExtraScriptLoop_AddSingleForm
0x46A132: mov     ecx, esi
0x46A134: call    ExtraDataList_GetExtraScript
0x46A139: test    eax, eax
0x46A13B: jnz     short TESContainer_CopyContentsToRef___AddExtraScriptLoop_AddSingleForm
0x46A13D: push    ebx
0x46A13E: mov     ecx, esi
0x46A140: call    ExtraDataList_AddScript
0x46A145: mov     ecx, ebx
0x46A147: call    Script_CreateEventList
0x46A14C: push    eax
0x46A14D: mov     ecx, esi
0x46A14F: call    ExtraDataList_SetScriptEventList
0x46A154: push    58h ; 'X'; Size
0x46A156: call    FormHeapAlloc
0x46A15B: add     esp, 4
0x46A15E: mov     [esp+arg_10], eax
0x46A162: test    eax, eax
0x46A164: mov     [esp+arg_13C], 1
0x46A16F: jz      short loc_46A17C
0x46A171: mov     ecx, eax
0x46A173: call    TESObjectREFR_constr
0x46A178: mov     edi, eax
0x46A17A: jmp     short loc_46A17E
0x46A17C: xor     edi, edi
0x46A17E: mov     ecx, edi; this
0x46A180: mov     [esp+arg_13C], 0FFFFFFFFh
0x46A18B: call    TESForm_MakeTemporary
0x46A190: push    0; ArgList
0x46A192: push    0; int
0x46A194: mov     ecx, esi; this
0x46A196: call    ExtraDataList_GetExtraScriptEventList
0x46A19B: push    eax; int
0x46A19C: push    edi; int
0x46A19D: mov     ecx, ebx; int
0x46A19F: call    Script_Run
0x46A1A4: test    edi, edi
0x46A1A6: jz      short loc_46A1B3
0x46A1A8: mov     eax, [edi]
0x46A1AA: mov     edx, [eax+10h]
0x46A1AD: push    1
0x46A1AF: mov     ecx, edi
0x46A1B1: call    edx
0x46A1B3: mov     edi, [esp+arg_28]
