0x435000: mov     eax, [ecx+2Ch]
0x435003: xor     edx, edx
0x435005: test    eax, eax
0x435007: jz      short loc_43500C
0x435009: lea     edx, [eax+10h]
0x43500C: mov     eax, [ecx]
0x43500E: push    edx
0x43500F: mov     edx, [eax+30h]
0x435012: call    edx
0x435014: retn
