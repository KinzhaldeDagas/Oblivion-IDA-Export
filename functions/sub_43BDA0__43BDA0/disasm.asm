0x43BDA0: sub     esp, 110h
0x43BDA6: mov     eax, ___security_cookie
0x43BDAB: xor     eax, esp
0x43BDAD: mov     [esp+110h+var_4], eax
0x43BDB4: mov     eax, [esp+110h+arg_0]
0x43BDBB: test    eax, eax
0x43BDBD: mov     [esp+110h+var_110], ecx
0x43BDC0: mov     ecx, [esp+110h+arg_8]
0x43BDC7: push    ebp
0x43BDC8: mov     [esp+114h+var_10C], ecx
0x43BDCC: mov     ebp, eax
0x43BDCE: jz      loc_43BE94
0x43BDD4: push    ebx
0x43BDD5: push    esi
0x43BDD6: push    edi
0x43BDD7: jmp     short loc_43BDE0
0x43BDD9: align 10h
0x43BDE0: mov     ebx, [ebp+0]
0x43BDE3: test    ebx, ebx
0x43BDE5: jz      loc_43BE86
0x43BDEB: mov     ecx, [esp+120h+arg_C]
0x43BDF2: test    ecx, ecx
0x43BDF4: mov     eax, ebx
0x43BDF6: jz      short loc_43BE40
0x43BDF8: lea     edx, [esp+120h+var_108]
0x43BDFC: mov     eax, ecx
0x43BDFE: sub     edx, ecx
0x43BE00: mov     cl, [eax]
0x43BE02: mov     [edx+eax], cl
0x43BE05: add     eax, 1
0x43BE08: test    cl, cl
0x43BE0A: jnz     short loc_43BE00
0x43BE0C: mov     eax, ebx
0x43BE0E: mov     edx, ebx
0x43BE10: mov     cl, [eax]
0x43BE12: add     eax, 1
0x43BE15: test    cl, cl
0x43BE17: jnz     short loc_43BE10
0x43BE19: lea     edi, [esp+120h+var_108]
0x43BE1D: sub     eax, edx
0x43BE1F: add     edi, 0FFFFFFFFh
0x43BE22: mov     cl, [edi+1]
0x43BE25: add     edi, 1
0x43BE28: test    cl, cl
0x43BE2A: jnz     short loc_43BE22
0x43BE2C: mov     ecx, eax
0x43BE2E: shr     ecx, 2
0x43BE31: mov     esi, edx
0x43BE33: rep movsd
0x43BE35: mov     ecx, eax
0x43BE37: and     ecx, 3
0x43BE3A: rep movsb
0x43BE3C: lea     eax, [esp+120h+var_108]
0x43BE40: mov     edx, [esp+120h+var_10C]
0x43BE44: mov     ecx, [esp+120h+arg_4]
0x43BE4B: push    edx
0x43BE4C: push    ecx
0x43BE4D: mov     ecx, [esp+128h+var_110]
0x43BE51: push    eax
0x43BE52: call    sub_43B840
0x43BE57: push    ebx
0x43BE58: call    FormHeapFree
0x43BE5D: mov     eax, [ebp+4]
0x43BE60: add     esp, 4
0x43BE63: test    eax, eax
0x43BE65: jz      short loc_43BE7D
0x43BE67: mov     edx, [eax+4]
0x43BE6A: mov     [ebp+4], edx
0x43BE6D: mov     ecx, [eax]
0x43BE6F: push    eax
0x43BE70: mov     [ebp+0], ecx
0x43BE73: call    FormHeapFree
0x43BE78: add     esp, 4
0x43BE7B: jmp     short loc_43BE89
0x43BE7D: mov     dword ptr [ebp+0], 0
0x43BE84: jmp     short loc_43BE89
0x43BE86: mov     ebp, [ebp+4]
0x43BE89: test    ebp, ebp
0x43BE8B: jnz     loc_43BDE0
0x43BE91: pop     edi
0x43BE92: pop     esi
0x43BE93: pop     ebx
0x43BE94: mov     ecx, [esp+114h+var_4]
0x43BE9B: pop     ebp
0x43BE9C: xor     ecx, esp
0x43BE9E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x43BEA3: add     esp, 110h
0x43BEA9: retn    10h
