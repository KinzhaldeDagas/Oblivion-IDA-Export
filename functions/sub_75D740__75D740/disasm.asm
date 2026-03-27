0x75D740: push    ebx
0x75D741: mov     ebx, [esp+4+arg_4]
0x75D745: push    ebp
0x75D746: push    esi
0x75D747: push    edi
0x75D748: mov     edi, [esp+10h+arg_0]
0x75D74C: push    ebx
0x75D74D: push    edi
0x75D74E: mov     esi, ecx
0x75D750: call    sub_759940
0x75D755: mov     ecx, [esi+68h]
0x75D758: mov     eax, [ecx]
0x75D75A: mov     edx, [eax+18h]
0x75D75D: push    ebx
0x75D75E: call    edx
0x75D760: mov     ebx, [edi+68h]
0x75D763: mov     ebp, eax
0x75D765: cmp     ebx, ebp
0x75D767: jz      short loc_75D7B4
0x75D769: test    ebx, ebx
0x75D76B: jz      short loc_75D789
0x75D76D: lea     eax, [ebx+4]
0x75D770: push    eax; lpAddend
0x75D771: call    dword ptr ds:0A2807Ch
0x75D777: test    eax, eax
0x75D779: jnz     short loc_75D789
0x75D77B: test    ebx, ebx
0x75D77D: jz      short loc_75D789
0x75D77F: mov     edx, [ebx]
0x75D781: mov     eax, [edx]
0x75D783: push    1
0x75D785: mov     ecx, ebx
0x75D787: call    eax
0x75D789: test    ebp, ebp
0x75D78B: mov     [edi+68h], ebp
0x75D78E: jz      short loc_75D7A7
0x75D790: add     ebp, 4
0x75D793: push    ebp; lpAddend
0x75D794: call    dword ptr ds:0A28078h
0x75D79A: mov     cl, [esi+6Ch]
0x75D79D: mov     [edi+6Ch], cl
0x75D7A0: pop     edi
0x75D7A1: pop     esi
0x75D7A2: pop     ebp
0x75D7A3: pop     ebx
0x75D7A4: retn    8
0x75D7A7: mov     dl, [esi+6Ch]
0x75D7AA: mov     [edi+6Ch], dl
0x75D7AD: pop     edi
0x75D7AE: pop     esi
0x75D7AF: pop     ebp
0x75D7B0: pop     ebx
0x75D7B1: retn    8
0x75D7B4: mov     al, [esi+6Ch]
0x75D7B7: mov     [edi+6Ch], al
0x75D7BA: pop     edi
0x75D7BB: pop     esi
0x75D7BC: pop     ebp
0x75D7BD: pop     ebx
0x75D7BE: retn    8
