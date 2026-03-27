0x90CA90: push    ebp
0x90CA91: mov     ebp, esp
0x90CA93: and     esp, 0FFFFFFF0h
0x90CA96: sub     esp, 70h
0x90CA99: mov     eax, ds:0B30AACh
0x90CA9E: mov     [esp+70h+var_4], eax
0x90CAA2: xor     eax, eax
0x90CAA4: push    eax
0x90CAA5: lea     ecx, [esp+74h+var_60]
0x90CAA9: call    sub_90C8D0
0x90CAAE: mov     al, byte ptr [esp+70h+var_60]
0x90CAB2: mov     cl, byte ptr [esp+70h+var_60+1]
0x90CAB6: mov     dl, byte ptr [esp+70h+var_60+2]
0x90CABA: mov     byte ptr [esp+70h+var_64], al
0x90CABE: mov     al, byte ptr [esp+70h+var_60+3]
0x90CAC2: mov     byte ptr [esp+70h+var_64+1], cl
0x90CAC6: mov     ecx, [esp+70h+var_4]
0x90CACA: mov     byte ptr [esp+70h+var_64+2], dl
0x90CACE: mov     byte ptr [esp+70h+var_64+3], al
0x90CAD2: mov     eax, [esp+70h+var_64]
0x90CAD6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x90CADB: mov     esp, ebp
0x90CADD: pop     ebp
0x90CADE: retn
