0x946340: push    esi
0x946341: push    edi
0x946342: mov     esi, ecx
0x946344: mov     ecx, [esi+14h]
0x946347: push    9
0x946349: call    sub_918440
0x94634E: mov     ecx, [esi+14h]
0x946351: push    22h ; '"'
0x946353: call    sub_9181B0
0x946358: mov     edi, [esp+8+arg_0]
0x94635C: mov     ecx, [esi+14h]
0x94635F: push    0
0x946361: push    edi
0x946362: call    sub_918460
0x946367: mov     ecx, [esi+24h]
0x94636A: xor     eax, eax
0x94636C: test    ecx, ecx
0x94636E: jle     short loc_9463A1
0x946370: mov     edx, [esi+20h]
0x946373: cmp     [edx], edi
0x946375: jz      short loc_946389
0x946377: inc     eax
0x946378: add     edx, 8
0x94637B: cmp     eax, ecx
0x94637D: jl      short loc_946373
0x94637F: pop     edi
0x946380: mov     eax, 9
0x946385: pop     esi
0x946386: retn    4
0x946389: mov     ecx, [esi+24h]
0x94638C: dec     ecx
0x94638D: mov     [esi+24h], ecx
0x946390: mov     esi, [esi+20h]
0x946393: mov     edx, [esi+ecx*8]
0x946396: mov     [esi+eax*8], edx
0x946399: mov     ecx, [esi+ecx*8+4]
0x94639D: mov     [esi+eax*8+4], ecx
0x9463A1: pop     edi
0x9463A2: mov     eax, 9
0x9463A7: pop     esi
0x9463A8: retn    4
