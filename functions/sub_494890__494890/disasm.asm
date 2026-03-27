0x494890: mov     eax, 4E24h
0x494895: call    __alloca_probe
0x49489A: mov     eax, ds:0B30AACh
0x49489F: xor     eax, esp
0x4948A1: mov     [esp+4E24h+var_4], eax
0x4948A8: cmp     byte ptr ds:0B06B30h, 0
0x4948AF: push    ebp
0x4948B0: mov     ebp, [esp+4E28h+arg_0]
0x4948B7: push    esi
0x4948B8: mov     esi, ecx
0x4948BA: jnz     short loc_494933
0x4948BC: push    ebx
0x4948BD: push    edi
0x4948BE: call    _clock
0x4948C3: mov     ecx, eax
0x4948C5: mov     eax, 10624DD3h
0x4948CA: imul    ecx
0x4948CC: sar     edx, 6
0x4948CF: mov     eax, edx
0x4948D1: shr     eax, 1Fh
0x4948D4: add     eax, edx
0x4948D6: cdq
0x4948D7: mov     edi, 3Ch ; '<'
0x4948DC: idiv    edi
0x4948DE: push    ebp
0x4948DF: mov     ebx, eax
0x4948E1: mov     edi, edx
0x4948E3: mov     eax, 10624DD3h
0x4948E8: imul    ecx
0x4948EA: sar     edx, 5
0x4948ED: mov     eax, edx
0x4948EF: shr     eax, 1Fh
0x4948F2: add     eax, edx
0x4948F4: cdq
0x4948F5: mov     ecx, 64h ; 'd'
0x4948FA: idiv    ecx
0x4948FC: mov     eax, ebx
0x4948FE: mov     ecx, 3Ch ; '<'
0x494903: push    edx
0x494904: cdq
0x494905: idiv    ecx
0x494907: push    edi
0x494908: push    edx
0x494909: lea     edx, [esp+4E44h+var_4E24]
0x49490D: push    offset a02d02d02dS; "%02d%02d%02d: %s"
0x494912: push    edx
0x494913: call    __sprintf
0x494918: mov     edi, [esi]
0x49491A: add     esp, 18h
0x49491D: lea     eax, [esp+4E34h+var_4E24]
0x494921: push    1
0x494923: push    eax
0x494924: call    sub_4944F0
0x494929: mov     edx, [edi+28h]
0x49492C: push    eax
0x49492D: mov     ecx, esi
0x49492F: call    edx
0x494931: pop     edi
0x494932: pop     ebx
0x494933: mov     ecx, [esp+4E2Ch+var_4]
0x49493A: pop     esi
0x49493B: pop     ebp
0x49493C: xor     ecx, esp
0x49493E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x494943: add     esp, 4E24h
0x494949: retn    4
