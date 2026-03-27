0xA15340: push    ebp
0xA15341: mov     ebp, esp
0xA15343: and     esp, 0FFFFFFF0h
0xA15346: sub     esp, 70h
0xA15349: mov     eax, ___security_cookie
0xA1534E: mov     [esp+70h+var_4], eax
0xA15352: mov     eax, offset off_AA1858
0xA15357: mov     [esp+70h+var_60], eax
0xA1535B: mov     ecx, [esp+70h+var_60]
0xA1535F: mov     byte ptr [esp+70h+var_64], al
0xA15363: mov     byte ptr [esp+70h+var_64+1], ah
0xA15367: shr     ecx, 18h
0xA1536A: shr     eax, 10h
0xA1536D: mov     byte ptr [esp+70h+var_64+3], cl
0xA15371: mov     ecx, [esp+70h+var_4]
0xA15375: mov     byte ptr [esp+70h+var_64+2], al
0xA15379: mov     edx, [esp+70h+var_64]
0xA1537D: mov     dword_B304E0, edx
0xA15383: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA15388: mov     esp, ebp
0xA1538A: pop     ebp
0xA1538B: retn
