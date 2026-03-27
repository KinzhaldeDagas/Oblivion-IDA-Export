0x4524C0: push    ebx
0x4524C1: push    ebp
0x4524C2: mov     ebp, [esp+8+arg_0]
0x4524C6: push    esi
0x4524C7: mov     esi, ecx
0x4524C9: mov     eax, [esi]
0x4524CB: mov     edx, [eax+4]
0x4524CE: push    edi
0x4524CF: push    ebp
0x4524D0: call    edx
0x4524D2: mov     ebx, eax
0x4524D4: mov     eax, [esi+8]
0x4524D7: mov     edi, [eax+ebx*4]
0x4524DA: test    edi, edi
0x4524DC: jz      short loc_45253B
0x4524DE: mov     eax, [edi+4]
0x4524E1: mov     edx, [esi]
0x4524E3: mov     edx, [edx+8]
0x4524E6: push    eax
0x4524E7: push    ebp
0x4524E8: mov     ecx, esi
0x4524EA: call    edx
0x4524EC: test    al, al
0x4524EE: jz      short loc_452519
0x4524F0: mov     eax, [esi+8]
0x4524F3: mov     ecx, [edi]
0x4524F5: mov     [eax+ebx*4], ecx
0x4524F8: mov     edx, [esi]
0x4524FA: mov     eax, [edx+10h]
0x4524FD: push    edi
0x4524FE: mov     ecx, esi
0x452500: call    eax
0x452502: mov     edx, [esi]
0x452504: mov     eax, [edx+18h]
0x452507: push    edi
0x452508: mov     ecx, esi
0x45250A: call    eax
0x45250C: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x452510: pop     edi
0x452511: pop     esi
0x452512: pop     ebp
0x452513: mov     al, 1
0x452515: pop     ebx
0x452516: retn    4
0x452519: mov     ebx, edi
0x45251B: mov     edi, [edi]
0x45251D: test    edi, edi
0x45251F: jz      short loc_45253B
0x452521: mov     eax, [edi+4]
0x452524: mov     edx, [esi]
0x452526: mov     edx, [edx+8]
0x452529: push    eax
0x45252A: push    ebp
0x45252B: mov     ecx, esi
0x45252D: call    edx
0x45252F: test    al, al
0x452531: jnz     short loc_452544
0x452533: mov     ebx, edi
0x452535: mov     edi, [edi]
0x452537: test    edi, edi
0x452539: jnz     short loc_452521
0x45253B: pop     edi
0x45253C: pop     esi
0x45253D: pop     ebp
0x45253E: xor     al, al
0x452540: pop     ebx
0x452541: retn    4
0x452544: mov     eax, [edi]
0x452546: mov     [ebx], eax
0x452548: mov     edx, [esi]
0x45254A: mov     eax, [edx+10h]
0x45254D: push    edi
0x45254E: mov     ecx, esi
0x452550: call    eax
0x452552: mov     edx, [esi]
0x452554: mov     eax, [edx+18h]
0x452557: push    edi
0x452558: mov     ecx, esi
0x45255A: call    eax
0x45255C: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x452560: pop     edi
0x452561: pop     esi
0x452562: pop     ebp
0x452563: mov     al, 1
0x452565: pop     ebx
0x452566: retn    4
