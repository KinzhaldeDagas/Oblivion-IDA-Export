0x6FF820: push    ebx
0x6FF821: push    esi
0x6FF822: mov     esi, [esp+8+Src]
0x6FF826: test    esi, esi
0x6FF828: mov     ebx, ecx
0x6FF82A: jnz     short loc_6FF833
0x6FF82C: pop     esi
0x6FF82D: xor     al, al
0x6FF82F: pop     ebx
0x6FF830: retn    8
0x6FF833: push    edi
0x6FF834: mov     edi, [esp+0Ch+arg_4]
0x6FF838: test    edi, edi
0x6FF83A: jz      short loc_6FF88D
0x6FF83C: mov     ecx, edi
0x6FF83E: call    sub_452A60
0x6FF843: test    eax, eax
0x6FF845: mov     ecx, edi
0x6FF847: jnz     short loc_6FF85D
0x6FF849: push    esi; Src
0x6FF84A: call    sub_721440
0x6FF84F: push    edi
0x6FF850: mov     ecx, ebx
0x6FF852: call    sub_6FF570
0x6FF857: pop     edi
0x6FF858: pop     esi
0x6FF859: pop     ebx
0x6FF85A: retn    8
0x6FF85D: call    sub_452A60
0x6FF862: mov     ecx, esi
0x6FF864: mov     dl, [ecx]
0x6FF866: cmp     dl, [eax]
0x6FF868: jnz     short loc_6FF884
0x6FF86A: test    dl, dl
0x6FF86C: jz      short loc_6FF880
0x6FF86E: mov     dl, [ecx+1]
0x6FF871: cmp     dl, [eax+1]
0x6FF874: jnz     short loc_6FF884
0x6FF876: add     ecx, 2
0x6FF879: add     eax, 2
0x6FF87C: test    dl, dl
0x6FF87E: jnz     short loc_6FF864
0x6FF880: xor     eax, eax
0x6FF882: jmp     short loc_6FF889
0x6FF884: sbb     eax, eax
0x6FF886: sbb     eax, 0FFFFFFFFh
0x6FF889: test    eax, eax
0x6FF88B: jz      short loc_6FF84F
0x6FF88D: pop     edi
0x6FF88E: pop     esi
0x6FF88F: xor     al, al
0x6FF891: pop     ebx
0x6FF892: retn    8
