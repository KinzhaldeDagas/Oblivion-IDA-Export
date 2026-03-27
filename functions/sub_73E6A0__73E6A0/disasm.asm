0x73E6A0: push    esi
0x73E6A1: push    edi
0x73E6A2: mov     edi, [esp+8+arg_0]
0x73E6A6: mov     esi, ecx
0x73E6A8: cmp     edi, [esi+28h]
0x73E6AB: jz      short loc_73E718
0x73E6AD: test    edi, edi
0x73E6AF: jnz     short loc_73E6C8
0x73E6B1: mov     eax, [esi+2Ch]
0x73E6B4: push    eax
0x73E6B5: call    FormHeapFree
0x73E6BA: add     esp, 4
0x73E6BD: mov     [esi+2Ch], edi
0x73E6C0: mov     [esi+28h], edi
0x73E6C3: pop     edi
0x73E6C4: pop     esi
0x73E6C5: retn    4
0x73E6C8: xor     ecx, ecx
0x73E6CA: mov     eax, edi
0x73E6CC: mov     edx, 4
0x73E6D1: mul     edx
0x73E6D3: seto    cl
0x73E6D6: push    ebx
0x73E6D7: neg     ecx
0x73E6D9: or      ecx, eax
0x73E6DB: push    ecx; Size
0x73E6DC: call    FormHeapAlloc
0x73E6E1: mov     ebx, eax
0x73E6E3: mov     eax, [esi+2Ch]
0x73E6E6: add     esp, 4
0x73E6E9: test    eax, eax
0x73E6EB: jz      short loc_73E705
0x73E6ED: mov     ecx, [esi+28h]
0x73E6F0: cmp     ecx, edi
0x73E6F2: jl      short loc_73E6F6
0x73E6F4: mov     ecx, edi
0x73E6F6: add     ecx, ecx
0x73E6F8: add     ecx, ecx
0x73E6FA: push    ecx; Size
0x73E6FB: push    eax; Src
0x73E6FC: push    ebx; Dst
0x73E6FD: call    _memcpy
0x73E702: add     esp, 0Ch
0x73E705: mov     edx, [esi+2Ch]
0x73E708: push    edx
0x73E709: call    FormHeapFree
0x73E70E: add     esp, 4
0x73E711: mov     [esi+2Ch], ebx
0x73E714: mov     [esi+28h], edi
0x73E717: pop     ebx
0x73E718: pop     edi
0x73E719: pop     esi
0x73E71A: retn    4
