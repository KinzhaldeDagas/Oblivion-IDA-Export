0x52F520: push    ebx
0x52F521: push    esi
0x52F522: push    edi
0x52F523: lea     edi, [ecx+28h]
0x52F526: test    edi, edi
0x52F528: jz      short loc_52F563
0x52F52A: mov     ebx, [esp+0Ch+arg_0]
0x52F52E: mov     edi, edi
0x52F530: mov     eax, [edi]
0x52F532: test    eax, eax
0x52F534: jz      short loc_52F563
0x52F536: mov     esi, [eax+10h]
0x52F539: test    esi, esi
0x52F53B: mov     edi, [edi+4]
0x52F53E: jz      short loc_52F55F
0x52F540: xor     ecx, ecx
0x52F542: test    esi, esi
0x52F544: jbe     short loc_52F55F
0x52F546: cmp     ecx, esi
0x52F548: jnb     short loc_52F552
0x52F54A: mov     edx, [eax+8]
0x52F54D: mov     edx, [edx+ecx*4]
0x52F550: jmp     short loc_52F554
0x52F552: xor     edx, edx
0x52F554: cmp     edx, ebx
0x52F556: jz      short loc_52F565
0x52F558: add     ecx, 1
0x52F55B: cmp     ecx, esi
0x52F55D: jb      short loc_52F54A
0x52F55F: test    edi, edi
0x52F561: jnz     short loc_52F530
0x52F563: xor     eax, eax
0x52F565: pop     edi
0x52F566: pop     esi
0x52F567: pop     ebx
0x52F568: retn    4
