0x8AFD70: push    ebp
0x8AFD71: mov     ebp, esp
0x8AFD73: and     esp, 0FFFFFFF0h
0x8AFD76: sub     esp, 40h
0x8AFD79: mov     eax, ds:0B30AACh
0x8AFD7E: xor     eax, esp
0x8AFD80: mov     [esp+40h+var_4], eax
0x8AFD84: mov     edx, [ebp+arg_8]
0x8AFD87: mov     ecx, [ebp+arg_4]
0x8AFD8A: mov     eax, [ebp+arg_0]
0x8AFD8D: push    edx
0x8AFD8E: lea     edx, [esp+44h+var_40]
0x8AFD92: push    edx
0x8AFD93: push    ecx
0x8AFD94: push    eax
0x8AFD95: mov     [esp+50h+var_40], 0
0x8AFD9D: call    sub_8AF8C0
0x8AFDA2: mov     ecx, [esp+50h+var_4]
0x8AFDA6: mov     eax, [esp+50h+var_40]
0x8AFDAA: add     esp, 10h
0x8AFDAD: xor     ecx, esp
0x8AFDAF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8AFDB4: mov     esp, ebp
0x8AFDB6: pop     ebp
0x8AFDB7: retn
