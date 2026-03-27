0x8DC920: push    ebx
0x8DC921: mov     ebx, [esp+4+arg_4]
0x8DC925: push    esi
0x8DC926: mov     esi, [esp+8+arg_0]
0x8DC92A: push    edi
0x8DC92B: mov     dword ptr [ebx+10h], 0
0x8DC932: mov     edi, [esi+14Ch]
0x8DC938: dec     edi
0x8DC939: js      short loc_8DC956
0x8DC93B: jmp     short loc_8DC940
0x8DC93D: align 10h
0x8DC940: mov     eax, [esi+148h]
0x8DC946: mov     ecx, [eax+edi*4]
0x8DC949: test    ecx, ecx
0x8DC94B: jz      short loc_8DC953
0x8DC94D: mov     edx, [ecx]
0x8DC94F: push    ebx
0x8DC950: call    dword ptr [edx+8]
0x8DC953: dec     edi
0x8DC954: jns     short loc_8DC940
0x8DC956: mov     edx, [esi+14Ch]
0x8DC95C: dec     edx
0x8DC95D: js      short loc_8DC99E
0x8DC95F: nop
0x8DC960: mov     eax, [esi+148h]
0x8DC966: cmp     dword ptr [eax+edx*4], 0
0x8DC96A: jnz     short loc_8DC99B
0x8DC96C: mov     ebx, [esi+14Ch]
0x8DC972: dec     ebx
0x8DC973: mov     ecx, ebx
0x8DC975: cmp     edx, ecx
0x8DC977: mov     [esi+14Ch], ebx
0x8DC97D: mov     eax, edx
0x8DC97F: jge     short loc_8DC99B
0x8DC981: mov     ecx, [esi+148h]
0x8DC987: mov     edi, [ecx+eax*4+4]
0x8DC98B: lea     ecx, [ecx+eax*4]
0x8DC98E: mov     [ecx], edi
0x8DC990: mov     ecx, [esi+14Ch]
0x8DC996: inc     eax
0x8DC997: cmp     eax, ecx
0x8DC999: jl      short loc_8DC981
0x8DC99B: dec     edx
0x8DC99C: jns     short loc_8DC960
0x8DC99E: pop     edi
0x8DC99F: pop     esi
0x8DC9A0: pop     ebx
0x8DC9A1: retn
