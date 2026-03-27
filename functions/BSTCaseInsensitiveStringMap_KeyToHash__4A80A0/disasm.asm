0x4A80A0: push    ebp
0x4A80A1: mov     ebp, esp
0x4A80A3: sub     esp, 10h
0x4A80A6: mov     eax, ds:0B30AACh
0x4A80AB: xor     eax, ebp
0x4A80AD: mov     [ebp+var_4], eax
0x4A80B0: mov     eax, [ebp+arg_0]
0x4A80B3: push    ebx
0x4A80B4: push    esi
0x4A80B5: push    edi
0x4A80B6: mov     [ebp+var_10], ecx
0x4A80B9: lea     edx, [eax+1]
0x4A80BC: lea     esp, [esp+0]
0x4A80C0: mov     cl, [eax]
0x4A80C2: add     eax, 1
0x4A80C5: test    cl, cl
0x4A80C7: jnz     short loc_4A80C0
0x4A80C9: sub     eax, edx
0x4A80CB: mov     ebx, eax
0x4A80CD: lea     eax, [ebx+1]
0x4A80D0: call    __alloca?
0x4A80D5: test    ebx, ebx
0x4A80D7: mov     esi, esp
0x4A80D9: jle     short loc_4A810B
0x4A80DB: mov     eax, [ebp+arg_0]
0x4A80DE: sub     eax, esi
0x4A80E0: mov     edi, esi
0x4A80E2: mov     [ebp+var_C], eax
0x4A80E5: mov     [ebp+var_8], ebx
0x4A80E8: jmp     short loc_4A80F3
0x4A80EA: align 10h
0x4A80F0: mov     eax, [ebp+var_C]
0x4A80F3: movsx   eax, byte ptr [eax+edi]
0x4A80F7: push    eax; C
0x4A80F8: call    _tolower
0x4A80FD: mov     [edi], al
0x4A80FF: add     esp, 4
0x4A8102: add     edi, 1
0x4A8105: sub     [ebp+var_8], 1
0x4A8109: jnz     short loc_4A80F0
0x4A810B: mov     byte ptr [esi+ebx], 0
0x4A810F: mov     cl, [esi]
0x4A8111: xor     eax, eax
0x4A8113: test    cl, cl
0x4A8115: jz      short loc_4A812D
0x4A8117: mov     edx, eax
0x4A8119: shl     edx, 5
0x4A811C: add     edx, eax
0x4A811E: movsx   eax, cl
0x4A8121: mov     cl, [esi+1]
0x4A8124: add     esi, 1
0x4A8127: add     eax, edx
0x4A8129: test    cl, cl
0x4A812B: jnz     short loc_4A8117
0x4A812D: mov     ecx, [ebp+var_10]
0x4A8130: xor     edx, edx
0x4A8132: div     dword ptr [ecx+4]
0x4A8135: mov     eax, edx
0x4A8137: lea     esp, [ebp-1Ch]
0x4A813A: pop     edi
0x4A813B: pop     esi
0x4A813C: pop     ebx
0x4A813D: mov     ecx, [ebp+var_4]
0x4A8140: xor     ecx, ebp
0x4A8142: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4A8147: mov     esp, ebp
0x4A8149: pop     ebp
0x4A814A: retn    4
