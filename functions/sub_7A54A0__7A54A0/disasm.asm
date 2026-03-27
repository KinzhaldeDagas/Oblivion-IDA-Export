0x7A54A0: sub     esp, 408h
0x7A54A6: mov     eax, ds:0B30AACh
0x7A54AB: xor     eax, esp
0x7A54AD: mov     [esp+408h+var_4], eax
0x7A54B4: mov     ecx, [esp+408h+Format]
0x7A54BB: lea     eax, [esp+408h+ArgList]
0x7A54C2: push    eax; ArgList
0x7A54C3: push    ecx; Format
0x7A54C4: lea     edx, [esp+410h+DstBuf]
0x7A54C8: push    edx; DstBuf
0x7A54C9: mov     [esp+414h+var_408], 0
0x7A54D1: call    __vsprintf
0x7A54D6: lea     eax, [esp+414h+DstBuf]
0x7A54DA: mov     dword ptr [esi+18h], 0Fh
0x7A54E1: mov     dword ptr [esi+14h], 0
0x7A54E8: add     esp, 0Ch
0x7A54EB: mov     byte ptr [esi+4], 0
0x7A54EF: lea     edx, [eax+1]
0x7A54F2: mov     cl, [eax]
0x7A54F4: add     eax, 1
0x7A54F7: test    cl, cl
0x7A54F9: jnz     short loc_7A54F2
0x7A54FB: sub     eax, edx
0x7A54FD: push    eax; MaxCount
0x7A54FE: lea     eax, [esp+40Ch+DstBuf]
0x7A5502: push    eax; Src
0x7A5503: mov     ecx, esi
0x7A5505: call    sub_414500
0x7A550A: mov     ecx, [esp+408h+var_4]
0x7A5511: xor     ecx, esp
0x7A5513: mov     eax, esi
0x7A5515: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7A551A: add     esp, 408h
0x7A5520: retn
