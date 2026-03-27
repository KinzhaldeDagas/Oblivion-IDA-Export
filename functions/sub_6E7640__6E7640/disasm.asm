0x6E7640: push    ebp
0x6E7641: push    esi
0x6E7642: push    edi
0x6E7643: mov     edi, [esp+0Ch+a2]
0x6E7647: push    edi; a2
0x6E7648: mov     esi, ecx
0x6E764A: call    sub_7008A0
0x6E764F: mov     eax, [edi+21Ch]
0x6E7655: mov     edx, [eax+4]
0x6E7658: push    1
0x6E765A: lea     ecx, [esp+10h+a2]
0x6E765E: push    ecx
0x6E765F: push    4
0x6E7661: lea     ebp, [esi+10h]
0x6E7664: push    ebp
0x6E7665: push    eax
0x6E7666: mov     [esp+20h+a2], 4
0x6E766E: call    edx
0x6E7670: mov     eax, [ebp+0]
0x6E7673: add     esp, 14h
0x6E7676: test    eax, eax
0x6E7678: jz      short loc_6E76BA
0x6E767A: xor     ecx, ecx
0x6E767C: mov     edx, 4
0x6E7681: mul     edx
0x6E7683: seto    cl
0x6E7686: neg     ecx
0x6E7688: or      ecx, eax
0x6E768A: push    ecx; Size
0x6E768B: call    FormHeapAlloc
0x6E7690: push    1
0x6E7692: lea     edx, [esp+14h+a2]
0x6E7696: push    edx
0x6E7697: mov     edx, [ebp+0]
0x6E769A: add     edx, edx
0x6E769C: add     edx, edx
0x6E769E: push    edx
0x6E769F: mov     [esi+8], eax
0x6E76A2: mov     ecx, [edi+21Ch]
0x6E76A8: push    eax
0x6E76A9: mov     eax, [ecx+4]
0x6E76AC: push    ecx
0x6E76AD: mov     [esp+24h+a2], 4
0x6E76B5: call    eax
0x6E76B7: add     esp, 18h
0x6E76BA: cmp     dword ptr [edi+0D8h], 14000001h
0x6E76C4: jb      short loc_6E772F
0x6E76C6: mov     eax, [edi+21Ch]
0x6E76CC: mov     edx, [eax+4]
0x6E76CF: push    1
0x6E76D1: lea     ecx, [esp+10h+a2]
0x6E76D5: push    ecx
0x6E76D6: push    4
0x6E76D8: lea     ebp, [esi+14h]
0x6E76DB: push    ebp
0x6E76DC: push    eax
0x6E76DD: mov     [esp+20h+a2], 4
0x6E76E5: call    edx
0x6E76E7: mov     eax, [ebp+0]
0x6E76EA: add     esp, 14h
0x6E76ED: test    eax, eax
0x6E76EF: jz      short loc_6E772F
0x6E76F1: xor     ecx, ecx
0x6E76F3: mov     edx, 2
0x6E76F8: mul     edx
0x6E76FA: seto    cl
0x6E76FD: neg     ecx
0x6E76FF: or      ecx, eax
0x6E7701: push    ecx; Size
0x6E7702: call    FormHeapAlloc
0x6E7707: mov     edx, [ebp+0]
0x6E770A: push    1
0x6E770C: lea     ecx, [esp+14h+a2]
0x6E7710: push    ecx
0x6E7711: add     edx, edx
0x6E7713: push    edx
0x6E7714: mov     [esi+0Ch], eax
0x6E7717: mov     edi, [edi+21Ch]
0x6E771D: push    eax
0x6E771E: mov     eax, [edi+4]
0x6E7721: push    edi
0x6E7722: mov     [esp+24h+a2], 2
0x6E772A: call    eax
0x6E772C: add     esp, 18h
0x6E772F: pop     edi
0x6E7730: pop     esi
0x6E7731: pop     ebp
0x6E7732: retn    4
