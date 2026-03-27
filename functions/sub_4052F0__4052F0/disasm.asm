0x4052F0: sub     esp, 204h
0x4052F6: mov     eax, ___security_cookie
0x4052FB: xor     eax, esp
0x4052FD: mov     [esp+204h+var_4], eax
0x405304: mov     eax, ecx
0x405306: mov     ecx, [eax+0Ch]
0x405309: mov     edx, [eax+8]
0x40530C: push    ecx
0x40530D: push    edx
0x40530E: call    CreateWindowAndInitialize
0x405313: add     esp, 8
0x405316: test    eax, eax
0x405318: jnz     short loc_40534D
0x40531A: push    offset byte_B34FC8
0x40531F: lea     eax, [esp+208h+Text]
0x405323: push    offset aFailedToInit_0; "Failed to initialize renderer.\n%s"
0x405328: push    eax
0x405329: call    __sprintf
0x40532E: add     esp, 0Ch
0x405331: push    0; uType
0x405333: push    offset Caption; "Oblivion"
0x405338: lea     ecx, [esp+20Ch+Text]
0x40533C: push    ecx; lpText
0x40533D: push    0; hWnd
0x40533F: call    ds:MessageBoxA
0x405345: push    0; uExitCode
0x405347: call    ds:ExitProcess
0x40534D: mov     ecx, [esp+204h+var_4]
0x405354: xor     ecx, esp
0x405356: call    @__security_check_cookie@4; __security_check_cookie(x)
0x40535B: add     esp, 204h
0x405361: retn
