0xA12DD0: push    ebp
0xA12DD1: mov     ebp, esp
0xA12DD3: and     esp, 0FFFFFFF0h
0xA12DD6: sub     esp, 110h
0xA12DDC: mov     eax, ___security_cookie
0xA12DE1: mov     [esp+110h+var_4], eax
0xA12DE8: mov     eax, offset off_A97A20
0xA12DED: mov     [esp+110h+var_100], eax
0xA12DF1: mov     ecx, [esp+110h+var_100]
0xA12DF5: mov     byte ptr [esp+110h+var_104], al
0xA12DF9: mov     byte ptr [esp+110h+var_104+1], ah
0xA12DFD: shr     ecx, 18h
0xA12E00: shr     eax, 10h
0xA12E03: mov     byte ptr [esp+110h+var_104+3], cl
0xA12E07: mov     ecx, [esp+110h+var_4]
0xA12E0E: mov     byte ptr [esp+110h+var_104+2], al
0xA12E12: mov     edx, [esp+110h+var_104]
0xA12E16: mov     dword_B2FD50, edx
0xA12E1C: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA12E21: mov     esp, ebp
0xA12E23: pop     ebp
0xA12E24: retn
