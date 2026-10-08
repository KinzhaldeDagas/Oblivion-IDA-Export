0x4205C0: push    0FFFFFFFFh; Verified ExtraDataList random-marker setter: null removes ExtraData type 0x43; non-null updates or allocates an ExtraRandomTeleportMarker and stores the TESObjectREFR* marker at +0x0C.
0x4205C2: push    offset ExtraDataList_SetReferencePointer_SEH
0x4205C7: mov     eax, large fs:0
0x4205CD: push    eax
0x4205CE: push    esi
0x4205CF: push    edi
0x4205D0: mov     eax, ___security_cookie
0x4205D5: xor     eax, esp
0x4205D7: push    eax
0x4205D8: lea     eax, [esp+18h+var_C]
0x4205DC: mov     large fs:0, eax
0x4205E2: mov     esi, ecx
0x4205E4: mov     edi, [esp+18h+markerReference]
0x4205E8: test    edi, edi
0x4205EA: push    43h ; 'C'; a2
0x4205EC: jz      short loc_42065A
0x4205EE: call    BaseExtraList_GetExtraData
0x4205F3: test    eax, eax
0x4205F5: jz      short loc_42060E
0x4205F7: mov     [eax+0Ch], edi
0x4205FA: mov     ecx, [esp+18h+var_C]
0x4205FE: mov     large fs:0, ecx
0x420605: pop     ecx
0x420606: pop     edi
0x420607: pop     esi
0x420608: add     esp, 0Ch
0x42060B: retn    4
0x42060E: push    10h; Size
0x420610: call    FormHeapAlloc
0x420615: add     esp, 4
0x420618: mov     [esp+18h+markerReference], eax
0x42061C: test    eax, eax
0x42061E: mov     [esp+18h+var_4], 0
0x420626: jz      short loc_420631
0x420628: mov     ecx, eax; this
0x42062A: call    ExtraRandomTeleportMarker_ctor; Verified ExtraRandomTeleportMarker constructor: sets ExtraData type 0x43 and the ExtraRandomTeleportMarker vtable, and zeroes its 4-byte teleportRef payload at +0x0C.
0x42062F: jmp     short loc_420633
0x420631: xor     eax, eax
0x420633: push    eax; BSExtraData *
0x420634: mov     ecx, esi; ExtraDataList *
0x420636: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x42063E: mov     [eax+0Ch], edi
0x420641: call    BaseExtraList_AddExtra
0x420646: mov     ecx, [esp+18h+var_C]
0x42064A: mov     large fs:0, ecx
0x420651: pop     ecx
0x420652: pop     edi
0x420653: pop     esi
0x420654: add     esp, 0Ch
0x420657: retn    4
0x42065A: call    BaseExtraList_RemoveExtraByType
0x42065F: mov     ecx, [esp+18h+var_C]
0x420663: mov     large fs:0, ecx
0x42066A: pop     ecx
0x42066B: pop     edi
0x42066C: pop     esi
0x42066D: add     esp, 0Ch
0x420670: retn    4
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
