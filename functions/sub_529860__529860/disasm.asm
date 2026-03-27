0x529860: push    esi
0x529861: mov     esi, ecx
0x529863: mov     eax, [esi+8]
0x529866: shr     eax, 3
0x529869: test    al, 1
0x52986B: jnz     loc_529914
0x529871: push    esi
0x529872: lea     ecx, [esi+18h]
0x529875: call    TESScriptableForm_Link
0x52987A: mov     ecx, [esi+1Ch]
0x52987D: test    ecx, ecx
0x52987F: jz      short loc_5298B3
0x529881: call    Script_CreateEventList
0x529886: test    eax, eax
0x529888: mov     [esi+58h], eax
0x52988B: jz      short loc_52989B
0x52988D: mov     edx, [esi]
0x52988F: mov     eax, [edx+48h]
0x529892: push    8000000h
0x529897: mov     ecx, esi
0x529899: call    eax
0x52989B: cmp     byte ptr ds:0B10CA0h, 0
0x5298A2: jz      short loc_5298B3
0x5298A4: or      byte ptr [esi+3Ch], 1
0x5298A8: mov     edx, [esi]
0x5298AA: mov     eax, [edx+40h]
0x5298AD: push    4
0x5298AF: mov     ecx, esi
0x5298B1: call    eax
0x5298B3: lea     ecx, [esi+50h]
0x5298B6: test    ecx, ecx
0x5298B8: jz      short loc_5298C0
0x5298BA: push    esi
0x5298BB: call    sub_56A480
0x5298C0: push    edi
0x5298C1: lea     edi, [esi+40h]
0x5298C4: test    edi, edi
0x5298C6: jz      short loc_5298E2
0x5298C8: cmp     dword ptr [edi+4], 0
0x5298CC: jnz     short loc_5298D3
0x5298CE: cmp     dword ptr [edi], 0
0x5298D1: jz      short loc_5298E2
0x5298D3: mov     ecx, [edi]
0x5298D5: push    esi
0x5298D6: call    sub_52B160
0x5298DB: mov     edi, [edi+4]
0x5298DE: test    edi, edi
0x5298E0: jnz     short loc_5298C8
0x5298E2: lea     edi, [esi+48h]
0x5298E5: test    edi, edi
0x5298E7: jz      short loc_52990A
0x5298E9: lea     esp, [esp+0]
0x5298F0: cmp     dword ptr [edi+4], 0
0x5298F4: jnz     short loc_5298FB
0x5298F6: cmp     dword ptr [edi], 0
0x5298F9: jz      short loc_52990A
0x5298FB: mov     ecx, [edi]
0x5298FD: push    esi
0x5298FE: call    sub_52B340
0x529903: mov     edi, [edi+4]
0x529906: test    edi, edi
0x529908: jnz     short loc_5298F0
0x52990A: push    1; a2
0x52990C: mov     ecx, esi; this
0x52990E: call    TESForm_SetIsLinked
0x529913: pop     edi
0x529914: pop     esi
0x529915: retn
