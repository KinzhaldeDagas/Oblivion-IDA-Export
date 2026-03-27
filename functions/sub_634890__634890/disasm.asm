0x634890: mov     eax, [ecx+30h]
0x634893: mov     edx, [eax+4]
0x634896: push    esi
0x634897: lea     esi, [ecx+30h]
0x63489A: mov     ecx, esi
0x63489C: call    edx
0x63489E: mov     ecx, [esp+4+arg_0]
0x6348A2: mov     [eax+8], ecx
0x6348A5: mov     dword ptr [eax+4], 0
0x6348AC: mov     edx, [esi+4]
0x6348AF: mov     [eax], edx
0x6348B1: mov     ecx, [esi+4]
0x6348B4: test    ecx, ecx
0x6348B6: jz      short loc_6348C6
0x6348B8: mov     [ecx+4], eax
0x6348BB: add     dword ptr [esi+0Ch], 1
0x6348BF: mov     [esi+4], eax
0x6348C2: pop     esi
0x6348C3: retn    4
0x6348C6: add     dword ptr [esi+0Ch], 1
0x6348CA: mov     [esi+8], eax
0x6348CD: mov     [esi+4], eax
0x6348D0: pop     esi
0x6348D1: retn    4
