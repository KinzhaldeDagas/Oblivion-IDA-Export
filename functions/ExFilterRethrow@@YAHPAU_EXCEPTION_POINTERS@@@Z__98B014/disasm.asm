0x98B014: mov     eax, [eax]
0x98B016: cmp     dword ptr [eax], 0E06D7363h
0x98B01C: jnz     short loc_98B056
0x98B01E: cmp     dword ptr [eax+10h], 3
0x98B022: jnz     short loc_98B056
0x98B024: mov     ecx, [eax+14h]
0x98B027: cmp     ecx, 19930520h
0x98B02D: jz      short loc_98B03F
0x98B02F: cmp     ecx, 19930521h
0x98B035: jz      short loc_98B03F
0x98B037: cmp     ecx, 19930522h
0x98B03D: jnz     short loc_98B056
0x98B03F: cmp     dword ptr [eax+1Ch], 0
0x98B043: jnz     short loc_98B056
0x98B045: call    __getptd
0x98B04A: xor     ecx, ecx
0x98B04C: inc     ecx
0x98B04D: mov     [eax+20Ch], ecx
0x98B053: mov     eax, ecx
0x98B055: retn
0x98B056: xor     eax, eax
0x98B058: retn
