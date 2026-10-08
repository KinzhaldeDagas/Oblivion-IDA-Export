0x660760: push    0FFFFFFFFh
0x660762: push    offset SEH_8122A0
0x660767: mov     eax, large fs:0
0x66076D: push    eax
0x66076E: push    ecx
0x66076F: push    ebp
0x660770: push    esi
0x660771: push    edi
0x660772: mov     eax, ds:0B30AACh
0x660777: xor     eax, esp
0x660779: push    eax
0x66077A: lea     eax, [esp+20h+var_C]
0x66077E: mov     large fs:0, eax
0x660784: mov     ebp, ecx
0x660786: mov     eax, [ebp+0]
0x660789: mov     edx, [eax+1BCh]
0x66078F: xor     edi, edi
0x660791: push    edi
0x660792: mov     byte ptr [ebp+71Ch], 1
0x660799: call    edx
0x66079B: mov     ecx, [ebp+58h]
0x66079E: mov     eax, [ecx]
0x6607A0: mov     edx, [eax+2D0h]
0x6607A6: call    edx
0x6607A8: cmp     eax, 6
0x6607AB: jnz     short loc_6607B5
0x6607AD: push    edi; shouldBlock
0x6607AE: mov     ecx, ebp; this
0x6607B0: call    Actor_UpdateBlockingState; Starts or stops the actor blocking animation/current-action state and mirrors the result to CombatController byte +0x49. Native ABI is Actor in ECX plus one shouldBlock byte.
0x6607B5: push    3Ch ; '<'; Size
0x6607B7: call    FormHeapAlloc
0x6607BC: add     esp, 4
0x6607BF: mov     [esp+20h+var_10], eax
0x6607C3: cmp     eax, edi
0x6607C5: mov     [esp+20h+var_4], edi
0x6607C9: jz      short loc_6607D6
0x6607CB: mov     ecx, eax; this
0x6607CD: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x6607D2: mov     esi, eax
0x6607D4: jmp     short loc_6607D8
0x6607D6: xor     esi, esi
0x6607D8: push    6
0x6607DA: mov     ecx, esi
0x6607DC: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6607E4: call    TESPackage_SetType?
0x6607E9: mov     eax, [esi+1Ch]
0x6607EC: and     eax, 0FFFFFFFDh
0x6607EF: or      eax, 4
0x6607F2: push    0Ch; Size
0x6607F4: mov     [esi+1Ch], eax
0x6607F7: call    FormHeapAlloc
0x6607FC: add     esp, 4
0x6607FF: mov     [esp+20h+var_10], eax
0x660803: cmp     eax, edi
0x660805: mov     [esp+20h+var_4], 1
0x66080D: jz      short loc_660818
0x66080F: mov     ecx, eax
0x660811: call    TESPackage_LocationData_constr
0x660816: mov     edi, eax
0x660818: push    0
0x66081A: mov     ecx, edi
0x66081C: mov     [esp+24h+var_4], 0FFFFFFFFh
0x660824: call    TESPackage_LocationData_SetType
0x660829: mov     ecx, [esp+20h+arg_0]
0x66082D: push    ecx
0x66082E: mov     ecx, edi
0x660830: call    TESPackage_LocationData_SetReference
0x660835: push    edi
0x660836: mov     ecx, esi
0x660838: call    TESPackage_SetLocation; 3DTheft decode: TESPackage_SetLocation allocates package->location when needed and copies a 0x0C LocationData record; null source clears location data.
0x66083D: test    edi, edi
0x66083F: jz      short loc_660851
0x660841: mov     ecx, edi
0x660843: call    TESPackage_LocationData_destr
0x660848: push    edi
0x660849: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x66084E: add     esp, 4
0x660851: push    1; a4
0x660853: push    0; a3
0x660855: push    esi; a2
0x660856: mov     ecx, ebp; this
0x660858: mov     dword ptr [esi+18h], 0
0x66085F: call    Actor_AddPackage?; 3DTheft: xrefs ignore this function's return value; use current package/process state after call, not AL/EAX, as the package assignment result.
0x660864: mov     ecx, dword ptr [esp+20h+var_C]
0x660868: mov     large fs:0, ecx
0x66086F: pop     ecx
0x660870: pop     edi
0x660871: pop     esi
0x660872: pop     ebp
0x660873: add     esp, 10h
0x660876: retn    4
0x9D0CA0: mov     eax, [ebp-10h]
0x9D0CA3: push    eax
0x9D0CA4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D0CA9: pop     ecx
0x9D0CAA: retn
0x9D0CAB: mov     eax, [ebp-10h]
0x9D0CAE: push    eax
0x9D0CAF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D0CB4: pop     ecx
0x9D0CB5: retn
0x9D0CB6: mov     edx, [esp+arg_4]
0x9D0CBA: lea     eax, [edx-10h]
0x9D0CBD: mov     ecx, [edx-14h]
0x9D0CC0: xor     ecx, eax
0x9D0CC2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D0CC7: mov     eax, offset stru_AF94E0
0x9D0CCC: jmp     ___CxxFrameHandler3
