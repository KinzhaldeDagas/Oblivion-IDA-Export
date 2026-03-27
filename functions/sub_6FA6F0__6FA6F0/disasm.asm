0x6FA6F0: sub     esp, 20Ch
0x6FA6F6: mov     eax, ds:0B30AACh
0x6FA6FB: xor     eax, esp
0x6FA6FD: mov     [esp+20Ch+var_4], eax
0x6FA704: mov     eax, [esp+20Ch+FullPath]
0x6FA70B: push    esi
0x6FA70C: mov     esi, [esp+210h+arg_4]
0x6FA713: push    eax; FullPath
0x6FA714: lea     eax, [esp+214h+var_108]
0x6FA71B: push    eax; int
0x6FA71C: call    sub_6FA600
0x6FA721: lea     ecx, [esp+218h+C]
0x6FA725: push    esi; FullPath
0x6FA726: push    ecx; int
0x6FA727: call    sub_6FA600
0x6FA72C: lea     edx, [esp+220h+C]
0x6FA730: push    edx; C
0x6FA731: lea     eax, [esp+224h+var_108]
0x6FA738: push    eax; int
0x6FA739: call    sub_6FA410
0x6FA73E: mov     ecx, [esp+228h+var_4]
0x6FA745: sub     eax, 1
0x6FA748: add     esp, 18h
0x6FA74B: neg     eax
0x6FA74D: sbb     eax, eax
0x6FA74F: pop     esi
0x6FA750: xor     ecx, esp
0x6FA752: add     eax, 1
0x6FA755: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6FA75A: add     esp, 20Ch
0x6FA760: retn
