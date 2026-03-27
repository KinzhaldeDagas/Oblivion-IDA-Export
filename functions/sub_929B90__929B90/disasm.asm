0x929B90: push    ebp
0x929B91: mov     ebp, esp
0x929B93: and     esp, 0FFFFFFF0h
0x929B96: sub     esp, 21Ch
0x929B9C: mov     eax, ds:0B30AACh
0x929BA1: push    esi
0x929BA2: mov     esi, ecx
0x929BA4: lea     ecx, [esp+220h+var_211+1]
0x929BA8: push    ecx
0x929BA9: mov     [esp+224h+var_4], eax
0x929BB0: mov     eax, [esi]
0x929BB2: push    0
0x929BB4: mov     ecx, esi
0x929BB6: call    dword ptr [eax+28h]
0x929BB9: mov     edx, ds:0B3060Ch
0x929BBF: push    edx; float
0x929BC0: lea     ecx, [eax+30h]
0x929BC3: push    ecx; int
0x929BC4: lea     edx, [eax+20h]
0x929BC7: push    edx; int
0x929BC8: add     eax, 10h
0x929BCB: push    eax; int
0x929BCC: lea     eax, [esp+230h+var_211]
0x929BD0: push    eax; int
0x929BD1: call    sub_950B10
0x929BD6: mov     cl, [eax]
0x929BD8: add     esp, 14h
0x929BDB: cmp     cl, 1
0x929BDE: jnz     short loc_929BF3
0x929BE0: xor     eax, eax
0x929BE2: mov     ecx, [esp+220h+var_4]
0x929BE9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x929BEE: pop     esi
0x929BEF: mov     esp, ebp
0x929BF1: pop     ebp
0x929BF2: retn
0x929BF3: mov     edx, [esi]
0x929BF5: push    0
0x929BF7: mov     ecx, esi
0x929BF9: call    dword ptr [edx+24h]
0x929BFC: mov     ecx, [esp+220h+var_4]
0x929C03: call    @__security_check_cookie@4; __security_check_cookie(x)
0x929C08: pop     esi
0x929C09: mov     esp, ebp
0x929C0B: pop     ebp
0x929C0C: retn
