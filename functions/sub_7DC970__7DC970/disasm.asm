0x7DC970: push    ebx
0x7DC971: push    esi
0x7DC972: mov     esi, ecx
0x7DC974: push    edi
0x7DC975: lea     edi, [esi+7Ch]
0x7DC978: mov     ebx, 10h
0x7DC97D: lea     ecx, [ecx+0]
0x7DC980: mov     ecx, [edi]
0x7DC982: mov     eax, [esi]
0x7DC984: mov     edx, [eax+94h]
0x7DC98A: push    ecx
0x7DC98B: mov     ecx, esi
0x7DC98D: call    edx
0x7DC98F: add     edi, 4
0x7DC992: sub     ebx, 1
0x7DC995: jnz     short loc_7DC980
0x7DC997: pop     edi
0x7DC998: pop     esi
0x7DC999: pop     ebx
0x7DC99A: retn
