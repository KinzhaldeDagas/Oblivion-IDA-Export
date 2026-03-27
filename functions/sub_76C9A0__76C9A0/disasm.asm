0x76C9A0: push    ebx
0x76C9A1: push    esi
0x76C9A2: mov     esi, ecx
0x76C9A4: mov     ecx, [esi+18h]
0x76C9A7: mov     eax, [ecx]
0x76C9A9: mov     edx, [eax+4]
0x76C9AC: push    edi
0x76C9AD: mov     edi, [esp+0Ch+a5]
0x76C9B1: push    edi
0x76C9B2: call    edx
0x76C9B4: mov     eax, [edi+24h]
0x76C9B7: mov     ecx, [edi+20h]
0x76C9BA: mov     edx, [esi+14h]
0x76C9BD: mov     ebx, [esp+0Ch+a6]
0x76C9C1: push    eax
0x76C9C2: push    ecx
0x76C9C3: mov     ecx, [edx+8BCh]
0x76C9C9: push    ebx
0x76C9CA: call    sub_776880
0x76C9CF: mov     eax, [esp+0Ch+a8]
0x76C9D3: mov     ecx, [esp+0Ch+a7]
0x76C9D7: mov     edx, [esp+0Ch+a4]
0x76C9DB: push    eax; a8
0x76C9DC: mov     eax, [esp+10h+a3]
0x76C9E0: push    ecx; a7
0x76C9E1: mov     ecx, [esp+14h+a2]
0x76C9E5: push    ebx; a6
0x76C9E6: push    edi; a5
0x76C9E7: push    edx; a4
0x76C9E8: push    eax; a3
0x76C9E9: push    ecx; a2
0x76C9EA: mov     ecx, esi; this
0x76C9EC: call    sub_77A150
0x76C9F1: mov     ecx, [esi+18h]
0x76C9F4: mov     edx, [ecx]
0x76C9F6: mov     edi, eax
0x76C9F8: mov     eax, [edx+68h]
0x76C9FB: push    89h ; '‰'
0x76CA00: call    eax
0x76CA02: mov     [esi+60h], eax
0x76CA05: mov     eax, edi
0x76CA07: pop     edi
0x76CA08: pop     esi
0x76CA09: pop     ebx
0x76CA0A: retn    1Ch
