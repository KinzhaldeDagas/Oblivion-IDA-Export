0x423720: push    0FFFFFFFFh; Verified XGLB mutator: update the stored TESGlobal* when nonnull; remove the extra when null; otherwise allocate a 16-byte ExtraGlobal payload. During plugin load the stored dword is a FormID temporarily; ExtraDataList_ResolveLoadedFormIDs rebases, looks it up, RTTI-checks TESGlobal, and removes missing/wrong-type entries.
0x423722: push    offset ExtraDataList_SetReferencePointer_SEH
0x423727: mov     eax, large fs:0
0x42372D: push    eax
0x42372E: push    esi
0x42372F: push    edi
0x423730: mov     eax, ___security_cookie
0x423735: xor     eax, esp
0x423737: push    eax
0x423738: lea     eax, [esp+18h+var_C]
0x42373C: mov     large fs:0, eax
0x423742: mov     esi, ecx
0x423744: push    28h ; '('; a2
0x423746: call    BaseExtraList_GetExtraData
0x42374B: test    eax, eax
0x42374D: jz      short loc_42378C
0x42374F: mov     ecx, [esp+18h+global]
0x423753: test    ecx, ecx
0x423755: jnz     short loc_423775
0x423757: push    1
0x423759: push    eax
0x42375A: mov     ecx, esi
0x42375C: call    BaseExtraList_RemoveExtraByPtr
0x423761: mov     ecx, [esp+18h+var_C]
0x423765: mov     large fs:0, ecx
0x42376C: pop     ecx
0x42376D: pop     edi
0x42376E: pop     esi
0x42376F: add     esp, 0Ch
0x423772: retn    4
0x423775: mov     [eax+0Ch], ecx
0x423778: mov     ecx, [esp+18h+var_C]
0x42377C: mov     large fs:0, ecx
0x423783: pop     ecx
0x423784: pop     edi
0x423785: pop     esi
0x423786: add     esp, 0Ch
0x423789: retn    4
0x42378C: mov     edi, [esp+18h+global]
0x423790: test    edi, edi
0x423792: jz      short loc_4237CA
0x423794: push    10h; Size
0x423796: call    FormHeapAlloc
0x42379B: add     esp, 4
0x42379E: mov     [esp+18h+global], eax
0x4237A2: test    eax, eax
0x4237A4: mov     [esp+18h+var_4], 0
0x4237AC: jz      short loc_4237B8
0x4237AE: push    edi; global
0x4237AF: mov     ecx, eax; this
0x4237B1: call    ExtraGlobal_ctor; Verified ExtraGlobal constructor: initializes BSExtraData type 0x28, clears next, installs ExtraGlobal vtable, and stores TESGlobal* at +0x0C; payload size is 16 bytes.
0x4237B6: jmp     short loc_4237BA
0x4237B8: xor     eax, eax
0x4237BA: push    eax; BSExtraData *
0x4237BB: mov     ecx, esi; ExtraDataList *
0x4237BD: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4237C5: call    BaseExtraList_AddExtra
0x4237CA: mov     ecx, [esp+18h+var_C]
0x4237CE: mov     large fs:0, ecx
0x4237D5: pop     ecx
0x4237D6: pop     edi
0x4237D7: pop     esi
0x4237D8: add     esp, 0Ch
0x4237DB: retn    4
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
