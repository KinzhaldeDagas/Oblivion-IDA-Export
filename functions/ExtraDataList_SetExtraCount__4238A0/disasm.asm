0x4238A0: push    0FFFFFFFFh
0x4238A2: push    offset ExtraDataList_SetReferencePointer_SEH
0x4238A7: mov     eax, large fs:0
0x4238AD: push    eax
0x4238AE: push    esi
0x4238AF: push    edi
0x4238B0: mov     eax, ___security_cookie
0x4238B5: xor     eax, esp
0x4238B7: push    eax
0x4238B8: lea     eax, [esp+18h+var_C]
0x4238BC: mov     large fs:0, eax
0x4238C2: mov     edi, ecx
0x4238C4: push    2Ah ; '*'; a2
0x4238C6: call    BaseExtraList_GetExtraData
0x4238CB: mov     esi, [esp+18h+arg_0]
0x4238CF: test    si, si
0x4238D2: jz      short ExtraDataList_SetExtraCount___Remove_Destroy
0x4238D4: cmp     si, 1
0x4238D8: jz      short ExtraDataList_SetExtraCount___Remove_Destroy
0x4238DA: test    eax, eax
0x4238DC: jz      short ExtraDataList_SetExtraCount___CreateNewExtraCount
0x4238DE: mov     [eax+0Ch], si
0x4238E2: mov     ecx, [esp+18h+var_C]
0x4238E6: mov     large fs:0, ecx
0x4238ED: pop     ecx
0x4238EE: pop     edi
0x4238EF: pop     esi
0x4238F0: add     esp, 0Ch
0x4238F3: retn    4
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
