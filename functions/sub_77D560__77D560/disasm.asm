0x77D560: push    ebp
0x77D561: mov     ebp, [esp+4+arg_0]
0x77D565: push    esi
0x77D566: push    edi
0x77D567: mov     edi, ecx
0x77D569: mov     eax, [edi+20h]
0x77D56C: mov     esi, [eax+ebp*4]
0x77D56F: test    esi, esi
0x77D571: jz      short loc_77D5B6
0x77D573: mov     ecx, [esp+0Ch+arg_4]
0x77D577: push    ebx
0x77D578: mov     ebx, [esi+24h]
0x77D57B: push    ecx
0x77D57C: mov     ecx, esi
0x77D57E: call    sub_782700
0x77D583: cmp     ebx, [esi+24h]
0x77D586: pop     ebx
0x77D587: jz      short loc_77D5B6
0x77D589: push    esi
0x77D58A: mov     ecx, edi
0x77D58C: call    sub_77D2E0
0x77D591: mov     edx, [esi+28h]
0x77D594: cmp     edx, [esi+0Ch]
0x77D597: jnz     short loc_77D5B0
0x77D599: push    ebp
0x77D59A: lea     ecx, [edi+1Ch]
0x77D59D: call    sub_405020
0x77D5A2: push    esi
0x77D5A3: mov     ecx, edi
0x77D5A5: call    sub_77D3F0
0x77D5AA: pop     edi
0x77D5AB: pop     esi
0x77D5AC: pop     ebp
0x77D5AD: retn    8
0x77D5B0: push    esi
0x77D5B1: call    sub_77D270
0x77D5B6: pop     edi
0x77D5B7: pop     esi
0x77D5B8: pop     ebp
0x77D5B9: retn    8
