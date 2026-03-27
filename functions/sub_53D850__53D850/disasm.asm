0x53D850: push    esi
0x53D851: push    edi
0x53D852: mov     edi, ecx
0x53D854: mov     esi, [edi+3Ch]
0x53D857: test    esi, esi
0x53D859: jz      short loc_53D880
0x53D85B: mov     eax, [esi]
0x53D85D: mov     edx, [eax+4]
0x53D860: mov     ecx, esi
0x53D862: call    edx
0x53D864: test    eax, eax
0x53D866: jz      short loc_53D876
0x53D868: cmp     eax, offset dword_B3CFBC
0x53D86D: jz      short loc_53D8B7
0x53D86F: mov     eax, [eax+4]
0x53D872: test    eax, eax
0x53D874: jnz     short loc_53D868
0x53D876: xor     al, al
0x53D878: neg     al
0x53D87A: sbb     eax, eax
0x53D87C: and     eax, esi
0x53D87E: jnz     short loc_53D8CC
0x53D880: mov     eax, [edi+3Ch]
0x53D883: push    eax
0x53D884: push    offset dword_B3CF5C
0x53D889: call    NiRTTI_Cast
0x53D88E: mov     esi, eax
0x53D890: add     esp, 8
0x53D893: test    esi, esi
0x53D895: jz      short loc_53D8CA
0x53D897: mov     ecx, esi
0x53D899: call    sub_6CC550
0x53D89E: cmp     al, ds:0A79EFCh
0x53D8A4: jz      short loc_53D8CA
0x53D8A6: cmp     byte ptr [esi+0Eh], 1
0x53D8AA: jnz     short loc_53D8BB
0x53D8AC: cmp     al, [esi+0Fh]
0x53D8AF: jnz     short loc_53D8BB
0x53D8B1: mov     eax, [esi+18h]
0x53D8B4: pop     edi
0x53D8B5: pop     esi
0x53D8B6: retn
0x53D8B7: mov     al, 1
0x53D8B9: jmp     short loc_53D878
0x53D8BB: mov     ecx, [esi+14h]
0x53D8BE: movzx   eax, al
0x53D8C1: lea     eax, [eax+eax*2]
0x53D8C4: mov     eax, [ecx+eax*8]
0x53D8C7: pop     edi
0x53D8C8: pop     esi
0x53D8C9: retn
0x53D8CA: xor     eax, eax
0x53D8CC: pop     edi
0x53D8CD: pop     esi
0x53D8CE: retn
