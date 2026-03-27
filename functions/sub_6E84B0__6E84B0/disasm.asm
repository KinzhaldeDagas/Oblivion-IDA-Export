0x6E84B0: push    0FFFFFFFFh
0x6E84B2: push    offset SEH_8C8970
0x6E84B7: mov     eax, large fs:0
0x6E84BD: push    eax
0x6E84BE: push    ecx
0x6E84BF: push    ebx
0x6E84C0: push    esi
0x6E84C1: mov     eax, ds:0B30AACh
0x6E84C6: xor     eax, esp
0x6E84C8: push    eax
0x6E84C9: lea     eax, [esp+1Ch+var_C]
0x6E84CD: mov     large fs:0, eax
0x6E84D3: mov     ebx, ecx
0x6E84D5: push    18h; Size
0x6E84D7: call    FormHeapAlloc
0x6E84DC: mov     esi, eax
0x6E84DE: add     esp, 4
0x6E84E1: mov     [esp+1Ch+var_10], esi
0x6E84E5: test    esi, esi
0x6E84E7: mov     [esp+1Ch+var_4], 0
0x6E84EF: jz      short loc_6E8516
0x6E84F1: mov     ecx, esi
0x6E84F3: call    sub_6EC220
0x6E84F8: mov     dword ptr [esi], offset ??_7NiBoolInterpolator@@6B@; const NiBoolInterpolator::`vftable'
0x6E84FE: mov     al, ds:0A7C6ACh
0x6E8503: mov     [esi+0Ch], al
0x6E8506: mov     dword ptr [esi+10h], 0
0x6E850D: mov     dword ptr [esi+14h], 0
0x6E8514: jmp     short loc_6E8518
0x6E8516: xor     esi, esi
0x6E8518: mov     ecx, [esp+1Ch+arg_0]
0x6E851C: push    ecx
0x6E851D: push    esi
0x6E851E: mov     ecx, ebx
0x6E8520: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6E8528: call    sub_6E82F0
0x6E852D: mov     eax, esi
0x6E852F: mov     ecx, [esp+1Ch+var_C]
0x6E8533: mov     large fs:0, ecx
0x6E853A: pop     ecx
0x6E853B: pop     esi
0x6E853C: pop     ebx
0x6E853D: add     esp, 10h
0x6E8540: retn    4
