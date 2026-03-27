0xA157B0: push    ebp
0xA157B1: mov     ebp, esp
0xA157B3: and     esp, 0FFFFFFF0h
0xA157B6: sub     esp, 50h
0xA157B9: mov     eax, ___security_cookie
0xA157BE: mov     [esp+50h+var_4], eax
0xA157C2: mov     eax, offset off_AA1B38
0xA157C7: mov     [esp+50h+var_40], eax
0xA157CB: mov     ecx, [esp+50h+var_40]
0xA157CF: mov     byte ptr [esp+50h+var_44], al
0xA157D3: mov     byte ptr [esp+50h+var_44+1], ah
0xA157D7: shr     ecx, 18h
0xA157DA: shr     eax, 10h
0xA157DD: mov     byte ptr [esp+50h+var_44+3], cl
0xA157E1: mov     ecx, [esp+50h+var_4]
0xA157E5: mov     byte ptr [esp+50h+var_44+2], al
0xA157E9: mov     edx, [esp+50h+var_44]
0xA157ED: mov     dword_B30570, edx
0xA157F3: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA157F8: mov     esp, ebp
0xA157FA: pop     ebp
0xA157FB: retn
