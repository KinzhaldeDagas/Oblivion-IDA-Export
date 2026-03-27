0x752D80: push    ebx
0x752D81: push    esi
0x752D82: push    edi
0x752D83: mov     edi, [esp+0Ch+arg0]
0x752D87: push    edi; arg0
0x752D88: mov     esi, ecx
0x752D8A: call    sub_700750
0x752D8F: mov     ecx, [edi]
0x752D91: lea     eax, [esp+0Ch+arg0]
0x752D95: push    eax
0x752D96: push    esi
0x752D97: call    NiTMap_GetAt
0x752D9C: mov     edx, [esi+10h]
0x752D9F: mov     ebx, [esp+0Ch+arg0]
0x752DA3: lea     ecx, [esp+0Ch+arg0]
0x752DA7: push    ecx
0x752DA8: mov     ecx, [edi]
0x752DAA: push    edx
0x752DAB: call    NiTMap_GetAt
0x752DB0: mov     eax, [esp+0Ch+arg0]
0x752DB4: pop     edi
0x752DB5: pop     esi
0x752DB6: mov     [ebx+10h], eax
0x752DB9: pop     ebx
0x752DBA: retn    4
