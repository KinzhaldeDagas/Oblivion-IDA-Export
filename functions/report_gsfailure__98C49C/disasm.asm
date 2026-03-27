0x98C49C: push    ebp
0x98C49D: mov     ebp, esp
0x98C49F: sub     esp, 328h
0x98C4A5: mov     dword_BA9F38, eax
0x98C4AA: mov     dword_BA9F34, ecx
0x98C4B0: mov     dword_BA9F30, edx
0x98C4B6: mov     dword_BA9F2C, ebx
0x98C4BC: mov     dword_BA9F28, esi
0x98C4C2: mov     dword_BA9F24, edi
0x98C4C8: mov     word_BA9F50, ss
0x98C4CF: mov     word_BA9F44, cs
0x98C4D6: mov     word_BA9F20, ds
0x98C4DD: mov     word_BA9F1C, es
0x98C4E4: mov     word_BA9F18, fs
0x98C4EB: mov     word_BA9F14, gs
0x98C4F2: pushf
0x98C4F3: pop     dword_BA9F48
0x98C4F9: mov     eax, [ebp+var_s0]
0x98C4FC: mov     dword_BA9F3C, eax
0x98C501: mov     eax, [ebp+4]
0x98C504: mov     dword_BA9F40, eax
0x98C509: lea     eax, [ebp+arg_0]
0x98C50C: mov     dword_BA9F4C, eax
0x98C511: mov     eax, [ebp+var_320]
0x98C517: mov     dword_BA9E88, 10001h
0x98C521: mov     eax, dword_BA9F40
0x98C526: mov     dword_BA9E3C, eax
0x98C52B: mov     dword_BA9E30, 0C0000409h
0x98C535: mov     dword_BA9E34, 1
0x98C53F: mov     eax, ___security_cookie
0x98C544: mov     [ebp+var_328], eax
0x98C54A: mov     eax, dword_B30AB0
0x98C54F: mov     [ebp+var_324], eax
0x98C555: call    ds:IsDebuggerPresent
0x98C55B: mov     dword_BA9E80, eax
0x98C560: push    1
0x98C562: call    sub_9933A9
0x98C567: pop     ecx
0x98C568: push    0; lpTopLevelExceptionFilter
0x98C56A: call    ds:SetUnhandledExceptionFilter
0x98C570: push    offset ExceptionInfo; ExceptionInfo
0x98C575: call    ds:UnhandledExceptionFilter
0x98C57B: cmp     dword_BA9E80, 0
0x98C582: jnz     short loc_98C58C
0x98C584: push    1
0x98C586: call    sub_9933A9
0x98C58B: pop     ecx
0x98C58C: push    0C0000409h; uExitCode
0x98C591: call    ds:GetCurrentProcess
0x98C597: push    eax; hProcess
0x98C598: call    ds:TerminateProcess
0x98C59E: leave
0x98C59F: retn
