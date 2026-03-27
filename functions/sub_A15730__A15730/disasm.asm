0xA15730: push    ebp
0xA15731: mov     ebp, esp
0xA15733: and     esp, 0FFFFFFF0h
0xA15736: sub     esp, 0C0h
0xA1573C: mov     eax, ___security_cookie
0xA15741: mov     [esp+0C0h+var_4], eax
0xA15748: mov     eax, offset off_AA1AE8
0xA1574D: mov     [esp+0C0h+var_B0], eax
0xA15751: mov     ecx, [esp+0C0h+var_B0]
0xA15755: mov     byte ptr [esp+0C0h+var_B4], al
0xA15759: mov     byte ptr [esp+0C0h+var_B4+1], ah
0xA1575D: shr     ecx, 18h
0xA15760: shr     eax, 10h
0xA15763: mov     byte ptr [esp+0C0h+var_B4+3], cl
0xA15767: mov     ecx, [esp+0C0h+var_4]
0xA1576E: mov     byte ptr [esp+0C0h+var_B4+2], al
0xA15772: mov     edx, [esp+0C0h+var_B4]
0xA15776: mov     dword_B30564, edx
0xA1577C: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA15781: mov     esp, ebp
0xA15783: pop     ebp
0xA15784: retn
