0x9274F0: push    ebp
0x9274F1: mov     ebp, esp
0x9274F3: and     esp, 0FFFFFFF0h
0x9274F6: sub     esp, 50h
0x9274F9: mov     eax, ds:0B30AACh
0x9274FE: mov     [esp+50h+var_4], eax
0x927502: xor     eax, eax
0x927504: push    eax
0x927505: lea     ecx, [esp+54h+var_40]
0x927509: call    sub_927430
0x92750E: mov     al, byte ptr [esp+50h+var_40]
0x927512: mov     cl, byte ptr [esp+50h+var_40+1]
0x927516: mov     dl, byte ptr [esp+50h+var_40+2]
0x92751A: mov     byte ptr [esp+50h+var_44], al
0x92751E: mov     al, byte ptr [esp+50h+var_40+3]
0x927522: mov     byte ptr [esp+50h+var_44+1], cl
0x927526: mov     ecx, [esp+50h+var_4]
0x92752A: mov     byte ptr [esp+50h+var_44+2], dl
0x92752E: mov     byte ptr [esp+50h+var_44+3], al
0x927532: mov     eax, [esp+50h+var_44]
0x927536: call    @__security_check_cookie@4; __security_check_cookie(x)
0x92753B: mov     esp, ebp
0x92753D: pop     ebp
0x92753E: retn
