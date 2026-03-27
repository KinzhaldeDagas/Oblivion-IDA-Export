0x8BB240: mov     ecx, ds:0BA7D98h
0x8BB246: mov     eax, [ecx]
0x8BB248: push    esi
0x8BB249: push    edi
0x8BB24A: push    17h
0x8BB24C: push    10h
0x8BB24E: call    dword ptr [eax+10h]
0x8BB251: mov     ecx, [esp+8+Filename]
0x8BB255: push    ecx; Filename
0x8BB256: mov     ecx, eax
0x8BB258: mov     word ptr [eax+4], 10h
0x8BB25E: call    sub_8BB2B0
0x8BB263: mov     ecx, ds:0BA7D98h
0x8BB269: mov     edx, [ecx]
0x8BB26B: push    17h
0x8BB26D: push    1Ch
0x8BB26F: mov     esi, eax
0x8BB271: call    dword ptr [edx+10h]
0x8BB274: push    1000h
0x8BB279: push    esi
0x8BB27A: mov     ecx, eax
0x8BB27C: mov     word ptr [eax+4], 1Ch
0x8BB282: call    sub_8F5F10
0x8BB287: cmp     word ptr [esi+4], 0
0x8BB28C: mov     edi, eax
0x8BB28E: jz      short loc_8BB2A3
0x8BB290: dec     word ptr [esi+6]
0x8BB294: cmp     word ptr [esi+6], 0
0x8BB299: jnz     short loc_8BB2A3
0x8BB29B: mov     eax, [esi]
0x8BB29D: push    1
0x8BB29F: mov     ecx, esi
0x8BB2A1: call    dword ptr [eax]
0x8BB2A3: mov     eax, edi
0x8BB2A5: pop     edi
0x8BB2A6: pop     esi
0x8BB2A7: retn    4
