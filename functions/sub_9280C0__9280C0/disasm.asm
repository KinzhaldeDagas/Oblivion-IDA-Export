0x9280C0: push    esi
0x9280C1: mov     esi, ecx
0x9280C3: mov     ecx, ds:0BA7D98h
0x9280C9: mov     eax, [ecx]
0x9280CB: push    29h ; ')'
0x9280CD: push    18h
0x9280CF: call    dword ptr [eax+10h]
0x9280D2: mov     word ptr [eax+4], 18h
0x9280D8: mov     word ptr [eax+6], 1
0x9280DE: mov     dword ptr [eax], offset off_AA1938
0x9280E4: mov     dword ptr [eax+0Ch], 3F800000h
0x9280EB: mov     dword ptr [eax+10h], 49742400h
0x9280F2: mov     dword ptr [eax+14h], 0C9742400h
0x9280F9: mov     dword ptr [eax+8], 3F4CCCCDh
0x928100: mov     cx, [esi+4]
0x928104: mov     [eax+4], cx
0x928108: mov     dx, [esi+6]
0x92810C: mov     [eax+6], dx
0x928110: mov     ecx, [esi+8]
0x928113: mov     [eax+8], ecx
0x928116: mov     edx, [esi+0Ch]
0x928119: mov     [eax+0Ch], edx
0x92811C: mov     ecx, [esi+10h]
0x92811F: mov     [eax+10h], ecx
0x928122: mov     edx, [esi+14h]
0x928125: mov     [eax+14h], edx
0x928128: pop     esi
0x928129: retn
