0x6B47D0: fldz
0x6B47D2: push    esi
0x6B47D3: lea     eax, [ecx+800h]
0x6B47D9: cmp     eax, ecx
0x6B47DB: lea     esi, [ecx+1000h]
0x6B47E1: mov     edx, esi
0x6B47E3: jbe     short loc_6B47F3
0x6B47E5: sub     edx, 4
0x6B47E8: sub     eax, 4
0x6B47EB: fst     dword ptr [edx]
0x6B47ED: cmp     eax, ecx
0x6B47EF: fst     dword ptr [eax]
0x6B47F1: ja      short loc_6B47E5
0x6B47F3: lea     eax, [ecx+1088h]
0x6B47F9: lea     edx, [ecx+1008h]
0x6B47FF: cmp     eax, edx
0x6B4801: jbe     short loc_6B480C
0x6B4803: sub     eax, 4
0x6B4806: cmp     eax, edx
0x6B4808: fst     dword ptr [eax]
0x6B480A: ja      short loc_6B4803
0x6B480C: mov     [esi], ecx
0x6B480E: fstp    st
0x6B4810: mov     dword ptr [ecx+1004h], 0Fh
0x6B481A: pop     esi
0x6B481B: retn
