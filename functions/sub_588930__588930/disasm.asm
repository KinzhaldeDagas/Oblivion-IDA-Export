0x588930: push    ebx
0x588931: push    esi
0x588932: mov     ebx, ecx
0x588934: push    edi
0x588935: mov     edi, [ebx+10h]
0x588938: mov     eax, [edi+4]
0x58893B: xor     esi, esi
0x58893D: cmp     eax, esi
0x58893F: jz      short loc_5889A0
0x588941: mov     ecx, [eax]
0x588943: cmp     ecx, esi
0x588945: jz      short loc_58894D
0x588947: mov     ecx, [ecx]
0x588949: cmp     ecx, esi
0x58894B: jnz     short loc_588947
0x58894D: mov     ecx, [eax]
0x58894F: cmp     ecx, esi
0x588951: jz      short loc_588959
0x588953: mov     edx, [eax+4]
0x588956: mov     [ecx+4], edx
0x588959: mov     ecx, [eax+4]
0x58895C: cmp     ecx, esi
0x58895E: jz      short loc_588964
0x588960: mov     edx, [eax]
0x588962: mov     [ecx], edx
0x588964: mov     ecx, [eax+10h]
0x588967: cmp     ecx, esi
0x588969: jz      short loc_588971
0x58896B: mov     edx, [eax+14h]
0x58896E: mov     [ecx+14h], edx
0x588971: mov     ecx, [eax+14h]
0x588974: cmp     ecx, esi
0x588976: jz      short loc_58897E
0x588978: mov     edx, [eax+10h]
0x58897B: mov     [ecx+10h], edx
0x58897E: push    eax
0x58897F: mov     [eax], esi
0x588981: mov     [eax+4], esi
0x588984: mov     [eax+10h], esi
0x588987: mov     [eax+14h], esi
0x58898A: call    FormHeapFree
0x58898F: mov     eax, [edi+4]
0x588992: add     esp, 4
0x588995: cmp     eax, esi
0x588997: jnz     short loc_588941
0x588999: mov     eax, [ebx+10h]
0x58899C: pop     edi
0x58899D: pop     esi
0x58899E: pop     ebx
0x58899F: retn
0x5889A0: mov     eax, edi
0x5889A2: pop     edi
0x5889A3: pop     esi
0x5889A4: pop     ebx
0x5889A5: retn
