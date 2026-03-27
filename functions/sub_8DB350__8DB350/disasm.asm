0x8DB350: sub     esp, 18h
0x8DB353: mov     eax, [esp+18h+arg_0]
0x8DB357: cmp     ax, 0FFFFh
0x8DB35B: push    ebx
0x8DB35C: push    esi
0x8DB35D: mov     esi, ecx
0x8DB35F: mov     ebx, [esi+10h]
0x8DB362: push    edi
0x8DB363: mov     edi, [esi+0Ch]
0x8DB366: mov     word ptr [esp+24h+var_18], ax
0x8DB36B: mov     [esp+24h+var_14], 0
0x8DB373: mov     [esp+24h+var_10], edi
0x8DB377: mov     [esp+24h+var_C], ebx
0x8DB37B: mov     [esp+24h+var_4], esi
0x8DB37F: jz      short loc_8DB39C
0x8DB381: mov     edx, [esi]
0x8DB383: push    eax
0x8DB384: call    dword ptr [edx+20h]
0x8DB387: test    eax, eax
0x8DB389: jz      short loc_8DB394
0x8DB38B: add     eax, 8
0x8DB38E: mov     [esp+24h+var_14], eax
0x8DB392: jmp     short loc_8DB39C
0x8DB394: mov     [esp+24h+var_14], 0
0x8DB39C: mov     ecx, [esi+8]
0x8DB39F: lea     eax, [esp+24h+var_18]
0x8DB3A3: push    eax
0x8DB3A4: push    ecx
0x8DB3A5: call    sub_8DC920
0x8DB3AA: mov     eax, [edi+98h]
0x8DB3B0: add     esp, 8
0x8DB3B3: test    eax, eax
0x8DB3B5: jz      short loc_8DB3C5
0x8DB3B7: lea     edx, [esp+24h+var_18]
0x8DB3BB: push    edx
0x8DB3BC: push    edi
0x8DB3BD: call    sub_8DC0A0
0x8DB3C2: add     esp, 8
0x8DB3C5: mov     eax, [ebx+98h]
0x8DB3CB: test    eax, eax
0x8DB3CD: jz      short loc_8DB3DD
0x8DB3CF: lea     eax, [esp+24h+var_18]
0x8DB3D3: push    eax
0x8DB3D4: push    ebx
0x8DB3D5: call    sub_8DC0A0
0x8DB3DA: add     esp, 8
0x8DB3DD: pop     edi
0x8DB3DE: pop     esi
0x8DB3DF: pop     ebx
0x8DB3E0: add     esp, 18h
0x8DB3E3: retn    4
