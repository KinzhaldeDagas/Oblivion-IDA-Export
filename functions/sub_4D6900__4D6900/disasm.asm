0x4D6900: push    ebp
0x4D6901: mov     ebp, esp
0x4D6903: and     esp, 0FFFFFFF0h
0x4D6906: sub     esp, 2Ch
0x4D6909: mov     eax, ds:0B30AACh
0x4D690E: xor     eax, esp
0x4D6910: mov     [esp+2Ch+var_4], eax
0x4D6914: mov     eax, [ecx]
0x4D6916: mov     eax, [eax+8Ch]
0x4D691C: push    esi
0x4D691D: mov     esi, [ebp+arg_0]
0x4D6920: lea     edx, [esp+30h+var_20]
0x4D6924: push    edx
0x4D6925: call    eax
0x4D6927: push    eax
0x4D6928: push    esi
0x4D6929: call    sub_43F3E0
0x4D692E: mov     ecx, [esp+38h+var_4]
0x4D6932: add     esp, 8
0x4D6935: pop     esi
0x4D6936: xor     ecx, esp
0x4D6938: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4D693D: mov     esp, ebp
0x4D693F: pop     ebp
0x4D6940: retn    4
