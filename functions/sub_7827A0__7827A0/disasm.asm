0x7827A0: push    esi
0x7827A1: push    edi
0x7827A2: xor     esi, esi
0x7827A4: xor     edi, edi
0x7827A6: cmp     ds:0B2B598h, esi
0x7827AC: jbe     short loc_782802
0x7827AE: mov     edi, edi
0x7827B0: push    20h ; ' '; Size
0x7827B2: call    FormHeapAlloc
0x7827B7: add     esp, 4
0x7827BA: cmp     eax, esi
0x7827BC: jz      short loc_7827D7
0x7827BE: mov     [eax], esi
0x7827C0: mov     [eax+4], esi
0x7827C3: mov     [eax+8], esi
0x7827C6: mov     [eax+0Ch], esi
0x7827C9: mov     [eax+14h], esi
0x7827CC: mov     [eax+10h], esi
0x7827CF: mov     [eax+18h], esi
0x7827D2: mov     [eax+1Ch], esi
0x7827D5: jmp     short loc_7827D9
0x7827D7: xor     eax, eax
0x7827D9: mov     ecx, ds:0B428D4h
0x7827DF: cmp     ecx, esi
0x7827E1: jz      short loc_7827EC
0x7827E3: mov     [ecx+1Ch], eax
0x7827E6: mov     ecx, ds:0B428D4h
0x7827EC: mov     [eax+18h], ecx
0x7827EF: mov     [eax+1Ch], esi
0x7827F2: add     edi, 1
0x7827F5: cmp     edi, ds:0B2B598h
0x7827FB: mov     ds:0B428D4h, eax
0x782800: jb      short loc_7827B0
0x782802: pop     edi
0x782803: pop     esi
0x782804: retn
