0x61D5D0: push    edi
0x61D5D1: mov     edi, ecx
0x61D5D3: cmp     dword ptr [edi+6Ch], 9
0x61D5D7: jnz     loc_61D6A3
0x61D5DD: mov     eax, [edi+3Ch]
0x61D5E0: push    ebx
0x61D5E1: push    esi
0x61D5E2: mov     esi, [eax+58h]
0x61D5E5: mov     edx, [esi]
0x61D5E7: mov     eax, [edx+184h]
0x61D5ED: mov     ecx, esi
0x61D5EF: call    eax
0x61D5F1: mov     ecx, [edi+3Ch]
0x61D5F4: mov     edx, [ecx]
0x61D5F6: mov     bl, [eax+20h]
0x61D5F9: mov     eax, [edx+380h]
0x61D5FF: call    eax
0x61D601: test    eax, eax
0x61D603: jz      short loc_61D660
0x61D605: cmp     bl, 16h
0x61D608: jz      loc_61D6A1
0x61D60E: mov     edx, [esi]
0x61D610: mov     eax, [edx+184h]
0x61D616: mov     edi, [edi+3Ch]
0x61D619: mov     ecx, esi
0x61D61B: call    eax
0x61D61D: test    eax, eax
0x61D61F: jz      short loc_61D627
0x61D621: cmp     byte ptr [eax+20h], 17h
0x61D625: jz      short loc_61D6A1
0x61D627: mov     edx, [edi]
0x61D629: mov     eax, [edx+380h]
0x61D62F: mov     ecx, edi
0x61D631: call    eax
0x61D633: mov     ecx, eax
0x61D635: call    sub_5E9A60
0x61D63A: test    al, al
0x61D63C: jnz     short loc_61D651
0x61D63E: mov     edx, [edi]
0x61D640: mov     eax, [edx+380h]
0x61D646: mov     ecx, edi
0x61D648: call    eax
0x61D64A: mov     ecx, eax; int
0x61D64C: call    sub_5F80D0
0x61D651: mov     edx, [edi]
0x61D653: mov     eax, [edx+230h]
0x61D659: pop     esi
0x61D65A: pop     ebx
0x61D65B: mov     ecx, edi
0x61D65D: pop     edi
0x61D65E: jmp     eax
0x61D660: mov     edx, [esi]
0x61D662: mov     eax, [edx+184h]
0x61D668: mov     ecx, esi
0x61D66A: call    eax
0x61D66C: cmp     eax, edi
0x61D66E: jz      short loc_61D67E
0x61D670: mov     edx, [esi]
0x61D672: mov     eax, [edx+178h]
0x61D678: push    0
0x61D67A: mov     ecx, esi
0x61D67C: call    eax
0x61D67E: mov     eax, 0Dh
0x61D683: cmp     [edi+70h], eax
0x61D686: jz      short loc_61D694
0x61D688: fld     dword ptr ds:0A30634h
0x61D68E: fstp    dword ptr [edi+188h]
0x61D694: pop     esi
0x61D695: pop     ebx
0x61D696: mov     [edi+70h], eax
0x61D699: mov     ecx, edi
0x61D69B: pop     edi
0x61D69C: jmp     sub_61D320
0x61D6A1: pop     esi
0x61D6A2: pop     ebx
0x61D6A3: pop     edi
0x61D6A4: retn
