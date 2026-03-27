0x913660: push    ebx
0x913661: push    esi
0x913662: push    edi
0x913663: mov     edi, ecx
0x913665: mov     esi, [edi+4]
0x913668: mov     eax, [esi+24h]
0x91366B: mov     ecx, [esi+20h]
0x91366E: add     esi, 1Ch
0x913671: and     eax, 3FFFFFFFh
0x913676: cmp     ecx, eax
0x913678: jnz     short loc_913685
0x91367A: push    4
0x91367C: push    esi
0x91367D: call    sub_8A6EE0
0x913682: add     esp, 8
0x913685: mov     ecx, [esi+4]
0x913688: mov     edx, [esi]
0x91368A: mov     dword ptr [edx+ecx*4], 2
0x913691: inc     dword ptr [esi+4]
0x913694: mov     eax, [edi+4]
0x913697: mov     ebx, [eax+14h]
0x91369A: mov     ecx, [eax+14h]
0x91369D: lea     esi, [eax+10h]
0x9136A0: mov     eax, [esi+8]
0x9136A3: and     eax, 3FFFFFFFh
0x9136A8: cmp     ecx, eax
0x9136AA: jnz     short loc_9136B7
0x9136AC: push    10h
0x9136AE: push    esi
0x9136AF: call    sub_8A6EE0
0x9136B4: add     esp, 8
0x9136B7: mov     ecx, [esi+4]
0x9136BA: mov     edx, [esi]
0x9136BC: mov     eax, ecx
0x9136BE: shl     eax, 4
0x9136C1: add     eax, edx
0x9136C3: inc     ecx
0x9136C4: mov     [esi+4], ecx
0x9136C7: mov     ecx, [esp+0Ch+arg_0]
0x9136CB: movaps  xmm0, xmmword ptr [ecx]
0x9136CE: movaps  xmmword ptr [eax], xmm0
0x9136D1: mov     byte ptr [edi+19h], 1
0x9136D5: pop     edi
0x9136D6: pop     esi
0x9136D7: mov     eax, ebx
0x9136D9: pop     ebx
0x9136DA: retn    4
