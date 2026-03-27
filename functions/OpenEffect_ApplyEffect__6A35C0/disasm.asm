0x6A35C0: push    ecx
0x6A35C1: push    edi
0x6A35C2: push    0; int
0x6A35C4: push    offset ??_R0?AVNonActorMagicTarget@@@8; struct TypeDescriptor *
0x6A35C9: mov     edi, ecx
0x6A35CB: mov     eax, [edi+20h]
0x6A35CE: push    offset ??_R0?AVMagicTarget@@@8; struct _s_RTTICompleteObjectLocator *
0x6A35D3: push    0; int
0x6A35D5: push    eax; void *
0x6A35D6: call    OblivionDynamicCast
0x6A35DB: add     esp, 14h
0x6A35DE: test    eax, eax
0x6A35E0: jz      short loc_6A3659
0x6A35E2: push    esi
0x6A35E3: lea     esi, [eax+0Ch]
0x6A35E6: mov     eax, [esi]
0x6A35E8: mov     edx, [eax+4]
0x6A35EB: mov     ecx, esi
0x6A35ED: call    edx
0x6A35EF: test    eax, eax
0x6A35F1: jz      short loc_6A3658
0x6A35F3: mov     eax, [esi]
0x6A35F5: mov     edx, [eax+4]
0x6A35F8: push    ebx
0x6A35F9: mov     ecx, esi
0x6A35FB: call    edx
0x6A35FD: mov     ecx, eax
0x6A35FF: call    sub_4D7740
0x6A3604: fld     dword ptr [edi+18h]
0x6A3607: fstp    [esp+10h+var_4]
0x6A360B: mov     ebx, eax
0x6A360D: fld     [esp+10h+var_4]
0x6A3611: call    Double_To_SInt32
0x6A3616: push    eax
0x6A3617: call    GetLockLevel
0x6A361C: mov     edi, eax
0x6A361E: mov     eax, [esi]
0x6A3620: mov     edx, [eax+4]
0x6A3623: add     esp, 4
0x6A3626: mov     ecx, esi
0x6A3628: call    edx
0x6A362A: mov     ecx, eax
0x6A362C: call    sub_4D7780
0x6A3631: push    eax
0x6A3632: call    GetLockLevel
0x6A3637: add     esp, 4
0x6A363A: test    ebx, ebx
0x6A363C: pop     ebx
0x6A363D: jz      short loc_6A3658
0x6A363F: cmp     edi, eax
0x6A3641: jl      short loc_6A3658
0x6A3643: mov     eax, [esi]
0x6A3645: mov     edx, [eax+4]
0x6A3648: mov     ecx, esi
0x6A364A: call    edx
0x6A364C: pop     esi
0x6A364D: mov     ecx, eax
0x6A364F: pop     edi
0x6A3650: add     esp, 4
0x6A3653: jmp     sub_4DBEA0
0x6A3658: pop     esi
0x6A3659: pop     edi
0x6A365A: pop     ecx
0x6A365B: retn
