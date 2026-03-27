0x8AA2F0: push    ebp
0x8AA2F1: mov     ebp, esp
0x8AA2F3: and     esp, 0FFFFFFF0h
0x8AA2F6: sub     esp, 0F0h
0x8AA2FC: mov     eax, ds:0B30AACh
0x8AA301: mov     [esp+0F0h+var_4], eax
0x8AA308: xor     eax, eax
0x8AA30A: push    eax
0x8AA30B: lea     ecx, [esp+0F4h+var_E0]
0x8AA30F: call    sub_8A6740
0x8AA314: mov     eax, offset off_A97A98
0x8AA319: mov     [esp+0F0h+var_E0], eax
0x8AA31D: mov     ecx, [esp+0F0h+var_E0]
0x8AA321: mov     byte ptr [esp+0F0h+var_E4], al
0x8AA325: mov     byte ptr [esp+0F0h+var_E4+1], ah
0x8AA329: shr     eax, 10h
0x8AA32C: shr     ecx, 18h
0x8AA32F: mov     byte ptr [esp+0F0h+var_E4+3], cl
0x8AA333: mov     ecx, [esp+0F0h+var_4]
0x8AA33A: mov     byte ptr [esp+0F0h+var_E4+2], al
0x8AA33E: mov     eax, [esp+0F0h+var_E4]
0x8AA342: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8AA347: mov     esp, ebp
0x8AA349: pop     ebp
0x8AA34A: retn
