0x9283B0: push    esi
0x9283B1: mov     esi, ecx
0x9283B3: mov     ecx, ds:0BA7D98h
0x9283B9: mov     eax, [ecx]
0x9283BB: push    29h ; ')'
0x9283BD: push    1Ch
0x9283BF: call    dword ptr [eax+10h]
0x9283C2: mov     word ptr [eax+4], 1Ch
0x9283C8: mov     word ptr [eax+6], 1
0x9283CE: mov     dword ptr [eax], offset off_AA1958
0x9283D4: mov     dword ptr [eax+8], 49742400h
0x9283DB: mov     dword ptr [eax+0Ch], 3F4CCCCDh
0x9283E2: mov     dword ptr [eax+14h], 40000000h
0x9283E9: mov     ecx, 3F800000h
0x9283EE: mov     [eax+10h], ecx
0x9283F1: mov     [eax+18h], ecx
0x9283F4: mov     cx, [esi+4]
0x9283F8: mov     [eax+4], cx
0x9283FC: mov     dx, [esi+6]
0x928400: mov     [eax+6], dx
0x928404: mov     ecx, [esi+8]
0x928407: mov     [eax+8], ecx
0x92840A: mov     edx, [esi+0Ch]
0x92840D: mov     [eax+0Ch], edx
0x928410: mov     ecx, [esi+10h]
0x928413: mov     [eax+10h], ecx
0x928416: mov     edx, [esi+14h]
0x928419: mov     [eax+14h], edx
0x92841C: mov     ecx, [esi+18h]
0x92841F: mov     [eax+18h], ecx
0x928422: pop     esi
0x928423: retn
