0x740990: mov     eax, [esp+arg_4]
0x740994: push    esi
0x740995: push    edi
0x740996: mov     edi, [esp+8+arg_0]
0x74099A: push    eax
0x74099B: push    edi
0x74099C: mov     esi, ecx
0x74099E: call    sub_7214A0
0x7409A3: cmp     dword ptr [esi+10h], 0
0x7409A7: jz      short loc_7409F9
0x7409A9: cmp     dword ptr [esi+0Ch], 0
0x7409AD: jbe     short loc_7409F9
0x7409AF: mov     ecx, [esi+0Ch]
0x7409B2: mov     [edi+0Ch], ecx
0x7409B5: mov     eax, [esi+0Ch]
0x7409B8: xor     ecx, ecx
0x7409BA: mov     edx, 4
0x7409BF: mul     edx
0x7409C1: seto    cl
0x7409C4: neg     ecx
0x7409C6: or      ecx, eax
0x7409C8: push    ecx; Size
0x7409C9: call    FormHeapAlloc
0x7409CE: mov     [edi+10h], eax
0x7409D1: xor     eax, eax
0x7409D3: add     esp, 4
0x7409D6: cmp     [esi+0Ch], eax
0x7409D9: jbe     short loc_740A07
0x7409DB: jmp     short loc_7409E0
0x7409DD: align 10h
0x7409E0: mov     ecx, [esi+10h]
0x7409E3: mov     ecx, [ecx+eax*4]
0x7409E6: mov     edx, [edi+10h]
0x7409E9: mov     [edx+eax*4], ecx
0x7409EC: add     eax, 1
0x7409EF: cmp     eax, [esi+0Ch]
0x7409F2: jb      short loc_7409E0
0x7409F4: pop     edi
0x7409F5: pop     esi
0x7409F6: retn    8
0x7409F9: mov     dword ptr [edi+10h], 0
0x740A00: mov     dword ptr [edi+0Ch], 0
0x740A07: pop     edi
0x740A08: pop     esi
0x740A09: retn    8
