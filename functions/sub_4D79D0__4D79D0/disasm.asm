0x4D79D0: add     ecx, 44h ; 'D'
0x4D79D3: call    ExtraDataList__GetStartLocation
0x4D79D8: test    eax, eax
0x4D79DA: jz      short loc_4D79E8
0x4D79DC: mov     eax, [eax]
0x4D79DE: test    eax, eax
0x4D79E0: jz      short loc_4D79E8
0x4D79E2: cmp     byte ptr [eax+4], 30h ; '0'
0x4D79E6: jz      short locret_4D79EA
0x4D79E8: xor     eax, eax
0x4D79EA: retn
