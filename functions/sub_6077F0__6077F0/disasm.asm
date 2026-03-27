0x6077F0: test    ecx, ecx
0x6077F2: jz      short loc_60781D
0x6077F4: mov     ecx, [ecx+8]
0x6077F7: test    ecx, ecx
0x6077F9: jz      short loc_60781D
0x6077FB: mov     edx, [esp+arg_4]
0x6077FF: mov     eax, [ecx]
0x607801: mov     eax, [eax+14h]
0x607804: push    edx
0x607805: mov     edx, [esp+4+arg_0]
0x607809: push    edx
0x60780A: lea     edx, [esp+8+arg_4]
0x60780E: push    edx
0x60780F: call    eax
0x607811: xor     ecx, ecx
0x607813: cmp     [eax], cl
0x607815: setnz   cl
0x607818: mov     al, cl
0x60781A: retn    8
0x60781D: lea     eax, [esp+arg_4]
0x607821: xor     ecx, ecx
0x607823: mov     byte ptr [esp+arg_4], 0
0x607828: cmp     [eax], cl
0x60782A: setnz   cl
0x60782D: mov     al, cl
0x60782F: retn    8
