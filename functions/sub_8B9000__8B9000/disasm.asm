0x8B9000: push    ebp
0x8B9001: mov     ebp, esp
0x8B9003: and     esp, 0FFFFFFF0h
0x8B9006: sub     esp, 2Ch
0x8B9009: mov     eax, ds:0B30AACh
0x8B900E: xor     eax, esp
0x8B9010: mov     [esp+2Ch+var_4], eax
0x8B9014: mov     eax, [ebp+arg_0]
0x8B9017: push    esi
0x8B9018: mov     esi, ecx
0x8B901A: lea     ecx, [esi+20h]
0x8B901D: push    ecx
0x8B901E: push    eax
0x8B901F: lea     ecx, [esp+38h+var_20]
0x8B9023: call    sub_889470
0x8B9028: lea     edx, [esp+30h+var_20]
0x8B902C: push    edx
0x8B902D: mov     ecx, esi
0x8B902F: call    sub_8A2F80
0x8B9034: mov     ecx, [esp+30h+var_4]
0x8B9038: pop     esi
0x8B9039: xor     ecx, esp
0x8B903B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B9040: mov     esp, ebp
0x8B9042: pop     ebp
0x8B9043: retn    4
