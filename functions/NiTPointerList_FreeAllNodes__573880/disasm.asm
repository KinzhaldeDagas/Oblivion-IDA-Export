0x573880: push    esi
0x573881: push    edi
0x573882: mov     edi, ecx
0x573884: mov     esi, [edi+4]
0x573887: test    esi, esi
0x573889: jz      short loc_5738A2
0x57388B: jmp     short loc_573890
0x57388D: align 10h
0x573890: mov     edx, [edi]
0x573892: mov     eax, esi
0x573894: mov     esi, [esi]
0x573896: push    eax
0x573897: mov     eax, [edx+8]
0x57389A: mov     ecx, edi
0x57389C: call    eax
0x57389E: test    esi, esi
0x5738A0: jnz     short loc_573890
0x5738A2: mov     dword ptr [edi+0Ch], 0
0x5738A9: mov     dword ptr [edi+4], 0
0x5738B0: mov     dword ptr [edi+8], 0
0x5738B7: pop     edi
0x5738B8: pop     esi
0x5738B9: retn
