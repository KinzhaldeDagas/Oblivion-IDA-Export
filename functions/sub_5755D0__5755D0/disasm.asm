0x5755D0: mov     edx, [esp+Str2]
0x5755D4: test    edx, edx
0x5755D6: jz      short loc_5755F4
0x5755D8: mov     eax, [ecx]
0x5755DA: test    eax, eax
0x5755DC: jz      short loc_5755F4
0x5755DE: push    edx; Str2
0x5755DF: push    eax; Str1
0x5755E0: call    __strcmp
0x5755E5: xor     ecx, ecx
0x5755E7: add     esp, 8
0x5755EA: test    eax, eax
0x5755EC: setz    cl
0x5755EF: mov     al, cl
0x5755F1: retn    4
0x5755F4: xor     eax, eax
0x5755F6: test    edx, edx
0x5755F8: setz    al
0x5755FB: xor     ecx, ecx
0x5755FD: lea     eax, [eax+eax-1]
0x575601: test    eax, eax
0x575603: setz    cl
0x575606: mov     al, cl
0x575608: retn    4
