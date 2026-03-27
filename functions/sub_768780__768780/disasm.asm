0x768780: push    esi
0x768781: mov     esi, [esp+4+a2]
0x768785: push    edi
0x768786: mov     edi, ecx
0x768788: mov     ecx, [esi+24h]
0x76878B: test    ecx, ecx
0x76878D: jz      short loc_76879A
0x76878F: mov     eax, [ecx]
0x768791: mov     edx, [eax+20h]
0x768794: call    edx
0x768796: test    eax, eax
0x768798: jnz     short loc_7687BB
0x76879A: push    esi
0x76879B: call    NiDX9DynamicTextureData__NiDX9DynamicTextureData
0x7687A0: add     esp, 4
0x7687A3: test    eax, eax
0x7687A5: jnz     short loc_7687AE
0x7687A7: pop     edi
0x7687A8: xor     al, al
0x7687AA: pop     esi
0x7687AB: retn    4
0x7687AE: push    eax; a3
0x7687AF: push    esi; a2
0x7687B0: lea     ecx, [edi+8E0h]; this
0x7687B6: call    NiTMap_SetAt
0x7687BB: pop     edi
0x7687BC: mov     al, 1
0x7687BE: pop     esi
0x7687BF: retn    4
