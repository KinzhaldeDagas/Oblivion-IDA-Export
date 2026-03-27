0x927C20: push    ebp
0x927C21: mov     ebp, esp
0x927C23: and     esp, 0FFFFFFF0h
0x927C26: sub     esp, 50h
0x927C29: mov     eax, ds:0B30AACh
0x927C2E: mov     [esp+50h+var_4], eax
0x927C32: xor     eax, eax
0x927C34: push    eax
0x927C35: lea     ecx, [esp+54h+var_40]
0x927C39: call    sub_927B60
0x927C3E: mov     al, byte ptr [esp+50h+var_40]
0x927C42: mov     cl, byte ptr [esp+50h+var_40+1]
0x927C46: mov     dl, byte ptr [esp+50h+var_40+2]
0x927C4A: mov     byte ptr [esp+50h+var_44], al
0x927C4E: mov     al, byte ptr [esp+50h+var_40+3]
0x927C52: mov     byte ptr [esp+50h+var_44+1], cl
0x927C56: mov     ecx, [esp+50h+var_4]
0x927C5A: mov     byte ptr [esp+50h+var_44+2], dl
0x927C5E: mov     byte ptr [esp+50h+var_44+3], al
0x927C62: mov     eax, [esp+50h+var_44]
0x927C66: call    @__security_check_cookie@4; __security_check_cookie(x)
0x927C6B: mov     esp, ebp
0x927C6D: pop     ebp
0x927C6E: retn
