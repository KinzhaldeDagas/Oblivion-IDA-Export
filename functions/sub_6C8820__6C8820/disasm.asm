0x6C8820: push    ecx
0x6C8821: push    ebx
0x6C8822: push    ebp
0x6C8823: mov     ebp, [esp+0Ch+arg_0]
0x6C8827: push    esi
0x6C8828: mov     ebx, ecx
0x6C882A: push    edi
0x6C882B: mov     ecx, ebp
0x6C882D: call    sub_712A90
0x6C8832: mov     esi, [ebx]
0x6C8834: mov     edi, eax
0x6C8836: cmp     esi, edi
0x6C8838: jz      short loc_6C886A
0x6C883A: test    esi, esi
0x6C883C: jz      short loc_6C885A
0x6C883E: lea     eax, [esi+4]
0x6C8841: push    eax; lpAddend
0x6C8842: call    dword ptr ds:0A2807Ch
0x6C8848: test    eax, eax
0x6C884A: jnz     short loc_6C885A
0x6C884C: test    esi, esi
0x6C884E: jz      short loc_6C885A
0x6C8850: mov     edx, [esi]
0x6C8852: mov     eax, [edx]
0x6C8854: push    1
0x6C8856: mov     ecx, esi
0x6C8858: call    eax
0x6C885A: test    edi, edi
0x6C885C: mov     [ebx], edi
0x6C885E: jz      short loc_6C886A
0x6C8860: add     edi, 4
0x6C8863: push    edi; lpAddend
0x6C8864: call    dword ptr ds:0A28078h
0x6C886A: mov     ecx, ebp
0x6C886C: call    sub_712A90
0x6C8871: mov     esi, [ebx+4]
0x6C8874: mov     edi, eax
0x6C8876: cmp     esi, edi
0x6C8878: jz      short loc_6C88AB
0x6C887A: test    esi, esi
0x6C887C: jz      short loc_6C889A
0x6C887E: lea     ecx, [esi+4]
0x6C8881: push    ecx; lpAddend
0x6C8882: call    dword ptr ds:0A2807Ch
0x6C8888: test    eax, eax
0x6C888A: jnz     short loc_6C889A
0x6C888C: test    esi, esi
0x6C888E: jz      short loc_6C889A
0x6C8890: mov     edx, [esi]
0x6C8892: mov     eax, [edx]
0x6C8894: push    1
0x6C8896: mov     ecx, esi
0x6C8898: call    eax
0x6C889A: test    edi, edi
0x6C889C: mov     [ebx+4], edi
0x6C889F: jz      short loc_6C88AB
0x6C88A1: add     edi, 4
0x6C88A4: push    edi; lpAddend
0x6C88A5: call    dword ptr ds:0A28078h
0x6C88AB: cmp     dword ptr [ebp+0D8h], 0A01006Fh
0x6C88B5: jnb     short loc_6C88E3
0x6C88B7: mov     ecx, ebp
0x6C88B9: call    sub_712A90
0x6C88BE: mov     eax, [ebp+21Ch]
0x6C88C4: push    1
0x6C88C6: lea     ecx, [esp+18h+var_4]
0x6C88CA: push    ecx
0x6C88CB: push    2
0x6C88CD: lea     edx, [esp+20h+arg_0]
0x6C88D1: push    edx
0x6C88D2: push    eax
0x6C88D3: mov     eax, [eax+4]
0x6C88D6: mov     [esp+28h+var_4], 2
0x6C88DE: call    eax
0x6C88E0: add     esp, 14h
0x6C88E3: cmp     dword ptr [ebp+4], 0
0x6C88E7: jbe     short loc_6C890D
0x6C88E9: mov     ebp, [ebp+21Ch]
0x6C88EF: mov     edx, [ebp+4]
0x6C88F2: push    1
0x6C88F4: lea     ecx, [esp+18h+arg_0]
0x6C88F8: push    ecx
0x6C88F9: push    1
0x6C88FB: add     ebx, 0Dh
0x6C88FE: push    ebx
0x6C88FF: push    ebp
0x6C8900: mov     [esp+28h+arg_0], 1
0x6C8908: call    edx
0x6C890A: add     esp, 14h
0x6C890D: pop     edi
0x6C890E: pop     esi
0x6C890F: pop     ebp
0x6C8910: pop     ebx
0x6C8911: pop     ecx
0x6C8912: retn    4
