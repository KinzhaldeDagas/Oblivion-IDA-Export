0x504820: push    ecx
0x504821: mov     ecx, [esp+4+l]
0x504825: mov     edx, [esp+4+arg_10]
0x504829: push    esi
0x50482A: mov     esi, [esp+8+a4]
0x50482E: lea     eax, [esp+8+var_4]
0x504832: push    eax; UInt16
0x504833: mov     eax, [esp+0Ch+arg_C]
0x504837: push    ecx; l
0x504838: mov     ecx, [esp+10h+a3]
0x50483C: push    edx; a6
0x50483D: mov     edx, [esp+14h+arg_4]
0x504841: push    eax; a5
0x504842: mov     eax, [esp+18h+a1]
0x504846: push    esi; a4
0x504847: push    ecx; a3
0x504848: push    edx; a2
0x504849: push    eax; a1
0x50484A: mov     dword ptr [esp+28h+var_4], 0
0x504852: call    Script_ExtractArgs
0x504857: add     esp, 20h
0x50485A: test    al, al
0x50485C: jnz     short loc_504861
0x50485E: pop     esi
0x50485F: pop     ecx
0x504860: retn
0x504861: test    esi, esi
0x504863: jz      short loc_504881
0x504865: mov     eax, dword ptr [esp+8+var_4]
0x504869: test    eax, eax
0x50486B: jz      short loc_504881
0x50486D: mov     ecx, [esp+8+arg_18]
0x504871: push    ecx
0x504872: push    0
0x504874: push    eax
0x504875: push    esi
0x504876: call    sub_4F74B0
0x50487B: add     esp, 10h
0x50487E: pop     esi
0x50487F: pop     ecx
0x504880: retn
0x504881: mov     al, 1
0x504883: pop     esi
0x504884: pop     ecx
0x504885: retn
