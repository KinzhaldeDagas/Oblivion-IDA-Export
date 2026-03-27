0x748920: push    esi
0x748921: mov     esi, ecx
0x748923: mov     eax, [esi+18h]
0x748926: test    eax, eax
0x748928: jnz     short loc_74892E
0x74892A: pop     esi
0x74892B: retn    8
0x74892E: mov     ecx, eax
0x748930: sub     ecx, [esi+14h]
0x748933: push    edi
0x748934: mov     edi, [esp+8+Size]
0x748938: cmp     edi, ecx
0x74893A: jbe     short loc_74897A
0x74893C: lea     edx, [eax+ecx]
0x74893F: cmp     edi, edx
0x748941: push    ebx
0x748942: push    ebp
0x748943: ja      short loc_74894A
0x748945: lea     ebx, [eax+eax]
0x748948: jmp     short loc_748950
0x74894A: sub     eax, ecx
0x74894C: add     eax, edi
0x74894E: mov     ebx, eax
0x748950: push    ebx; Size
0x748951: call    FormHeapAlloc
0x748956: mov     ecx, [esi+0Ch]
0x748959: mov     ebp, eax
0x74895B: mov     eax, [esi+14h]
0x74895E: push    eax; Size
0x74895F: push    ecx; Src
0x748960: push    ebp; Dst
0x748961: call    _memcpy
0x748966: mov     edx, [esi+0Ch]
0x748969: push    edx
0x74896A: call    FormHeapFree
0x74896F: add     esp, 14h
0x748972: mov     [esi+0Ch], ebp
0x748975: pop     ebp
0x748976: mov     [esi+18h], ebx
0x748979: pop     ebx
0x74897A: mov     ecx, [esi+0Ch]
0x74897D: mov     eax, [esp+8+Src]
0x748981: add     ecx, [esi+14h]
0x748984: push    edi; Size
0x748985: push    eax; Src
0x748986: push    ecx; Dst
0x748987: call    _memcpy
0x74898C: add     [esi+14h], edi
0x74898F: add     esp, 0Ch
0x748992: mov     eax, edi
0x748994: pop     edi
0x748995: pop     esi
0x748996: retn    8
