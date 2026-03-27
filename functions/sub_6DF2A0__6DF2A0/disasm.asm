0x6DF2A0: sub     esp, 8
0x6DF2A3: fld     [esp+8+arg_4]
0x6DF2A7: push    ebx
0x6DF2A8: push    ebp
0x6DF2A9: push    esi
0x6DF2AA: push    edi
0x6DF2AB: sub     esp, 8
0x6DF2AE: fstp    [esp+20h+var_1C]
0x6DF2B2: mov     esi, ecx
0x6DF2B4: fld     [esp+20h+arg_0]
0x6DF2B8: fstp    [esp+20h+var_20]
0x6DF2BB: call    sub_6EBA60
0x6DF2C0: mov     ebp, esi
0x6DF2C2: mov     [esp+18h+var_4], eax
0x6DF2C6: lea     ebx, [eax+38h]
0x6DF2C9: sub     ebp, eax
0x6DF2CB: mov     [esp+18h+var_8], 3
0x6DF2D3: mov     ecx, [ebx+ebp]
0x6DF2D6: test    ecx, ecx
0x6DF2D8: jz      short loc_6DF32E
0x6DF2DA: fld     [esp+18h+arg_4]
0x6DF2DE: mov     eax, [ecx]
0x6DF2E0: mov     edx, [eax+88h]
0x6DF2E6: sub     esp, 8
0x6DF2E9: fstp    [esp+20h+var_1C]
0x6DF2ED: fld     [esp+20h+arg_0]
0x6DF2F1: fstp    [esp+20h+var_20]
0x6DF2F4: call    edx
0x6DF2F6: mov     esi, [ebx]
0x6DF2F8: mov     edi, eax
0x6DF2FA: cmp     esi, edi
0x6DF2FC: jz      short loc_6DF32E
0x6DF2FE: test    esi, esi
0x6DF300: jz      short loc_6DF31E
0x6DF302: lea     eax, [esi+4]
0x6DF305: push    eax; lpAddend
0x6DF306: call    dword ptr ds:0A2807Ch
0x6DF30C: test    eax, eax
0x6DF30E: jnz     short loc_6DF31E
0x6DF310: test    esi, esi
0x6DF312: jz      short loc_6DF31E
0x6DF314: mov     edx, [esi]
0x6DF316: mov     eax, [edx]
0x6DF318: push    1
0x6DF31A: mov     ecx, esi
0x6DF31C: call    eax
0x6DF31E: test    edi, edi
0x6DF320: mov     [ebx], edi
0x6DF322: jz      short loc_6DF32E
0x6DF324: add     edi, 4
0x6DF327: push    edi; lpAddend
0x6DF328: call    dword ptr ds:0A28078h
0x6DF32E: add     ebx, 4
0x6DF331: sub     [esp+18h+var_8], 1
0x6DF336: jnz     short loc_6DF2D3
0x6DF338: mov     eax, [esp+18h+var_4]
0x6DF33C: pop     edi
0x6DF33D: pop     esi
0x6DF33E: pop     ebp
0x6DF33F: pop     ebx
0x6DF340: add     esp, 8
0x6DF343: retn    8
