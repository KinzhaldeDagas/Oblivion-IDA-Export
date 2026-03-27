0x92AA90: push    ebp
0x92AA91: mov     ebp, esp
0x92AA93: and     esp, 0FFFFFFF0h
0x92AA96: sub     esp, 40h
0x92AA99: mov     eax, ds:0B30AACh
0x92AA9E: mov     [esp+40h+var_4], eax
0x92AAA2: lea     ecx, [esp+40h+var_30]
0x92AAA6: call    sub_9156C0
0x92AAAB: mov     eax, offset off_AA1B70
0x92AAB0: mov     [esp+40h+var_30], eax
0x92AAB4: mov     ecx, [esp+40h+var_30]
0x92AAB8: mov     byte ptr [esp+40h+var_34], al
0x92AABC: mov     byte ptr [esp+40h+var_34+1], ah
0x92AAC0: shr     eax, 10h
0x92AAC3: shr     ecx, 18h
0x92AAC6: mov     byte ptr [esp+40h+var_34+3], cl
0x92AACA: mov     ecx, [esp+40h+var_4]
0x92AACE: mov     byte ptr [esp+40h+var_34+2], al
0x92AAD2: mov     eax, [esp+40h+var_34]
0x92AAD6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x92AADB: mov     esp, ebp
0x92AADD: pop     ebp
0x92AADE: retn
