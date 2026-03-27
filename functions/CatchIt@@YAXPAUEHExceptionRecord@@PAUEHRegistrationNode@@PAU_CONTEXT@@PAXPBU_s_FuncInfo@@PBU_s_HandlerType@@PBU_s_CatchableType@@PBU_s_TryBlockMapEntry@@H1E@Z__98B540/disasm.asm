0x98B540: push    ebp
0x98B541: mov     ebp, esp
0x98B543: cmp     [ebp+arg_10], 0
0x98B547: jz      short loc_98B559
0x98B549: push    [ebp+arg_10]
0x98B54C: push    ebx
0x98B54D: push    esi
0x98B54E: push    [ebp+ExceptionRecord]
0x98B551: call    ___BuildCatchObject
0x98B556: add     esp, 10h
0x98B559: cmp     [ebp+TargetFrame], 0
0x98B55D: push    [ebp+ExceptionRecord]; ExceptionRecord
0x98B560: jnz     short loc_98B565
0x98B562: push    esi
0x98B563: jmp     short loc_98B568
0x98B565: push    [ebp+TargetFrame]; TargetFrame
0x98B568: call    unknown_libname_8
0x98B56D: push    dword ptr [edi]
0x98B56F: push    [ebp+arg_C]
0x98B572: push    [ebp+arg_8]
0x98B575: push    esi; unsigned int
0x98B576: call    ___FrameUnwindToState
0x98B57B: mov     eax, [edi+4]
0x98B57E: push    100h; unsigned int
0x98B583: push    [ebp+arg_14]; void *
0x98B586: inc     eax
0x98B587: push    [ebp+arg_C]; struct _s_FuncInfo *
0x98B58A: mov     [esi+8], eax
0x98B58D: push    [ebp+arg_4]; struct _CONTEXT *
0x98B590: mov     ecx, [ebx+0Ch]
0x98B593: push    esi; struct EHRegistrationNode *
0x98B594: push    [ebp+ExceptionRecord]; struct EHExceptionRecord *
0x98B597: call    ?CallCatchBlock@@YAPAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PBU_s_FuncInfo@@PAXHK@Z
0x98B59C: add     esp, 28h
0x98B59F: test    eax, eax
0x98B5A1: jz      short loc_98B5AA
0x98B5A3: push    esi; struct EHRegistrationNode *
0x98B5A4: push    eax; void *
0x98B5A5: call    ?_JumpToContinuation@@YGXPAXPAUEHRegistrationNode@@@Z
0x98B5AA: pop     ebp
0x98B5AB: retn
