0xA12D70: push    ebp
0xA12D71: mov     ebp, esp
0xA12D73: and     esp, 0FFFFFFF0h
0xA12D76: sub     esp, 110h
0xA12D7C: mov     eax, ___security_cookie
0xA12D81: mov     [esp+110h+var_4], eax
0xA12D88: mov     eax, offset off_A979A8
0xA12D8D: mov     [esp+110h+var_100], eax
0xA12D91: mov     ecx, [esp+110h+var_100]
0xA12D95: mov     byte ptr [esp+110h+var_104], al
0xA12D99: mov     byte ptr [esp+110h+var_104+1], ah
0xA12D9D: shr     ecx, 18h
0xA12DA0: shr     eax, 10h
0xA12DA3: mov     byte ptr [esp+110h+var_104+3], cl
0xA12DA7: mov     ecx, [esp+110h+var_4]
0xA12DAE: mov     byte ptr [esp+110h+var_104+2], al
0xA12DB2: mov     edx, [esp+110h+var_104]
0xA12DB6: mov     dword_B2FD44, edx
0xA12DBC: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA12DC1: mov     esp, ebp
0xA12DC3: pop     ebp
0xA12DC4: retn
