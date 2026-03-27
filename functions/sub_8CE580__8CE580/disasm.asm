0x8CE580: push    ebp
0x8CE581: mov     ebp, esp
0x8CE583: and     esp, 0FFFFFFF0h
0x8CE586: sub     esp, 214h
0x8CE58C: mov     eax, ds:0B30AACh
0x8CE591: xor     eax, esp
0x8CE593: mov     [esp+214h+var_4], eax
0x8CE59A: mov     eax, [ebp+arg_0]
0x8CE59D: push    ebx
0x8CE59E: push    esi
0x8CE59F: push    edi
0x8CE5A0: push    eax
0x8CE5A1: mov     edi, ecx
0x8CE5A3: mov     [esp+224h+var_214], eax
0x8CE5A7: call    sub_8A2760
0x8CE5AC: mov     bl, al
0x8CE5AE: test    bl, bl
0x8CE5B0: jz      short loc_8CE626
0x8CE5B2: test    edi, edi
0x8CE5B4: jz      short loc_8CE5BB
0x8CE5B6: mov     ecx, [edi+8]
0x8CE5B9: jmp     short loc_8CE5BD
0x8CE5BB: xor     ecx, ecx
0x8CE5BD: mov     eax, [ecx]
0x8CE5BF: mov     edx, [eax+20h]
0x8CE5C2: call    edx
0x8CE5C4: mov     esi, eax
0x8CE5C6: cmp     esi, 0FFFFFFFFh
0x8CE5C9: jz      short loc_8CE626
0x8CE5CB: jmp     short loc_8CE5D0
0x8CE5CD: align 10h
0x8CE5D0: test    bl, bl
0x8CE5D2: jz      short loc_8CE626
0x8CE5D4: test    edi, edi
0x8CE5D6: jz      short loc_8CE5F5
0x8CE5D8: mov     ecx, [edi+8]
0x8CE5DB: test    ecx, ecx
0x8CE5DD: jz      short loc_8CE5F5
0x8CE5DF: mov     eax, [ecx]
0x8CE5E1: mov     eax, [eax+28h]
0x8CE5E4: lea     edx, [esp+220h+var_210]
0x8CE5E8: push    edx
0x8CE5E9: push    esi
0x8CE5EA: call    eax
0x8CE5EC: test    eax, eax
0x8CE5EE: jz      short loc_8CE5F5
0x8CE5F0: mov     ecx, [eax+8]
0x8CE5F3: jmp     short loc_8CE5F7
0x8CE5F5: xor     ecx, ecx
0x8CE5F7: test    ecx, ecx
0x8CE5F9: jz      short loc_8CE60C
0x8CE5FB: mov     edx, [ecx]
0x8CE5FD: mov     eax, [esp+220h+var_214]
0x8CE601: mov     edx, [edx+8Ch]
0x8CE607: push    eax
0x8CE608: call    edx
0x8CE60A: mov     bl, al
0x8CE60C: test    edi, edi
0x8CE60E: jz      short loc_8CE615
0x8CE610: mov     ecx, [edi+8]
0x8CE613: jmp     short loc_8CE617
0x8CE615: xor     ecx, ecx
0x8CE617: mov     eax, [ecx]
0x8CE619: mov     edx, [eax+24h]
0x8CE61C: push    esi
0x8CE61D: call    edx
0x8CE61F: mov     esi, eax
0x8CE621: cmp     esi, 0FFFFFFFFh
0x8CE624: jnz     short loc_8CE5D0
0x8CE626: mov     ecx, [esp+220h+var_4]
0x8CE62D: pop     edi
0x8CE62E: pop     esi
0x8CE62F: mov     al, bl
0x8CE631: pop     ebx
0x8CE632: xor     ecx, esp
0x8CE634: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8CE639: mov     esp, ebp
0x8CE63B: pop     ebp
0x8CE63C: retn    4
