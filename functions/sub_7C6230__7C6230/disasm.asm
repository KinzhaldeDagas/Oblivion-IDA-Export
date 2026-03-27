0x7C6230: sub     esp, 8
0x7C6233: push    ebx
0x7C6234: push    ebp
0x7C6235: xor     ebx, ebx
0x7C6237: push    esi
0x7C6238: push    edi
0x7C6239: mov     [esp+18h+var_4], ebx
0x7C623D: mov     edi, [ecx+0E8h]
0x7C6243: test    edi, edi
0x7C6245: jz      short loc_7C62AB
0x7C6247: mov     ebp, [edi+8]
0x7C624A: test    ebp, ebp
0x7C624C: lea     eax, [edi+8]
0x7C624F: mov     edi, [edi]
0x7C6251: jz      short loc_7C626F
0x7C6253: lea     eax, [esp+18h+var_4]
0x7C6257: push    eax
0x7C6258: mov     ecx, ebp
0x7C625A: call    sub_405AD0
0x7C625F: mov     ecx, [esp+18h+arg_0]
0x7C6263: or      ebx, 1
0x7C6266: cmp     [eax], ecx
0x7C6268: mov     [esp+18h+var_5], 1
0x7C626D: jz      short loc_7C6274
0x7C626F: mov     [esp+18h+var_5], 0
0x7C6274: test    bl, 1
0x7C6277: jz      short loc_7C62A0
0x7C6279: mov     esi, [esp+18h+var_4]
0x7C627D: and     ebx, 0FFFFFFFEh
0x7C6280: test    esi, esi
0x7C6282: jz      short loc_7C62A0
0x7C6284: lea     edx, [esi+4]
0x7C6287: push    edx; lpAddend
0x7C6288: call    dword ptr ds:0A2807Ch
0x7C628E: test    eax, eax
0x7C6290: jnz     short loc_7C62A0
0x7C6292: test    esi, esi
0x7C6294: jz      short loc_7C62A0
0x7C6296: mov     eax, [esi]
0x7C6298: mov     edx, [eax]
0x7C629A: push    1
0x7C629C: mov     ecx, esi
0x7C629E: call    edx
0x7C62A0: cmp     [esp+18h+var_5], 0
0x7C62A5: jnz     short loc_7C62B7
0x7C62A7: test    edi, edi
0x7C62A9: jnz     short loc_7C6247
0x7C62AB: pop     edi
0x7C62AC: pop     esi
0x7C62AD: pop     ebp
0x7C62AE: xor     eax, eax
0x7C62B0: pop     ebx
0x7C62B1: add     esp, 8
0x7C62B4: retn    4
0x7C62B7: pop     edi
0x7C62B8: pop     esi
0x7C62B9: mov     eax, ebp
0x7C62BB: pop     ebp
0x7C62BC: pop     ebx
0x7C62BD: add     esp, 8
0x7C62C0: retn    4
