0x733200: mov     eax, [ecx+2Ch]
0x733203: push    esi
0x733204: mov     esi, [esp+4+arg_4]
0x733208: push    edi
0x733209: mov     edi, [esp+8+arg_0]
0x73320D: fld     dword ptr [eax+edi*4]
0x733210: lea     edx, [edi+esi]
0x733213: sar     edx, 1
0x733215: fld     dword ptr [eax+edx*4]
0x733218: fcompp
0x73321A: fnstsw  ax
0x73321C: test    ah, 41h
0x73321F: mov     eax, [ecx+2Ch]
0x733222: jnz     short loc_73325B
0x733224: fld     dword ptr [eax+edx*4]
0x733227: fld     dword ptr [eax+esi*4]
0x73322A: fcompp
0x73322C: fnstsw  ax
0x73322E: test    ah, 41h
0x733231: mov     eax, [ecx+2Ch]
0x733234: jz      short loc_733287
0x733236: fld     dword ptr [eax+edi*4]
0x733239: fld     dword ptr [eax+esi*4]
0x73323C: fcompp
0x73323E: fnstsw  ax
0x733240: test    ah, 41h
0x733243: jnz     short loc_733250
0x733245: mov     ecx, [ecx+2Ch]
0x733248: fld     dword ptr [ecx+esi*4]
0x73324B: pop     edi
0x73324C: pop     esi
0x73324D: retn    8
0x733250: mov     edx, [ecx+2Ch]
0x733253: fld     dword ptr [edx+edi*4]
0x733256: pop     edi
0x733257: pop     esi
0x733258: retn    8
0x73325B: fld     dword ptr [eax+edi*4]
0x73325E: fld     dword ptr [eax+esi*4]
0x733261: fcompp
0x733263: fnstsw  ax
0x733265: test    ah, 41h
0x733268: mov     eax, [ecx+2Ch]
0x73326B: jnz     short loc_733275
0x73326D: fld     dword ptr [eax+edi*4]
0x733270: pop     edi
0x733271: pop     esi
0x733272: retn    8
0x733275: fld     dword ptr [eax+edx*4]
0x733278: fld     dword ptr [eax+esi*4]
0x73327B: fcompp
0x73327D: fnstsw  ax
0x73327F: test    ah, 41h
0x733282: jz      short loc_733245
0x733284: mov     eax, [ecx+2Ch]
0x733287: fld     dword ptr [eax+edx*4]
0x73328A: pop     edi
0x73328B: pop     esi
0x73328C: retn    8
