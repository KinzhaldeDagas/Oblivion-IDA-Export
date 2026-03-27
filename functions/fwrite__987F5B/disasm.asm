0x987F5B: push    0Ch
0x987F5D: push    offset stru_AFFB00
0x987F62: call    __SEH_prolog4
0x987F67: mov     eax, [ebp+Size]
0x987F6A: imul    eax, [ebp+Count]
0x987F6E: test    eax, eax
0x987F70: jnz     short loc_987F76
0x987F72: xor     eax, eax
0x987F74: jmp     short loc_987FD8
0x987F76: xor     eax, eax
0x987F78: xor     esi, esi
0x987F7A: cmp     [ebp+File], esi
0x987F7D: setnz   al
0x987F80: cmp     eax, esi
0x987F82: jnz     short loc_987F9A
0x987F84: call    __errno
0x987F89: mov     [eax], esi
0x987F8B: push    esi
0x987F8C: push    esi
0x987F8D: push    esi
0x987F8E: push    esi
0x987F8F: push    esi
0x987F90: call    __invalid_parameter
0x987F95: add     esp, 14h
0x987F98: jmp     short loc_987F72
0x987F9A: xor     eax, eax
0x987F9C: cmp     [ebp+Str], esi
0x987F9F: setnz   al
0x987FA2: cmp     eax, esi
0x987FA4: jz      short loc_987F84
0x987FA6: push    [ebp+File]
0x987FA9: call    __lock_file
0x987FAE: pop     ecx
0x987FAF: mov     [ebp+ms_exc.registration.TryLevel], esi
0x987FB2: push    [ebp+File]; Count
0x987FB5: push    [ebp+Count]; Count
0x987FB8: push    [ebp+Size]; Size
0x987FBB: push    [ebp+Str]; DstBuf
0x987FBE: call    __fwrite_nolock
0x987FC3: add     esp, 10h
0x987FC6: mov     [ebp+var_1C], eax
0x987FC9: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x987FD0: call    _fwrite___$LN10_2
