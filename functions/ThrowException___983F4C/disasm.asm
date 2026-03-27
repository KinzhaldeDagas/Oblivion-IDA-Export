0x983F4C: push    ebp
0x983F4D: mov     ebp, esp
0x983F4F: sub     esp, 20h
0x983F52: mov     eax, [ebp+arg_0]
0x983F55: push    esi
0x983F56: push    edi
0x983F57: push    8
0x983F59: pop     ecx
0x983F5A: mov     esi, offset unk_AA3F14
0x983F5F: lea     edi, [ebp+dwExceptionCode]
0x983F62: rep movsd
0x983F64: mov     [ebp+var_8], eax
0x983F67: mov     eax, [ebp+arg_4]
0x983F6A: test    eax, eax
0x983F6C: pop     edi
0x983F6D: mov     [ebp+var_4], eax
0x983F70: pop     esi
0x983F71: jz      short loc_983F7F
0x983F73: test    byte ptr [eax], 8
0x983F76: jz      short loc_983F7F
0x983F78: mov     [ebp+Arguments], 1994000h
0x983F7F: lea     eax, [ebp+Arguments]
0x983F82: push    eax; lpArguments
0x983F83: push    [ebp+nNumberOfArguments]; nNumberOfArguments
0x983F86: push    [ebp+dwExceptionFlags]; dwExceptionFlags
0x983F89: push    [ebp+dwExceptionCode]; dwExceptionCode
0x983F8C: call    dword ptr ds:0A28114h
0x983F92: leave
0x983F93: retn    8
