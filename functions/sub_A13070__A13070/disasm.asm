0xA13070: push    ebp
0xA13071: mov     ebp, esp
0xA13073: and     esp, 0FFFFFFF0h
0xA13076: sub     esp, 30h
0xA13079: mov     eax, ___security_cookie
0xA1307E: mov     [esp+30h+var_4], eax
0xA13082: mov     eax, offset off_A9B078
0xA13087: mov     [esp+30h+var_20], eax
0xA1308B: mov     ecx, [esp+30h+var_20]
0xA1308F: mov     byte ptr [esp+30h+var_24], al
0xA13093: mov     byte ptr [esp+30h+var_24+1], ah
0xA13097: shr     ecx, 18h
0xA1309A: shr     eax, 10h
0xA1309D: mov     byte ptr [esp+30h+var_24+3], cl
0xA130A1: mov     ecx, [esp+30h+var_4]
0xA130A5: mov     byte ptr [esp+30h+var_24+2], al
0xA130A9: mov     edx, [esp+30h+var_24]
0xA130AD: mov     dword_B2FDAC, edx
0xA130B3: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA130B8: mov     esp, ebp
0xA130BA: pop     ebp
0xA130BB: retn
