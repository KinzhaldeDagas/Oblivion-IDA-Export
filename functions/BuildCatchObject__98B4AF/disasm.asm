0x98B4AF: push    8
0x98B4B1: push    offset stru_AFFD68
0x98B4B6: call    __SEH_prolog4
0x98B4BB: mov     eax, [ebp+arg_8]
0x98B4BE: test    dword ptr [eax], 80000000h
0x98B4C4: jz      short loc_98B4CB
0x98B4C6: mov     ebx, [ebp+arg_4]
0x98B4C9: jmp     short loc_98B4D5
0x98B4CB: mov     ecx, [eax+8]
0x98B4CE: mov     edx, [ebp+arg_4]
0x98B4D1: lea     ebx, [ecx+edx+0Ch]
0x98B4D5: and     [ebp+ms_exc.registration.TryLevel], 0
0x98B4D9: mov     esi, [ebp+arg_C]
0x98B4DC: push    esi
0x98B4DD: push    eax
0x98B4DE: push    [ebp+arg_4]
0x98B4E1: mov     edi, [ebp+arg_0]
0x98B4E4: push    edi
0x98B4E5: call    ___BuildCatchObjectHelper
0x98B4EA: add     esp, 10h
0x98B4ED: dec     eax
0x98B4EE: jz      short loc_98B50F
0x98B4F0: dec     eax
0x98B4F1: jnz     short loc_98B527
0x98B4F3: push    1
0x98B4F5: lea     eax, [esi+8]
0x98B4F8: push    eax
0x98B4F9: push    dword ptr [edi+18h]
0x98B4FC: call    ___AdjustPointer
0x98B501: pop     ecx
0x98B502: pop     ecx
0x98B503: push    eax
0x98B504: push    dword ptr [esi+18h]
0x98B507: push    ebx
0x98B508: call    sub_980E4B; ?_CallMemberFunction0@@YGXPAX0@Z
0x98B50D: jmp     short loc_98B527
0x98B50F: lea     eax, [esi+8]
0x98B512: push    eax
0x98B513: push    dword ptr [edi+18h]
0x98B516: call    ___AdjustPointer
0x98B51B: pop     ecx
0x98B51C: pop     ecx
0x98B51D: push    eax
0x98B51E: push    dword ptr [esi+18h]
0x98B521: push    ebx
0x98B522: call    sub_980E4B; ?_CallMemberFunction0@@YGXPAX0@Z
0x98B527: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98B52E: call    __SEH_epilog4
0x98B533: retn
0x98B534: xor     eax, eax
0x98B536: inc     eax
0x98B537: retn
0x98B538: mov     esp, [ebp+ms_exc.old_esp]
0x98B53B: jmp     ?terminate@@YAXXZ
