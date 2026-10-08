0x41F2F0: push    0FFFFFFFFh; Adds marker extra ExtraBoundArmor type 0x50 when it is not already present.
0x41F2F2: push    offset SEH_8C62B0
0x41F2F7: mov     eax, large fs:0
0x41F2FD: push    eax
0x41F2FE: push    ecx
0x41F2FF: push    esi
0x41F300: mov     eax, ___security_cookie
0x41F305: xor     eax, esp
0x41F307: push    eax
0x41F308: lea     eax, [esp+18h+var_C]
0x41F30C: mov     large fs:0, eax
0x41F312: mov     esi, ecx
0x41F314: movzx   eax, byte ptr [esi+12h]
0x41F318: test    al, 1
0x41F31A: jnz     short loc_41F351
0x41F31C: push    0Ch; Size
0x41F31E: call    FormHeapAlloc
0x41F323: add     esp, 4
0x41F326: mov     [esp+18h+var_10], eax
0x41F32A: test    eax, eax
0x41F32C: mov     [esp+18h+var_4], 0
0x41F334: jz      short loc_41F33F
0x41F336: mov     ecx, eax
0x41F338: call    ExtraBoundArmor_ctor; Constructs marker extra ExtraBoundArmor, type 0x50.
0x41F33D: jmp     short loc_41F341
0x41F33F: xor     eax, eax
0x41F341: push    eax; BSExtraData *
0x41F342: mov     ecx, esi; ExtraDataList *
0x41F344: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x41F34C: call    BaseExtraList_AddExtra
0x41F351: mov     ecx, [esp+18h+var_C]
0x41F355: mov     large fs:0, ecx
0x41F35C: pop     ecx
0x41F35D: pop     esi
0x41F35E: add     esp, 10h
0x41F361: retn
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
