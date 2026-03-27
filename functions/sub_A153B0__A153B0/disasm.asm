0xA153B0: push    ebp
0xA153B1: mov     ebp, esp
0xA153B3: and     esp, 0FFFFFFF0h
0xA153B6: sub     esp, 0C0h
0xA153BC: mov     eax, ___security_cookie
0xA153C1: mov     [esp+0C0h+var_4], eax
0xA153C8: mov     eax, offset off_AA18D0
0xA153CD: mov     [esp+0C0h+var_B0], eax
0xA153D1: mov     ecx, [esp+0C0h+var_B0]
0xA153D5: mov     byte ptr [esp+0C0h+var_B4], al
0xA153D9: mov     byte ptr [esp+0C0h+var_B4+1], ah
0xA153DD: shr     ecx, 18h
0xA153E0: shr     eax, 10h
0xA153E3: mov     byte ptr [esp+0C0h+var_B4+3], cl
0xA153E7: mov     ecx, [esp+0C0h+var_4]
0xA153EE: mov     byte ptr [esp+0C0h+var_B4+2], al
0xA153F2: mov     edx, [esp+0C0h+var_B4]
0xA153F6: mov     dword_B304EC, edx
0xA153FC: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA15401: mov     esp, ebp
0xA15403: pop     ebp
0xA15404: retn
