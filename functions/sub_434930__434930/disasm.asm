0x434930: push    ebx
0x434931: push    esi
0x434932: push    edi
0x434933: mov     edi, ecx
0x434935: mov     eax, [edi+8]
0x434938: push    eax
0x434939: call    FormHeapFree
0x43493E: mov     ebx, [esp+10h+arg_0]
0x434942: mov     eax, ebx
0x434944: add     esp, 4
0x434947: lea     edx, [eax+1]
0x43494A: lea     ebx, [ebx+0]
0x434950: mov     cl, [eax]
0x434952: add     eax, 1
0x434955: test    cl, cl
0x434957: jnz     short loc_434950
0x434959: sub     eax, edx
0x43495B: lea     esi, [eax+1]
0x43495E: push    esi; Size
0x43495F: call    FormHeapAlloc
0x434964: push    ebx; Src
0x434965: push    esi; SizeInBytes
0x434966: push    eax; Dst
0x434967: mov     [edi+8], eax
0x43496A: call    _strcpy_s
0x43496F: add     esp, 10h
0x434972: pop     edi
0x434973: pop     esi
0x434974: pop     ebx
0x434975: retn    4
