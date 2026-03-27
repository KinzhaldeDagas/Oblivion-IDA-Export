0x915C60: push    ebp
0x915C61: mov     ebp, esp
0x915C63: and     esp, 0FFFFFFF0h
0x915C66: sub     esp, 218h
0x915C6C: mov     eax, ds:0B30AACh
0x915C71: xor     eax, esp
0x915C73: mov     [esp+218h+var_4], eax
0x915C7A: push    esi
0x915C7B: mov     esi, [ebp+arg_0]
0x915C7E: push    edi
0x915C7F: mov     edi, ecx
0x915C81: mov     ecx, [edi+28h]
0x915C84: add     esi, 1
0x915C87: mov     eax, esi
0x915C89: shr     eax, 14h
0x915C8C: mov     edx, [ecx+eax*8]
0x915C8F: movzx   ecx, word ptr [edx+40h]
0x915C93: mov     edx, esi
0x915C95: and     edx, 0FFFFFh
0x915C9B: cmp     edx, ecx
0x915C9D: jl      short loc_915CA5
0x915C9F: lea     esi, [eax+1]
0x915CA2: shl     esi, 14h
0x915CA5: mov     eax, esi
0x915CA7: shr     eax, 14h
0x915CAA: cmp     eax, [edi+30h]
0x915CAD: jge     short loc_915CDA
0x915CAF: mov     edx, [edi]
0x915CB1: mov     edx, [edx+28h]
0x915CB4: lea     eax, [esp+220h+var_210]
0x915CB8: push    eax
0x915CB9: push    esi
0x915CBA: mov     ecx, edi
0x915CBC: call    edx
0x915CBE: test    eax, eax
0x915CC0: jz      short loc_915C81
0x915CC2: mov     eax, esi
0x915CC4: pop     edi
0x915CC5: pop     esi
0x915CC6: mov     ecx, [esp+218h+var_4]
0x915CCD: xor     ecx, esp
0x915CCF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x915CD4: mov     esp, ebp
0x915CD6: pop     ebp
0x915CD7: retn    4
0x915CDA: mov     ecx, [esp+220h+var_4]
0x915CE1: pop     edi
0x915CE2: pop     esi
0x915CE3: xor     ecx, esp
0x915CE5: or      eax, 0FFFFFFFFh
0x915CE8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x915CED: mov     esp, ebp
0x915CEF: pop     ebp
0x915CF0: retn    4
