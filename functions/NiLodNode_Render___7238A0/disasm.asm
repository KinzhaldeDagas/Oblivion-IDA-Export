0x7238A0: push    esi
0x7238A1: mov     esi, ecx
0x7238A3: cmp     byte ptr [esi+100h], 0
0x7238AA: push    edi
0x7238AB: mov     edi, [esp+8+a2]
0x7238AF: jz      short loc_723923
0x7238B1: mov     ecx, [esi+0FCh]
0x7238B7: test    ecx, ecx
0x7238B9: jz      short loc_723923
0x7238BB: mov     eax, [edi+0Ch]
0x7238BE: mov     edx, [ecx]
0x7238C0: push    esi
0x7238C1: push    eax
0x7238C2: mov     eax, [edx+4Ch]
0x7238C5: call    eax
0x7238C7: mov     [esi+0E0h], eax
0x7238CD: mov     eax, ds:0B273FCh
0x7238D2: test    eax, eax
0x7238D4: jl      short loc_7238EA
0x7238D6: mov     ecx, [esi+0FCh]
0x7238DC: mov     edx, [ecx]
0x7238DE: push    eax
0x7238DF: mov     eax, [edx+58h]
0x7238E2: call    eax
0x7238E4: mov     [esi+0E0h], eax
0x7238EA: cmp     dword ptr [esi+0E0h], 0
0x7238F1: jl      short loc_723923
0x7238F3: movzx   ecx, word ptr [esi+0B6h]
0x7238FA: lea     ebx, [ebx+0]
0x723900: mov     eax, [esi+0E0h]
0x723906: cmp     eax, ecx
0x723908: jge     short loc_723916
0x72390A: mov     edx, [esi+0B0h]
0x723910: cmp     dword ptr [edx+eax*4], 0
0x723914: jnz     short loc_723923
0x723916: add     eax, 0FFFFFFFFh
0x723919: test    eax, eax
0x72391B: mov     [esi+0E0h], eax
0x723921: jge     short loc_723900
0x723923: push    edi; a2
0x723924: mov     ecx, esi; this
0x723926: call    NiSwitchNode_Render?
0x72392B: pop     edi
0x72392C: pop     esi
0x72392D: retn    4
