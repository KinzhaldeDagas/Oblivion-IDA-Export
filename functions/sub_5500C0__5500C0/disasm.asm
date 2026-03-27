0x5500C0: sub     esp, 20Ch
0x5500C6: mov     eax, ds:0B30AACh
0x5500CB: xor     eax, esp
0x5500CD: mov     [esp+20Ch+var_4], eax
0x5500D4: mov     eax, [esp+20Ch+arg_4]
0x5500DB: test    eax, eax
0x5500DD: push    esi
0x5500DE: mov     esi, [esp+210h+arg_0]
0x5500E5: jnz     short loc_5500FF
0x5500E7: xor     eax, eax
0x5500E9: pop     esi
0x5500EA: mov     ecx, [esp+20Ch+var_4]
0x5500F1: xor     ecx, esp
0x5500F3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5500F8: add     esp, 20Ch
0x5500FE: retn
0x5500FF: lea     edx, [esp+210h+Str]
0x550103: sub     edx, eax
0x550105: mov     cl, [eax]
0x550107: mov     [edx+eax], cl
0x55010A: add     eax, 1
0x55010D: test    cl, cl
0x55010F: jnz     short loc_550105
0x550111: lea     eax, [esp+210h+Str]
0x550115: push    2Eh ; '.'; Ch
0x550117: push    eax; Str
0x550118: call    _strrchr
0x55011D: add     esp, 8
0x550120: test    eax, eax
0x550122: jz      short loc_5500E7
0x550124: lea     ecx, [esp+210h+Str]
0x550128: push    ecx
0x550129: lea     edx, [esp+214h+a2]
0x550130: push    offset aS_egt; "%s.egt"
0x550135: push    edx
0x550136: mov     byte ptr [eax], 0
0x550139: call    __sprintf
0x55013E: add     esp, 0Ch
0x550141: push    0; a3
0x550143: lea     eax, [esp+214h+a2]
0x55014A: push    eax; a2
0x55014B: mov     ecx, esi; this
0x55014D: call    BSStringT_Set
0x550152: mov     eax, [esi]
0x550154: mov     ecx, [esp+210h+var_4]
0x55015B: pop     esi
0x55015C: xor     ecx, esp
0x55015E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x550163: add     esp, 20Ch
0x550169: retn
