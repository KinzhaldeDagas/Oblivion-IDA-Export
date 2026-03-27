0x8F0BC0: push    ebp
0x8F0BC1: mov     ebp, esp
0x8F0BC3: and     esp, 0FFFFFFF0h
0x8F0BC6: sub     esp, 40h
0x8F0BC9: mov     eax, ds:0B30AACh
0x8F0BCE: mov     [esp+40h+var_4], eax
0x8F0BD2: lea     ecx, [esp+40h+var_30]
0x8F0BD6: call    sub_9156C0
0x8F0BDB: mov     eax, offset off_A9B198
0x8F0BE0: mov     [esp+40h+var_30], eax
0x8F0BE4: mov     ecx, [esp+40h+var_30]
0x8F0BE8: mov     byte ptr [esp+40h+var_34], al
0x8F0BEC: mov     byte ptr [esp+40h+var_34+1], ah
0x8F0BF0: shr     eax, 10h
0x8F0BF3: shr     ecx, 18h
0x8F0BF6: mov     byte ptr [esp+40h+var_34+3], cl
0x8F0BFA: mov     ecx, [esp+40h+var_4]
0x8F0BFE: mov     byte ptr [esp+40h+var_34+2], al
0x8F0C02: mov     eax, [esp+40h+var_34]
0x8F0C06: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8F0C0B: mov     esp, ebp
0x8F0C0D: pop     ebp
0x8F0C0E: retn
