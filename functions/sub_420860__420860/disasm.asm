0x420860: push    0FFFFFFFFh; Creates/updates ExtraTravelHorse type 0x58; null removes the travel-horse link.
0x420862: push    offset ExtraDataList_SetReferencePointer_SEH
0x420867: mov     eax, large fs:0
0x42086D: push    eax
0x42086E: push    esi
0x42086F: push    edi
0x420870: mov     eax, ___security_cookie
0x420875: xor     eax, esp
0x420877: push    eax
0x420878: lea     eax, [esp+18h+var_C]
0x42087C: mov     large fs:0, eax
0x420882: mov     esi, ecx
0x420884: mov     edi, [esp+18h+arg_0]
0x420888: test    edi, edi
0x42088A: push    58h ; 'X'; a2
0x42088C: jz      short loc_4208FA
0x42088E: call    BaseExtraList_GetExtraData
0x420893: test    eax, eax
0x420895: jz      short loc_4208AE
0x420897: mov     [eax+0Ch], edi
0x42089A: mov     ecx, [esp+18h+var_C]
0x42089E: mov     large fs:0, ecx
0x4208A5: pop     ecx
0x4208A6: pop     edi
0x4208A7: pop     esi
0x4208A8: add     esp, 0Ch
0x4208AB: retn    4
0x4208AE: push    10h; Size
0x4208B0: call    FormHeapAlloc
0x4208B5: add     esp, 4
0x4208B8: mov     [esp+18h+arg_0], eax
0x4208BC: test    eax, eax
0x4208BE: mov     [esp+18h+var_4], 0
0x4208C6: jz      short loc_4208D1
0x4208C8: mov     ecx, eax
0x4208CA: call    sub_42A6A0
0x4208CF: jmp     short loc_4208D3
0x4208D1: xor     eax, eax
0x4208D3: push    eax; BSExtraData *
0x4208D4: mov     ecx, esi; ExtraDataList *
0x4208D6: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4208DE: mov     [eax+0Ch], edi
0x4208E1: call    BaseExtraList_AddExtra
0x4208E6: mov     ecx, [esp+18h+var_C]
0x4208EA: mov     large fs:0, ecx
0x4208F1: pop     ecx
0x4208F2: pop     edi
0x4208F3: pop     esi
0x4208F4: add     esp, 0Ch
0x4208F7: retn    4
0x4208FA: call    BaseExtraList_RemoveExtraByType
0x4208FF: mov     ecx, [esp+18h+var_C]
0x420903: mov     large fs:0, ecx
0x42090A: pop     ecx
0x42090B: pop     edi
0x42090C: pop     esi
0x42090D: add     esp, 0Ch
0x420910: retn    4
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
