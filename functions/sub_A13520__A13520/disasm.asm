0xA13520: push    ebp
0xA13521: mov     ebp, esp
0xA13523: and     esp, 0FFFFFFF0h
0xA13526: sub     esp, 80h
0xA1352C: mov     eax, ___security_cookie
0xA13531: mov     [esp+80h+var_4], eax
0xA13535: mov     eax, offset off_A9CB30
0xA1353A: mov     [esp+80h+var_70], eax
0xA1353E: mov     ecx, [esp+80h+var_70]
0xA13542: mov     byte ptr [esp+80h+var_74], al
0xA13546: mov     byte ptr [esp+80h+var_74+1], ah
0xA1354A: shr     ecx, 18h
0xA1354D: shr     eax, 10h
0xA13550: mov     byte ptr [esp+80h+var_74+3], cl
0xA13554: mov     ecx, [esp+80h+var_4]
0xA13558: mov     byte ptr [esp+80h+var_74+2], al
0xA1355C: mov     edx, [esp+80h+var_74]
0xA13560: mov     dword_B2FF30, edx
0xA13566: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA1356B: mov     esp, ebp
0xA1356D: pop     ebp
0xA1356E: retn
