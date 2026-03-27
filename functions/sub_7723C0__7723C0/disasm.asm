0x7723C0: push    18h; Size
0x7723C2: call    FormHeapAlloc
0x7723C7: xor     ecx, ecx
0x7723C9: add     esp, 4
0x7723CC: cmp     eax, ecx
0x7723CE: jz      short loc_7723EC
0x7723D0: mov     edx, 8
0x7723D5: mov     [eax], ecx
0x7723D7: mov     [eax+4], ecx
0x7723DA: mov     [eax+8], ecx
0x7723DD: mov     [eax+0Ch], edx
0x7723E0: mov     [eax+10h], edx
0x7723E3: mov     [eax+14h], ecx
0x7723E6: mov     ds:0B4275Ch, eax
0x7723EB: retn
0x7723EC: mov     ds:0B4275Ch, ecx
0x7723F2: retn
