0x98C910: push    0Ch
0x98C912: push    offset stru_AFFE48
0x98C917: call    __SEH_prolog4
0x98C91C: xor     edi, edi
0x98C91E: inc     edi
0x98C91F: mov     [ebp+var_1C], edi
0x98C922: xor     ebx, ebx
0x98C924: cmp     hHeap, ebx
0x98C92A: jnz     short loc_98C944
0x98C92C: call    __FF_MSGBANNER
0x98C931: push    1Eh
0x98C933: call    __NMSG_WRITE
0x98C938: push    0FFh; uExitCode
0x98C93D: call    ___crtExitProcess
0x98C942: pop     ecx
0x98C943: pop     ecx
0x98C944: mov     esi, [ebp+arg_0]
0x98C947: lea     esi, ds:0B310C0h[esi*8]
0x98C94E: cmp     [esi], ebx
0x98C950: jz      short loc_98C956
0x98C952: mov     eax, edi
0x98C954: jmp     short loc_98C9C4
0x98C956: push    18h
0x98C958: call    unknown_libname_72
0x98C95D: pop     ecx
0x98C95E: mov     edi, eax
0x98C960: cmp     edi, ebx
0x98C962: jnz     short loc_98C973
0x98C964: call    __errno
0x98C969: mov     dword ptr [eax], 0Ch
0x98C96F: xor     eax, eax
0x98C971: jmp     short loc_98C9C4
0x98C973: push    0Ah
0x98C975: call    __lock
0x98C97A: pop     ecx
0x98C97B: mov     [ebp+ms_exc.registration.TryLevel], ebx
0x98C97E: cmp     [esi], ebx
0x98C980: jnz     short loc_98C9AE
0x98C982: push    0FA0h
0x98C987: push    edi
0x98C988: call    ___crtInitCritSecAndSpinCount
0x98C98D: pop     ecx
0x98C98E: pop     ecx
0x98C98F: test    eax, eax
0x98C991: jnz     short loc_98C9AA
0x98C993: push    edi; Memory
0x98C994: call    _free
0x98C999: pop     ecx
0x98C99A: call    __errno
0x98C99F: mov     dword ptr [eax], 0Ch
0x98C9A5: mov     [ebp+var_1C], ebx
0x98C9A8: jmp     short loc_98C9B5
0x98C9AA: mov     [esi], edi
0x98C9AC: jmp     short loc_98C9B5
0x98C9AE: push    edi; Memory
0x98C9AF: call    _free
0x98C9B4: pop     ecx
0x98C9B5: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98C9BC: call    __mtinitlocknum___$LN14_5
