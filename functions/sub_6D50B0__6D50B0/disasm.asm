0x6D50B0: mov     eax, [ecx+50h]
0x6D50B3: test    eax, eax
0x6D50B5: jz      short loc_6D50D8
0x6D50B7: mov     ecx, [eax+8]
0x6D50BA: mov     edx, [esp+arg_0]
0x6D50BE: mov     [edx], ecx
0x6D50C0: mov     ecx, [eax+10h]
0x6D50C3: mov     edx, [esp+arg_4]
0x6D50C7: mov     [edx], ecx
0x6D50C9: mov     cl, [eax+48h]
0x6D50CC: mov     edx, [esp+arg_8]
0x6D50D0: mov     [edx], cl
0x6D50D2: mov     eax, [eax+0Ch]
0x6D50D5: retn    0Ch
0x6D50D8: mov     eax, [esp+arg_0]
0x6D50DC: mov     ecx, [esp+arg_4]
0x6D50E0: mov     edx, [esp+arg_8]
0x6D50E4: mov     dword ptr [eax], 0
0x6D50EA: mov     dword ptr [ecx], 0
0x6D50F0: mov     byte ptr [edx], 0
0x6D50F3: xor     eax, eax
0x6D50F5: retn    0Ch
