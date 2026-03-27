0x4971E0: push    10h; Size
0x4971E2: call    FormHeapAlloc
0x4971E7: xor     ecx, ecx
0x4971E9: add     esp, 4
0x4971EC: cmp     eax, ecx
0x4971EE: jz      short loc_4971FF
0x4971F0: mov     [eax+8], ecx
0x4971F3: mov     [eax+0Ch], ecx
0x4971F6: xor     edx, edx
0x4971F8: mov     [eax+8], ecx
0x4971FB: mov     [eax+0Ch], edx
0x4971FE: retn
0x4971FF: xor     eax, eax
0x497201: xor     edx, edx
0x497203: mov     [eax+8], ecx
0x497206: mov     [eax+0Ch], edx
0x497209: retn
