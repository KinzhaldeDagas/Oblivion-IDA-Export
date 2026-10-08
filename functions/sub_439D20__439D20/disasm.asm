0x439D20: push    0FFFFFFFFh
0x439D22: push    offset SEH_439D20
0x439D27: mov     eax, large fs:0
0x439D2D: push    eax
0x439D2E: push    ecx
0x439D2F: push    esi
0x439D30: mov     eax, ___security_cookie
0x439D35: xor     eax, esp
0x439D37: push    eax
0x439D38: lea     eax, [esp+18h+var_C]
0x439D3C: mov     large fs:0, eax
0x439D42: mov     [esp+18h+task], 0
0x439D4A: mov     ecx, [ecx+0Ch]
0x439D4D: mov     eax, [ecx]
0x439D4F: mov     eax, [eax+4]
0x439D52: lea     edx, [esp+18h+task]
0x439D56: push    edx
0x439D57: mov     edx, [esp+1Ch+arg_0]
0x439D5B: push    edx
0x439D5C: mov     [esp+20h+var_4], 0
0x439D64: call    eax
0x439D66: test    al, al
0x439D68: jz      short loc_439D7A
0x439D6A: mov     ecx, [esp+18h+task]
0x439D6E: push    ecx; task
0x439D6F: mov     ecx, ds:0B33A10h
0x439D75: call    IOTask_Cancel; Verified generic IOTask cancellation state machine: previous states 0/1/2 atomically transition to 6 and invoke vtable +0x0C with status 0; state 5 transitions to 6 and invokes it with status 1; states 3/4 wait for the worker's state change. Verified local role: state 6 is the cancellation/terminal marker written by IOTask_Cancel. Its canonical enum label remains Unknown.
0x439D7A: mov     esi, [esp+18h+task]
0x439D7E: test    esi, esi
0x439D80: mov     [esp+18h+var_4], 0FFFFFFFFh
0x439D88: jz      short loc_439DA6
0x439D8A: lea     edx, [esi+8]
0x439D8D: push    edx; lpAddend
0x439D8E: call    ds:InterlockedDecrement
0x439D94: test    eax, eax
0x439D96: jnz     short loc_439DA6
0x439D98: test    esi, esi
0x439D9A: jz      short loc_439DA6
0x439D9C: mov     eax, [esi]
0x439D9E: mov     edx, [eax]
0x439DA0: push    1
0x439DA2: mov     ecx, esi
0x439DA4: call    edx
0x439DA6: mov     ecx, [esp+18h+var_C]
0x439DAA: mov     large fs:0, ecx
0x439DB1: pop     ecx
0x439DB2: pop     esi
0x439DB3: add     esp, 10h
0x439DB6: retn    4
0x9AC8A0: lea     ecx, [ebp-10h]; void *
0x9AC8A3: jmp     sub_4BDDC0
0x9AC8A8: mov     edx, [esp+arg_4]
0x9AC8AC: lea     eax, [edx-8]
0x9AC8AF: mov     ecx, [edx-0Ch]
0x9AC8B2: xor     ecx, eax
0x9AC8B4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AC8B9: mov     eax, offset stru_AD9530
0x9AC8BE: jmp     ___CxxFrameHandler3
