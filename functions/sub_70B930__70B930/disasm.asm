0x70B930: push    edi
0x70B931: mov     edi, ecx
0x70B933: mov     eax, [edi+0C0h]
0x70B939: test    eax, eax
0x70B93B: jz      short loc_70B974
0x70B93D: push    esi
0x70B93E: mov     esi, [esp+8+arg_0]
0x70B942: cmp     esi, [eax+8]
0x70B945: lea     ecx, [eax+8]
0x70B948: mov     edx, eax
0x70B94A: mov     eax, [eax]
0x70B94C: jz      short loc_70B957
0x70B94E: test    eax, eax
0x70B950: jnz     short loc_70B942
0x70B952: pop     esi
0x70B953: pop     edi
0x70B954: retn    4
0x70B957: test    edx, edx
0x70B959: jz      short loc_70B973
0x70B95B: lea     eax, [esp+8+arg_0]
0x70B95F: push    eax
0x70B960: lea     ecx, [edi+0BCh]
0x70B966: call    sub_776690
0x70B96B: push    edi
0x70B96C: mov     ecx, esi
0x70B96E: call    sub_70B930
0x70B973: pop     esi
0x70B974: pop     edi
0x70B975: retn    4
