0x52A960: push    ebp
0x52A961: mov     ebp, esp
0x52A963: push    ecx
0x52A964: mov     eax, ds:0B30AACh
0x52A969: xor     eax, ebp
0x52A96B: mov     [ebp+var_4], eax
0x52A96E: push    ebx
0x52A96F: push    esi
0x52A970: push    edi
0x52A971: mov     edi, [ebp+arg_0]
0x52A974: mov     eax, edi
0x52A976: mov     ebx, ecx
0x52A978: lea     edx, [eax+1]
0x52A97B: jmp     short loc_52A980
0x52A97D: align 10h
0x52A980: mov     cl, [eax]
0x52A982: add     eax, 1
0x52A985: test    cl, cl
0x52A987: jnz     short loc_52A980
0x52A989: sub     eax, edx
0x52A98B: add     eax, 1
0x52A98E: call    __alloca?
0x52A993: mov     esi, esp
0x52A995: mov     edx, esi
0x52A997: mov     eax, edi
0x52A999: sub     edx, edi
0x52A99B: jmp     short loc_52A9A0
0x52A99D: align 10h
0x52A9A0: mov     cl, [eax]
0x52A9A2: mov     [edx+eax], cl
0x52A9A5: add     eax, 1
0x52A9A8: test    cl, cl
0x52A9AA: jnz     short loc_52A9A0
0x52A9AC: test    esi, esi
0x52A9AE: lea     edi, [ebx+60h]
0x52A9B1: jz      short loc_52A9C5
0x52A9B3: mov     eax, [edi]
0x52A9B5: test    eax, eax
0x52A9B7: jz      short loc_52A9C5
0x52A9B9: push    esi; Str2
0x52A9BA: push    eax; Str1
0x52A9BB: call    __strcmp
0x52A9C0: add     esp, 8
0x52A9C3: jmp     short loc_52A9D0
0x52A9C5: xor     eax, eax
0x52A9C7: test    esi, esi
0x52A9C9: setz    al
0x52A9CC: lea     eax, [eax+eax-1]
0x52A9D0: test    eax, eax
0x52A9D2: jnz     short loc_52A9D8
0x52A9D4: xor     al, al
0x52A9D6: jmp     short loc_52A9E4
0x52A9D8: push    0; a3
0x52A9DA: push    esi; a2
0x52A9DB: mov     ecx, edi; this
0x52A9DD: call    BSStringT_Set
0x52A9E2: mov     al, 1
0x52A9E4: lea     esp, [ebp-10h]
0x52A9E7: pop     edi
0x52A9E8: pop     esi
0x52A9E9: pop     ebx
0x52A9EA: mov     ecx, [ebp+var_4]
0x52A9ED: xor     ecx, ebp
0x52A9EF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x52A9F4: mov     esp, ebp
0x52A9F6: pop     ebp
0x52A9F7: retn    4
