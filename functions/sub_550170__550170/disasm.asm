0x550170: sub     esp, 20Ch
0x550176: mov     eax, ds:0B30AACh
0x55017B: xor     eax, esp
0x55017D: mov     [esp+20Ch+var_4], eax
0x550184: push    esi
0x550185: mov     esi, [esp+210h+arg_4]
0x55018C: test    esi, esi
0x55018E: push    edi
0x55018F: mov     edi, [esp+214h+arg_0]
0x550196: jnz     short loc_5501B1
0x550198: pop     edi
0x550199: xor     eax, eax
0x55019B: pop     esi
0x55019C: mov     ecx, [esp+20Ch+var_4]
0x5501A3: xor     ecx, esp
0x5501A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5501AA: add     esp, 20Ch
0x5501B0: retn
0x5501B1: lea     edx, [esp+214h+Str]
0x5501B5: mov     eax, esi
0x5501B7: sub     edx, esi
0x5501B9: lea     esp, [esp+0]
0x5501C0: mov     cl, [eax]
0x5501C2: mov     [edx+eax], cl
0x5501C5: add     eax, 1
0x5501C8: test    cl, cl
0x5501CA: jnz     short loc_5501C0
0x5501CC: lea     eax, [esp+214h+Str]
0x5501D0: push    5Fh ; '_'; Ch
0x5501D2: push    eax; Str
0x5501D3: call    _strrchr
0x5501D8: add     esp, 8
0x5501DB: test    eax, eax
0x5501DD: jnz     short loc_5501F8
0x5501DF: pop     edi
0x5501E0: mov     eax, esi
0x5501E2: pop     esi
0x5501E3: mov     ecx, [esp+20Ch+var_4]
0x5501EA: xor     ecx, esp
0x5501EC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5501F1: add     esp, 20Ch
0x5501F7: retn
0x5501F8: lea     ecx, [esp+214h+Str]
0x5501FC: push    ecx
0x5501FD: lea     edx, [esp+218h+a2]
0x550204: push    offset aS_nif; "%s.nif"
0x550209: push    edx
0x55020A: mov     byte ptr [eax], 0
0x55020D: call    __sprintf
0x550212: add     esp, 0Ch
0x550215: push    0; a3
0x550217: lea     eax, [esp+218h+a2]
0x55021E: push    eax; a2
0x55021F: mov     ecx, edi; this
0x550221: call    BSStringT_Set
0x550226: mov     eax, [edi]
0x550228: mov     ecx, [esp+214h+var_4]
0x55022F: pop     edi
0x550230: pop     esi
0x550231: xor     ecx, esp
0x550233: call    @__security_check_cookie@4; __security_check_cookie(x)
0x550238: add     esp, 20Ch
0x55023E: retn
