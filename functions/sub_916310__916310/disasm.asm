0x916310: push    ebx
0x916311: mov     ebx, [esp+4+arg_0]
0x916315: push    esi
0x916316: push    edi
0x916317: mov     edi, ecx
0x916319: fld     dword ptr [edi+20h]
0x91631C: lea     esi, [ebx+8]
0x91631F: mov     ecx, esi
0x916321: fstp    dword ptr [ebx+4]
0x916324: call    sub_8C6BE0
0x916329: lea     eax, [edi+10h]
0x91632C: push    eax
0x91632D: lea     ecx, [ebx+20h]
0x916330: call    sub_47DCD0
0x916335: xor     ebx, ebx
0x916337: cmp     [edi+30h], ebx
0x91633A: jle     short loc_916375
0x91633C: push    ebp
0x91633D: lea     ecx, [ecx+0]
0x916340: mov     ecx, [edi+28h]
0x916343: mov     ebp, [esi+0Ch]
0x916346: cmp     ebp, [esi+8]
0x916349: lea     edx, [ecx+ebx*8]
0x91634C: mov     [esp+10h+arg_0], edx
0x916350: jb      short loc_91635F
0x916352: mov     eax, [esi+14h]
0x916355: add     eax, ebp
0x916357: push    eax
0x916358: mov     ecx, esi
0x91635A: call    sub_8C69C0
0x91635F: mov     ecx, [esp+10h+arg_0]
0x916363: push    ecx
0x916364: push    ebp
0x916365: mov     ecx, esi
0x916367: call    sub_8C68D0
0x91636C: add     ebx, 1
0x91636F: cmp     ebx, [edi+30h]
0x916372: jl      short loc_916340
0x916374: pop     ebp
0x916375: pop     edi
0x916376: pop     esi
0x916377: pop     ebx
0x916378: retn    4
