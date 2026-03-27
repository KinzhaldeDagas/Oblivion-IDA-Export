0xA13810: push    ebp
0xA13811: mov     ebp, esp
0xA13813: and     esp, 0FFFFFFF0h
0xA13816: sub     esp, 0C0h
0xA1381C: mov     eax, ___security_cookie
0xA13821: mov     [esp+0C0h+var_4], eax
0xA13828: mov     eax, offset off_A9CCFC
0xA1382D: mov     [esp+0C0h+var_B0], eax
0xA13831: mov     ecx, [esp+0C0h+var_B0]
0xA13835: mov     byte ptr [esp+0C0h+var_B4], al
0xA13839: mov     byte ptr [esp+0C0h+var_B4+1], ah
0xA1383D: shr     ecx, 18h
0xA13840: shr     eax, 10h
0xA13843: mov     byte ptr [esp+0C0h+var_B4+3], cl
0xA13847: mov     ecx, [esp+0C0h+var_4]
0xA1384E: mov     byte ptr [esp+0C0h+var_B4+2], al
0xA13852: mov     edx, [esp+0C0h+var_B4]
0xA13856: mov     dword_B2FF90, edx
0xA1385C: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA13861: mov     esp, ebp
0xA13863: pop     ebp
0xA13864: retn
