0x747830: push    ebp
0x747831: mov     ebp, esp
0x747833: push    0FFFFFFFEh
0x747835: push    offset stru_AF34C0
0x74783A: push    offset __except_handler4
0x74783F: mov     eax, large fs:0
0x747845: push    eax
0x747846: sub     esp, 18h
0x747849: push    ebx
0x74784A: push    esi
0x74784B: push    edi
0x74784C: mov     eax, ds:0B30AACh
0x747851: xor     [ebp+ms_exc.registration.ScopeTable], eax
0x747854: xor     eax, ebp
0x747856: push    eax
0x747857: lea     eax, [ebp+ms_exc.registration]
0x74785A: mov     large fs:0, eax
0x747860: mov     [ebp+ms_exc.old_esp], esp
0x747863: mov     [ebp+Arguments], 1000h
0x74786A: mov     eax, [ebp+arg_4]
0x74786D: mov     [ebp+var_24], eax
0x747870: mov     ecx, [ebp+arg_0]
0x747873: mov     [ebp+var_20], ecx
0x747876: xor     eax, eax
0x747878: mov     [ebp+var_1C], eax
0x74787B: mov     [ebp+ms_exc.registration.TryLevel], eax
0x74787E: lea     edx, [ebp+Arguments]
0x747881: push    edx; lpArguments
0x747882: push    4; nNumberOfArguments
0x747884: push    eax; dwExceptionFlags
0x747885: push    406D1388h; dwExceptionCode
0x74788A: call    dword ptr ds:0A28114h
0x747890: jmp     short loc_747899
0x747892: or      eax, 0FFFFFFFFh
0x747895: retn
0x747896: mov     esp, [ebp+ms_exc.old_esp]
0x747899: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x7478A0: mov     ecx, [ebp+ms_exc.registration.Next]
0x7478A3: mov     large fs:0, ecx
0x7478AA: pop     ecx
0x7478AB: pop     edi
0x7478AC: pop     esi
0x7478AD: pop     ebx
0x7478AE: mov     esp, ebp
0x7478B0: pop     ebp
0x7478B1: retn
