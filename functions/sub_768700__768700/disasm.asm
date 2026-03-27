0x768700: push    esi
0x768701: push    edi
0x768702: mov     edi, [esp+8+a2]
0x768706: cmp     dword ptr [edi+24h], 0
0x76870A: mov     esi, ecx
0x76870C: jnz     short loc_768730
0x76870E: push    esi
0x76870F: push    edi
0x768710: call    sub_761920
0x768715: add     esp, 8
0x768718: test    eax, eax
0x76871A: jnz     short loc_768723
0x76871C: pop     edi
0x76871D: xor     al, al
0x76871F: pop     esi
0x768720: retn    4
0x768723: push    eax; a3
0x768724: push    edi; a2
0x768725: lea     ecx, [esi+8C0h]; this
0x76872B: call    NiTMap_SetAt
0x768730: pop     edi
0x768731: mov     al, 1
0x768733: pop     esi
0x768734: retn    4
