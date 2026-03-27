0x98B9AD: mov     ebx, [ebp+18h]
0x98B9B0: cmp     dword ptr [ebx+0Ch], 0
0x98B9B4: jbe     short loc_98B9DC
0x98B9B6: cmp     byte ptr [ebp+1Ch], 0
0x98B9BA: jnz     loc_98B7DC
0x98B9C0: push    dword ptr [ebp+24h]; struct EHRegistrationNode *
0x98B9C3: push    dword ptr [ebp+20h]; struct _s_HandlerType *
0x98B9C6: push    dword ptr [ebp-8]; int
0x98B9C9: push    ebx; struct _s_FuncInfo *
0x98B9CA: push    dword ptr [ebp+14h]; struct _CONTEXT *
0x98B9CD: push    dword ptr [ebp+10h]; struct _CONTEXT *
0x98B9D0: push    dword ptr [ebp+0Ch]; struct EHRegistrationNode *
0x98B9D3: push    esi; struct EHExceptionRecord *
0x98B9D4: call    ?FindHandlerForForeignException@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@HH1@Z; FindHandlerForForeignException(EHExceptionRecord *,EHRegistrationNode *,_CONTEXT *,void *,_s_FuncInfo const *,int,int,EHRegistrationNode *)
0x98B9D9: add     esp, 20h
0x98B9DC: call    __getptd
0x98B9E1: cmp     dword ptr [eax+94h], 0
0x98B9E8: jz      short loc_98B9EF
0x98B9EA: call    ?_inconsistency@@YAXXZ; _inconsistency(void)
0x98B9EF: pop     edi
0x98B9F0: pop     esi
0x98B9F1: pop     ebx
0x98B9F2: leave
0x98B9F3: retn
