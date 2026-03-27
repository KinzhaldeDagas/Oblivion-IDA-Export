0x89D340: push    esi
0x89D341: mov     esi, [esp+4+arg_0]
0x89D345: test    esi, esi
0x89D347: push    edi
0x89D348: mov     edi, ecx
0x89D34A: jnz     short loc_89D36C
0x89D34C: mov     ecx, ds:0BA7D98h
0x89D352: mov     eax, [ecx]
0x89D354: push    24h ; '$'
0x89D356: push    18h
0x89D358: call    dword ptr [eax+10h]
0x89D35B: mov     ecx, eax
0x89D35D: mov     word ptr [eax+4], 18h
0x89D363: call    sub_899330
0x89D368: mov     esi, eax
0x89D36A: jmp     short loc_89D377
0x89D36C: cmp     word ptr [esi+4], 0
0x89D371: jz      short loc_89D377
0x89D373: inc     word ptr [esi+6]
0x89D377: mov     ecx, [edi+78h]
0x89D37A: cmp     word ptr [ecx+4], 0
0x89D37F: jz      short loc_89D392
0x89D381: dec     word ptr [ecx+6]
0x89D385: cmp     word ptr [ecx+6], 0
0x89D38A: jnz     short loc_89D392
0x89D38C: mov     edx, [ecx]
0x89D38E: push    1
0x89D390: call    dword ptr [edx]
0x89D392: test    esi, esi
0x89D394: mov     [edi+78h], esi
0x89D397: jz      short loc_89D39E
0x89D399: lea     eax, [esi+0Ch]
0x89D39C: jmp     short loc_89D3A0
0x89D39E: xor     eax, eax
0x89D3A0: mov     ecx, [edi+74h]
0x89D3A3: mov     [ecx+4], eax
0x89D3A6: mov     al, byte ptr [esp+8+arg_4]
0x89D3AA: test    al, al
0x89D3AC: jz      short loc_89D3BF
0x89D3AE: mov     edx, [esp+8+arg_C]
0x89D3B2: mov     eax, [esp+8+arg_8]
0x89D3B6: push    edx
0x89D3B7: push    eax
0x89D3B8: mov     ecx, edi
0x89D3BA: call    sub_89BF50
0x89D3BF: pop     edi
0x89D3C0: pop     esi
0x89D3C1: retn    10h
