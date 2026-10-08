0x433970: push    0FFFFFFFFh
0x433972: push    offset SEH_433970
0x433977: mov     eax, large fs:0
0x43397D: push    eax
0x43397E: sub     esp, 30h
0x433981: push    ebx
0x433982: push    ebp
0x433983: push    esi
0x433984: push    edi
0x433985: mov     eax, ___security_cookie
0x43398A: xor     eax, esp
0x43398C: push    eax
0x43398D: lea     eax, [esp+50h+var_C]
0x433991: mov     large fs:0, eax
0x433997: mov     edi, ecx
0x433999: mov     ebp, ds:InterlockedDecrement
0x43399F: xor     ebx, ebx
0x4339A1: mov     [esp+50h+var_39], bl
0x4339A5: mov     [esp+50h+var_24], ebx
0x4339A9: mov     [esp+50h+var_1C], ebx
0x4339AD: mov     [esp+50h+var_18], ebx
0x4339B1: mov     [esp+50h+var_14], bl
0x4339B5: mov     [esp+50h+var_2C], offset ??_7?$BSTaskManagerIterator@_J@@6B@; const BSTaskManagerIterator<__int64>::`vftable'
0x4339BD: mov     [esp+50h+var_4], ebx
0x4339C1: mov     [esp+50h+task], ebx
0x4339C5: push    1
0x4339C7: lea     eax, [esp+54h+task]
0x4339CB: push    eax
0x4339CC: lea     ecx, [esp+58h+var_34]
0x4339D0: push    ecx
0x4339D1: lea     edx, [esp+5Ch+var_2C]
0x4339D5: push    edx
0x4339D6: mov     ecx, edi
0x4339D8: mov     byte ptr [esp+60h+var_4], 1
0x4339DD: call    sub_433760
0x4339E2: test    al, al
0x4339E4: mov     esi, [esp+50h+task]
0x4339E8: jz      short loc_4339F7
0x4339EA: push    esi; task
0x4339EB: mov     ecx, edi
0x4339ED: call    IOTask_Cancel; Verified generic IOTask cancellation state machine: previous states 0/1/2 atomically transition to 6 and invoke vtable +0x0C with status 0; state 5 transitions to 6 and invokes it with status 1; states 3/4 wait for the worker's state change. Verified local role: state 6 is the cancellation/terminal marker written by IOTask_Cancel. Its canonical enum label remains Unknown.
0x4339F2: mov     [esp+50h+var_39], 1
0x4339F7: cmp     esi, ebx
0x4339F9: mov     byte ptr [esp+50h+var_4], bl
0x4339FD: jz      short loc_433A13
0x4339FF: lea     eax, [esi+8]
0x433A02: push    eax; lpAddend
0x433A03: call    ebp ; InterlockedDecrement
0x433A05: test    eax, eax
0x433A07: jnz     short loc_433A13
0x433A09: mov     edx, [esi]
0x433A0B: mov     eax, [edx]
0x433A0D: push    1
0x433A0F: mov     ecx, esi
0x433A11: call    eax
0x433A13: test    [esp+50h+var_14], 2
0x433A18: jz      short loc_4339C1
0x433A1A: cmp     [esp+50h+var_39], bl
0x433A1E: mov     [esp+50h+var_4], 0FFFFFFFFh
0x433A26: jnz     loc_4339A1
0x433A2C: mov     ecx, dword ptr [esp+50h+var_C]
0x433A30: mov     large fs:0, ecx
0x433A37: pop     ecx
0x433A38: pop     edi
0x433A39: pop     esi
0x433A3A: pop     ebp
0x433A3B: pop     ebx
0x433A3C: add     esp, 3Ch
0x433A3F: retn
0x432090: mov     dword ptr [ecx], offset ??_7LockFreeMapIterator@?$LockFreeMap@_JV?$NiPointer@V?$BSTask@_J@@@@@@6B@; const LockFreeMap<__int64,NiPointer<BSTask<__int64>>>::LockFreeMapIterator::`vftable'
0x432096: retn
0x9AC040: lea     ecx, [ebp-2Ch]
0x9AC043: jmp     loc_432090
0x9AC048: lea     ecx, [ebp-38h]; void *
0x9AC04B: jmp     sub_4BDDC0
0x9AC050: mov     edx, [esp+arg_4]
0x9AC054: lea     eax, [edx-40h]
0x9AC057: mov     ecx, [edx-44h]
0x9AC05A: xor     ecx, eax
0x9AC05C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AC061: mov     eax, offset stru_AD8D68
0x9AC066: jmp     ___CxxFrameHandler3
