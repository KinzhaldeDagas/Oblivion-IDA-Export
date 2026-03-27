0x5F12D0: push    esi
0x5F12D1: push    edi
0x5F12D2: mov     esi, ecx
0x5F12D4: call    MobileObject_GetCharProxy
0x5F12D9: mov     edi, eax
0x5F12DB: test    edi, edi
0x5F12DD: jz      short loc_5F131F
0x5F12DF: mov     eax, [esi]
0x5F12E1: mov     edx, [eax+334h]
0x5F12E7: push    1
0x5F12E9: mov     ecx, esi
0x5F12EB: call    edx
0x5F12ED: test    al, al
0x5F12EF: jnz     short loc_5F1308
0x5F12F1: mov     eax, [esi]
0x5F12F3: mov     edx, [eax+284h]
0x5F12F9: push    4
0x5F12FB: mov     ecx, esi
0x5F12FD: call    edx
0x5F12FF: test    eax, eax
0x5F1301: setz    al
0x5F1304: test    al, al
0x5F1306: jz      short loc_5F1315
0x5F1308: or      dword ptr [edi+1F4h], 4000h
0x5F1312: pop     edi
0x5F1313: pop     esi
0x5F1314: retn
0x5F1315: and     dword ptr [edi+1F4h], 0FFFFBFFFh
0x5F131F: pop     edi
0x5F1320: pop     esi
0x5F1321: retn
