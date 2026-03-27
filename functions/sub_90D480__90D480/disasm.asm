0x90D480: push    esi
0x90D481: mov     esi, ecx
0x90D483: lea     ecx, [esi+24h]
0x90D486: call    sub_8B0E60
0x90D48B: mov     eax, [esi+10h]
0x90D48E: test    eax, eax
0x90D490: js      short loc_90D4B9
0x90D492: mov     ecx, ds:0BA9DE4h
0x90D498: mov     edx, large fs:2Ch
0x90D49F: and     eax, 3FFFFFFFh
0x90D4A4: push    14h
0x90D4A6: push    eax
0x90D4A7: mov     eax, [esi+8]
0x90D4AA: push    eax
0x90D4AB: mov     eax, [edx+ecx*4]
0x90D4AE: mov     ecx, [eax+19Ch]
0x90D4B4: call    sub_8A75D0
0x90D4B9: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x90D4BF: pop     esi
0x90D4C0: retn
