0x51F2D0: push    0FFFFFFFFh
0x51F2D2: push    offset SEH_51F2D0
0x51F2D7: mov     eax, large fs:0
0x51F2DD: push    eax
0x51F2DE: push    ecx
0x51F2DF: push    esi
0x51F2E0: push    edi
0x51F2E1: mov     eax, ds:0B30AACh
0x51F2E6: xor     eax, esp
0x51F2E8: push    eax
0x51F2E9: lea     eax, [esp+1Ch+var_C]
0x51F2ED: mov     large fs:0, eax
0x51F2F3: mov     esi, ecx
0x51F2F5: mov     [esp+1Ch+var_10], esi
0x51F2F9: lea     ecx, [esi+10h]; void *
0x51F2FC: mov     [esp+1Ch+var_4], 1
0x51F304: call    TESTexture_destr
0x51F309: mov     eax, [esi+8]
0x51F30C: push    eax
0x51F30D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x51F312: xor     edi, edi
0x51F314: mov     [esi+8], edi
0x51F317: mov     [esi+0Eh], di
0x51F31B: mov     [esi+0Ch], di
0x51F31F: mov     eax, [esi]
0x51F321: push    eax
0x51F322: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x51F327: add     esp, 8
0x51F32A: mov     [esi], edi
0x51F32C: mov     [esi+6], di
0x51F330: mov     [esi+4], di
0x51F334: mov     ecx, [esp+1Ch+var_C]
0x51F338: mov     large fs:0, ecx
0x51F33F: pop     ecx
0x51F340: pop     edi
0x51F341: pop     esi
0x51F342: add     esp, 10h
0x51F345: retn
0x9B7B50: mov     ecx, [ebp-10h]; void *
0x9B7B53: jmp     BSStringT_Clear
0x9B7B58: mov     ecx, [ebp-10h]
0x9B7B5B: add     ecx, 8; void *
0x9B7B5E: jmp     BSStringT_Clear
0x9B7B63: mov     edx, [esp+arg_4]
0x9B7B67: lea     eax, [edx-0Ch]
0x9B7B6A: mov     ecx, [edx-10h]
0x9B7B6D: xor     ecx, eax
0x9B7B6F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B7B74: mov     eax, offset stru_AE2460
0x9B7B79: jmp     ___CxxFrameHandler3
