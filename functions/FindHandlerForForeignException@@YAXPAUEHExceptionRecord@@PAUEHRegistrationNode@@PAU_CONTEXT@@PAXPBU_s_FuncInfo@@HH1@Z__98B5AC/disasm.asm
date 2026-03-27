0x98B5AC: push    ebp
0x98B5AD: mov     ebp, esp
0x98B5AF: push    ecx
0x98B5B0: push    ecx; unsigned __int8
0x98B5B1: push    esi; struct EHRegistrationNode *
0x98B5B2: mov     esi, [ebp+arg_0]
0x98B5B5: cmp     dword ptr [esi], 80000003h
0x98B5BB: jz      loc_98B69B
0x98B5C1: push    edi; int
0x98B5C2: call    __getptd
0x98B5C7: cmp     dword ptr [eax+80h], 0
0x98B5CE: jz      short loc_98B60F
0x98B5D0: call    __getptd
0x98B5D5: lea     edi, [eax+80h]
0x98B5DB: call    __encoded_null
0x98B5E0: cmp     [edi], eax
0x98B5E2: jz      short loc_98B60F
0x98B5E4: cmp     dword ptr [esi], 0E0434F4Dh
0x98B5EA: jz      short loc_98B60F
0x98B5EC: push    [ebp+arg_1C]
0x98B5EF: push    [ebp+arg_18]
0x98B5F2: push    [ebp+arg_10]
0x98B5F5: push    [ebp+arg_C]
0x98B5F8: push    [ebp+arg_8]
0x98B5FB: push    [ebp+arg_4]
0x98B5FE: push    esi
0x98B5FF: call    unknown_libname_10
0x98B604: add     esp, 1Ch
0x98B607: test    eax, eax
0x98B609: jnz     loc_98B69A
0x98B60F: mov     edi, [ebp+arg_10]
0x98B612: cmp     dword ptr [edi+0Ch], 0
0x98B616: jnz     short loc_98B61D
0x98B618: call    ?_inconsistency@@YAXXZ
0x98B61D: mov     esi, [ebp+arg_14]
0x98B620: lea     eax, [ebp+var_8]
0x98B623: push    eax; unsigned int *
0x98B624: lea     eax, [ebp+var_4]
0x98B627: push    eax; unsigned int *
0x98B628: push    esi; int
0x98B629: push    [ebp+arg_18]; int
0x98B62C: push    edi; struct _s_FuncInfo *
0x98B62D: call    ?_GetRangeOfTrysToCheck@@YAPBU_s_TryBlockMapEntry@@PBU_s_FuncInfo@@HHPAI1@Z
0x98B632: mov     edi, eax
0x98B634: mov     eax, [ebp+var_4]
0x98B637: add     esp, 14h
0x98B63A: cmp     eax, [ebp+var_8]
0x98B63D: jnb     short loc_98B69A
0x98B63F: push    ebx; struct _s_TryBlockMapEntry *
0x98B640: cmp     esi, [edi]
0x98B642: jl      short loc_98B68B
0x98B644: cmp     esi, [edi+4]
0x98B647: jg      short loc_98B68B
0x98B649: mov     eax, [edi+0Ch]
0x98B64C: mov     ecx, [edi+10h]
0x98B64F: shl     eax, 4
0x98B652: add     eax, ecx
0x98B654: mov     ecx, [eax-0Ch]
0x98B657: test    ecx, ecx
0x98B659: jz      short loc_98B661
0x98B65B: cmp     byte ptr [ecx+8], 0
0x98B65F: jnz     short loc_98B68B
0x98B661: lea     ebx, [eax-10h]
0x98B664: test    byte ptr [ebx], 40h
0x98B667: jnz     short loc_98B68B
0x98B669: push    [ebp+arg_1C]; struct _s_CatchableType *
0x98B66C: mov     esi, [ebp+arg_4]
0x98B66F: push    [ebp+arg_18]; struct _s_HandlerType *
0x98B672: push    0; struct _s_FuncInfo *
0x98B674: push    [ebp+arg_10]; void *
0x98B677: push    [ebp+arg_C]; struct _CONTEXT *
0x98B67A: push    [ebp+arg_8]; struct EHRegistrationNode *
0x98B67D: push    [ebp+arg_0]; struct EHExceptionRecord *
0x98B680: call    ?CatchIt@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@PBU_s_HandlerType@@PBU_s_CatchableType@@PBU_s_TryBlockMapEntry@@H1E@Z
0x98B685: mov     esi, [ebp+arg_14]
0x98B688: add     esp, 1Ch
0x98B68B: inc     [ebp+var_4]
0x98B68E: mov     eax, [ebp+var_4]
0x98B691: add     edi, 14h
0x98B694: cmp     eax, [ebp+var_8]
0x98B697: jb      short loc_98B640
0x98B699: pop     ebx
0x98B69A: pop     edi
0x98B69B: pop     esi
0x98B69C: leave
0x98B69D: retn
