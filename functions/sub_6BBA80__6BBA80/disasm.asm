0x6BBA80: push    ebx
0x6BBA81: mov     ebx, [esp+4+arg_8]
0x6BBA85: test    ebx, ebx
0x6BBA87: jbe     short loc_6BBAED
0x6BBA89: push    ebp
0x6BBA8A: push    esi
0x6BBA8B: mov     esi, [esp+0Ch+arg_4]
0x6BBA8F: push    edi
0x6BBA90: mov     edi, [esp+10h+arg_0]
0x6BBA94: add     esi, 0Ch
0x6BBA97: mov     ebp, 4
0x6BBA9C: lea     esp, [esp+0]
0x6BBAA0: lea     eax, [esi-0Ch]
0x6BBAA3: push    eax
0x6BBAA4: push    edi
0x6BBAA5: call    sub_6BB620
0x6BBAAA: mov     eax, [edi+220h]
0x6BBAB0: push    1
0x6BBAB2: lea     ecx, [esp+1Ch+arg_8]
0x6BBAB6: push    ecx
0x6BBAB7: push    ebp
0x6BBAB8: lea     edx, [esi-4]
0x6BBABB: push    edx
0x6BBABC: push    eax
0x6BBABD: mov     eax, [eax+8]
0x6BBAC0: mov     [esp+2Ch+arg_8], ebp
0x6BBAC4: call    eax
0x6BBAC6: mov     eax, [edi+220h]
0x6BBACC: mov     edx, [eax+8]
0x6BBACF: push    1
0x6BBAD1: lea     ecx, [esp+30h+arg_8]
0x6BBAD5: push    ecx
0x6BBAD6: push    ebp
0x6BBAD7: push    esi
0x6BBAD8: push    eax
0x6BBAD9: mov     [esp+40h+arg_8], ebp
0x6BBADD: call    edx
0x6BBADF: add     esp, 30h
0x6BBAE2: add     esi, 10h
0x6BBAE5: sub     ebx, 1
0x6BBAE8: jnz     short loc_6BBAA0
0x6BBAEA: pop     edi
0x6BBAEB: pop     esi
0x6BBAEC: pop     ebp
0x6BBAED: pop     ebx
0x6BBAEE: retn
