0x5083C0: sub     esp, 208h
0x5083C6: mov     eax, ds:0B30AACh
0x5083CB: xor     eax, esp
0x5083CD: mov     [esp+208h+var_4], eax
0x5083D4: mov     edx, [esp+208h+a4]
0x5083DB: mov     ecx, [esp+208h+arg_4]
0x5083E2: mov     eax, [esp+208h+a1]
0x5083E9: push    ebx
0x5083EA: mov     ebx, [esp+20Ch+l]
0x5083F1: push    ebp
0x5083F2: mov     ebp, [esp+210h+arg_1C]
0x5083F9: push    esi
0x5083FA: mov     esi, [esp+214h+arg_C]
0x508401: push    edi
0x508402: mov     edi, [esp+218h+arg_10]
0x508409: mov     [esp+218h+a3], ebp
0x50840D: lea     ebp, [esp+218h+ArgList]
0x508411: push    ebp; UInt16
0x508412: push    ebx; l
0x508413: push    edi; a6
0x508414: push    esi; a5
0x508415: push    edx; a4
0x508416: mov     edx, [esp+22Ch+a3]
0x50841A: push    edx; a3
0x50841B: push    ecx; a2
0x50841C: push    eax; a1
0x50841D: call    Script_ExtractArgs
0x508422: add     esp, 20h
0x508425: test    al, al
0x508427: pop     edi
0x508428: pop     esi
0x508429: pop     ebp
0x50842A: pop     ebx
0x50842B: jnz     short loc_508442
0x50842D: mov     ecx, [esp+208h+var_4]
0x508434: xor     ecx, esp
0x508436: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50843B: add     esp, 208h
0x508441: retn
0x508442: push    1
0x508444: call    GetGlobalScriptStateObj??
0x508449: add     esp, 4
0x50844C: cmp     byte ptr [eax+31h], 0
0x508450: jle     short loc_508470
0x508452: mov     ecx, eax
0x508454: call    sub_5859C0
0x508459: push    0
0x50845B: push    3
0x50845D: push    1; arg1
0x50845F: push    0; canCreate
0x508461: call    InterfaceManager_GetSingleton
0x508466: add     esp, 8
0x508469: mov     ecx, eax
0x50846B: call    sub_57CFE0
0x508470: mov     ecx, ds:0B333C4h; int
0x508476: push    0; int
0x508478: lea     eax, [esp+20Ch+ArgList]
0x50847C: push    eax; ArgList
0x50847D: call    sub_66FD90
0x508482: mov     ecx, [esp+208h+var_4]
0x508489: xor     ecx, esp
0x50848B: mov     al, 1
0x50848D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x508492: add     esp, 208h
0x508498: retn
