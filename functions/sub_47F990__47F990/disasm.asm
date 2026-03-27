0x47F990: mov     edx, [ecx+48h]
0x47F993: push    esi
0x47F994: xor     eax, eax
0x47F996: test    edx, edx
0x47F998: push    edi
0x47F999: jle     short loc_47F9B2
0x47F99B: mov     esi, [ecx+44h]
0x47F99E: mov     edi, [esp+8+arg_4]
0x47F9A2: mov     ecx, esi
0x47F9A4: cmp     [ecx], edi
0x47F9A6: jz      short loc_47F9C8
0x47F9A8: add     eax, 1
0x47F9AB: add     ecx, 10h
0x47F9AE: cmp     eax, edx
0x47F9B0: jl      short loc_47F9A4
0x47F9B2: mov     eax, [esp+8+arg_0]
0x47F9B6: pop     edi
0x47F9B7: mov     dword ptr [eax], 0
0x47F9BD: mov     dword ptr [eax+4], 0
0x47F9C4: pop     esi
0x47F9C5: retn    8
0x47F9C8: mov     ecx, [esp+8+arg_0]
0x47F9CC: shl     eax, 4
0x47F9CF: mov     edx, [eax+esi+8]
0x47F9D3: mov     eax, [eax+esi+0Ch]
0x47F9D7: pop     edi
0x47F9D8: mov     [ecx+4], eax
0x47F9DB: mov     [ecx], edx
0x47F9DD: mov     eax, ecx
0x47F9DF: pop     esi
0x47F9E0: retn    8
