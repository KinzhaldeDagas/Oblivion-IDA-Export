0x6FF760: push    esi
0x6FF761: push    edi
0x6FF762: mov     di, [esp+8+arg_0]
0x6FF767: test    di, di
0x6FF76A: mov     esi, ecx
0x6FF76C: jnz     short loc_6FF775
0x6FF76E: pop     edi
0x6FF76F: xor     al, al
0x6FF771: pop     esi
0x6FF772: retn    4
0x6FF775: push    offset stru_B3F600; lpCriticalSection
0x6FF77A: call    dword ptr ds:0A2806Ch
0x6FF780: call    dword ptr ds:0A2808Ch
0x6FF786: add     dword ptr ds:0B3F67Ch, 1
0x6FF78D: mov     ds:0B3F678h, eax
0x6FF792: xor     ecx, ecx
0x6FF794: cmp     [esi+16h], cx
0x6FF798: movzx   eax, di
0x6FF79B: mov     edx, 4
0x6FF7A0: mov     [esi+16h], di
0x6FF7A4: jnz     short loc_6FF7C3
0x6FF7A6: mul     edx
0x6FF7A8: seto    cl
0x6FF7AB: neg     ecx
0x6FF7AD: or      ecx, eax
0x6FF7AF: push    ecx; Size
0x6FF7B0: call    FormHeapAlloc
0x6FF7B5: add     esp, 4
0x6FF7B8: mov     [esi+10h], eax
0x6FF7BB: mov     word ptr [esi+14h], 0
0x6FF7C1: jmp     short loc_6FF7F6
0x6FF7C3: mul     edx
0x6FF7C5: seto    cl
0x6FF7C8: neg     ecx
0x6FF7CA: or      ecx, eax
0x6FF7CC: push    ecx; Size
0x6FF7CD: call    FormHeapAlloc
0x6FF7D2: mov     ecx, [esi+10h]
0x6FF7D5: mov     edi, eax
0x6FF7D7: movzx   eax, word ptr [esi+14h]
0x6FF7DB: add     eax, eax
0x6FF7DD: add     eax, eax
0x6FF7DF: push    eax; Size
0x6FF7E0: push    ecx; Src
0x6FF7E1: push    edi; Dst
0x6FF7E2: call    _memcpy
0x6FF7E7: mov     edx, [esi+10h]
0x6FF7EA: push    edx
0x6FF7EB: call    FormHeapFree
0x6FF7F0: add     esp, 14h
0x6FF7F3: mov     [esi+10h], edi
0x6FF7F6: sub     dword ptr ds:0B3F67Ch, 1
0x6FF7FD: jnz     short loc_6FF809
0x6FF7FF: mov     dword ptr ds:0B3F678h, 0
0x6FF809: push    offset stru_B3F600; lpCriticalSection
0x6FF80E: call    dword ptr ds:0A28074h
0x6FF814: pop     edi
0x6FF815: mov     al, 1
0x6FF817: pop     esi
0x6FF818: retn    4
