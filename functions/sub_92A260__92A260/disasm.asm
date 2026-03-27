0x92A260: push    ebp
0x92A261: mov     ebp, esp
0x92A263: and     esp, 0FFFFFFF0h
0x92A266: sub     esp, 60h
0x92A269: mov     eax, ds:0B30AACh
0x92A26E: mov     [esp+60h+var_4], eax
0x92A272: xor     eax, eax
0x92A274: push    eax
0x92A275: lea     ecx, [esp+64h+var_50]
0x92A279: call    sub_929DD0
0x92A27E: mov     al, byte ptr [esp+60h+var_50]
0x92A282: mov     cl, byte ptr [esp+60h+var_50+1]
0x92A286: mov     dl, byte ptr [esp+60h+var_50+2]
0x92A28A: mov     byte ptr [esp+60h+var_54], al
0x92A28E: mov     al, byte ptr [esp+60h+var_50+3]
0x92A292: mov     byte ptr [esp+60h+var_54+1], cl
0x92A296: mov     ecx, [esp+60h+var_4]
0x92A29A: mov     byte ptr [esp+60h+var_54+2], dl
0x92A29E: mov     byte ptr [esp+60h+var_54+3], al
0x92A2A2: mov     eax, [esp+60h+var_54]
0x92A2A6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x92A2AB: mov     esp, ebp
0x92A2AD: pop     ebp
0x92A2AE: retn
