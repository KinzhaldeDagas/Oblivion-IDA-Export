0x768740: push    esi
0x768741: push    edi
0x768742: mov     edi, [esp+8+a2]
0x768746: cmp     dword ptr [edi+24h], 0
0x76874A: mov     esi, ecx
0x76874C: jnz     short loc_768770
0x76874E: push    esi; a3
0x76874F: push    edi; a2
0x768750: call    sub_7792E0
0x768755: add     esp, 8
0x768758: test    eax, eax
0x76875A: jnz     short loc_768763
0x76875C: pop     edi
0x76875D: xor     al, al
0x76875F: pop     esi
0x768760: retn    4
0x768763: push    eax; a3
0x768764: push    edi; a2
0x768765: lea     ecx, [esi+8D0h]; this
0x76876B: call    NiTMap_SetAt
0x768770: pop     edi
0x768771: mov     al, 1
0x768773: pop     esi
0x768774: retn    4
