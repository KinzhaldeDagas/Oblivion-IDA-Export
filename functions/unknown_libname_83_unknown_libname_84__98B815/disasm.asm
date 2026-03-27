0x98B815: mov     esi, [ebp+8]
0x98B818: mov     edi, 0E06D7363h
0x98B81D: cmp     [esi], edi
0x98B81F: jnz     unknown_libname_83___unknown_libname_86
0x98B825: cmp     dword ptr [esi+10h], 3
0x98B829: jnz     unknown_libname_83___unknown_libname_86
0x98B82F: mov     eax, [esi+14h]
0x98B832: cmp     eax, ebx
0x98B834: jz      short loc_98B848
0x98B836: cmp     eax, 19930521h
0x98B83B: jz      short loc_98B848
0x98B83D: cmp     eax, 19930522h
0x98B842: jnz     unknown_libname_83___unknown_libname_86
0x98B848: mov     edi, [ebp+18h]
0x98B84B: cmp     dword ptr [edi+0Ch], 0
0x98B84F: jbe     loc_98B914
0x98B855: lea     eax, [ebp-1Ch]
0x98B858: push    eax; unsigned int *
0x98B859: lea     eax, [ebp-10h]
0x98B85C: push    eax; unsigned int *
0x98B85D: push    dword ptr [ebp-8]; int
0x98B860: push    dword ptr [ebp+20h]; int
0x98B863: push    edi; struct _s_FuncInfo *
0x98B864: call    ?_GetRangeOfTrysToCheck@@YAPBU_s_TryBlockMapEntry@@PBU_s_FuncInfo@@HHPAI1@Z
0x98B869: add     esp, 14h
0x98B86C: mov     edi, eax
0x98B86E: mov     eax, [ebp-10h]
0x98B871: cmp     eax, [ebp-1Ch]
0x98B874: jnb     loc_98B911
0x98B87A: mov     eax, [ebp-8]
0x98B87D: cmp     [edi], eax
0x98B87F: jg      unknown_libname_83___unknown_libname_85
0x98B885: cmp     eax, [edi+4]
0x98B888: jg      short unknown_libname_83___unknown_libname_85
0x98B88A: mov     eax, [edi+10h]
0x98B88D: mov     [ebp-0Ch], eax
0x98B890: mov     eax, [edi+0Ch]
0x98B893: test    eax, eax
0x98B895: mov     [ebp-18h], eax
0x98B898: jle     short unknown_libname_83___unknown_libname_85
0x98B89A: mov     eax, [esi+1Ch]
0x98B89D: mov     eax, [eax+0Ch]
0x98B8A0: lea     ebx, [eax+4]
0x98B8A3: mov     eax, [eax]
0x98B8A5: test    eax, eax
0x98B8A7: mov     [ebp-14h], eax
0x98B8AA: jle     short loc_98B8CF
0x98B8AC: push    dword ptr [esi+1Ch]
0x98B8AF: mov     eax, [ebx]
0x98B8B1: push    eax
0x98B8B2: push    dword ptr [ebp-0Ch]
0x98B8B5: mov     [ebp-20h], eax
0x98B8B8: call    ___TypeMatch
0x98B8BD: add     esp, 0Ch
0x98B8C0: test    eax, eax
0x98B8C2: jnz     short loc_98B8DE
0x98B8C4: dec     dword ptr [ebp-14h]
0x98B8C7: add     ebx, 4
0x98B8CA: cmp     [ebp-14h], eax
0x98B8CD: jg      short loc_98B8AC
0x98B8CF: dec     dword ptr [ebp-18h]
0x98B8D2: add     dword ptr [ebp-0Ch], 10h
0x98B8D6: cmp     dword ptr [ebp-18h], 0
0x98B8DA: jg      short loc_98B89A
0x98B8DC: jmp     short unknown_libname_83___unknown_libname_85
0x98B8DE: push    dword ptr [ebp+24h]; struct _s_CatchableType *
0x98B8E1: mov     ebx, [ebp-0Ch]
0x98B8E4: push    dword ptr [ebp+20h]; struct _s_HandlerType *
0x98B8E7: mov     byte ptr [ebp-1], 1
0x98B8EB: push    dword ptr [ebp-20h]; struct _s_FuncInfo *
0x98B8EE: push    dword ptr [ebp+18h]; void *
0x98B8F1: push    dword ptr [ebp+14h]; struct _CONTEXT *
0x98B8F4: push    dword ptr [ebp+10h]; struct EHRegistrationNode *
0x98B8F7: push    esi; struct EHExceptionRecord *
0x98B8F8: mov     esi, [ebp+0Ch]
0x98B8FB: call    ?CatchIt@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@PBU_s_HandlerType@@PBU_s_CatchableType@@PBU_s_TryBlockMapEntry@@H1E@Z
0x98B900: mov     esi, [ebp+8]
0x98B903: add     esp, 1Ch
