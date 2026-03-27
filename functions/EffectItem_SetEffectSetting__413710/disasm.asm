0x413710: push    0FFFFFFFFh
0x413712: push    offset SEH_5ACE20
0x413717: mov     eax, large fs:0
0x41371D: push    eax
0x41371E: sub     esp, 8
0x413721: push    ebx
0x413722: push    ebp
0x413723: push    esi
0x413724: push    edi
0x413725: mov     eax, ___security_cookie
0x41372A: xor     eax, esp
0x41372C: push    eax
0x41372D: lea     eax, [esp+28h+var_C]
0x413731: mov     large fs:0, eax
0x413737: mov     esi, ecx
0x413739: mov     ebp, [esp+28h+arg_0]
0x41373D: xor     ebx, ebx
0x41373F: cmp     [esi+18h], ebx
0x413742: jnz     short EffectItem_SetEffectSetting___CleanupExtraSCIT
0x413744: cmp     dword ptr [ebp+98h], 46464553h
0x41374E: jnz     short EffectItem_SetEffectSetting___CleanupExtraSCIT
