0x771150: sub     esp, 0Ch
0x771153: push    ebp
0x771154: push    esi
0x771155: mov     esi, ecx
0x771157: mov     eax, [esi+30h]
0x77115A: push    edi
0x77115B: xor     edi, edi
0x77115D: xor     ebp, ebp
0x77115F: cmp     byte ptr [esi+28h], 0
0x771163: jz      loc_7712F2
0x771169: cmp     eax, edi
0x77116B: jz      short loc_771178
0x77116D: mov     ecx, [eax]
0x77116F: mov     edx, [ecx+8]
0x771172: push    eax
0x771173: call    edx
0x771175: mov     [esi+30h], edi
0x771178: push    ebx
0x771179: xor     ebx, ebx
0x77117B: cmp     [esi+20h], edi
0x77117E: jbe     short loc_7711C7
0x771180: mov     edx, [esi+24h]
0x771183: add     edx, edi
0x771185: jz      short loc_7711B3
0x771187: xor     ecx, ecx
0x771189: mov     byte ptr [edx], 0
0x77118C: cmp     [esi+1Ch], ecx
0x77118F: jbe     short loc_7711B3
0x771191: mov     eax, [edx+8]
0x771194: add     eax, 0Ch
0x771197: cmp     dword ptr [eax-4], 0FFFFFFFFh
0x77119B: jz      short loc_7711A8
0x77119D: cmp     dword ptr [eax], 11h
0x7711A0: jz      short loc_7711A8
0x7711A2: add     ebp, 1
0x7711A5: mov     byte ptr [edx], 1
0x7711A8: add     ecx, 1
0x7711AB: add     eax, 1Ch
0x7711AE: cmp     ecx, [esi+1Ch]
0x7711B1: jb      short loc_771197
0x7711B3: add     ebx, 1
0x7711B6: add     edi, 10h
0x7711B9: cmp     ebx, [esi+20h]
0x7711BC: jb      short loc_771180
0x7711BE: test    ebp, ebp
0x7711C0: jbe     short loc_7711C5
0x7711C2: add     ebp, 1
0x7711C5: xor     edi, edi
0x7711C7: cmp     [esi+14h], ebp
0x7711CA: jnb     short loc_7711DB
0x7711CC: mov     eax, [esi+2Ch]
0x7711CF: push    eax
0x7711D0: call    FormHeapFree
0x7711D5: add     esp, 4
0x7711D8: mov     [esi+2Ch], edi
0x7711DB: cmp     ebp, edi
0x7711DD: jnz     short loc_7711EC
0x7711DF: mov     [esi+14h], edi
0x7711E2: pop     ebx
0x7711E3: pop     edi
0x7711E4: pop     esi
0x7711E5: xor     eax, eax
0x7711E7: pop     ebp
0x7711E8: add     esp, 0Ch
0x7711EB: retn
0x7711EC: cmp     [esi+2Ch], edi
0x7711EF: jnz     short loc_771212
0x7711F1: xor     ecx, ecx
0x7711F3: mov     eax, ebp
0x7711F5: mov     edx, 8
0x7711FA: mul     edx
0x7711FC: seto    cl
0x7711FF: mov     [esi+14h], ebp
0x771202: neg     ecx
0x771204: or      ecx, eax
0x771206: push    ecx; Size
0x771207: call    FormHeapAlloc
0x77120C: add     esp, 4
0x77120F: mov     [esi+2Ch], eax
0x771212: xor     edx, edx
0x771214: cmp     [esi+20h], edi
0x771217: mov     [esi+18h], edi
0x77121A: mov     [esp+1Ch+var_4], edx
0x77121E: jbe     short loc_77128A
0x771220: mov     [esp+1Ch+var_8], edi
0x771224: mov     ebx, [esi+24h]
0x771227: add     ebx, [esp+1Ch+var_8]
0x77122B: cmp     byte ptr [ebx], 0
0x77122E: jz      short loc_771279
0x771230: xor     ecx, ecx
0x771232: xor     ebp, ebp
0x771234: cmp     [esi+1Ch], edi
0x771237: mov     [esp+1Ch+var_C], ecx
0x77123B: jbe     short loc_771276
0x77123D: lea     ecx, [ecx+0]
0x771240: mov     eax, [ebx+8]
0x771243: add     eax, edi
0x771245: cmp     dword ptr [eax+8], 0FFFFFFFFh
0x771249: jz      short loc_771269
0x77124B: cmp     dword ptr [eax+0Ch], 11h
0x77124F: jz      short loc_771269
0x771251: push    edx
0x771252: mov     [eax+4], ecx
0x771255: push    eax
0x771256: mov     ecx, esi
0x771258: call    sub_770150
0x77125D: add     [esp+1Ch+var_C], eax
0x771261: mov     ecx, [esp+1Ch+var_C]
0x771265: mov     edx, [esp+1Ch+var_4]
0x771269: add     ebp, 1
0x77126C: add     edi, 1Ch
0x77126F: cmp     ebp, [esi+1Ch]
0x771272: jb      short loc_771240
0x771274: xor     edi, edi
0x771276: mov     [ebx+0Ch], ecx
0x771279: add     [esp+1Ch+var_8], 10h
0x77127E: add     edx, 1
0x771281: cmp     edx, [esi+20h]
0x771284: mov     [esp+1Ch+var_4], edx
0x771288: jb      short loc_771224
0x77128A: mov     eax, [esi+18h]
0x77128D: mov     ecx, [esi+2Ch]
0x771290: mov     word ptr [ecx+eax*8], 0FFh
0x771296: mov     edx, [esi+18h]
0x771299: mov     eax, [esi+2Ch]
0x77129C: mov     [eax+edx*8+2], di
0x7712A1: mov     ecx, [esi+18h]
0x7712A4: mov     edx, [esi+2Ch]
0x7712A7: mov     byte ptr [edx+ecx*8+4], 11h
0x7712AC: mov     eax, [esi+18h]
0x7712AF: mov     ecx, [esi+2Ch]
0x7712B2: mov     byte ptr [ecx+eax*8+5], 0
0x7712B7: mov     edx, [esi+18h]
0x7712BA: mov     eax, [esi+2Ch]
0x7712BD: mov     byte ptr [eax+edx*8+6], 0
0x7712C2: mov     ecx, [esi+18h]
0x7712C5: mov     edx, [esi+2Ch]
0x7712C8: mov     byte ptr [edx+ecx*8+7], 0
0x7712CD: mov     eax, [esi+10h]
0x7712D0: mov     edx, [esi+2Ch]
0x7712D3: mov     ecx, [eax]
0x7712D5: lea     edi, [esi+30h]
0x7712D8: push    edi
0x7712D9: push    edx
0x7712DA: push    eax
0x7712DB: mov     eax, [ecx+158h]
0x7712E1: call    eax
0x7712E3: test    eax, eax
0x7712E5: jl      loc_7711E2
0x7712EB: mov     eax, [edi]
0x7712ED: mov     byte ptr [esi+28h], 0
0x7712F1: pop     ebx
0x7712F2: pop     edi
0x7712F3: pop     esi
0x7712F4: pop     ebp
0x7712F5: add     esp, 0Ch
0x7712F8: retn
