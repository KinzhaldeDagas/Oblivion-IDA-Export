0x8AEE10: push    ebp
0x8AEE11: mov     ebp, esp
0x8AEE13: and     esp, 0FFFFFFF0h
0x8AEE16: sub     esp, 58h
0x8AEE19: mov     eax, ds:0B30AACh
0x8AEE1E: xor     eax, esp
0x8AEE20: mov     [esp+58h+var_4], eax
0x8AEE24: push    esi
0x8AEE25: push    edi
0x8AEE26: mov     edi, [ebp+arg_0]
0x8AEE29: push    edi
0x8AEE2A: mov     esi, ecx
0x8AEE2C: call    sub_89F580
0x8AEE31: lea     eax, [esp+60h+var_50]
0x8AEE35: push    eax
0x8AEE36: mov     ecx, esi
0x8AEE38: call    sub_6848D0
0x8AEE3D: lea     ecx, [esp+60h+var_50]
0x8AEE41: lea     esi, [edi+20h]
0x8AEE44: push    ecx
0x8AEE45: mov     ecx, esi
0x8AEE47: call    sub_47DCD0
0x8AEE4C: lea     edx, [esp+60h+var_40]
0x8AEE50: push    edx
0x8AEE51: lea     ecx, [esi+10h]
0x8AEE54: call    sub_47DCD0
0x8AEE59: lea     eax, [esp+60h+var_30]
0x8AEE5D: push    eax
0x8AEE5E: lea     ecx, [esi+20h]
0x8AEE61: call    sub_47DCD0
0x8AEE66: lea     ecx, [esp+60h+var_20]
0x8AEE6A: push    ecx
0x8AEE6B: lea     ecx, [esi+30h]
0x8AEE6E: call    sub_47DCD0
0x8AEE73: mov     ecx, [esp+60h+var_4]
0x8AEE77: pop     edi
0x8AEE78: pop     esi
0x8AEE79: xor     ecx, esp
0x8AEE7B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8AEE80: mov     esp, ebp
0x8AEE82: pop     ebp
0x8AEE83: retn    4
