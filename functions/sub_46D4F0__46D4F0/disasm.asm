0x46D4F0: mov     eax, [ecx]
0x46D4F2: mov     edx, [eax+14h]
0x46D4F5: push    esi
0x46D4F6: call    edx
0x46D4F8: mov     esi, [esp+4+Str]
0x46D4FC: mov     edx, esi
0x46D4FE: mov     edi, edi
0x46D500: mov     cl, [eax]
0x46D502: mov     [edx], cl
0x46D504: add     eax, 1
0x46D507: add     edx, 1
0x46D50A: test    cl, cl
0x46D50C: jnz     short loc_46D500
0x46D50E: push    2Eh ; '.'; Ch
0x46D510: push    esi; Str
0x46D511: call    _strrchr
0x46D516: add     esp, 8
0x46D519: test    eax, eax
0x46D51B: pop     esi
0x46D51C: jz      short locret_46D538
0x46D51E: mov     ecx, ds:0A3C15Ch
0x46D524: mov     [eax], ecx
0x46D526: mov     edx, ds:0A3C160h
0x46D52C: mov     [eax+4], edx
0x46D52F: mov     cl, ds:0A3C164h
0x46D535: mov     [eax+8], cl
0x46D538: retn    4
