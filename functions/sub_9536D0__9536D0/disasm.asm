0x9536D0: sub     esp, 10h
0x9536D3: push    ebx
0x9536D4: push    ebp
0x9536D5: mov     ebp, [esp+18h+arg_0]
0x9536D9: push    esi
0x9536DA: mov     esi, eax
0x9536DC: mov     eax, [ebp+0]
0x9536DF: push    edi
0x9536E0: mov     ecx, ebp
0x9536E2: call    dword ptr [eax+1Ch]
0x9536E5: mov     ecx, ds:0BA9DE4h
0x9536EB: mov     edx, large fs:2Ch
0x9536F2: mov     ebx, [edx+ecx*4]
0x9536F5: mov     ecx, [ebx+19Ch]
0x9536FB: mov     [esp+20h+arg_0], eax
0x9536FF: xor     eax, eax
0x953701: mov     [esp+20h+var_10], eax
0x953705: mov     [esp+20h+var_C], eax
0x953709: mov     [esp+20h+var_8], 80000000h
0x953711: mov     edx, [ecx+20h]
0x953714: lea     eax, [esi+10h]
0x953717: and     eax, 0FFFFFFF0h
0x95371A: lea     edi, [edx+eax]
0x95371D: cmp     edi, [ecx+2Ch]
0x953720: ja      short loc_953729
0x953722: mov     [ecx+20h], edi
0x953725: mov     eax, edx
0x953727: jmp     short loc_95372F
0x953729: mov     edx, [ecx]
0x95372B: push    eax
0x95372C: call    dword ptr [edx+0Ch]
0x95372F: mov     [esp+20h+var_10], eax
0x953733: mov     ecx, esi
0x953735: mov     [esp+20h+var_4], eax
0x953739: mov     eax, [esp+20h+var_C]
0x95373D: or      ecx, 80000000h
0x953743: cmp     esi, eax
0x953745: mov     [esp+20h+var_8], ecx
0x953749: jle     short loc_953783
0x95374B: and     ecx, 3FFFFFFFh
0x953751: cmp     ecx, esi
0x953753: mov     edi, eax
0x953755: jge     short loc_953770
0x953757: lea     eax, [ecx+ecx]
0x95375A: cmp     esi, eax
0x95375C: jl      short loc_953760
0x95375E: mov     eax, esi
0x953760: push    1
0x953762: push    eax
0x953763: lea     eax, [esp+28h+var_10]
0x953767: push    eax
0x953768: call    sub_8A6E40
0x95376D: add     esp, 0Ch
0x953770: cmp     edi, esi
0x953772: mov     eax, edi
0x953774: jge     short loc_953783
0x953776: mov     ecx, [esp+20h+var_10]
0x95377A: mov     byte ptr [eax+ecx], 0
0x95377E: inc     eax
0x95377F: cmp     eax, esi
0x953781: jl      short loc_953776
0x953783: mov     ecx, [esp+20h+arg_0]
0x953787: lea     eax, [esi-1]
0x95378A: and     eax, ecx
0x95378C: mov     [esp+20h+var_C], esi
0x953790: jz      short loc_9537A2
0x953792: mov     edx, [ebp+0]
0x953795: sub     esi, eax
0x953797: mov     eax, [esp+20h+var_10]
0x95379B: push    esi
0x95379C: push    eax
0x95379D: mov     ecx, ebp
0x95379F: call    dword ptr [edx+0Ch]
0x9537A2: mov     ecx, [ebx+19Ch]
0x9537A8: mov     eax, [esp+20h+var_4]
0x9537AC: cmp     eax, [ecx+28h]
0x9537AF: mov     [ecx+20h], eax
0x9537B2: jnz     short loc_9537BA
0x9537B4: mov     edx, [ecx]
0x9537B6: push    eax
0x9537B7: call    dword ptr [edx+10h]
0x9537BA: mov     eax, [esp+20h+var_8]
0x9537BE: test    eax, eax
0x9537C0: js      short loc_9537DA
0x9537C2: mov     ecx, [ebx+19Ch]
0x9537C8: push    14h
0x9537CA: and     eax, 3FFFFFFFh
0x9537CF: push    eax
0x9537D0: mov     eax, [esp+28h+var_10]
0x9537D4: push    eax
0x9537D5: call    sub_8A75D0
0x9537DA: pop     edi
0x9537DB: pop     esi
0x9537DC: pop     ebp
0x9537DD: pop     ebx
0x9537DE: add     esp, 10h
0x9537E1: retn
