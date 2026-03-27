0x8B90C0: push    ebp
0x8B90C1: mov     ebp, esp
0x8B90C3: and     esp, 0FFFFFFF0h
0x8B90C6: sub     esp, 28h
0x8B90C9: mov     eax, ds:0B30AACh
0x8B90CE: xor     eax, esp
0x8B90D0: mov     [esp+28h+var_4], eax
0x8B90D4: push    esi
0x8B90D5: push    edi
0x8B90D6: mov     edi, [ebp+arg_0]
0x8B90D9: mov     esi, ecx
0x8B90DB: mov     eax, [esi]
0x8B90DD: mov     edx, [eax+8Ch]
0x8B90E3: lea     ecx, [edi+30h]
0x8B90E6: push    ecx
0x8B90E7: mov     ecx, esi
0x8B90E9: call    edx
0x8B90EB: mov     eax, [esi]
0x8B90ED: mov     edx, [eax+90h]
0x8B90F3: lea     ecx, [esp+30h+var_20]
0x8B90F7: push    ecx
0x8B90F8: mov     ecx, esi
0x8B90FA: call    edx
0x8B90FC: lea     eax, [esp+30h+var_20]
0x8B9100: push    eax
0x8B9101: mov     ecx, edi
0x8B9103: call    sub_8B1DD0
0x8B9108: mov     ecx, [esp+30h+var_4]
0x8B910C: mov     eax, edi
0x8B910E: pop     edi
0x8B910F: pop     esi
0x8B9110: xor     ecx, esp
0x8B9112: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B9117: mov     esp, ebp
0x8B9119: pop     ebp
0x8B911A: retn    4
