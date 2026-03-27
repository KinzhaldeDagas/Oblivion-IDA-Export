0x91CE50: push    esi
0x91CE51: mov     esi, ecx
0x91CE53: mov     eax, [esi+24h]
0x91CE56: test    eax, eax
0x91CE58: mov     dword ptr [esi], offset off_A9D708
0x91CE5E: mov     dword ptr [esi+8], offset off_A9D6F0
0x91CE65: mov     dword ptr [esi+20h], offset off_A9D6E8
0x91CE6C: mov     dword ptr [esi+28h], offset off_A9D6D4
0x91CE73: mov     dword ptr [esi+2Ch], offset off_A9D6C8
0x91CE7A: jz      short loc_91CEA3
0x91CE7C: mov     ecx, [eax+60h]
0x91CE7F: push    edi
0x91CE80: xor     edi, edi
0x91CE82: test    ecx, ecx
0x91CE84: jle     short loc_91CEA2
0x91CE86: mov     eax, [esi+24h]
0x91CE89: mov     ecx, [eax+5Ch]
0x91CE8C: mov     edx, [ecx+edi*4]
0x91CE8F: push    edx
0x91CE90: mov     ecx, esi
0x91CE92: call    sub_91CC30
0x91CE97: mov     eax, [esi+24h]
0x91CE9A: mov     ecx, [eax+60h]
0x91CE9D: inc     edi
0x91CE9E: cmp     edi, ecx
0x91CEA0: jl      short loc_91CE86
0x91CEA2: pop     edi
0x91CEA3: mov     eax, [esi+38h]
0x91CEA6: test    eax, eax
0x91CEA8: js      short loc_91CEDE
0x91CEAA: mov     ecx, ds:0BA9DE4h
0x91CEB0: mov     edx, large fs:2Ch
0x91CEB7: mov     ecx, [edx+ecx*4]
0x91CEBA: mov     ecx, [ecx+19Ch]
0x91CEC0: test    ecx, ecx
0x91CEC2: jnz     short loc_91CECA
0x91CEC4: mov     ecx, ds:0BA7D9Ch
0x91CECA: mov     edx, [esi+30h]
0x91CECD: and     eax, 3FFFFFFFh
0x91CED2: push    14h
0x91CED4: shl     eax, 2
0x91CED7: push    eax
0x91CED8: push    edx
0x91CED9: call    sub_8A75D0
0x91CEDE: mov     dword ptr [esi+2Ch], offset off_A9D2B4
0x91CEE5: mov     dword ptr [esi+28h], offset ??_7hkPhantomListener@@6B@; const hkPhantomListener::`vftable'
0x91CEEC: mov     ecx, esi
0x91CEEE: pop     esi
0x91CEEF: jmp     sub_949180
