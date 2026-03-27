0xA139A0: push    ebp
0xA139A1: mov     ebp, esp
0xA139A3: and     esp, 0FFFFFFF0h
0xA139A6: sub     esp, 40h
0xA139A9: mov     eax, ___security_cookie
0xA139AE: mov     [esp+40h+var_4], eax
0xA139B2: mov     eax, offset off_A9CE84
0xA139B7: mov     [esp+40h+var_30], eax
0xA139BB: mov     ecx, [esp+40h+var_30]
0xA139BF: mov     byte ptr [esp+40h+var_34], al
0xA139C3: mov     byte ptr [esp+40h+var_34+1], ah
0xA139C7: shr     ecx, 18h
0xA139CA: shr     eax, 10h
0xA139CD: mov     byte ptr [esp+40h+var_34+3], cl
0xA139D1: mov     ecx, [esp+40h+var_4]
0xA139D5: mov     byte ptr [esp+40h+var_34+2], al
0xA139D9: mov     edx, [esp+40h+var_34]
0xA139DD: mov     dword_B2FFE0, edx
0xA139E3: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA139E8: mov     esp, ebp
0xA139EA: pop     ebp
0xA139EB: retn
