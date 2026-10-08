0x420A90: push    0FFFFFFFFh; Sets ExtraDetachTime; a zero value removes type 0x10, otherwise updates or creates it.
0x420A92: push    offset ExtraDataList_SetReferencePointer_SEH
0x420A97: mov     eax, large fs:0
0x420A9D: push    eax
0x420A9E: push    esi
0x420A9F: push    edi
0x420AA0: mov     eax, ___security_cookie
0x420AA5: xor     eax, esp
0x420AA7: push    eax
0x420AA8: lea     eax, [esp+18h+var_C]
0x420AAC: mov     large fs:0, eax
0x420AB2: mov     esi, ecx
0x420AB4: mov     edi, [esp+18h+detachTime]
0x420AB8: test    edi, edi
0x420ABA: push    10h; a2
0x420ABC: jz      short loc_420B2A
0x420ABE: call    BaseExtraList_GetExtraData
0x420AC3: test    eax, eax
0x420AC5: jz      short loc_420ADE
0x420AC7: mov     [eax+0Ch], edi
0x420ACA: mov     ecx, [esp+18h+var_C]
0x420ACE: mov     large fs:0, ecx
0x420AD5: pop     ecx
0x420AD6: pop     edi
0x420AD7: pop     esi
0x420AD8: add     esp, 0Ch
0x420ADB: retn    4
0x420ADE: push    10h; Size
0x420AE0: call    FormHeapAlloc
0x420AE5: add     esp, 4
0x420AE8: mov     [esp+18h+detachTime], eax
0x420AEC: test    eax, eax
0x420AEE: mov     [esp+18h+var_4], 0
0x420AF6: jz      short loc_420B01
0x420AF8: mov     ecx, eax
0x420AFA: call    ExtraDetachTime_constr
0x420AFF: jmp     short loc_420B03
0x420B01: xor     eax, eax
0x420B03: push    eax; BSExtraData *
0x420B04: mov     ecx, esi; ExtraDataList *
0x420B06: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x420B0E: mov     [eax+0Ch], edi
0x420B11: call    BaseExtraList_AddExtra
0x420B16: mov     ecx, [esp+18h+var_C]
0x420B1A: mov     large fs:0, ecx
0x420B21: pop     ecx
0x420B22: pop     edi
0x420B23: pop     esi
0x420B24: add     esp, 0Ch
0x420B27: retn    4
0x420B2A: call    BaseExtraList_RemoveExtraByType
0x420B2F: mov     ecx, [esp+18h+var_C]
0x420B33: mov     large fs:0, ecx
0x420B3A: pop     ecx
0x420B3B: pop     edi
0x420B3C: pop     esi
0x420B3D: add     esp, 0Ch
0x420B40: retn    4
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
