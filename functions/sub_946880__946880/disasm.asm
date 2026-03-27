0x946880: sub     esp, 0Ch
0x946883: push    ebx
0x946884: push    ebp
0x946885: push    esi
0x946886: push    edi
0x946887: mov     edi, ecx
0x946889: mov     ecx, [edi+1Ch]
0x94688C: xor     ebx, ebx
0x94688E: mov     eax, 80000000h
0x946893: xor     esi, esi
0x946895: cmp     ecx, ebx
0x946897: mov     [esp+1Ch+var_C], ebx
0x94689B: mov     [esp+1Ch+var_8], ebx
0x94689F: mov     [esp+1Ch+var_4], eax
0x9468A3: jle     short loc_9468FA
0x9468A5: lea     ebp, [edi-8]
0x9468A8: and     eax, 3FFFFFFFh
0x9468AD: jge     short loc_9468CB
0x9468AF: add     eax, eax
0x9468B1: xor     ecx, ecx
0x9468B3: cmp     eax, ebx
0x9468B5: setle   cl
0x9468B8: push    8
0x9468BA: lea     edx, [esp+20h+var_C]
0x9468BE: dec     ecx
0x9468BF: and     eax, ecx
0x9468C1: push    eax
0x9468C2: push    edx
0x9468C3: call    sub_8A6E40
0x9468C8: add     esp, 0Ch
0x9468CB: lea     eax, [esp+1Ch+var_C]
0x9468CF: push    eax
0x9468D0: push    ecx
0x9468D1: mov     eax, esp
0x9468D3: mov     [esp+24h+var_8], ebx
0x9468D7: mov     [eax], bl
0x9468D9: mov     ecx, [edi+18h]
0x9468DC: mov     edx, [ecx+esi*8+4]
0x9468E0: lea     eax, [ecx+esi*8]
0x9468E3: mov     eax, [eax]
0x9468E5: push    edx
0x9468E6: push    eax
0x9468E7: mov     ecx, ebp
0x9468E9: call    sub_9465A0
0x9468EE: mov     eax, [edi+1Ch]
0x9468F1: inc     esi
0x9468F2: cmp     esi, eax
0x9468F4: mov     eax, [esp+1Ch+var_4]
0x9468F8: jl      short loc_9468A8
0x9468FA: test    eax, eax
0x9468FC: js      short loc_946933
0x9468FE: mov     ecx, ds:0BA9DE4h
0x946904: mov     edx, large fs:2Ch
0x94690B: mov     ecx, [edx+ecx*4]
0x94690E: mov     ecx, [ecx+19Ch]
0x946914: cmp     ecx, ebx
0x946916: jnz     short loc_94691E
0x946918: mov     ecx, ds:0BA7D9Ch
0x94691E: mov     edx, [esp+1Ch+var_C]
0x946922: and     eax, 3FFFFFFFh
0x946927: push    14h
0x946929: shl     eax, 3
0x94692C: push    eax
0x94692D: push    edx
0x94692E: call    sub_8A75D0
0x946933: pop     edi
0x946934: pop     esi
0x946935: pop     ebp
0x946936: pop     ebx
0x946937: add     esp, 0Ch
0x94693A: retn    4
