0xA25DA0: mov     ecx, (offset qword_B3BB2C+1D4h)
0xA25DA5: jmp     loc_678390
0x678390: push    0FFFFFFFFh
0x678392: push    offset loc_9C489A
0x678397: mov     eax, large fs:0
0x67839D: push    eax
0x67839E: sub     esp, 8
0x6783A1: push    ebx
0x6783A2: push    ebp
0x6783A3: push    esi
0x6783A4: push    edi
0x6783A5: mov     eax, ds:0B30AACh
0x6783AA: xor     eax, esp
0x6783AC: push    eax
0x6783AD: lea     eax, [esp+28h+var_C]
0x6783B1: mov     large fs:0, eax
0x6783B7: mov     edi, ecx
0x6783B9: mov     [esp+28h+var_10], edi
0x6783BD: mov     eax, 6
0x6783C2: mov     [esp+28h+var_4], eax
0x6783C6: lea     ebx, [edi+28h]
0x6783C9: mov     [esp+28h+var_14], eax
0x6783CD: lea     ecx, [ecx+0]
0x6783D0: mov     esi, [ebx]
0x6783D2: test    esi, esi
0x6783D4: jz      short loc_678410
0x6783D6: mov     ebp, [esi]
0x6783D8: test    ebp, ebp
0x6783DA: jz      short loc_678410
0x6783DC: mov     ecx, ebp; self
0x6783DE: call    Crime_Destructor
0x6783E3: push    ebp
0x6783E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6783E9: mov     eax, [esi+4]
0x6783EC: add     esp, 4
0x6783EF: test    eax, eax
0x6783F1: jz      short loc_678408
0x6783F3: mov     ecx, [eax+4]
0x6783F6: mov     [esi+4], ecx
0x6783F9: mov     edx, [eax]
0x6783FB: push    eax
0x6783FC: mov     [esi], edx
0x6783FE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x678403: add     esp, 4
0x678406: jmp     short loc_6783D6
0x678408: mov     dword ptr [esi], 0
0x67840E: jmp     short loc_6783D6
0x678410: push    esi
0x678411: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x678416: add     esp, 4
0x678419: add     ebx, 4
0x67841C: sub     [esp+28h+var_14], 1
0x678421: jnz     short loc_6783D0
0x678423: xor     ebx, ebx
0x678425: cmp     [edi+54h], ebx
0x678428: jz      short loc_678446
0x67842A: lea     ebx, [ebx+0]
0x678430: mov     eax, [edi+54h]
0x678433: mov     esi, [eax+4]
0x678436: push    eax
0x678437: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x67843C: add     esp, 4
0x67843F: cmp     esi, ebx
0x678441: mov     [edi+54h], esi
0x678444: jnz     short loc_678430
0x678446: mov     [edi+50h], ebx
0x678449: cmp     [edi+64h], ebx
0x67844C: jz      short loc_678466
0x67844E: mov     edi, edi
0x678450: mov     eax, [edi+64h]
0x678453: mov     esi, [eax+4]
0x678456: push    eax
0x678457: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x67845C: add     esp, 4
0x67845F: cmp     esi, ebx
0x678461: mov     [edi+64h], esi
0x678464: jnz     short loc_678450
0x678466: lea     ecx, [edi+7Ch]
0x678469: mov     [edi+60h], ebx
0x67846C: mov     byte ptr [esp+28h+var_4], 5
0x678471: call    sub_643230
0x678476: lea     ecx, [edi+68h]
0x678479: mov     byte ptr [esp+28h+var_4], 4
0x67847E: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x678483: mov     esi, [edi+48h]
0x678486: cmp     esi, ebx
0x678488: mov     ebp, ds:0A2807Ch
0x67848E: mov     byte ptr [esp+28h+var_4], 3
0x678493: jz      short loc_6784AD
0x678495: lea     eax, [esi+4]
0x678498: push    eax; lpAddend
0x678499: call    ebp ; InterlockedDecrement
0x67849B: test    eax, eax
0x67849D: jnz     short loc_6784AD
0x67849F: test    esi, esi
0x6784A1: jz      short loc_6784AD
0x6784A3: mov     edx, [esi]
0x6784A5: mov     eax, [edx]
0x6784A7: push    1
0x6784A9: mov     ecx, esi
0x6784AB: call    eax
0x6784AD: mov     esi, [edi+40h]
0x6784B0: test    esi, esi
0x6784B2: mov     byte ptr [esp+28h+var_4], 2
0x6784B7: jz      short loc_6784D1
0x6784B9: lea     ecx, [esi+4]
0x6784BC: push    ecx; lpAddend
0x6784BD: call    ebp ; InterlockedDecrement
0x6784BF: test    eax, eax
0x6784C1: jnz     short loc_6784D1
0x6784C3: test    esi, esi
0x6784C5: jz      short loc_6784D1
0x6784C7: mov     edx, [esi]
0x6784C9: mov     eax, [edx]
0x6784CB: push    1
0x6784CD: mov     ecx, esi
0x6784CF: call    eax
0x6784D1: lea     ecx, [edi+18h]
0x6784D4: mov     byte ptr [esp+28h+var_4], 1
0x6784D9: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x6784DE: lea     ecx, [edi+0Ch]
0x6784E1: mov     byte ptr [esp+28h+var_4], 0
0x6784E6: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x6784EB: mov     ecx, edi
0x6784ED: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6784F5: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x6784FA: mov     ecx, [esp+28h+var_C]
0x6784FE: mov     large fs:0, ecx
0x678505: pop     ecx
0x678506: pop     edi
0x678507: pop     esi
0x678508: pop     ebp
0x678509: pop     ebx
0x67850A: add     esp, 14h
0x67850D: retn
0x9C4850: mov     ecx, [ebp-10h]
0x9C4853: jmp     BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x9C4858: mov     ecx, [ebp-10h]
0x9C485B: add     ecx, 0Ch
0x9C485E: jmp     BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x9C4863: mov     ecx, [ebp-10h]
0x9C4866: add     ecx, 18h
0x9C4869: jmp     BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x9C486E: mov     ecx, [ebp-10h]
0x9C4871: add     ecx, 40h ; '@'; slot
0x9C4874: jmp     NiPointerSlot_Release
0x9C4879: mov     ecx, [ebp-10h]
0x9C487C: add     ecx, 48h ; 'H'; slot
0x9C487F: jmp     NiPointerSlot_Release
0x9C4884: mov     ecx, [ebp-10h]
0x9C4887: add     ecx, 68h ; 'h'
0x9C488A: jmp     BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x9C488F: mov     ecx, [ebp-10h]
0x9C4892: add     ecx, 7Ch ; '|'
0x9C4895: jmp     sub_643230
0x9C489A: mov     edx, [esp+arg_4]
0x9C489E: lea     eax, [edx-18h]
0x9C48A1: mov     ecx, [edx-1Ch]
0x9C48A4: xor     ecx, eax
0x9C48A6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C48AB: mov     eax, offset stru_AED1B8
0x9C48B0: jmp     ___CxxFrameHandler3
