0x482530: push    ebx
0x482531: push    esi
0x482532: mov     esi, ecx
0x482534: mov     eax, [esi+0Ch]
0x482537: xor     ebx, ebx
0x482539: test    eax, eax
0x48253B: jbe     short loc_48257E
0x48253D: push    ebp
0x48253E: mov     ebp, [esp+0Ch+arg_0]
0x482542: push    edi
0x482543: xor     edi, edi
0x482545: test    eax, eax
0x482547: jbe     short loc_482572
0x482549: lea     esp, [esp+0]
0x482550: mov     ecx, [esi+10h]
0x482553: imul    eax, ebx
0x482556: add     eax, edi
0x482558: cmp     [ecx+eax*8], ebp
0x48255B: jnz     short loc_482568
0x48255D: mov     edx, [esi]
0x48255F: mov     eax, [edx+1Ch]
0x482562: push    edi
0x482563: push    ebx
0x482564: mov     ecx, esi
0x482566: call    eax
0x482568: mov     eax, [esi+0Ch]
0x48256B: add     edi, 1
0x48256E: cmp     edi, eax
0x482570: jb      short loc_482550
0x482572: mov     eax, [esi+0Ch]
0x482575: add     ebx, 1
0x482578: cmp     ebx, eax
0x48257A: jb      short loc_482543
0x48257C: pop     edi
0x48257D: pop     ebp
0x48257E: pop     esi
0x48257F: pop     ebx
0x482580: retn    4
