0x519530: push    0FFFFFFFFh
0x519532: push    offset ??1BirthSign@@UAE@XZ_SEH
0x519537: mov     eax, large fs:0
0x51953D: push    eax
0x51953E: sub     esp, 10h
0x519541: push    ebx
0x519542: push    esi
0x519543: push    edi
0x519544: mov     eax, ds:0B30AACh
0x519549: xor     eax, esp
0x51954B: push    eax
0x51954C: lea     eax, [esp+2Ch+var_C]
0x519550: mov     large fs:0, eax
0x519556: mov     esi, ecx
0x519558: mov     [esp+2Ch+var_10], esi
0x51955C: lea     edi, [esi+24h]
0x51955F: lea     ebx, [esi+38h]
0x519562: mov     dword ptr [esi], offset ??_7BirthSign@@6BBirthSign@@@; const BirthSign::`vftable'{for `BirthSign'}
0x519568: mov     dword ptr [esi+18h], offset ??_7BirthSign@@6BTESFullName@@@; const BirthSign::`vftable'{for `TESFullName'}
0x51956F: mov     dword ptr [edi], offset ??_7BirthSign@@6BTESTexture@@@; const BirthSign::`vftable'{for `TESTexture'}
0x519575: mov     dword ptr [esi+30h], offset ??_7BirthSign@@6BTESDescription@@@; const BirthSign::`vftable'{for `TESDescription'}
0x51957C: mov     dword ptr [ebx], offset ??_7BirthSign@@6BTESSpellList@@@; const BirthSign::`vftable'{for `TESSpellList'}
0x519582: mov     [esp+2Ch+var_4], 3
0x51958A: call    j_TESForm_ClearComponentReferences
0x51958F: mov     ecx, ebx
0x519591: mov     byte ptr [esp+2Ch+var_4], 2
0x519596: call    TESSpellList_destr?
0x51959B: mov     ecx, edi; void *
0x51959D: mov     byte ptr [esp+2Ch+var_4], 1
0x5195A2: call    TESTexture_destr
0x5195A7: mov     eax, [esi+1Ch]
0x5195AA: push    eax
0x5195AB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5195B0: xor     eax, eax
0x5195B2: add     esp, 4
0x5195B5: mov     ecx, esi; this
0x5195B7: mov     [esi+1Ch], eax
0x5195BA: mov     [esi+22h], ax
0x5195BE: mov     [esi+20h], ax
0x5195C2: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x5195CA: call    TESForm_destr
0x5195CF: mov     ecx, [esp+2Ch+var_C]
0x5195D3: mov     large fs:0, ecx
0x5195DA: pop     ecx
0x5195DB: pop     edi
0x5195DC: pop     esi
0x5195DD: pop     ebx
0x5195DE: add     esp, 1Ch
0x5195E1: retn
0x9B75D0: mov     ecx, [ebp-10h]; this
0x9B75D3: jmp     TESForm_destr
0x9B75D8: cmp     dword ptr [ebp-10h], 0
0x9B75DC: jz      loc_9B75F0
0x9B75E2: mov     eax, [ebp-10h]
0x9B75E5: add     eax, 18h
0x9B75E8: mov     [ebp-14h], eax
0x9B75EB: jmp     loc_9B75F7
0x9B75F0: mov     dword ptr [ebp-14h], 0
0x9B75F7: mov     ecx, [ebp-14h]
0x9B75FA: jmp     TESFullName_Initialize
0x9B75FF: cmp     dword ptr [ebp-10h], 0
0x9B7603: jz      loc_9B7617
0x9B7609: mov     eax, [ebp-10h]
0x9B760C: add     eax, 24h ; '$'
0x9B760F: mov     [ebp-18h], eax
0x9B7612: jmp     loc_9B761E
0x9B7617: mov     dword ptr [ebp-18h], 0
0x9B761E: mov     ecx, [ebp-18h]; void *
0x9B7621: jmp     TESTexture_destr
0x9B7626: cmp     dword ptr [ebp-10h], 0
0x9B762A: jz      loc_9B763E
0x9B7630: mov     eax, [ebp-10h]
0x9B7633: add     eax, 38h ; '8'
0x9B7636: mov     [ebp-1Ch], eax
0x9B7639: jmp     loc_9B7645
0x9B763E: mov     dword ptr [ebp-1Ch], 0
0x9B7645: mov     ecx, [ebp-1Ch]
0x9B7648: jmp     TESSpellList_destr?
0x9B764D: mov     edx, [esp+arg_4]
0x9B7651: lea     eax, [edx-1Ch]
0x9B7654: mov     ecx, [edx-20h]
0x9B7657: xor     ecx, eax
0x9B7659: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B765E: mov     eax, offset stru_AE2164
0x9B7663: jmp     ___CxxFrameHandler3
