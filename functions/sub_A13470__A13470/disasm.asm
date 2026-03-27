0xA13470: push    ebp
0xA13471: mov     ebp, esp
0xA13473: and     esp, 0FFFFFFF0h
0xA13476: sub     esp, 40h
0xA13479: mov     eax, ___security_cookie
0xA1347E: mov     [esp+40h+var_4], eax
0xA13482: mov     eax, offset off_A9CAA8
0xA13487: mov     [esp+40h+var_30], eax
0xA1348B: mov     ecx, [esp+40h+var_30]
0xA1348F: mov     byte ptr [esp+40h+var_34], al
0xA13493: mov     byte ptr [esp+40h+var_34+1], ah
0xA13497: shr     ecx, 18h
0xA1349A: shr     eax, 10h
0xA1349D: mov     byte ptr [esp+40h+var_34+3], cl
0xA134A1: mov     ecx, [esp+40h+var_4]
0xA134A5: mov     byte ptr [esp+40h+var_34+2], al
0xA134A9: mov     edx, [esp+40h+var_34]
0xA134AD: mov     dword_B2FF18, edx
0xA134B3: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA134B8: mov     esp, ebp
0xA134BA: pop     ebp
0xA134BB: retn
