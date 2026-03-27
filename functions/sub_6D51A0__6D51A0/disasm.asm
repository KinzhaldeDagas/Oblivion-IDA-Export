0x6D51A0: mov     eax, [ecx+50h]
0x6D51A3: test    eax, eax
0x6D51A5: jz      short loc_6D51C8
0x6D51A7: mov     ecx, [eax+2Ch]
0x6D51AA: mov     edx, [esp+arg_0]
0x6D51AE: mov     [edx], ecx
0x6D51B0: mov     ecx, [eax+34h]
0x6D51B3: mov     edx, [esp+arg_4]
0x6D51B7: mov     [edx], ecx
0x6D51B9: mov     cl, [eax+4Bh]
0x6D51BC: mov     edx, [esp+arg_8]
0x6D51C0: mov     [edx], cl
0x6D51C2: mov     eax, [eax+30h]
0x6D51C5: retn    0Ch
0x6D51C8: mov     eax, [esp+arg_0]
0x6D51CC: mov     ecx, [esp+arg_4]
0x6D51D0: mov     edx, [esp+arg_8]
0x6D51D4: mov     dword ptr [eax], 0
0x6D51DA: mov     dword ptr [ecx], 0
0x6D51E0: mov     byte ptr [edx], 0
0x6D51E3: xor     eax, eax
0x6D51E5: retn    0Ch
