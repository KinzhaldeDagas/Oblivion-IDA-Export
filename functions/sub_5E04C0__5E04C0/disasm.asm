0x5E04C0: mov     eax, [ecx]
0x5E04C2: mov     edx, [eax+284h]
0x5E04C8: push    45h ; 'E'
0x5E04CA: call    edx
0x5E04CC: xor     ecx, ecx
0x5E04CE: test    eax, eax
0x5E04D0: setnle  cl
0x5E04D3: mov     al, cl
0x5E04D5: retn
