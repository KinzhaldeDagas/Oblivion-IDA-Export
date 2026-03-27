0x88D820: push    ebp
0x88D821: mov     ebp, esp
0x88D823: and     esp, 0FFFFFFF0h
0x88D826: push    ecx
0x88D827: mov     eax, ds:0B30AACh
0x88D82C: xor     eax, esp
0x88D82E: mov     [esp+4+var_4], eax
0x88D831: push    ebx
0x88D832: mov     ebx, [ebp+arg_0]
0x88D835: push    esi
0x88D836: mov     esi, ecx
0x88D838: test    esi, esi
0x88D83A: push    edi
0x88D83B: jz      short loc_88D875
0x88D83D: mov     edi, [esi+8]
0x88D840: test    edi, edi
0x88D842: jz      short loc_88D875
0x88D844: call    sub_89F570
0x88D849: movaps  xmm0, xmmword ptr [edi+70h]
0x88D84D: movaps  xmmword ptr [ebx], xmm0
0x88D850: movaps  xmm0, xmmword ptr [edi+80h]
0x88D857: mov     ecx, esi
0x88D859: movaps  xmmword ptr [ebx+10h], xmm0
0x88D85D: call    sub_89F570
0x88D862: pop     edi
0x88D863: pop     esi
0x88D864: pop     ebx
0x88D865: mov     ecx, [esp+4+var_4]
0x88D868: xor     ecx, esp
0x88D86A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88D86F: mov     esp, ebp
0x88D871: pop     ebp
0x88D872: retn    4
0x88D875: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x88D87C: mov     ecx, [esp+10h+var_4]
0x88D880: pop     edi
0x88D881: pop     esi
0x88D882: movaps  xmmword ptr [ebx], xmm0
0x88D885: movaps  xmmword ptr [ebx+10h], xmm0
0x88D889: pop     ebx
0x88D88A: xor     ecx, esp
0x88D88C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88D891: mov     esp, ebp
0x88D893: pop     ebp
0x88D894: retn    4
