0x700710: push    esi
0x700711: push    edi
0x700712: mov     edi, [esp+8+arg_0]
0x700716: lea     eax, [esp+8+arg_0]
0x70071A: mov     esi, ecx
0x70071C: mov     ecx, [edi]
0x70071E: push    eax
0x70071F: push    esi
0x700720: call    NiTMap_GetAt
0x700725: test    al, al
0x700727: jz      short loc_700732
0x700729: mov     eax, [esp+8+arg_0]
0x70072D: pop     edi
0x70072E: pop     esi
0x70072F: retn    4
0x700732: mov     edx, [esi]
0x700734: mov     eax, [edx+18h]
0x700737: push    edi
0x700738: mov     ecx, esi
0x70073A: call    eax
0x70073C: pop     edi
0x70073D: pop     esi
0x70073E: retn    4
