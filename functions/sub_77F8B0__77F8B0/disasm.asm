0x77F8B0: push    esi
0x77F8B1: push    edi
0x77F8B2: mov     edi, [esp+8+arg_0]
0x77F8B6: test    byte ptr [edi+18h], 1
0x77F8BA: mov     esi, ecx
0x77F8BC: mov     eax, [esi]
0x77F8BE: mov     edx, [eax+64h]
0x77F8C1: push    0
0x77F8C3: jz      short loc_77F902
0x77F8C5: push    1
0x77F8C7: push    1Bh
0x77F8C9: call    edx
0x77F8CB: movzx   ecx, byte ptr [edi+18h]
0x77F8CF: mov     eax, [esi]
0x77F8D1: mov     eax, [eax+64h]
0x77F8D4: shr     ecx, 1
0x77F8D6: and     ecx, 0Fh
0x77F8D9: mov     edx, [esi+ecx*4+20h]
0x77F8DD: push    0
0x77F8DF: push    edx
0x77F8E0: push    13h
0x77F8E2: mov     ecx, esi
0x77F8E4: call    eax
0x77F8E6: movzx   eax, word ptr [edi+18h]
0x77F8EA: mov     edx, [esi]
0x77F8EC: mov     edx, [edx+64h]
0x77F8EF: shr     eax, 5
0x77F8F2: and     eax, 0Fh
0x77F8F5: mov     ecx, [esi+eax*4+20h]
0x77F8F9: push    0
0x77F8FB: push    ecx
0x77F8FC: push    14h
0x77F8FE: mov     ecx, esi
0x77F900: jmp     short loc_77F906
0x77F902: push    0
0x77F904: push    1Bh
0x77F906: call    edx
0x77F908: mov     ax, [edi+18h]
0x77F90C: shr     ax, 9
0x77F910: test    al, 1
0x77F912: push    0
0x77F914: mov     ecx, esi
0x77F916: jz      short loc_77F956
0x77F918: mov     edx, [esi]
0x77F91A: mov     eax, [edx+64h]
0x77F91D: push    1
0x77F91F: push    0Fh
0x77F921: call    eax
0x77F923: movzx   eax, word ptr [edi+18h]
0x77F927: mov     edx, [esi]
0x77F929: mov     edx, [edx+64h]
0x77F92C: shr     eax, 0Ah
0x77F92F: and     eax, 7
0x77F932: mov     ecx, [esi+eax*4+4Ch]
0x77F936: push    0
0x77F938: push    ecx
0x77F939: push    19h
0x77F93B: mov     ecx, esi
0x77F93D: call    edx
0x77F93F: movzx   ecx, byte ptr [edi+1Ah]
0x77F943: mov     eax, [esi]
0x77F945: mov     edx, [eax+64h]
0x77F948: push    0
0x77F94A: push    ecx
0x77F94B: push    18h
0x77F94D: mov     ecx, esi
0x77F94F: call    edx
0x77F951: pop     edi
0x77F952: pop     esi
0x77F953: retn    4
0x77F956: mov     eax, [esi]
0x77F958: mov     edx, [eax+64h]
0x77F95B: push    0
0x77F95D: push    0Fh
0x77F95F: call    edx
0x77F961: pop     edi
0x77F962: pop     esi
0x77F963: retn    4
