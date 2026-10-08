0x423660: push    0FFFFFFFFh; Verified XOWN mutator: update ExtraOwnership.ownerForm when owner is nonnull; remove the XOWN extra when null; otherwise allocate a 16-byte ExtraOwnership payload and add it to the list. During plugin load the initial dword is a FormID temporarily held in the same union slot; ExtraDataList_ResolveLoadedFormIDs converts it to TESForm*. TESObjectCELL_LinkForm removes direct XOWN, XRNK, and XGLB from an exterior cell when an owner exists.
0x423662: push    offset ExtraDataList_SetReferencePointer_SEH
0x423667: mov     eax, large fs:0
0x42366D: push    eax
0x42366E: push    esi
0x42366F: push    edi
0x423670: mov     eax, ___security_cookie
0x423675: xor     eax, esp
0x423677: push    eax
0x423678: lea     eax, [esp+18h+var_C]
0x42367C: mov     large fs:0, eax
0x423682: mov     esi, ecx
0x423684: push    27h ; '''; a2
0x423686: call    BaseExtraList_GetExtraData
0x42368B: test    eax, eax
0x42368D: jz      short loc_4236CC
0x42368F: mov     ecx, [esp+18h+owner]
0x423693: test    ecx, ecx
0x423695: jnz     short loc_4236B5
0x423697: push    1
0x423699: push    eax
0x42369A: mov     ecx, esi
0x42369C: call    BaseExtraList_RemoveExtraByPtr
0x4236A1: mov     ecx, [esp+18h+var_C]
0x4236A5: mov     large fs:0, ecx
0x4236AC: pop     ecx
0x4236AD: pop     edi
0x4236AE: pop     esi
0x4236AF: add     esp, 0Ch
0x4236B2: retn    4
0x4236B5: mov     [eax+0Ch], ecx
0x4236B8: mov     ecx, [esp+18h+var_C]
0x4236BC: mov     large fs:0, ecx
0x4236C3: pop     ecx
0x4236C4: pop     edi
0x4236C5: pop     esi
0x4236C6: add     esp, 0Ch
0x4236C9: retn    4
0x4236CC: mov     edi, [esp+18h+owner]
0x4236D0: test    edi, edi
0x4236D2: jz      short loc_42370A
0x4236D4: push    10h; Size
0x4236D6: call    FormHeapAlloc
0x4236DB: add     esp, 4
0x4236DE: mov     [esp+18h+owner], eax
0x4236E2: test    eax, eax
0x4236E4: mov     [esp+18h+var_4], 0
0x4236EC: jz      short loc_4236F8
0x4236EE: push    edi; owner
0x4236EF: mov     ecx, eax; this
0x4236F1: call    ExtraOwnership__ExtraOwnership; Verified ExtraOwnership constructor: initializes BSExtraData type 0x27, clears next, installs ExtraOwnership vtable, and stores the TESForm* owner at +0x0C. The payload size is 16 bytes.
0x4236F6: jmp     short loc_4236FA
0x4236F8: xor     eax, eax
0x4236FA: push    eax; BSExtraData *
0x4236FB: mov     ecx, esi; ExtraDataList *
0x4236FD: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x423705: call    BaseExtraList_AddExtra
0x42370A: mov     ecx, [esp+18h+var_C]
0x42370E: mov     large fs:0, ecx
0x423715: pop     ecx
0x423716: pop     edi
0x423717: pop     esi
0x423718: add     esp, 0Ch
0x42371B: retn    4
0x9C3090: mov     eax, [ebp+4]
0x9C3093: push    eax
0x9C3094: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C3099: pop     ecx
0x9C309A: retn
0x9C309B: mov     edx, [esp+arg_4]
0x9C309F: lea     eax, [edx-8]
0x9C30A2: mov     ecx, [edx-0Ch]
0x9C30A5: xor     ecx, eax
0x9C30A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C30AC: mov     eax, offset stru_AEBD48
0x9C30B1: jmp     ___CxxFrameHandler3
