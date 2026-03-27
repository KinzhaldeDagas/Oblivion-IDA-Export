0x92A650: push    ebp
0x92A651: mov     ebp, esp
0x92A653: and     esp, 0FFFFFFF0h
0x92A656: sub     esp, 60h
0x92A659: mov     eax, ds:0B30AACh
0x92A65E: mov     [esp+60h+var_4], eax
0x92A662: xor     eax, eax
0x92A664: push    eax
0x92A665: lea     ecx, [esp+64h+var_50]
0x92A669: call    sub_929DD0
0x92A66E: mov     eax, offset off_AA1AF4
0x92A673: mov     [esp+60h+var_50], eax
0x92A677: mov     ecx, [esp+60h+var_50]
0x92A67B: mov     byte ptr [esp+60h+var_54], al
0x92A67F: mov     byte ptr [esp+60h+var_54+1], ah
0x92A683: shr     eax, 10h
0x92A686: shr     ecx, 18h
0x92A689: mov     byte ptr [esp+60h+var_54+3], cl
0x92A68D: mov     ecx, [esp+60h+var_4]
0x92A691: mov     byte ptr [esp+60h+var_54+2], al
0x92A695: mov     eax, [esp+60h+var_54]
0x92A699: call    @__security_check_cookie@4; __security_check_cookie(x)
0x92A69E: mov     esp, ebp
0x92A6A0: pop     ebp
0x92A6A1: retn
