0x431D60: sub     esp, -0FFFFFEF8h
0x431D66: mov     eax, ___security_cookie
0x431D6B: xor     eax, esp
0x431D6D: mov     [esp+108h+var_4], eax
0x431D74: push    ebx
0x431D75: mov     ebx, [esp+10Ch+a2]
0x431D7C: push    ebp
0x431D7D: push    esi
0x431D7E: push    edi
0x431D7F: mov     edi, ecx
0x431D81: lea     eax, [edi+0Ch]
0x431D84: push    eax; lpAddend
0x431D85: xor     ebp, ebp
0x431D87: call    ds:InterlockedIncrement
0x431D8D: mov     esi, eax
0x431D8F: mov     eax, [edi]
0x431D91: sub     esi, 1
0x431D94: cmp     esi, eax
0x431D96: jnb     short loc_431DC5
0x431D98: mov     edx, [ebx]
0x431D9A: mov     eax, [edx]
0x431D9C: push    esi
0x431D9D: mov     ecx, ebx
0x431D9F: call    eax
0x431DA1: mov     ecx, [edi+8]
0x431DA4: mov     ebx, eax
0x431DA6: mov     [ecx+esi*8+4], ebx
0x431DAA: call    ds:GetCurrentThreadId
0x431DB0: mov     edx, [edi+8]
0x431DB3: mov     [edx+esi*8], eax
0x431DB6: mov     eax, [edi+4]
0x431DB9: push    ebx; lpTlsValue
0x431DBA: push    eax; dwTlsIndex
0x431DBB: call    ds:TlsSetValue
0x431DC1: mov     eax, ebx
0x431DC3: jmp     short loc_431DF2
0x431DC5: push    eax
0x431DC6: call    ds:GetCurrentThreadId
0x431DCC: push    eax
0x431DCD: lea     ecx, [esp+120h+OutputString]
0x431DD1: push    offset aCouldNotAddNew; "Could not add new interface for thread "...
0x431DD6: push    ecx
0x431DD7: call    __sprintf
0x431DDC: add     esp, 10h
0x431DDF: lea     edx, [esp+118h+OutputString]
0x431DE3: push    edx; lpOutputString
0x431DE4: call    ds:OutputDebugStringA
0x431DEA: call    ds:DebugBreak
0x431DF0: mov     eax, ebp
0x431DF2: mov     ecx, [esp+118h+var_4]
0x431DF9: pop     edi
0x431DFA: pop     esi
0x431DFB: pop     ebp
0x431DFC: pop     ebx
0x431DFD: xor     ecx, esp
0x431DFF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x431E04: add     esp, 108h
0x431E0A: retn    4
