0x435FE0: sub     esp, 8
0x435FE3: push    ebx
0x435FE4: push    ebp
0x435FE5: push    edi
0x435FE6: mov     edi, ecx
0x435FE8: mov     eax, [edi]
0x435FEA: mov     ecx, [eax+14h]
0x435FED: mov     eax, [ecx]
0x435FEF: lea     ebp, [eax+eax*2]
0x435FF2: xor     ecx, ecx
0x435FF4: mov     eax, ebp
0x435FF6: mov     edx, 4
0x435FFB: mul     edx
0x435FFD: seto    cl
0x436000: neg     ecx
0x436002: or      ecx, eax
0x436004: push    ecx; Size
0x436005: call    FormHeapAlloc
0x43600A: mov     ecx, [edi]
0x43600C: mov     edx, [ecx+4]
0x43600F: mov     ebx, eax
0x436011: lea     eax, ds:0[ebp*4]
0x436018: push    eax; Size
0x436019: push    edx; Src
0x43601A: push    ebx; Dst
0x43601B: call    _memcpy
0x436020: xor     ecx, ecx
0x436022: add     esp, 10h
0x436025: cmp     [edi+1Ch], ecx
0x436028: mov     [esp+14h+var_8], ecx
0x43602C: mov     [esp+14h+var_4], ecx
0x436030: jz      short loc_43606E
0x436032: push    esi
0x436033: mov     esi, [edi+1Ch]
0x436036: mov     eax, [esi+4]
0x436039: mov     [edi+1Ch], eax
0x43603C: xor     eax, eax
0x43603E: cmp     ebp, ecx
0x436040: jbe     short loc_43604E
0x436042: cmp     esi, [ebx+eax*4]
0x436045: jz      short loc_43608C
0x436047: add     eax, 1
0x43604A: cmp     eax, ebp
0x43604C: jb      short loc_436042
0x43604E: mov     edx, [esi]
0x436050: mov     [esi+4], ecx
0x436053: mov     ecx, [edi]
0x436055: mov     eax, [ecx]
0x436057: mov     eax, [eax+20h]
0x43605A: push    edx
0x43605B: call    eax
0x43605D: push    esi
0x43605E: call    FormHeapFree
0x436063: add     esp, 4
0x436066: xor     ecx, ecx
0x436068: cmp     [edi+1Ch], ecx
0x43606B: jnz     short loc_436033
0x43606D: pop     esi
0x43606E: push    ebx
0x43606F: call    FormHeapFree
0x436074: mov     ecx, [esp+18h+var_8]
0x436078: mov     edx, [esp+18h+var_4]
0x43607C: add     esp, 4
0x43607F: mov     [edi+1Ch], ecx
0x436082: mov     [edi+20h], edx
0x436085: pop     edi
0x436086: pop     ebp
0x436087: pop     ebx
0x436088: add     esp, 8
0x43608B: retn
0x43608C: mov     edx, [esp+18h+var_8]
0x436090: add     [esp+18h+var_4], 1
0x436095: mov     [esi+4], edx
0x436098: mov     [esp+18h+var_8], esi
0x43609C: jmp     short loc_436068
