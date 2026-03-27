0x589930: push    ebx
0x589931: push    esi
0x589932: mov     esi, [ecx+34h]
0x589935: test    esi, esi
0x589937: push    edi
0x589938: jz      short loc_589969
0x58993A: mov     ebx, [esp+0Ch+arg_0]
0x58993E: mov     edi, edi
0x589940: mov     edi, [esi+8]
0x589943: lea     eax, [esi+8]
0x589946: mov     eax, [edi+8]
0x589949: mov     esi, [esi]
0x58994B: push    ebx; unsigned __int8 *
0x58994C: push    eax; unsigned __int8 *
0x58994D: call    __mbscmp
0x589952: add     esp, 8
0x589955: test    eax, eax
0x589957: jz      short loc_589971
0x589959: push    ebx; unsigned __int8 *
0x58995A: mov     ecx, edi
0x58995C: call    sub_589930
0x589961: test    eax, eax
0x589963: jnz     short loc_58996B
0x589965: test    esi, esi
0x589967: jnz     short loc_589940
0x589969: xor     eax, eax
0x58996B: pop     edi
0x58996C: pop     esi
0x58996D: pop     ebx
0x58996E: retn    4
0x589971: mov     eax, edi
0x589973: pop     edi
0x589974: pop     esi
0x589975: pop     ebx
0x589976: retn    4
