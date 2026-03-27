0x7EE3E0: push    esi
0x7EE3E1: push    edi
0x7EE3E2: mov     edi, ecx
0x7EE3E4: mov     eax, [edi+80h]
0x7EE3EA: mov     edx, [eax+4]
0x7EE3ED: lea     esi, [edi+80h]
0x7EE3F3: mov     ecx, esi
0x7EE3F5: call    edx
0x7EE3F7: mov     ecx, [esp+8+arg_0]
0x7EE3FB: mov     [eax+8], ecx
0x7EE3FE: mov     dword ptr [eax], 0
0x7EE404: mov     edx, [esi+8]
0x7EE407: mov     [eax+4], edx
0x7EE40A: mov     ecx, [esi+8]
0x7EE40D: test    ecx, ecx
0x7EE40F: jz      short loc_7EE426
0x7EE411: mov     [ecx], eax
0x7EE413: add     dword ptr [esi+0Ch], 1
0x7EE417: mov     [esi+8], eax
0x7EE41A: mov     dword ptr [edi+24h], 0
0x7EE421: pop     edi
0x7EE422: pop     esi
0x7EE423: retn    4
0x7EE426: add     dword ptr [esi+0Ch], 1
0x7EE42A: mov     [esi+4], eax
0x7EE42D: mov     [esi+8], eax
0x7EE430: mov     dword ptr [edi+24h], 0
0x7EE437: pop     edi
0x7EE438: pop     esi
0x7EE439: retn    4
