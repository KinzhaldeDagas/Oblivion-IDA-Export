0xA155C0: push    ebp
0xA155C1: mov     ebp, esp
0xA155C3: and     esp, 0FFFFFFF0h
0xA155C6: sub     esp, 0C0h
0xA155CC: mov     eax, ___security_cookie
0xA155D1: mov     [esp+0C0h+var_4], eax
0xA155D8: mov     eax, offset off_AA1990
0xA155DD: mov     [esp+0C0h+var_B0], eax
0xA155E1: mov     ecx, [esp+0C0h+var_B0]
0xA155E5: mov     byte ptr [esp+0C0h+var_B4], al
0xA155E9: mov     byte ptr [esp+0C0h+var_B4+1], ah
0xA155ED: shr     ecx, 18h
0xA155F0: shr     eax, 10h
0xA155F3: mov     byte ptr [esp+0C0h+var_B4+3], cl
0xA155F7: mov     ecx, [esp+0C0h+var_4]
0xA155FE: mov     byte ptr [esp+0C0h+var_B4+2], al
0xA15602: mov     edx, [esp+0C0h+var_B4]
0xA15606: mov     dword_B30534, edx
0xA1560C: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA15611: mov     esp, ebp
0xA15613: pop     ebp
0xA15614: retn
