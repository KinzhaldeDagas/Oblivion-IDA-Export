0x494950: mov     eax, 4E24h
0x494955: call    __alloca_probe
0x49495A: mov     eax, ds:0B30AACh
0x49495F: xor     eax, esp
0x494961: mov     [esp+4E24h+var_4], eax
0x494968: cmp     byte ptr ds:0B06B15h, 0
0x49496F: push    esi
0x494970: push    edi
0x494971: mov     edi, ecx
0x494973: jz      short loc_494988
0x494975: call    sub_4945E0
0x49497A: push    eax; lpFileName
0x49497B: call    dword ptr ds:0A280ACh
0x494981: mov     byte ptr ds:0B06B15h, 0
0x494988: mov     eax, [esp+4E2Ch+arg_0]
0x49498F: lea     edx, [esp+4E2Ch+var_4E24]
0x494993: sub     edx, eax
0x494995: mov     cl, [eax]
0x494997: mov     [edx+eax], cl
0x49499A: add     eax, 1
0x49499D: test    cl, cl
0x49499F: jnz     short loc_494995
0x4949A1: mov     esi, [edi]
0x4949A3: lea     eax, [esp+4E2Ch+var_4E24]
0x4949A7: push    1
0x4949A9: push    eax
0x4949AA: add     esi, 28h ; '('
0x4949AD: call    sub_4945E0
0x4949B2: mov     edx, [esi]
0x4949B4: push    eax
0x4949B5: mov     ecx, edi
0x4949B7: call    edx
0x4949B9: mov     ecx, [esp+4E2Ch+var_4]
0x4949C0: pop     edi
0x4949C1: pop     esi
0x4949C2: xor     ecx, esp
0x4949C4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4949C9: add     esp, 4E24h
0x4949CF: retn    4
