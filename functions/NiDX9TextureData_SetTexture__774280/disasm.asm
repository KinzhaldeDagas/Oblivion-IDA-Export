0x774280: sub     esp, 20h
0x774283: push    esi
0x774284: push    edi
0x774285: mov     edi, [esp+28h+arg_0]
0x774289: mov     eax, [edi]
0x77428B: mov     esi, ecx
0x77428D: mov     ecx, [eax+34h]
0x774290: push    edi
0x774291: call    ecx
0x774293: mov     [esi+5Ch], eax
0x774296: mov     edx, [edi]
0x774298: mov     eax, [edx+28h]
0x77429B: push    edi
0x77429C: call    eax
0x77429E: cmp     eax, 3
0x7742A1: jnz     short loc_7742D0
0x7742A3: mov     ecx, [edi]
0x7742A5: mov     eax, [ecx+44h]
0x7742A8: lea     edx, [esp+28h+a1]
0x7742AC: push    edx
0x7742AD: push    0
0x7742AF: push    edi
0x7742B0: call    eax
0x7742B2: test    eax, eax
0x7742B4: jge     short loc_7742C0
0x7742B6: pop     edi
0x7742B7: xor     al, al
0x7742B9: pop     esi
0x7742BA: add     esp, 20h
0x7742BD: retn    4
0x7742C0: mov     ecx, [esp+28h+var_8]
0x7742C4: mov     edx, [esp+28h+var_4]
0x7742C8: mov     [esi+54h], ecx
0x7742CB: mov     [esi+58h], edx
0x7742CE: jmp     short loc_7742F6
0x7742D0: cmp     eax, 5
0x7742D3: jnz     short loc_77431B
0x7742D5: mov     eax, [edi]
0x7742D7: mov     edx, [eax+44h]
0x7742DA: lea     ecx, [esp+28h+a1]
0x7742DE: push    ecx
0x7742DF: push    0
0x7742E1: push    edi
0x7742E2: call    edx
0x7742E4: test    eax, eax
0x7742E6: jl      short loc_7742B6
0x7742E8: mov     eax, [esp+28h+var_8]
0x7742EC: mov     ecx, [esp+28h+var_4]
0x7742F0: mov     [esi+54h], eax
0x7742F3: mov     [esi+58h], ecx
0x7742F6: mov     eax, [esp+28h+a1]
0x7742FA: cmp     eax, 28h ; '('
0x7742FD: jz      short loc_7742B6
0x7742FF: cmp     eax, 29h ; ')'
0x774302: jz      short loc_7742B6
0x774304: add     esi, 0Ch
0x774307: push    esi; a2
0x774308: push    eax; a1
0x774309: call    D3DFMTToTextureFormat
0x77430E: add     esp, 8
0x774311: pop     edi
0x774312: mov     al, 1
0x774314: pop     esi
0x774315: add     esp, 20h
0x774318: retn    4
0x77431B: cmp     eax, 4
0x77431E: jnz     short loc_774311
0x774320: mov     edx, [edi]
0x774322: mov     ecx, [edx+44h]
0x774325: lea     eax, [esp+28h+a1]
0x774329: push    eax
0x77432A: push    0
0x77432C: push    edi
0x77432D: call    ecx
0x77432F: test    eax, eax
0x774331: jl      short loc_7742B6
0x774333: mov     edx, [esp+28h+var_10]
0x774337: mov     eax, [esp+28h+var_C]
0x77433B: mov     [esi+54h], edx
0x77433E: mov     [esi+58h], eax
0x774341: jmp     short loc_7742F6
