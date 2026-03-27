0x6B93B0: push    0FFFFFFFFh
0x6B93B2: push    offset SEH_6CF490
0x6B93B7: mov     eax, large fs:0
0x6B93BD: push    eax
0x6B93BE: push    ebx
0x6B93BF: push    ebp
0x6B93C0: push    esi
0x6B93C1: push    edi
0x6B93C2: mov     eax, ds:0B30AACh
0x6B93C7: xor     eax, esp
0x6B93C9: push    eax
0x6B93CA: lea     eax, [esp+20h+var_C]
0x6B93CE: mov     large fs:0, eax
0x6B93D4: mov     esi, ecx
0x6B93D6: push    1
0x6B93D8: mov     dword ptr [esi+0Ch], 0
0x6B93DF: call    sub_6B9250
0x6B93E4: mov     edi, [esp+20h+arg_4]
0x6B93E8: test    edi, edi
0x6B93EA: mov     eax, [esp+20h+arg_0]
0x6B93EE: mov     [esi+0Ch], eax
0x6B93F1: jnz     short loc_6B9407
0x6B93F3: push    edi
0x6B93F4: push    edi
0x6B93F5: call    TESTopic__GEtTopic
0x6B93FA: mov     edi, eax
0x6B93FC: add     esp, 8
0x6B93FF: test    edi, edi
0x6B9401: jz      loc_6B94AC
0x6B9407: mov     ecx, ds:0B333C4h
0x6B940D: mov     edx, [esi+0Ch]
0x6B9410: push    ecx
0x6B9411: push    edx
0x6B9412: lea     eax, [esp+28h+arg_0]
0x6B9416: push    eax
0x6B9417: mov     ecx, edi
0x6B9419: call    sub_52F770
0x6B941E: mov     ebp, eax
0x6B9420: test    ebp, ebp
0x6B9422: jz      loc_6B94AC
0x6B9428: push    ebp
0x6B9429: mov     ecx, edi
0x6B942B: call    sub_52F570
0x6B9430: push    28h ; '('; Size
0x6B9432: mov     ebx, eax
0x6B9434: call    FormHeapAlloc
0x6B9439: add     esp, 4
0x6B943C: mov     [esp+20h+arg_4], eax
0x6B9440: test    eax, eax
0x6B9442: mov     [esp+20h+var_4], 0
0x6B944A: jz      short loc_6B9460
0x6B944C: mov     ecx, [esi+0Ch]
0x6B944F: push    0
0x6B9451: push    ecx
0x6B9452: push    ebp
0x6B9453: push    edi
0x6B9454: push    ebx
0x6B9455: mov     ecx, eax
0x6B9457: call    sub_6B8E00
0x6B945C: mov     edi, eax
0x6B945E: jmp     short loc_6B9462
0x6B9460: xor     edi, edi
0x6B9462: push    edi
0x6B9463: lea     ecx, [esi+4]
0x6B9466: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6B946E: call    BSSimpleList_PushBack
0x6B9473: test    edi, edi
0x6B9475: jz      short loc_6B94AC
0x6B9477: mov     ebp, [edi+18h]
0x6B947A: test    ebp, ebp
0x6B947C: jz      short loc_6B94AC
0x6B947E: test    byte ptr [ebp+25h], 1
0x6B9482: jz      short loc_6B949A
0x6B9484: mov     ecx, ebp; int
0x6B9486: call    sub_5308D0
0x6B948B: mov     edx, [esi+0Ch]
0x6B948E: push    edx
0x6B948F: mov     ecx, ebp
0x6B9491: call    sub_531470
0x6B9496: mov     al, 1
0x6B9498: jmp     short loc_6B94C7
0x6B949A: test    ebp, ebp
0x6B949C: jz      short loc_6B94AC
0x6B949E: cmp     byte ptr [edi+8], 0
0x6B94A2: jz      short loc_6B94AC
0x6B94A4: mov     ebp, [ebp+30h]
0x6B94A7: add     ebp, 8
0x6B94AA: jmp     short loc_6B94B8
0x6B94AC: mov     ebp, ds:0B333C4h
0x6B94B2: add     ebp, 5E4h
0x6B94B8: push    ebp
0x6B94B9: mov     ecx, esi
0x6B94BB: call    sub_6B9010
0x6B94C0: lea     eax, [esi+4]
0x6B94C3: mov     [esi], eax
0x6B94C5: xor     al, al
0x6B94C7: mov     ecx, [esp+20h+var_C]
0x6B94CB: mov     large fs:0, ecx
0x6B94D2: pop     ecx
0x6B94D3: pop     edi
0x6B94D4: pop     esi
0x6B94D5: pop     ebp
0x6B94D6: pop     ebx
0x6B94D7: add     esp, 0Ch
0x6B94DA: retn    8
