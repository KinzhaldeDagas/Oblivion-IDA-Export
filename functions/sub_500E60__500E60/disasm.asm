0x500E60: sub     esp, 208h
0x500E66: mov     eax, ds:0B30AACh
0x500E6B: xor     eax, esp
0x500E6D: mov     [esp+208h+var_4], eax
0x500E74: mov     edx, [esp+208h+a4]
0x500E7B: mov     ecx, [esp+208h+arg_4]
0x500E82: mov     eax, [esp+208h+a1]
0x500E89: push    ebx
0x500E8A: mov     ebx, [esp+20Ch+l]
0x500E91: push    ebp
0x500E92: mov     ebp, [esp+210h+arg_1C]
0x500E99: push    esi
0x500E9A: mov     esi, [esp+214h+arg_C]
0x500EA1: push    edi
0x500EA2: mov     edi, [esp+218h+arg_10]
0x500EA9: mov     [esp+218h+a3], ebp
0x500EAD: lea     ebp, [esp+218h+var_204]
0x500EB1: push    ebp; UInt16
0x500EB2: push    ebx; l
0x500EB3: push    edi; a6
0x500EB4: push    esi; a5
0x500EB5: push    edx; a4
0x500EB6: mov     edx, [esp+22Ch+a3]
0x500EBA: push    edx; a3
0x500EBB: push    ecx; a2
0x500EBC: push    eax; a1
0x500EBD: call    Script_ExtractArgs
0x500EC2: add     esp, 20h
0x500EC5: test    al, al
0x500EC7: pop     edi
0x500EC8: pop     esi
0x500EC9: pop     ebp
0x500ECA: pop     ebx
0x500ECB: jnz     short loc_500EE2
0x500ECD: mov     ecx, [esp+208h+var_4]
0x500ED4: xor     ecx, esp
0x500ED6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x500EDB: add     esp, 208h
0x500EE1: retn
0x500EE2: mov     ecx, ds:0B333A0h
0x500EE8: lea     eax, [esp+208h+var_204]
0x500EEC: push    eax
0x500EED: call    sub_444740
0x500EF2: mov     ecx, [esp+208h+var_4]
0x500EF9: xor     ecx, esp
0x500EFB: mov     al, 1
0x500EFD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x500F02: add     esp, 208h
0x500F08: retn
