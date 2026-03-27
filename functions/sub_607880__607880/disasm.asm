0x607880: push    ecx
0x607881: test    ecx, ecx
0x607883: jz      short loc_6078A5
0x607885: mov     eax, [ecx+8]
0x607888: test    eax, eax
0x60788A: jz      short loc_6078A5
0x60788C: mov     al, [eax+91h]
0x607892: mov     [esp+4+var_1], al
0x607896: lea     eax, [esp+4+var_1]
0x60789A: xor     ecx, ecx
0x60789C: cmp     [eax], cl
0x60789E: setnz   cl
0x6078A1: mov     al, cl
0x6078A3: pop     ecx
0x6078A4: retn
0x6078A5: lea     eax, [esp+4+var_1]
0x6078A9: xor     ecx, ecx
0x6078AB: mov     [esp+4+var_1], 0
0x6078B0: cmp     [eax], cl
0x6078B2: setnz   cl
0x6078B5: mov     al, cl
0x6078B7: pop     ecx
0x6078B8: retn
