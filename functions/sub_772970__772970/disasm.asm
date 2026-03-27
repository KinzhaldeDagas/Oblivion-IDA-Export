0x772970: push    esi
0x772971: push    18h; Size
0x772973: call    FormHeapAlloc
0x772978: xor     esi, esi
0x77297A: add     esp, 4
0x77297D: cmp     eax, esi
0x77297F: jz      short loc_77299E
0x772981: mov     ecx, 8
0x772986: mov     [eax], esi
0x772988: mov     [eax+4], esi
0x77298B: mov     [eax+8], esi
0x77298E: mov     [eax+0Ch], ecx
0x772991: mov     [eax+10h], ecx
0x772994: mov     [eax+14h], esi
0x772997: mov     ds:0B427A8h, eax
0x77299C: jmp     short loc_7729A4
0x77299E: mov     ds:0B427A8h, esi
0x7729A4: push    18h; Size
0x7729A6: call    FormHeapAlloc
0x7729AB: add     esp, 4
0x7729AE: cmp     eax, esi
0x7729B0: jz      short loc_7729CF
0x7729B2: mov     ecx, 10h
0x7729B7: mov     [eax], esi
0x7729B9: mov     [eax+4], esi
0x7729BC: mov     [eax+8], esi
0x7729BF: mov     [eax+14h], esi
0x7729C2: mov     [eax+0Ch], ecx
0x7729C5: mov     [eax+10h], ecx
0x7729C8: mov     ds:0B427ACh, eax
0x7729CD: pop     esi
0x7729CE: retn
0x7729CF: mov     ds:0B427ACh, esi
0x7729D5: pop     esi
0x7729D6: retn
