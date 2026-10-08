0x5B7490: push    0FFFFFFFFh
0x5B7492: push    offset ??1SaveMenu@@UAE@XZ_SEH
0x5B7497: mov     eax, large fs:0
0x5B749D: push    eax
0x5B749E: push    ecx
0x5B749F: push    esi
0x5B74A0: mov     eax, ds:0B30AACh
0x5B74A5: xor     eax, esp
0x5B74A7: push    eax
0x5B74A8: lea     eax, [esp+18h+var_C]
0x5B74AC: mov     large fs:0, eax
0x5B74B2: mov     esi, ecx
0x5B74B4: mov     dword ptr [esi], offset ??_7MapMenu@@6B@; const MapMenu::`vftable'
0x5B74BA: mov     ecx, [esi+0C4h]
0x5B74C0: test    ecx, ecx
0x5B74C2: jz      short loc_5B74D8
0x5B74C4: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x5B74C9: mov     eax, [esi+0C4h]
0x5B74CF: push    eax
0x5B74D0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5B74D5: add     esp, 4
0x5B74D8: mov     ecx, [esi+0C8h]
0x5B74DE: test    ecx, ecx
0x5B74E0: jz      short loc_5B74F6
0x5B74E2: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x5B74E7: mov     eax, [esi+0C8h]
0x5B74ED: push    eax
0x5B74EE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5B74F3: add     esp, 4
0x5B74F6: mov     eax, [esi+0B0h]
0x5B74FC: push    eax
0x5B74FD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5B7502: add     esp, 4
0x5B7505: mov     ecx, esi; this
0x5B7507: mov     dword ptr [esi+0B0h], 0
0x5B7511: mov     word ptr [esi+0B6h], 0
0x5B751A: mov     word ptr [esi+0B4h], 0
0x5B7523: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5B752B: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5B7530: mov     ecx, [esp+18h+var_C]
0x5B7534: mov     large fs:0, ecx
0x5B753B: pop     ecx
0x5B753C: pop     esi
0x5B753D: add     esp, 10h
0x5B7540: retn
0x9C0380: mov     ecx, [ebp-10h]; this
0x9C0383: jmp     ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x9C0388: mov     edx, [esp+arg_4]
0x9C038C: lea     eax, [edx-8]
0x9C038F: mov     ecx, [edx-0Ch]
0x9C0392: xor     ecx, eax
0x9C0394: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C0399: mov     eax, offset stru_AE9668
0x9C039E: jmp     ___CxxFrameHandler3
