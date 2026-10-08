0x424380: push    0FFFFFFFFh
0x424382: push    offset ExtraDataList_SetReferencePointer_SEH
0x424387: mov     eax, large fs:0
0x42438D: push    eax
0x42438E: push    esi
0x42438F: push    edi
0x424390: mov     eax, ___security_cookie
0x424395: xor     eax, esp
0x424397: push    eax
0x424398: lea     eax, [esp+18h+var_C]
0x42439C: mov     large fs:0, eax
0x4243A2: mov     edi, ecx
0x4243A4: push    0Ch; a2
0x4243A6: call    BaseExtraList_GetExtraData; Verified: ExtraCellClimate is read/written through ExtraDataList and carries the explicit interior-cell climate; Fallout provides similarly named ExtraDataList::GetClimate/SetClimate, but its flag gate differs from Oblivion.
0x4243AB: mov     esi, [esp+18h+climate]
0x4243AF: test    esi, esi
0x4243B1: jnz     short loc_4243D5
0x4243B3: test    eax, eax
0x4243B5: jz      short loc_424426
0x4243B7: push    1
0x4243B9: push    eax
0x4243BA: mov     ecx, edi
0x4243BC: call    BaseExtraList_RemoveExtraByPtr; Verified: null climate removes existing ExtraCellClimate from the ExtraDataList; non-null climate updates existing +0x0C pointer or allocates a new 16-byte extra.
0x4243C1: mov     ecx, [esp+18h+var_C]
0x4243C5: mov     large fs:0, ecx
0x4243CC: pop     ecx
0x4243CD: pop     edi
0x4243CE: pop     esi
0x4243CF: add     esp, 0Ch
0x4243D2: retn    4
0x4243D5: test    eax, eax
0x4243D7: jnz     short loc_424423
0x4243D9: push    10h; Size
0x4243DB: call    FormHeapAlloc
0x4243E0: add     esp, 4
0x4243E3: mov     [esp+18h+climate], eax
0x4243E7: test    eax, eax
0x4243E9: mov     [esp+18h+var_4], 0
0x4243F1: jz      short loc_4243FD
0x4243F3: push    esi; climate
0x4243F4: mov     ecx, eax; this
0x4243F6: call    ExtraCellClimate_Constructor; Verified: initializes 16-byte ExtraCellClimate: inherited BSExtraData type byte=0x0C, next pointer null, vtable, and TESClimate* at +0x0C.
0x4243FB: jmp     short loc_4243FF
0x4243FD: xor     eax, eax
0x4243FF: push    eax; BSExtraData *
0x424400: mov     ecx, edi; ExtraDataList *
0x424402: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x42440A: call    BaseExtraList_AddExtra
0x42440F: mov     ecx, [esp+18h+var_C]
0x424413: mov     large fs:0, ecx
0x42441A: pop     ecx
0x42441B: pop     edi
0x42441C: pop     esi
0x42441D: add     esp, 0Ch
0x424420: retn    4
0x424423: mov     [eax+0Ch], esi
0x424426: mov     ecx, [esp+18h+var_C]
0x42442A: mov     large fs:0, ecx
0x424431: pop     ecx
0x424432: pop     edi
0x424433: pop     esi
0x424434: add     esp, 0Ch
0x424437: retn    4
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
