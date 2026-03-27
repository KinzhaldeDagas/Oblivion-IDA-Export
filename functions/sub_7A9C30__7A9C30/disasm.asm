0x7A9C30: push    ecx
0x7A9C31: push    edi
0x7A9C32: mov     edi, [ecx+0Ch]
0x7A9C35: test    edi, edi
0x7A9C37: mov     [esp+8+var_4], ecx
0x7A9C3B: jz      short loc_7A9CA3
0x7A9C3D: push    ebx
0x7A9C3E: mov     ebx, ds:0A2806Ch
0x7A9C44: push    ebp
0x7A9C45: mov     ebp, ds:0A2808Ch
0x7A9C4B: push    esi
0x7A9C4C: lea     esp, [esp+0]
0x7A9C50: mov     esi, edi
0x7A9C52: mov     edi, [edi]
0x7A9C54: push    offset stru_B33F00; lpCriticalSection
0x7A9C59: call    ebx ; EnterCriticalSection
0x7A9C5B: call    ebp ; GetCurrentThreadId
0x7A9C5D: mov     ds:0B33F78h, eax
0x7A9C62: mov     ecx, 1
0x7A9C67: add     ds:0B33F7Ch, ecx
0x7A9C6D: xor     eax, eax
0x7A9C6F: mov     [esi+4], eax
0x7A9C72: mov     edx, ds:0B33EACh
0x7A9C78: mov     [esi], edx
0x7A9C7A: sub     ds:0B33F7Ch, ecx
0x7A9C80: mov     ds:0B33EACh, esi
0x7A9C86: jnz     short loc_7A9C8D
0x7A9C88: mov     ds:0B33F78h, eax
0x7A9C8D: push    offset stru_B33F00; lpCriticalSection
0x7A9C92: call    dword ptr ds:0A28074h
0x7A9C98: test    edi, edi
0x7A9C9A: jnz     short loc_7A9C50
0x7A9C9C: mov     ecx, [esp+14h+var_4]
0x7A9CA0: pop     esi
0x7A9CA1: pop     ebp
0x7A9CA2: pop     ebx
0x7A9CA3: mov     dword ptr [ecx+0Ch], 0
0x7A9CAA: mov     ecx, [ecx+8]
0x7A9CAD: test    ecx, ecx
0x7A9CAF: pop     edi
0x7A9CB0: jz      short loc_7A9CB8
0x7A9CB2: mov     dword ptr [ecx], 0
0x7A9CB8: pop     ecx
0x7A9CB9: retn
