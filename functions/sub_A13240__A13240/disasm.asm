0xA13240: push    ebp
0xA13241: mov     ebp, esp
0xA13243: and     esp, 0FFFFFFF0h
0xA13246: sub     esp, 90h
0xA1324C: mov     eax, ___security_cookie
0xA13251: mov     [esp+90h+var_4], eax
0xA13258: mov     eax, offset off_A9C324
0xA1325D: mov     [esp+90h+var_80], eax
0xA13261: mov     ecx, [esp+90h+var_80]
0xA13265: mov     byte ptr [esp+90h+var_84], al
0xA13269: mov     byte ptr [esp+90h+var_84+1], ah
0xA1326D: shr     ecx, 18h
0xA13270: shr     eax, 10h
0xA13273: mov     byte ptr [esp+90h+var_84+3], cl
0xA13277: mov     ecx, [esp+90h+var_4]
0xA1327E: mov     byte ptr [esp+90h+var_84+2], al
0xA13282: mov     edx, [esp+90h+var_84]
0xA13286: mov     dword_B2FDF0, edx
0xA1328C: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA13291: mov     esp, ebp
0xA13293: pop     ebp
0xA13294: retn
