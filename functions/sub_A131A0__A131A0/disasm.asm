0xA131A0: push    ebp
0xA131A1: mov     ebp, esp
0xA131A3: and     esp, 0FFFFFFF0h
0xA131A6: sub     esp, 0B0h
0xA131AC: mov     eax, ___security_cookie
0xA131B1: mov     [esp+0B0h+var_4], eax
0xA131B8: mov     eax, offset off_A9B328
0xA131BD: mov     [esp+0B0h+var_A0], eax
0xA131C1: mov     ecx, [esp+0B0h+var_A0]
0xA131C5: mov     byte ptr [esp+0B0h+var_A4], al
0xA131C9: mov     byte ptr [esp+0B0h+var_A4+1], ah
0xA131CD: shr     ecx, 18h
0xA131D0: shr     eax, 10h
0xA131D3: mov     byte ptr [esp+0B0h+var_A4+3], cl
0xA131D7: mov     ecx, [esp+0B0h+var_4]
0xA131DE: mov     byte ptr [esp+0B0h+var_A4+2], al
0xA131E2: mov     edx, [esp+0B0h+var_A4]
0xA131E6: mov     dword_B2FDDC, edx
0xA131EC: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA131F1: mov     esp, ebp
0xA131F3: pop     ebp
0xA131F4: retn
