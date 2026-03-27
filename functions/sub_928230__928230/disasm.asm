0x928230: push    esi
0x928231: mov     esi, ecx
0x928233: mov     ecx, ds:0BA7D98h
0x928239: mov     eax, [ecx]
0x92823B: push    29h ; ')'
0x92823D: push    18h
0x92823F: call    dword ptr [eax+10h]
0x928242: mov     word ptr [eax+4], 18h
0x928248: mov     word ptr [eax+6], 1
0x92824E: mov     dword ptr [eax], offset off_AA1948
0x928254: mov     dword ptr [eax+10h], 49742400h
0x92825B: mov     dword ptr [eax+14h], 0C9742400h
0x928262: xor     ecx, ecx
0x928264: mov     [eax+8], ecx
0x928267: mov     [eax+0Ch], ecx
0x92826A: mov     cx, [esi+4]
0x92826E: mov     [eax+4], cx
0x928272: mov     dx, [esi+6]
0x928276: mov     [eax+6], dx
0x92827A: mov     ecx, [esi+8]
0x92827D: mov     [eax+8], ecx
0x928280: mov     edx, [esi+0Ch]
0x928283: mov     [eax+0Ch], edx
0x928286: mov     ecx, [esi+10h]
0x928289: mov     [eax+10h], ecx
0x92828C: mov     edx, [esi+14h]
0x92828F: mov     [eax+14h], edx
0x928292: pop     esi
0x928293: retn
