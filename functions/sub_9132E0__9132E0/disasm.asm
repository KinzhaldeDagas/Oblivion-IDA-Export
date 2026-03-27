0x9132E0: push    esi
0x9132E1: push    edi
0x9132E2: mov     edi, ecx
0x9132E4: mov     esi, [edi+4]
0x9132E7: mov     eax, [esi+24h]
0x9132EA: mov     ecx, [esi+20h]
0x9132ED: add     esi, 1Ch
0x9132F0: and     eax, 3FFFFFFFh
0x9132F5: cmp     ecx, eax
0x9132F7: jnz     short loc_913304
0x9132F9: push    4
0x9132FB: push    esi
0x9132FC: call    sub_8A6EE0
0x913301: add     esp, 8
0x913304: mov     ecx, [esi+4]
0x913307: mov     edx, [esi]
0x913309: mov     dword ptr [edx+ecx*4], 7
0x913310: inc     dword ptr [esi+4]
0x913313: mov     eax, [edi+4]
0x913316: mov     esi, [eax+8]
0x913319: mov     edx, [eax+4]
0x91331C: add     esi, 4
0x91331F: mov     [eax+8], esi
0x913322: mov     esi, [eax+0Ch]
0x913325: mov     ecx, 30h ; '0'
0x91332A: add     edx, ecx
0x91332C: mov     [eax+4], edx
0x91332F: inc     esi
0x913330: mov     [eax+0Ch], esi
0x913333: mov     eax, [edi+4]
0x913336: mov     edx, [eax+8]
0x913339: mov     esi, [eax+4]
0x91333C: add     edx, 4
0x91333F: mov     [eax+8], edx
0x913342: mov     edx, [eax+0Ch]
0x913345: add     esi, ecx
0x913347: mov     [eax+4], esi
0x91334A: inc     edx
0x91334B: mov     [eax+0Ch], edx
0x91334E: mov     eax, [edi+4]
0x913351: mov     edx, [eax+4]
0x913354: mov     esi, [eax+8]
0x913357: add     edx, ecx
0x913359: mov     ecx, [eax+0Ch]
0x91335C: add     esi, 4
0x91335F: inc     ecx
0x913360: pop     edi
0x913361: mov     [eax+8], esi
0x913364: mov     [eax+4], edx
0x913367: mov     [eax+0Ch], ecx
0x91336A: pop     esi
0x91336B: retn
