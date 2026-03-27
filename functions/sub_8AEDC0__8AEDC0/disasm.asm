0x8AEDC0: push    ebp
0x8AEDC1: mov     ebp, esp
0x8AEDC3: and     esp, 0FFFFFFF0h
0x8AEDC6: sub     esp, 5Ch
0x8AEDC9: mov     eax, ds:0B30AACh
0x8AEDCE: xor     eax, esp
0x8AEDD0: mov     [esp+5Ch+var_4], eax
0x8AEDD4: push    esi
0x8AEDD5: mov     esi, [ebp+arg_0]
0x8AEDD8: lea     eax, [esp+60h+var_50]
0x8AEDDC: push    eax
0x8AEDDD: call    sub_6848D0
0x8AEDE2: lea     ecx, [esp+60h+var_50]
0x8AEDE6: push    ecx
0x8AEDE7: push    esi
0x8AEDE8: call    sub_607740
0x8AEDED: lea     edx, [esp+68h+var_20]
0x8AEDF1: push    edx
0x8AEDF2: add     esi, 24h ; '$'
0x8AEDF5: push    esi
0x8AEDF6: call    sub_43F3E0
0x8AEDFB: mov     ecx, [esp+70h+var_4]
0x8AEDFF: add     esp, 10h
0x8AEE02: pop     esi
0x8AEE03: xor     ecx, esp
0x8AEE05: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8AEE0A: mov     esp, ebp
0x8AEE0C: pop     ebp
0x8AEE0D: retn    4
